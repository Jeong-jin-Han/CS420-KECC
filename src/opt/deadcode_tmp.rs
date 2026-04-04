use core::ops::Deref;
use std::collections::{HashMap, HashSet};

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;

pub type Deadcode = FunctionPass<Repeat<DeadcodeInner>>;

#[derive(Default, Clone, Copy, Debug)]
pub struct DeadcodeInner {}

impl Optimize<FunctionDefinition> for DeadcodeInner {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        // 함수 전체를 다 돌아야 한다.
        /*
        declare
        use
        declare - use : unused -> removalbe reg

        declare
        <- allocation, block(phinodes, temp reg, jump arg)
        local, arg, temp


        allocation, phinodes, temp reg 셋 다 모두 임의로 register 할당해주어야 한다.
        allocation -> Local
        phinodes -> Arg
        temp reg -> Temp
        */

        /*
        phinode의 경우 단순히 block안에서만 사용여부를 판단할 수 없음
        reverse_cfg가 필요하다.
        */
        let cfg = make_cfg(code);
        let reverse_cfg = reverse_cfg(&cfg);
        debug_print!("reverse_cfg {:?}", reverse_cfg);
        let domtree = Domtree::new(code.bid_init, &cfg, &reverse_cfg);

        let mut declare_reg = HashSet::<RegisterId>::new();
        // (1) Local: from allocations
        for (aid, _) in code.allocations.iter().enumerate() {
            let _unused = declare_reg.insert(RegisterId::local(aid));
        }

        // (2) Arg: from phinodes and (3) Temp: from instructions
        for (bid, block) in &code.blocks {
            for (aid, _) in block.phinodes.iter().enumerate() {
                let _unused = declare_reg.insert(RegisterId::arg(*bid, aid));
            }
            for (iid, _) in block.instructions.iter().enumerate() {
                let _unused = declare_reg.insert(RegisterId::temp(*bid, iid));
            }
        }

        // debug_print!("code {:?}\n", code);
        // debug_print!("declare_reg {:#?}", declare_reg);
        // debug_print!("size of declare_reg {:?}", declare_reg.len());

        /*
        instruction -> temp reg
        exit -> jumpArg에서 사용함
        */
        let mut nop_reg = HashSet::<RegisterId>::new();
        let mut used_reg = HashSet::<RegisterId>::new();
        for (bid, block) in &code.blocks {
            // for (prev_bid, jumparg) in reverse_cfg.get(bid).unwrap() {
            //     // prev_bid -> jumparg.bid == bid
            //     // jumparg.args : Vec<Operand>
            // }

            for (iid, instr) in block.instructions.iter().enumerate() {
                match instr.deref() {
                    Instruction::BinOp {
                        op,
                        lhs,
                        rhs,
                        dtype,
                    } => {
                        // lhs.get_register()  // Option(RegisterId)
                        // rhs.get_register()  // Option(ReigsterId)
                        // declare_reg에 존재하면 used_reg에 추가
                        insert_register(lhs, &mut used_reg);
                        insert_register(rhs, &mut used_reg);
                    }
                    Instruction::UnaryOp { op, operand, dtype } => {
                        insert_register(operand, &mut used_reg);
                    }
                    Instruction::Store { ptr, value } => {
                        // store의 경우 지금 현재 RegisterId::temp(*bid, iid) 무조건 used로 들어감
                        insert_register(ptr, &mut used_reg);
                        insert_register(value, &mut used_reg);
                        let _unused = used_reg.insert(RegisterId::temp(*bid, iid));
                    }
                    Instruction::Load { ptr } => {
                        insert_register(ptr, &mut used_reg);
                    }
                    Instruction::Call {
                        callee,
                        args,
                        return_type,
                    } => {
                        insert_register(callee, &mut used_reg);
                        insert_registers(args, &mut used_reg);
                        let _unused = used_reg.insert(RegisterId::temp(*bid, iid));
                    }
                    Instruction::TypeCast {
                        value,
                        target_dtype,
                    } => {
                        insert_register(value, &mut used_reg);
                    }
                    Instruction::GetElementPtr { ptr, offset, dtype } => {
                        insert_register(ptr, &mut used_reg);
                        insert_register(offset, &mut used_reg);
                        let _unused = used_reg.insert(RegisterId::temp(*bid, iid));
                    }
                    Instruction::Nop => {
                        let nop_rid = RegisterId::temp(*bid, iid);
                        let _unused = nop_reg.insert(nop_rid);
                    }
                    _ => {}
                }
                match &block.exit {
                    BlockExit::ConditionalJump {
                        condition,
                        arg_then,
                        arg_else,
                    } => {
                        insert_register(condition, &mut used_reg);
                        insert_registers(&arg_then.args, &mut used_reg);
                        insert_registers(&arg_else.args, &mut used_reg);
                    }
                    BlockExit::Switch {
                        value,
                        default,
                        cases,
                    } => {
                        insert_register(value, &mut used_reg);
                        insert_registers(&default.args, &mut used_reg);
                        cases.iter().for_each(|(c, jump)| {
                            insert_registers(&jump.args, &mut used_reg);
                        })
                    }
                    BlockExit::Return { value } => {
                        insert_register(value, &mut used_reg);
                    }
                    BlockExit::Jump { arg } => {
                        insert_registers(&arg.args, &mut used_reg);
                    }
                    BlockExit::Unreachable => {}
                }
            }
        }

        let mut changed = false;
        /*
        nop을 사용하고 있는 operand를 지워주기
        */
        // debug_print!("nop_reg {:?}", nop_reg);
        if !nop_reg.is_empty() {
            changed |= code.walk(|op| {
                if let Operand::Register { rid, dtype } = op {
                    if nop_reg.contains(rid) {
                        // debug_print!("nop_reg rid {:?}", rid);
                        *op = Operand::Constant(Constant::unit());
                        return true;
                    }
                    return false;
                }
                false
            });
        }
        let mut used_reg = used_reg
            .difference(&nop_reg)
            .cloned()
            .collect::<HashSet<_>>();

        let mut unused_reg = declare_reg
            .difference(&used_reg)
            .cloned()
            .collect::<HashSet<_>>();

        debug_print!("unused insertion");
        for (bid, block) in &mut code.blocks {
            for (iid, instr) in block.instructions.iter().enumerate().rev() {
                let temp = RegisterId::temp(*bid, iid);

                let side_effect = matches!(
                    instr.deref(),
                    Instruction::Store { .. } | Instruction::Call { .. }
                );

                // "사용되었거나", "side-effect 있거나" → 유지
                if used_reg.contains(&temp) || side_effect {
                    // 사용된 값들 추가
                } else {
                    match instr.deref() {
                        Instruction::BinOp {
                            op,
                            lhs,
                            rhs,
                            dtype,
                        } => {
                            insert_register(lhs, &mut unused_reg);
                            insert_register(rhs, &mut unused_reg);
                        }
                        Instruction::UnaryOp { op, operand, dtype } => {
                            insert_register(operand, &mut unused_reg);
                        }
                        // Instruction::Store { ptr, value } => {
                        //     insert_register(ptr, &mut unused_reg);
                        //     insert_register(value, &mut unused_reg);
                        // }
                        Instruction::Load { ptr } => {
                            insert_register(ptr, &mut unused_reg);
                        }
                        // Instruction::Call {
                        //     callee,
                        //     args,
                        //     return_type,
                        // } => {
                        //     insert_register(callee, &mut unused_reg);
                        //     insert_registers(args, &mut unused_reg);
                        // }
                        Instruction::TypeCast {
                            value,
                            target_dtype,
                        } => {
                            insert_register(value, &mut unused_reg);
                        }
                        // Instruction::GetElementPtr { ptr, offset, dtype } => {
                        //     insert_register(ptr, &mut unused_reg);
                        //     insert_register(offset, &mut unused_reg);
                        // }
                        _ => {}
                    }
                }
            }
        }

        // debug_print!("declare_reg {:#?}\n\n", declare_reg);
        // debug_print!("used_reg {:#?}\n\n", used_reg);
        debug_print!("[opt] unused_reg {:#?}\n\n", unused_reg);

        // If all register used, bail out
        if unused_reg.is_empty() {
            return false;
        }
        let mut alloc_tracker = 0;

        let mut replaces = HashMap::<RegisterId, RegisterId>::new();
        // old_RID -> new_RID

        code.allocations = code
            .allocations
            .iter()
            .enumerate()
            .filter_map(|(aid, alloc)| {
                let reg = RegisterId::local(aid);
                if unused_reg.contains(&reg) {
                    alloc_tracker += 1;
                    changed = true;
                    None
                } else {
                    if alloc_tracker > 0 {
                        let new_reg = RegisterId::local(aid - alloc_tracker);
                        let _unused = replaces.insert(reg, new_reg);
                    }
                    Some(alloc.clone())
                }
            })
            .collect();

        /* bid, aid, init_len */
        let mut phinode_arg_places = HashSet::<(BlockId, usize, usize)>::new();

        for (bid, block) in &mut code.blocks {
            let mut arg_tracker = 0;
            let BlockId(i) = bid; // b0 인 경우에는 phinode 제거 안함
            if *i != 0 {
                let init_len = block.phinodes.len();
                block.phinodes = block
                    .phinodes
                    .iter()
                    .enumerate()
                    .filter_map(|(aid, phi)| {
                        let reg = RegisterId::arg(*bid, aid);
                        if unused_reg.contains(&reg) {
                            arg_tracker += 1;
                            changed = true;
                            /*
                            해당 reg와 관련된 JumpArg 수정해주기

                            reveres_cfg.get(bid).unwrap() -> (prev_bid, jumparg)
                            각각의 prev_bid에 들어가서 jumparg(bid, args) -> args 수정하고 오기
                            */

                            let _unused = phinode_arg_places.insert((*bid, aid, init_len));
                            None
                        } else {
                            if arg_tracker > 0 {
                                let new_reg = RegisterId::arg(*bid, aid - arg_tracker);
                                let _unused = replaces.insert(reg, new_reg);
                            }
                            Some(phi.clone())
                        }
                    })
                    .collect();
            }
        }

        debug_print!("removed phinode_arg_places {:?}", phinode_arg_places);
        // -> 어디서 사라지는 확인

        for (bid, aid, phi_len) in phinode_arg_places {
            // prev_bid
            for (prev_bid, _phinode_arg_places) in reverse_cfg.get(&bid).unwrap() {
                debug_print!("prev_bid {:?} aid {:?} bid {:?}", prev_bid, aid, bid);
                let prev_block = code.blocks.get_mut(prev_bid).unwrap();

                prev_block.exit.walk_jump_args(|arg| {
                    debug_print!("phi_len {:?} arg.args.len() {:?}", phi_len, arg.args.len());
                    if phi_len == arg.args.len() {
                        debug_print!("removed prev_bid {:?}, arg {:?}", prev_bid, arg);
                        let _unused = arg.args.remove(aid);
                    }
                });
            }
        }

        /*
        앞으로 해야 할 것
        nop operation 지우기 & unused reg 지우기, 그런다음에 RID 수정해주기
        한번 nop을 지우면 그 block 내에서 모든 operand를 수정해 주어야 함

        block 단위로 집중 관리해주기
        해당 bid에서 unused가 나온 경우 -> 관련 instruction 지우기, allocation 또는 phinode 지우기
        */

        for (bid, block) in &mut code.blocks {
            let mut temp_tracker = 0;
            block.instructions = block
                .instructions
                .iter()
                .enumerate()
                .filter_map(|(iid, instr)| {
                    let is_nop = matches!(instr.deref(), Instruction::Nop);
                    let is_unused = unused_reg.contains(&RegisterId::temp(*bid, iid));

                    // 둘 중 하나라도 해당되면 제거
                    if is_nop || is_unused {
                        temp_tracker += 1;
                        None
                    } else {
                        if temp_tracker > 0 {
                            let old_reg = RegisterId::temp(*bid, iid);
                            let new_reg = RegisterId::temp(*bid, iid - temp_tracker);
                            let _unused = replaces.insert(old_reg, new_reg);
                        }
                        Some(instr.clone())
                    }
                })
                .collect();
        }
        /*
        앞으로 해야 할 것:
        Local, Temp, Arg에 대해서 한 번 제거했으면 전반적으로 동일하게 수정해 주기
        Local은 local끼리 alloc_tracker 제거된 개수
        Temp는 Temp끼리 temp_tracker 제거된 개수
        Arg는 Arg끼리 arg_tracker 제거된 개수

        어떤 것을 지웠을 경우 -> 그 이후부터는 tracker 를 뺀 새로운 RID 할당
        operand <-> operand via walk
        */

        changed |= code.walk(|op| {
            if let Operand::Register { rid, dtype } = op {
                if let Some(new_rid) = replaces.get(rid) {
                    *rid = *new_rid;
                    return true;
                }
                return false;
            }
            false
        });

        // debug_print!("changed {:?}", changed);
        changed
        // true // 무한 루프??
        // todo!()
    }
}

fn insert_register(op: &Operand, used_reg: &mut HashSet<RegisterId>) {
    if let Some(reg) = op.get_register() {
        debug_print!("op: {:?}, reg.0: {:?}", op, *reg.0);
        let _unused = used_reg.insert(*reg.0);
    }
}

fn insert_registers(ops: &[Operand], used_reg: &mut HashSet<RegisterId>) {
    ops.iter().for_each(|reg| {
        insert_register(reg, used_reg);
    });
}
