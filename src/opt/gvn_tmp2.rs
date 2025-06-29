use core::ops::Deref;
use std::collections::{HashMap, HashSet};
use std::default;

use itertools::izip;
use lang_c::ast;

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;
use std::collections::BTreeMap;
pub type Gvn = FunctionPass<GvnInner>;

#[derive(Default, Clone, Copy, Debug)]
pub struct GvnInner {}

macro_rules! some_or {
    ($option:expr, $fallback:expr) => {
        match $option {
            Some(val) => val.clone(),
            None => $fallback,
        }
    };
}

// SSA 레지스터나 계산된 값
type ClassNum = u64;

struct GvnContext {
    rt: HashMap<Operand, ClassNum>, // SSA 레지스터 → classnum
    et: HashMap<ExprV, ClassNum>,   // 표현식 → classnum
    class_gen: ClassNumGen,
    lt_map: HashMap<BlockId, HashMap<ClassNum, OperandVar>>, // leader table
    ct_map: HashMap<BlockId, HashSet<ClassNum>>,
}

#[derive(Debug, Clone, PartialEq)]
enum OperandVar {
    Operand(Operand),
    Phi((ClassNum, BlockId)),
}

impl OperandVar {
    pub(crate) fn lookup(
        &self,
        dtype: &Dtype,
        phinode_indexes: &HashMap<(ClassNum, BlockId), usize>,
    ) -> Operand {
        /*
        OperandVar -> Operand로 알맞게 반환해주는 것이 역할
        */
        println!("=== OperandVar lookup ===");
        println!("phinode_indexes keys: {:?}", phinode_indexes.keys());
        match self {
            OperandVar::Operand(o) => o.clone(),
            OperandVar::Phi(var) => {
                println!("LOOKUP PHI {:?} → {:?}", var, phinode_indexes.get(var));
                if let Some(index) = phinode_indexes.get(var) {
                    /* ClassNum, blockId -> usize */
                    /* usize가 가지고 있는 의미?? */
                    Operand::register(RegisterId::arg(var.1, *index), dtype.clone())
                } else {
                    Operand::constant(Constant::undef(dtype.clone()))
                }
            }
        }
        // todo!()
    }
}

impl Optimize<FunctionDefinition> for GvnInner {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        /*
        지금 해야할 것: phinode가 insert 되는 부분에서 classnum 동일하게 넣어주기
        */

        /*
        RT : register -> num
        ET : Expr<num> -> num
        LT : (Line, Num) -> Operand
        */
        /*
        RT : operand -> ClassNum
        ET : ExprV -> ClassNum
        LT : (bid) -> (ClassNum -> OperandVar)
        CT : (bid) -> (allocated ClassNum)
        */
        let mut ctx = GvnContext {
            rt: HashMap::new(),
            et: HashMap::new(),
            class_gen: ClassNumGen::new(),
            lt_map: HashMap::new(),
            ct_map: HashMap::new(),
        };

        let mut changed = false;

        // Draws CFG, reverse CFG and dominator trree.
        let cfg = make_cfg(code);
        let reverse_cfg = reverse_cfg(&cfg);
        let domtree = Domtree::new(code.bid_init, &cfg, &reverse_cfg);

        // println!("code {:?}", code);
        // println!("cfg {:?}", cfg);
        // println!("reverse_cfg {:?}", reverse_cfg);
        println!(
            "domtree.reverse_post_order {:?}",
            domtree.reverse_post_order
        );

        for bid in &domtree.reverse_post_order {
            // 1. LT@B_init = LT@idom(B)_final
            let inherited_lt = domtree
                .idom(*bid)
                .and_then(|idom| ctx.lt_map.get(&idom))
                .cloned()
                .unwrap_or_default();

            // let current_lt = ctx.lt_map.get_mut(bid).unwrap();
            let current_lt = ctx.lt_map.entry(*bid).or_default();
            let mut current_lt = std::mem::take(current_lt);
            current_lt.extend(inherited_lt);

            /* phinode에 대한 classnum을 미리 설정해주기 */
            let prevs = reverse_cfg.get(bid).cloned().unwrap_or(vec![]);
            /* JumpArg로부터 어떤 값이 들어갈 것인지를 미리 알 수 있어? */
            /* 그런데 여러개의 phinode가 존재한다면??
            phi_a(cfg1_a, cfg2_a)
            phi_b(cfg1_b, cfg2_b)

            aid in 0, ..., phinode.len() - 1

            prevs -> JumpArg의 aid순으로 접근해서
            각 aid phinode에 대해서 연관지워주기

            phinodes aid: {Operand set} <=

            */
            let block = code.blocks.get(bid).unwrap();
            let phinode_len = block.phinodes.len();
            let mut phi_inputs: HashMap<usize, Vec<(ClassNum, Dtype)>> = HashMap::new(); // aid → [operands from preds]
            // revers_cfg 로도 충분할 듯?? 지금 현재 기준으로 해서

            // let rid = RegisterId::arg(*bid, aid);
            // let operand = Operand::register(rid, dtype);
            // if let Some(prev_bid) = reverse_cfg.get(bid) {
            //     for (bid, jump) in prev_bid {
            //         println!("bid {:?}, jump {:?}", bid, jump);
            //         let arg_ops = jump.args.clone();
            //         let arg_cns = arg_ops.iter().map(|arg_op| ctx.rt.get(arg_op)).collect::<Vec<_>>();

            //     }
            // }

            // if let Some(prev_bid) = reverse_cfg.get(bid) {
            //     for (pred_bid, jump) in prev_bid {
            //         for (aid, arg_op) in jump.args.iter().enumerate() {
            //             // 여기서 RT로 변환된 대표 operand를 사용하고 싶다면:
            //             let repr_op = ctx.rt.get(arg_op).unwrap();
            //             let dtype = arg_op.dtype();
            //             phi_inputs.entry(aid).or_default().push((repr_op.clone(), dtype));
            //         }
            //     }
            //     /* phi_inpust has the samme classNum => then insert the same number for this phinode */
            //     /*

            //     for aid in range(0, phi_len()) {
            //         if phi_inputs.get(aid) has the same values
            //             let phi_rid = RegisterId::arg(bid, aid)
            //             let operand = Operand::register(rid, dtype)

            //             ctx.rt.insert(classnum, operand)
            //     }
            //     */
            // }

            /*
            Goal: jumparg에서 bid와 arg operand가 나와있으니 할당되지 않았으면 바로바로 추가해주기
            */

            let block = code.blocks.get(bid).unwrap();
            let phinode_len = block.phinodes.len();

            let mut mem2reg_cns: HashSet<ClassNum> = HashSet::new();
            // let mut all_same_const = true;

            for aid in 0..phinode_len {
                let phi_rid = RegisterId::arg(*bid, aid);
                let dtype = block.phinodes[aid].clone().into_inner(); // phinode의 타입 정보 필요
                let mut arg_operand = Operand::register(phi_rid, dtype.clone());
                // 각 pred 블록에서 해당 aid 위치의 값을 수집
                let mut cn_list = Vec::new();
                let mut new_op = true;
                if let Some(prev_list) = reverse_cfg.get(bid) {
                    for (_pred_bid, jump) in prev_list {
                        if let Some(arg_op) = jump.args.get(aid) {
                            // // class_table: HashMap<Operand, ClassNum>
                            // if arg_op.dtype().is_const() && !ctx.rt.contains_key(arg_op) {
                            //     let cn = ctx.class_gen.fresh(); // 새 classnum 할당
                            //     let _unused = ctx.rt.insert(arg_op.clone(), cn);
                            // }
                            if let Some(classnum) = ctx.rt.get(arg_op) {
                                cn_list.push(*classnum);
                                let _unused = mem2reg_cns.insert(*classnum);
                                arg_operand = arg_op.clone();
                                new_op = false;
                            } else {
                                /* classnum을 할당해주는 logic
                                jump.bid에 해당하는 LT table도 채워주고
                                RT table도 채워주고
                                */
                                let classnum = *ctx
                                    .rt
                                    .entry(arg_op.clone())
                                    .or_insert_with(|| ctx.class_gen.fresh());
                                let jump_lt = ctx.lt_map.entry(jump.bid).or_default();
                                let mut jump_lt = std::mem::take(jump_lt);
                                let new_operand = OperandVar::Operand(arg_op.clone());
                                let _unused = jump_lt.insert(classnum, new_operand);
                                let _unused = ctx.lt_map.insert(jump.bid, jump_lt);
                                cn_list.push(classnum);
                                let _unused = mem2reg_cns.insert(classnum);
                                arg_operand = arg_op.clone();
                                // println!("Missing classnum for operand {:?}", arg_op); // maybe
                            }
                        }
                    }
                }

                // 모든 classnum이 동일하다면
                if let Some(first_cn) = cn_list.first() {
                    if cn_list.iter().all(|cn| cn == first_cn) && cn_list.len() > 1 {
                        let phi_op = Operand::register(phi_rid, dtype.clone());
                        let _unused = ctx.rt.insert(phi_op.clone(), *first_cn);
                        let mut phi_op_var = OperandVar::Operand(arg_operand.clone());
                        if new_op {
                            phi_op_var = OperandVar::Operand(phi_op.clone());
                        }
                        let _unused = current_lt.insert(*first_cn, phi_op_var);
                        println!(
                            "Assigning PHI result {:?} to classnum {:?} (from args)",
                            phi_op, first_cn
                        );
                        // println!("cn list {:?} all_same_const {:?}", cn_list, all_same_const);
                    } else {
                        mem2reg_cns = HashSet::new();
                    }
                } else {
                    mem2reg_cns = HashSet::new();
                }
            }

            let mut current_ct: HashSet<ClassNum> = HashSet::new();
            println!("bid {:?} | current LT {:?}", bid, current_lt);
            // 2. 각 명령어 처리
            for (instr_idx, instr) in code.blocks[bid].instructions.iter().enumerate() {
                println!();
                match instr.deref() {
                    Instruction::BinOp {
                        op,
                        lhs,
                        rhs,
                        dtype,
                    } => {
                        let lhs = operand_to_class(lhs, &mut ctx);
                        let rhs = operand_to_class(rhs, &mut ctx);

                        let expr = ExprV::BinOp {
                            op: op.clone(),
                            lhs,
                            rhs,
                            dtype: dtype.clone(),
                        };

                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::GetElementPtr { ptr, offset, dtype } => {
                        let ptr = operand_to_class(ptr, &mut ctx);
                        let offset = operand_to_class(offset, &mut ctx);

                        let expr = ExprV::GetElementPtr {
                            ptr,
                            offset,
                            dtype: dtype.clone(),
                        };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::Load { ptr } => {
                        let dtype = ptr.dtype();
                        let ptr = operand_to_class(ptr, &mut ctx);
                        let expr = ExprV::Load { ptr };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register { rid, dtype };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::Call {
                        callee,
                        args,
                        return_type,
                    } => {
                        let flag_ptr = args
                            .iter()
                            .any(|arg| arg.dtype().get_pointer_inner().is_some());
                        println!("flag_ptr {}", flag_ptr);

                        let callee = operand_to_class(callee, &mut ctx);
                        let args = args
                            .iter()
                            .map(|arg| operand_to_class_call(arg, &mut ctx))
                            .collect::<Vec<_>>();

                        let expr = ExprV::Call {
                            callee,
                            args,
                            return_type: return_type.clone(),
                        };

                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: return_type.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        if flag_ptr {
                            // 무조건 LT에 등록!!
                            let _unused = current_lt.insert(classnum, operandvar);
                        } else {
                            let _unused = current_lt.entry(classnum).or_insert_with(|| {
                                println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                                operandvar
                            });
                        }
                    }
                    Instruction::TypeCast {
                        value,
                        target_dtype,
                    } => {
                        let value = operand_to_class(value, &mut ctx);
                        let expr = ExprV::TypeCast {
                            value,
                            target_dtype: target_dtype.clone(),
                        };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: target_dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::UnaryOp { op, operand, dtype } => {
                        let operand = operand_to_class(operand, &mut ctx);
                        let expr = ExprV::UnaryOp {
                            op: op.clone(),
                            operand,
                            dtype: dtype.clone(),
                        };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);
                        let _unused = current_ct.insert(classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    // Instruction::Store { ptr, value } => {
                    //     let ptr = operand_to_class(ptr, &mut ctx);
                    //     let value = operand_to_class(value, &mut ctx);
                    // }
                    _ => {} // 다른 명령어는 추후 확장
                }
                println!();
            }
            // match &block.exit {
            //     BlockExit::ConditionalJump {
            //         condition,
            //         arg_then,
            //         arg_else,
            //     } => {
            //         let _unused = operand_to_class_jump(condition, &mut ctx);
            //         arg_then.args.iter().for_each(|op| {
            //             let _unused = operand_to_class_jump(op, &mut ctx);
            //         });
            //         arg_else.args.iter().for_each(|op| {
            //             let _unused = operand_to_class_jump(op, &mut ctx);
            //         });
            //     }
            //     BlockExit::Switch {
            //         value,
            //         default,
            //         cases,
            //     } => {
            //         let _unused = operand_to_class_jump(value, &mut ctx);
            //         default.args.iter().for_each(|op| {
            //             let _unused = operand_to_class_jump(op, &mut ctx);
            //         });
            //         cases
            //             .iter()
            //             .flat_map(|(_, jmp)| jmp.args.iter())
            //             .for_each(|op| {
            //                 let _unused = operand_to_class_jump(op, &mut ctx);
            //             });
            //     }
            //     BlockExit::Jump { arg } => arg.args.iter().for_each(|op| {
            //         let operandvar = OperandVar::Operand(op.clone());
            //         let cn = operand_to_class_jump(op, &mut ctx);
            //         let jmpbid = ctx.lt_map.entry(arg.bid).or_default();
            //         let _unused = jmpbid.insert(cn, operandvar);
            //     }),
            //     BlockExit::Return { value } => {
            //         let _unused = operand_to_class_jump(value, &mut ctx);
            //     }
            //     _ => {}
            // }

            current_ct.retain(|cn| !mem2reg_cns.contains(cn));
            let _unused = ctx.lt_map.insert(*bid, current_lt);
            let _unused = ctx.ct_map.insert(*bid, current_ct.clone());
            /*

            아래 코드는 mem2reg에서 사용한 join 구현
            내가 하고 싶은 것은 ctx.rt 를 이용, DF 이용

            DF의 교집합에서 해당 classnum, bid <- 중복되어서 들어오는 clas
            */

            /*
            phinodes를 어떻게 넣어주어야 할 것인가?
            Leader table management만 작성하면 됨
            */

            // make phinode_indexes based on classnumber existing in the pred LT

            /*
            mem2reg의 경우 한번에 phinode를 삽입하지만
            GVN의 경우 phinode를 한 block에 대해서만 삽입해주기

            dominance relation을 사용하기 때문에 이러한 접근이 가능함

            predecessor block의 LT 만 보기!!!
            그러면 predecessor block에 대해서 현재 block이 가지고 classnum을 모두 도일하게 가지고 있느지 체크하기
            만약에 가지고 있다면,

            pred <- phinode argument
            current <- phinode declaration, phinode 를 LT 채우기
            */

            let mut phinode_indexes = HashMap::<(ClassNum, BlockId), usize>::new();

            println!(
                "bid {:?} | candidate_classnums {:?}",
                bid,
                current_ct.clone()
            );
            println!("bid {:?} | preds_len {:?}", bid, prevs.len()); // preds.len() > 1 인 경우만 phinode 삽입

            let mut operands_from_preds = HashMap::new();
            // 이게 왜 필요할까? 왜냐하면 phinode를 삽입하게 되면 이값을 argument에 넣어주어야 해서
            for classnum in ctx.ct_map.get(bid).unwrap() {
                // classnum 에 대해서 이전 block이 가지고 있는지 ct로 확인하기, ct에서 있으면
                // Check if all predecessor blocks of bid have LT[classnum]
                let mut all_have = true;

                let operand = find_all_keys_by_value_in_block(&ctx.rt, *bid, classnum);
                let dtype = operand[0].dtype();

                for (prev_bid, _) in prevs.clone() {
                    let tmp = ctx.ct_map.get(&prev_bid);
                    if let Some(ct) = ctx.ct_map.get(&prev_bid) {
                        if ct.contains(classnum) {
                            let lt = ctx.lt_map.get(&prev_bid).unwrap();
                            let value = lt.get(classnum).unwrap();
                            let _unused = operands_from_preds.insert(prev_bid, value.clone());
                            continue;
                        } else {
                            all_have = false;
                            break;
                        }
                    }
                    all_have = false;
                    break;
                }

                if all_have && prevs.len() > 1 {
                    println!(
                        "all_have: True | classnum {} | operand_from_preds {:?}",
                        classnum, operands_from_preds
                    );
                    /*
                    지금 보면 aid 가 없는 경우 name을 적지 않음 -> classnum 에 대한 phinode이기 때문에 name 을 적을 필요 X

                    block.phinodes.len(); <- 이 부분은 그 해당 block에 가서 넣어주어야 하기 때문에 지금 이 시점에서는 phinode를 insert하고 그 위치를 기록하고
                    추후에 다시 block 들에 대해서 traversal해서 해당 부분 채우기, 그런데 문제가 있어 이렇게 되면
                    아니다 이 loop 내에서 찾고서 하는게 더 낳을 듯, perv block 정보가 필요한데 그부분을 여기서 traversal 하게 하면 매 순간마다 돌려야 하는데
                    */
                    let block = code.blocks.get_mut(bid).unwrap();
                    let index = block.phinodes.len();
                    block.phinodes.push(Named::new(None, dtype.clone()));
                    let _unused = phinode_indexes.insert((*classnum, *bid), index);

                    /* prevs block에 대해서 argument 작성해주기 */
                    /* LT table 값을 사용하기  */
                    for (prev_bid, _) in &prevs {
                        let block = code.blocks.get_mut(prev_bid).unwrap();
                        let prev_block_lt = ctx.lt_map.get(prev_bid).unwrap();
                        let operandvar_prev = prev_block_lt.get(classnum).unwrap();
                        let operand_prev = operandvar_prev.lookup(&dtype, &phinode_indexes);
                        block.exit.walk_jump_args(|arg| {
                            if &arg.bid == bid {
                                assert_eq!(arg.args.len(), index);
                                arg.args.push(operand_prev.clone());
                            }
                        });
                    }

                    /* new phinode 삽입하기 */
                    let current_lt = ctx.lt_map.entry(*bid).or_default();
                    let mut current_lt = std::mem::take(current_lt);
                    let new_operand = OperandVar::Phi((*classnum, *bid));
                    let _unused = current_lt.insert(*classnum, new_operand);
                    let _unused = ctx.lt_map.insert(*bid, current_lt);
                }
            }
            let old_operands = find_operands_in_block(&ctx.rt, *bid);
            let replaces = make_replaces_from_lt(&ctx, *bid, old_operands, &phinode_indexes);

            changed |= code.walk(|op| {
                if let Some(replacement) = replaces.get(op) {
                    // println!("REPLACES | op : {:?} -> replacement : {:?}", op.clone(), replacement.clone());
                    *op = replacement.clone();
                    return true;
                }
                false
            });

            println!("========== bid | {} ==========", bid);
            println!("REPLACES | {:?}", replaces);
            println!("RT | {:?}", ctx.rt);
            println!("ET | {:?}", ctx.et);
            println!("LT | {:?}", ctx.lt_map);
            println!("===============================");
        }

        // changed를 규합해야 하는 로직
        changed
    }
}

fn operand_to_class_call(operand: &Operand, ctx: &mut GvnContext) -> ClassNumOrConst {
    match operand {
        Operand::Register { dtype, .. } => {
            println!(
                "dtype ptr: {:?}, dtype cosnt: {:?}",
                dtype.get_pointer_inner(),
                dtype.is_const()
            );
            if dtype.get_pointer_inner().is_some() {
                // 포인터는 alias 분석 없으므로 보수적으로 매번 fresh
                ClassNumOrConst::ClassNum(ctx.class_gen.fresh())
            } else {
                let classnum = ctx
                    .rt
                    .entry(operand.clone())
                    .or_insert_with(|| ctx.class_gen.fresh());
                ClassNumOrConst::ClassNum(*classnum)
            }
        }
        Operand::Constant(c) => ClassNumOrConst::Const(c.clone()),
    }
}

fn operand_to_class(operand: &Operand, ctx: &mut GvnContext) -> ClassNumOrConst {
    match operand {
        Operand::Register { dtype, .. } => {
            let classnum = ctx
                .rt
                .entry(operand.clone())
                .or_insert_with(|| ctx.class_gen.fresh());
            ClassNumOrConst::ClassNum(*classnum)
        }
        Operand::Constant(c) => ClassNumOrConst::Const(c.clone()),
    }
}

fn operand_to_class_jump(operand: &Operand, ctx: &mut GvnContext) -> ClassNum {
    let classnum = ctx
        .rt
        .entry(operand.clone())
        .or_insert_with(|| ctx.class_gen.fresh());
    *classnum
}

fn find_operands_in_block(rt: &HashMap<Operand, ClassNum>, bid: BlockId) -> Vec<Operand> {
    rt.iter()
        .filter_map(|(op, _cn)| match op {
            Operand::Register {
                rid: RegisterId::Temp { bid: obid, .. },
                ..
            } if *obid == bid => Some(op.clone()),

            Operand::Register {
                rid: RegisterId::Arg { bid: obid, .. },
                ..
            } if *obid == bid => Some(op.clone()),

            _ => None,
        })
        .collect()
}

fn make_replaces_from_lt(
    ctx: &GvnContext,
    bid: BlockId,
    old_operands: Vec<Operand>,
    phinode_indexes: &HashMap<(ClassNum, BlockId), usize>,
) -> HashMap<Operand, Operand> {
    // let rt = &ctx.rt;
    let lt_map = ctx.lt_map.get(&bid).unwrap();
    let mut replaces = HashMap::new();

    for old_op in old_operands {
        let cn = ctx.rt.get(&old_op).unwrap();
        if let Some(new_opvar) = lt_map.get(cn) {
            let new_op = new_opvar.lookup(
                &old_op.dtype(), // 실제 dtype 필요시 LT 저장 구조 확장 가능
                phinode_indexes,
            );
            let _unused = replaces.insert(old_op.clone(), new_op.clone());
        }
    }

    replaces
}

fn find_all_keys_by_value_in_block(
    rt: &HashMap<Operand, ClassNum>,
    bid: BlockId,
    classnum: &ClassNum,
) -> Vec<Operand> {
    find_operands_in_block(rt, bid)
        .into_iter()
        .filter(|op| rt.get(op) == Some(classnum))
        .collect()
}

#[derive(Clone, PartialEq, Eq, Hash, Debug)]
enum ClassNumOrConst {
    ClassNum(u64),
    Const(Constant),
}

#[derive(Eq, Hash, PartialEq, Clone, Debug)]
enum ExprV {
    BinOp {
        op: ast::BinaryOperator,
        lhs: ClassNumOrConst,
        rhs: ClassNumOrConst,
        dtype: Dtype,
    },
    GetElementPtr {
        ptr: ClassNumOrConst,
        offset: ClassNumOrConst,
        dtype: Dtype,
    },
    Load {
        ptr: ClassNumOrConst,
    }, // UnaryOp 등 추가 가능
    Call {
        callee: ClassNumOrConst,
        args: Vec<ClassNumOrConst>,
        return_type: Dtype,
    },
    TypeCast {
        value: ClassNumOrConst,
        target_dtype: Dtype,
    },
    UnaryOp {
        op: ast::UnaryOperator,
        operand: ClassNumOrConst,
        dtype: Dtype,
    },
}
