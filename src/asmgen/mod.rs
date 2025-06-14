use std::collections::{HashMap, VecDeque};
use std::ops::Deref;

use lang_c::ast;

use crate::ir::HasDtype;
use crate::{Translate, asm, ir};

#[derive(Debug)]
pub struct Asmgen {
    reg_allocator: RegAllocator,
    stack_allocator: StackAllocator,
    var_locations: HashMap<ir::Operand, VarLocation>,
    next_stack_offset: i32,
    function_name_list: HashMap<String, (usize, ir::FunctionSignature)>,
    variable_name_list: HashMap<String, ir::Dtype>,
}

#[derive(Debug)]
struct RegAllocator {
    available_regs: VecDeque<asm::Register>,
    reg_usage: HashMap<asm::Register, ir::Operand>,
}

#[derive(Debug)]
struct StackAllocator {
    stack_map: HashMap<ir::Operand, i32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
enum VarLocation {
    Reg(asm::Register),
    Stack(i32),
}

impl Default for Asmgen {
    fn default() -> Self {
        Self {
            reg_allocator: RegAllocator::new(),
            stack_allocator: StackAllocator::new(),
            var_locations: HashMap::new(),
            function_name_list: HashMap::new(),
            variable_name_list: HashMap::new(),
            next_stack_offset: 0,
        }
    }
}

impl RegAllocator {
    fn new() -> Self {
        Self {
            available_regs: VecDeque::from(vec![
                asm::Register::T0,
                asm::Register::T1,
                asm::Register::T2,
            ]),
            reg_usage: HashMap::new(),
        }
    }

    fn allocate(
        &mut self,
        operand: &ir::Operand,
        stack_allocator: &mut StackAllocator,
        next_stack_offset: &mut i32,
        var_locations: &mut HashMap<ir::Operand, VarLocation>,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) -> asm::Register {
        if let Some((&reg, _)) = self.reg_usage.iter().find(|(_, op)| *op == operand) {
            return reg;
        }

        if let Some(reg) = self.available_regs.pop_front() {
            let _unused = self.reg_usage.insert(reg, operand.clone());
            reg
        } else {
            // Spill 발생
            self.spill(
                stack_allocator,
                next_stack_offset,
                var_locations,
                asm_instrs,
            );

            // spill 후에는 무조건 reg 하나 생김 → pop_front 가능
            let reg = self
                .available_regs
                .pop_front()
                .expect("Expected reg after spill");
            let _unused = self.reg_usage.insert(reg, operand.clone());
            reg
        }
    }

    fn free(&mut self, reg: asm::Register) {
        let _unused = self.reg_usage.remove(&reg);
        self.available_regs.push_back(reg);
    }

    fn spill(
        &mut self,
        stack_allocator: &mut StackAllocator,
        next_stack_offset: &mut i32,
        var_locations: &mut HashMap<ir::Operand, VarLocation>,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) {
        // 어떤 reg 를 spill 할지 고름 (여기서는 그냥 첫 번째 선택)
        if let Some((&reg, operand)) = self.reg_usage.iter().next() {
            println!("Spilling {:?} => {:?}", reg, operand);

            // stack 위치 할당
            let offset = stack_allocator.allocate_stack_slot(operand, next_stack_offset);

            // store reg → stack
            asm_instrs.push(asm::Instruction::SType {
                instr: asm::SType::store(operand.dtype()),
                rs1: asm::Register::Sp,
                rs2: reg,
                imm: asm::Immediate::Value(offset as u64),
            });

            // var_locations 업데이트 → operand 는 stack 에 위치한다고 기록
            let _unused = var_locations.insert(operand.clone(), VarLocation::Stack(offset));

            // reg free
            let _unused = self.reg_usage.remove(&reg);
            self.available_regs.push_back(reg);
        } else {
            panic!("No register available to spill");
        }
    }
}

impl StackAllocator {
    fn new() -> Self {
        Self {
            stack_map: HashMap::new(),
        }
    }

    fn allocate_stack_slot(&mut self, operand: &ir::Operand, next_offset: &mut i32) -> i32 {
        if let Some(&offset) = self.stack_map.get(operand) {
            offset
        } else {
            *next_offset -= 4; // 4-byte stack slot
            let _unused = self.stack_map.insert(operand.clone(), *next_offset);
            *next_offset
        }
    }
}

impl Asmgen {
    fn translate_operand(
        &mut self,
        operand: &ir::Operand,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) -> asm::Register {
        let location = self.var_locations.get(operand).cloned();

        if let Some(VarLocation::Reg(reg)) = location {
            return reg;
        }

        if let Some(VarLocation::Stack(offset)) = location {
            let reg = self.reg_allocator.allocate(
                operand,
                &mut self.stack_allocator,
                &mut self.next_stack_offset,
                &mut self.var_locations,
                asm_instrs,
            );
            asm_instrs.push(asm::Instruction::IType {
                instr: asm::IType::load(operand.dtype()),
                rd: reg,
                rs1: asm::Register::Sp,
                imm: asm::Immediate::Value(offset as u64),
            });
            let _unused = self
                .var_locations
                .insert(operand.clone(), VarLocation::Reg(reg));
            return reg;
        }

        // None case
        let reg = self.reg_allocator.allocate(
            operand,
            &mut self.stack_allocator,
            &mut self.next_stack_offset,
            &mut self.var_locations,
            asm_instrs,
        );
        let _unused = self
            .var_locations
            .insert(operand.clone(), VarLocation::Reg(reg));
        reg
    }

    fn translate_function(&mut self, name: &str, func: &ir::FunctionDefinition) -> asm::Function {
        println!("translate_function | allocation: {:?}", func.allocations); // allocation 은 local value에 대한 것이고
        // argument의 경우 allocation이 아닌 phinode에 존재함

        self.next_stack_offset = 0;
        let mut asm_blocks = vec![];
        let mut total_stack_offset: i32 = 0; // epilogue용 추후 사용

        let call_info = has_call_and_return_types(func); // 🔍 call 존재 여부
        let function_has_call = !call_info.is_empty();

        for (iid, (bid, block)) in func.blocks.iter().enumerate() {
            println!(
                "translate_function | bid {}, phinodes {:?}",
                bid, block.phinodes
            );

            let mut body_instrs: Vec<asm::Instruction> = vec![];

            // 1️⃣ Prologue → bid_init 에만 적용
            // if bid.0 == func.bid_init.0 {
            //     // (1) addi sp, sp, 0 (placeholder)
            //     body_instrs.push(asm::Instruction::IType {
            //         instr: asm::IType::Addi(asm::DataSize::Double),
            //         rd: asm::Register::Sp,
            //         rs1: asm::Register::Sp,
            //         imm: asm::Immediate::Value(0), // placeholder
            //     });

            //     // (2) sd ra, -8(sp)
            //     if function_has_call {
            //         self.next_stack_offset -= 8;
            //         body_instrs.push(asm::Instruction::SType {
            //             instr: asm::SType::Store(asm::DataSize::Double),
            //             rs1: asm::Register::Sp,
            //             rs2: asm::Register::Ra,
            //             imm: asm::Immediate::Value(self.next_stack_offset as u64),
            //         });
            //     }

            //     /*
            //     지금 내가 하고 싶은 것은
            //     phinodes에 해당하는 reg들을 모두 t0 reg 이용해서 stack에 저장해주기
            //     stack에 저장할 때 해당 ir의 rid와 stack 맵핑을 이용해서
            //     추후 ir -> asm 변환에 고려해주기
            //     그리고 마지막으로
            //     instruction마다 t0, t1, t2 이용해서 stack에 저장된 값에 접근해주기

            //     로직은 아래 caller에서의 call ir instruction에서 stack에 저장한 것을 이제는 callee에서 저장해주느 꼴로
            //     크게 다를 것은 없을 듯
            //                     // argument stack 에 다 저장 후 → call
            //                     for (i, arg) in args.iter().enumerate() {
            //                         println!("translate function | Call | arg operand {}", arg);
            //                         let arg_reg = asm::Register::T0;

            //                         if let Some(c) = arg.get_constant() {
            //                             // Constant → li t0, imm
            //                             body_instrs.push(asm::Instruction::Pseudo(
            //                                 asm::Pseudo::Li {
            //                                     rd: arg_reg,
            //                                     imm: c.get_int().unwrap().0 as u64,
            //                                 },
            //                             ));
            //                         } else {
            //                             // Register → translate_operand + mv t0, reg + free
            //                             let tmp_reg = self.translate_operand(arg, &mut body_instrs);

            //                             body_instrs.push(asm::Instruction::Pseudo(
            //                                 asm::Pseudo::Mv {
            //                                     rd: arg_reg,
            //                                     rs: tmp_reg,
            //                                 },
            //                             ));

            //                             self.reg_allocator.free(tmp_reg);
            //                         }
            //     */
            //     let mut current_offset = 0;

            //     for (i, named) in block.phinodes.iter().enumerate() {
            //         let dtype = named.deref().clone();
            //         let size = get_dtype_size(&dtype);

            //         current_offset += size;

            //         // offset은 sp - current_offset
            //         let fixed_offset = -current_offset;

            //         let reg_id = ir::RegisterId::arg(func.bid_init, i);
            //         let phi_operand = ir::Operand::register(reg_id, dtype.clone());

            //         let src_reg = asm::Register::T0;

            //         body_instrs.push(asm::Instruction::SType {
            //             instr: asm::SType::Store(asm::DataSize::from_dtype(&dtype)),
            //             rs1: asm::Register::Sp,
            //             rs2: src_reg,
            //             imm: asm::Immediate::Value(fixed_offset as u64), // u64지만 음수 offset로 저장됨
            //         });

            //         let _unused = self
            //             .var_locations
            //             .insert(phi_operand, VarLocation::Stack(fixed_offset));
            //     }
            // }

            if bid.0 == func.bid_init.0 {
                // (1) addi sp, sp, 0 ← placeholder
                body_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::Sp,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(0), // placeholder
                });

                // (2) sw s0, -8(sp) ← 항상 프레임 포인터 백업
                self.next_stack_offset -= 8;
                body_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::Store(asm::DataSize::Double),
                    rs1: asm::Register::Sp,
                    rs2: asm::Register::S0,
                    imm: asm::Immediate::Value(self.next_stack_offset as u64),
                });

                if function_has_call {
                    self.next_stack_offset -= 8;
                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::Double),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::Ra,
                        imm: asm::Immediate::Value(self.next_stack_offset as u64),
                    });
                }

                // (3) addi s0, sp, -stack_size
                body_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S0,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.next_stack_offset as u64), // 임시로 넣지만 실제로 맞음
                });

                // (4) phinodes 처리 (callee에 대한 것)
                for (i, named) in block.phinodes.iter().enumerate() {
                    let dtype = named.deref().clone();
                    let reg_id = ir::RegisterId::arg(func.bid_init, i);
                    let phi_operand = ir::Operand::register(reg_id, dtype.clone());

                    // caller의 stack에서 t0로 로드: lw t0, -offset(s0)
                    let caller_offset = (-(i as i32) * get_dtype_size(&dtype)); // 예: -4, -8 등

                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size: asm::DataSize::from_dtype(&dtype),
                            is_signed: true,
                        },
                        rd: asm::Register::T0,
                        rs1: asm::Register::S1,
                        imm: asm::Immediate::Value(caller_offset as u64),
                    });
                    // callee 자신의 stack에 저장: sw t0, offset(sp)
                    self.next_stack_offset -= get_dtype_size(&dtype);
                    let callee_offset = self.next_stack_offset;

                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::from_dtype(&dtype)),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(callee_offset as u64),
                    });

                    let _unused = self
                        .var_locations
                        .insert(phi_operand, VarLocation::Stack(callee_offset));
                }
            }

            // 2️⃣ Block instructions 처리
            for (iid, (bid, block)) in func.blocks.iter().enumerate() {
                for instr in &block.instructions {
                    println!(
                        "translate_function | name {} | instr {} | self.next_stack_offset {}",
                        name, instr, self.next_stack_offset
                    );
                    match instr.deref() {
                        ir::Instruction::BinOp {
                            op,
                            lhs,
                            rhs,
                            dtype,
                        } => {
                            let rd = self.reg_allocator.allocate(
                                &ir::Operand::register(
                                    ir::RegisterId::temp(*bid, iid), // ⭐ 여기서 iid 사용으로 고치면 spill 문제도 같이 해결
                                    dtype.clone(),
                                ),
                                &mut self.stack_allocator,
                                &mut self.next_stack_offset,
                                &mut self.var_locations,
                                &mut body_instrs,
                            );
                            let rs1 = self.translate_operand(lhs, &mut body_instrs);
                            let rs2 = self.translate_operand(rhs, &mut body_instrs);

                            if let Some(rtype) = map_binop_to_rtype(op) {
                                body_instrs.push(asm::Instruction::RType {
                                    instr: rtype,
                                    rd,
                                    rs1,
                                    rs2: Some(rs2),
                                });
                            } else {
                                unimplemented!("BinOp {:?} not implemented yet", op);
                            }
                        }

                        ir::Instruction::Load { ptr } => {
                            let dtype = ptr.dtype().get_pointer_inner().unwrap().clone();
                            let rd = self.reg_allocator.allocate(
                                &ir::Operand::register(
                                    ir::RegisterId::temp(*bid, iid), // ⭐ 여기서 iid 사용으로 고치면 spill 문제도 같이 해결
                                    dtype.clone(),
                                ),
                                &mut self.stack_allocator,
                                &mut self.next_stack_offset,
                                &mut self.var_locations,
                                &mut body_instrs,
                            );
                            let rs1 = self.translate_operand(ptr, &mut body_instrs);

                            body_instrs.push(asm::Instruction::IType {
                                instr: asm::IType::load(ptr.dtype()),
                                rd,
                                rs1,
                                imm: asm::Immediate::Value(0),
                            });
                        }

                        ir::Instruction::Store { ptr, value } => {
                            let rs1 = self.translate_operand(ptr, &mut body_instrs);
                            let rs2 = self.translate_operand(value, &mut body_instrs);

                            body_instrs.push(asm::Instruction::SType {
                                instr: asm::SType::store(value.dtype()),
                                rs1,
                                rs2,
                                imm: asm::Immediate::Value(0),
                            });
                        }
                        ir::Instruction::Call {
                            callee,
                            args,
                            return_type,
                        } => {
                            if let ir::Instruction::Call {
                                callee:
                                    ir::Operand::Constant(ir::Constant::GlobalVariable {
                                        name: call_name,
                                        dtype: _,
                                    }),
                                args,
                                return_type: _,
                            } = instr.deref()
                            {
                                // argument stack 에 다 저장 후 → call
                                for (i, arg) in args.iter().enumerate() {
                                    println!("translate function | Call | arg operand {}", arg);
                                    let arg_reg = asm::Register::T0;

                                    if let Some(c) = arg.get_constant() {
                                        // Constant → li t0, imm
                                        body_instrs.push(asm::Instruction::Pseudo(
                                            asm::Pseudo::Li {
                                                rd: arg_reg,
                                                imm: c.get_int().unwrap().0 as u64,
                                            },
                                        ));
                                    } else {
                                        // Register → translate_operand + mv t0, reg + free
                                        let tmp_reg = self.translate_operand(arg, &mut body_instrs);

                                        body_instrs.push(asm::Instruction::Pseudo(
                                            asm::Pseudo::Mv {
                                                rd: arg_reg,
                                                rs: tmp_reg,
                                            },
                                        ));

                                        self.reg_allocator.free(tmp_reg);
                                    }

                                    // sw t0, offset(sp)
                                    // 여기서 dummy_operand 를 써서 slot 을 따로 만들면 좋음
                                    let dummy_operand = ir::Operand::constant(ir::Constant::int(
                                        i as u128,
                                        ir::Dtype::int(32),
                                    ));
                                    let offset = self.stack_allocator.allocate_stack_slot(
                                        &dummy_operand,
                                        &mut self.next_stack_offset,
                                    );

                                    let body_instr = asm::Instruction::SType {
                                        instr: asm::SType::store(arg.dtype()),
                                        rs1: asm::Register::Sp,
                                        rs2: arg_reg,
                                        imm: asm::Immediate::Value(offset as u64),
                                    };

                                    if i == 0 {
                                        body_instrs.push(asm::Instruction::IType {
                                            instr: asm::IType::Addi(asm::DataSize::Double),
                                            rd: asm::Register::S1,
                                            rs1: asm::Register::Sp,
                                            imm: asm::Immediate::Value(
                                                self.next_stack_offset as u64,
                                            ), // 임시로 넣지만 실제로 맞음
                                        });
                                    }
                                    println!("translate_function | body_instr {:?}", body_instr);
                                    body_instrs.push(body_instr);
                                }

                                // call
                                body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                                    offset: asm::Label(call_name.clone()),
                                }));

                                // call 결과는 a0 에 들어온다고 가정 (ref style 따라감)
                                // 결과를 t0 에 옮기고 stack 에 저장
                                body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                                    rd: asm::Register::A0,
                                    rs: asm::Register::T0,
                                }));

                                // // 결과 stack 에 저장
                                // let dummy_ret_operand = ir::Operand::constant(ir::Constant::int(
                                //     9999,
                                //     ir::Dtype::int(32),
                                // ));
                                // let ret_offset = self.stack_allocator.allocate_stack_slot(
                                //     &dummy_ret_operand,
                                //     &mut self.next_stack_offset,
                                // );

                                // body_instrs.push(asm::Instruction::SType {
                                //     instr: asm::SType::store(ir::Dtype::int(32)), // int 32 가 대부분임
                                //     rs1: asm::Register::Sp,
                                //     rs2: asm::Register::T0,
                                //     imm: asm::Immediate::Value(ret_offset as u64),
                                // });
                            } else {
                                unimplemented!("Indirect call not supported");
                            }
                        }
                        _ => {}
                    }
                }
            }

            // 3️⃣ Block exit 처리
            match &block.exit {
                ir::BlockExit::Jump { arg } => {
                    body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::J {
                        offset: asm::Label::new(name, arg.bid),
                    }));
                }
                ir::BlockExit::ConditionalJump {
                    condition,
                    arg_then,
                    arg_else,
                } => {
                    let cond_reg = self.translate_operand(condition, &mut body_instrs);

                    body_instrs.push(asm::Instruction::BType {
                        instr: asm::BType::Beq,
                        rs1: cond_reg,
                        rs2: asm::Register::Zero,
                        imm: asm::Label::new(name, arg_else.bid),
                    });

                    body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::J {
                        offset: asm::Label::new(name, arg_then.bid),
                    }));
                }
                ir::BlockExit::Return { value } => {
                    if let Some(c) = value.get_constant() {
                        // Constant → li t0
                        body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                            rd: asm::Register::T0,
                            imm: c.get_int().unwrap().0 as u64,
                        }));
                    } else {
                        // Register → translate_operand + mv t0, reg
                        // let ret_reg = self.translate_operand(value, &mut body_instrs);
                        // body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                        //     rd: asm::Register::T0,
                        //     rs: ret_reg,
                        // }));
                    }

                    // 4️⃣ Epilogue → Return 시점에 항상 넣어줌

                    if function_has_call {
                        // ld ra, -16(sp)
                        body_instrs.push(asm::Instruction::IType {
                            instr: asm::IType::Load {
                                data_size: asm::DataSize::Double,
                                is_signed: true,
                            },
                            rd: asm::Register::Ra,
                            rs1: asm::Register::Sp,
                            imm: asm::Immediate::Value((-16i64) as u64),
                        });
                    }

                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size: asm::DataSize::Double,
                            is_signed: true,
                        },
                        rd: asm::Register::S0,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value((-8i64) as u64),
                    });

                    // addi sp, sp, MN
                    let total_offset = (self.next_stack_offset) as u64;
                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Addi(asm::DataSize::Double),
                        rd: asm::Register::Sp,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value(total_offset),
                    });

                    // ret
                    body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Ret));
                }
                ir::BlockExit::Unreachable => {
                    // No-op
                }
                _ => unimplemented!("BlockExit type not yet handled"),
            }

            // 5️⃣ Block label 설정
            let mut label = asm::Label(String::new());
            if bid.0 == func.bid_init.0 {
                label = asm::Label(name.to_string());
            } else {
                label = asm::Label::new(name, *bid);
            }

            let block_label = Some(label.clone());
            println!("Label {:?}", label.clone());

            println!("translate_function | body_instrs {:?}", body_instrs);

            // Block 저장
            asm_blocks.push(asm::Block {
                label: block_label,
                instructions: body_instrs,
            });
        }

        // 6️⃣ 마지막에 bid_init block의 sp placeholder patch (필수)

        // if let Some(block_init) = asm_blocks.first_mut() {
        //     println!(
        //         "translate_function | block_init.instructions {:?}",
        //         block_init.instructions
        //     );
        //     if let Some(asm::Instruction::IType {
        //         instr: asm::IType::Addi(asm::DataSize::Double),
        //         rd,
        //         rs1,
        //         imm,
        //     }) = block_init.instructions.first_mut()
        //     {
        //         *imm = asm::Immediate::Value((-self.next_stack_offset) as u64);
        //         println!(
        //             "Patched initial sp offset to {}",
        //             (-self.next_stack_offset) as u64
        //         );
        //     }
        // }
        if let Some(block_init) = asm_blocks.first_mut() {
            if let Some(asm::Instruction::IType {
                instr: asm::IType::Addi(asm::DataSize::Double),
                rd,
                rs1,
                imm,
            }) = block_init.instructions.first_mut()
            {
                *imm = asm::Immediate::Value((-self.next_stack_offset) as u64);
                println!(
                    "Patched initial sp offset to {}",
                    (-self.next_stack_offset) as u64
                );
            }
            for instr in block_init.instructions.iter_mut() {
                match instr {
                    asm::Instruction::IType {
                        instr: asm::IType::Addi(asm::DataSize::Double),
                        rd: asm::Register::S0,
                        rs1: asm::Register::Sp,
                        imm,
                    } => {
                        // Prologue용 s0 설정 patch
                        *imm = asm::Immediate::Value(self.next_stack_offset as u64);
                    }
                    _ => {
                        println!();
                    }
                }
            }
        }

        asm::Function::new(asm_blocks)
    }
}

impl Translate<ir::TranslationUnit> for Asmgen {
    // type Target = asm::Asm;
    type Target = asm::Asm;
    type Error = ();

    fn translate(&mut self, source: &ir::TranslationUnit) -> Result<Self::Target, Self::Error> {
        let mut functions = Vec::new();
        let mut variables = Vec::new();
        for (idx, (name, decl)) in source.decls.iter().enumerate() {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition,
                } => {
                    let _unused = self
                        .function_name_list
                        .insert(name.clone(), (idx, signature.clone())); // 
                }
                ir::Declaration::Variable { dtype, initializer } => {
                    let _unused = self.variable_name_list.insert(name.clone(), dtype.clone()); // 
                }
                _ => {}
            }
        }

        let _unused = source.decls.iter().all(|(name, decl)| {
            if let ir::Declaration::Function {
                signature,
                definition: Some(defn),
            } = decl
            {}
            true
        });

        for (name, decl) in &source.decls {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition: Some(defn),
                } => {
                    let func = self.translate_function(name, defn);

                    let header = vec![
                        asm::Directive::Globl(asm::Label(name.clone())),
                        asm::Directive::Section(asm::SectionType::Text),
                        asm::Directive::Type(asm::Label(name.clone()), asm::SymbolType::Function),
                    ];

                    functions.push(asm::Section::new(header, func));
                }

                ir::Declaration::Variable { dtype, initializer } => {
                    // 나중에 전역 변수 처리 로직 추가 가능
                    // variables.push(...);
                }

                _ => {} // 함수 정의가 없는 선언 (prototype) 무시
            }
        }

        let asm_unit = asm::TranslationUnit {
            functions,
            variables,
        };

        Ok(asm::Asm { unit: asm_unit })
    }
}

fn map_binop_to_rtype(op: &ast::BinaryOperator) -> Option<asm::RType> {
    match op {
        ast::BinaryOperator::Plus => Some(asm::RType::Add(asm::DataSize::Byte)),
        ast::BinaryOperator::Minus => Some(asm::RType::Sub(asm::DataSize::Byte)),
        ast::BinaryOperator::BitwiseXor => Some(asm::RType::Xor),
        ast::BinaryOperator::BitwiseOr => Some(asm::RType::Or),
        ast::BinaryOperator::BitwiseAnd => Some(asm::RType::And),
        _ => None,
    }
}

impl ir::Operand {
    pub fn get_global_variable_name(&self) -> Option<String> {
        if let ir::Operand::Constant(ir::Constant::GlobalVariable { name, .. }) = self {
            Some(name.clone())
        } else {
            None
        }
    }
}

fn has_call_and_return_types(func: &ir::FunctionDefinition) -> Vec<(ir::BlockId, ir::Dtype)> {
    let mut result = vec![];
    for (bid, block) in &func.blocks {
        for instr in &block.instructions {
            if let ir::Instruction::Call { return_type, .. } = instr.deref() {
                result.push((*bid, return_type.clone()));
            }
        }
    }
    result
}

impl asm::DataSize {
    pub fn from_dtype(dtype: &ir::Dtype) -> Self {
        match dtype {
            ir::Dtype::Int { width, .. } => match width {
                8 => asm::DataSize::Byte,
                16 => asm::DataSize::Half,
                32 => asm::DataSize::Word,
                64 => asm::DataSize::Double,
                _ => panic!("Unsupported int width: {}", width),
            },
            // ir::Dtype::Float => asm::DataSize::SinglePrecision,
            // ir::Dtype::Double => asm::DataSize::DoublePrecision,
            _ => panic!("Unsupported dtype for DataSize conversion: {:?}", dtype),
        }
    }
}

fn get_dtype_size(dtype: &ir::Dtype) -> i32 {
    match dtype {
        ir::Dtype::Int { width, .. } => (width / 8) as i32,
        // ir::Dtype::Float => 4,
        // ir::Dtype::Double => 8,
        _ => panic!("Unsupported argument type: {:?}", dtype),
    }
}
