use core::alloc;
use std::collections::{HashMap, VecDeque};
use std::hash::Hash;
use std::ops::Deref;
use std::panic::AssertUnwindSafe;

use lang_c::ast::{self, Integer};

use crate::ir::HasDtype;
use crate::{Translate, asm, ir};

#[derive(Debug)]
pub struct Asmgen {
    stack_allocator: StackAllocator,
    var_locations: HashMap<ir::Operand, VarLocation>,
    next_stack_offset: i32,
    function_name_list: HashMap<String, (usize, ir::FunctionSignature)>,
    variable_name_list: HashMap<String, ir::Dtype>,
    ra_stack_offset: i32,
    s0_satck_offset: i32,
    s1_stack_offset: i32,
}

#[derive(Debug)]
struct StackAllocator {
    stack_map: HashMap<ir::Operand, i32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
enum VarLocation {
    Stack(i32),
}

impl Default for Asmgen {
    fn default() -> Self {
        Self {
            stack_allocator: StackAllocator::new(),
            var_locations: HashMap::new(),
            next_stack_offset: 0,
            function_name_list: HashMap::new(),
            variable_name_list: HashMap::new(),
            ra_stack_offset: 0,
            s0_satck_offset: 0,
            s1_stack_offset: 0,
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
            let offset = get_dtype_size(&operand.dtype());
            // *next_offset -= offset; // 4-byte stack slot
            *next_offset += offset; // 4-byte stack slot

            let _unused = self.stack_map.insert(operand.clone(), *next_offset);
            *next_offset
        }
    }

    fn spill_operand_to_stack(
        &mut self,
        operand: &ir::Operand,
        dtype: &ir::Dtype,
        next_stack_offset: &mut i32,
        var_locations: &mut HashMap<ir::Operand, VarLocation>,
    ) -> i32 {
        let offset = self.allocate_stack_slot(operand, next_stack_offset);
        let _ = self.stack_map.insert(operand.clone(), offset);
        let _ = var_locations.insert(operand.clone(), VarLocation::Stack(offset));
        offset
    }
}

impl Asmgen {
    fn pad_stack_offset(&mut self, alignment: i32) {
        let rem = self.next_stack_offset % alignment;
        println!(
            "next_stack_offset {} alignment {} rem {}",
            self.next_stack_offset, alignment, rem
        );
        if rem != 0 {
            self.next_stack_offset -= rem;
        }
    }

    fn translate_operand_for_instr(
        &mut self,
        operand: &ir::Operand,
        reg: asm::Register,
        dtype: &ir::Dtype,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) {
        // let offset = self
        //     .stack_allocator
        //     .allocate_stack_slot(operand, &mut self.next_stack_offset);
        match operand {
            ir::Operand::Register { rid, dtype } => {
                let offset = self
                    .stack_allocator
                    .allocate_stack_slot(operand, &mut self.next_stack_offset);

                // ✅ 반드시 두 map 모두 업데이트
                let _ = self
                    .stack_allocator
                    .stack_map
                    .insert(operand.clone(), offset);
                let _ = self
                    .var_locations
                    .insert(operand.clone(), VarLocation::Stack(offset));

                self.pad_stack_offset(8);

                asm_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::load(dtype.clone()),
                    rd: reg,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(offset as u64),
                });
            }
            ir::Operand::Constant(c) => {
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: c.get_int().unwrap().0 as u64,
                }));
            }
        }
    }

    fn translate_binop_instruction_style(
        &mut self,
        dst_rid: ir::RegisterId,
        lhs: &ir::Operand,
        rhs: &ir::Operand,
        dtype: &ir::Dtype,
        op: &ast::BinaryOperator,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) {
        // t1 ← lhs, t2 ← rhs
        self.translate_operand_for_instr(lhs, asm::Register::T1, dtype, asm_instrs);
        self.translate_operand_for_instr(rhs, asm::Register::T2, dtype, asm_instrs);

        // t0 ← t1 op t2
        if let Some(rtype) = map_binop_to_rtype(op, dtype.clone(), dtype.is_int_signed()) {
            asm_instrs.push(asm::Instruction::RType {
                instr: rtype,
                rd: asm::Register::T0,
                rs1: asm::Register::T1,
                rs2: Some(asm::Register::T2),
            });
        }

        if *op == ast::BinaryOperator::Equals {
            // xor t0,t1,t2   ; 두 피연산자 같으면 t0=0
            asm_instrs.push(asm::Instruction::RType {
                instr: asm::RType::Xor,
                rd: asm::Register::T0,
                rs1: asm::Register::T1,
                rs2: Some(asm::Register::T2),
            });
            // seqz t0,t0      ; t0=1  (equal) / 0 (not equal)   ← pseudo-instr
            asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                rd: asm::Register::T0,
                rs: asm::Register::T0,
            }));
        }
        // t0 → dst
        let dst_op = ir::Operand::register(dst_rid, dtype.clone());
        let offset = self
            .stack_allocator
            .allocate_stack_slot(&dst_op, &mut self.next_stack_offset);
        asm_instrs.push(asm::Instruction::SType {
            instr: asm::SType::store(dtype.clone()),
            rs1: asm::Register::Sp,
            rs2: asm::Register::T0,
            imm: asm::Immediate::Value(offset as u64),
        });
        let _ = self
            .stack_allocator
            .stack_map
            .insert(dst_op.clone(), offset);
        let _unused = self
            .var_locations
            .insert(dst_op, VarLocation::Stack(offset));
        // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
        self.pad_stack_offset(8);
    }

    fn translate_operand(
        &mut self,
        operand: &ir::Operand,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) -> asm::Register {
        println!("translate_operand");
        println!("[DEBUG] stack_map = {{");
        for (operand, offset) in &self.stack_allocator.stack_map {
            println!("  {:?} => {}", operand, offset);
        }
        println!("}}");

        println!("[DEBUG] var_locations = {{");
        for (operand, loc) in &self.var_locations {
            println!("  {:?} => {:?}", operand, loc);
        }
        println!("}}");

        let reg = asm::Register::T0;

        println!("translate_opernad | operand {:?}", operand);
        if let Some(VarLocation::Stack(offset)) = self.var_locations.get(operand).cloned() {
            // stack에서 t0로 load
            asm_instrs.push(asm::Instruction::IType {
                instr: asm::IType::load(operand.dtype()),
                rd: reg,
                rs1: asm::Register::Sp,
                imm: asm::Immediate::Value(offset as u64),
            });
        } else if let ir::Operand::Constant(c) = operand {
            // 상수인 경우 li로 로드
            if c.is_undef() {
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: 0,
                }));
            } else if let ir::Operand::Constant(ir::Constant::GlobalVariable { name, dtype }) =
                operand
            {
                // 글로벌 변수의 주소를 t0에 로드 (la t0, var_name)
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::La {
                    rd: reg,
                    symbol: asm::Label(name.clone()),
                }));
            } else {
                println!("translate_operand | c {}", c);
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: c.get_int().unwrap().0 as u64,
                }));
            }
        } else {
            panic!(
                "translate_operand: unknown operand or unmapped variable: {:?}",
                operand
            );
        }

        reg
    }

    fn translate_operand_reg(
        &mut self,
        operand: &ir::Operand,
        asm_instrs: &mut Vec<asm::Instruction>,
        reg: asm::Register,
    ) -> asm::Register {
        println!("translate_operand");
        println!("[DEBUG] stack_map = {{");
        for (operand, offset) in &self.stack_allocator.stack_map {
            println!("  {:?} => {}", operand, offset);
        }
        println!("}}");

        println!("[DEBUG] var_locations = {{");
        for (operand, loc) in &self.var_locations {
            println!("  {:?} => {:?}", operand, loc);
        }
        println!("}}");

        println!("translate_opernad | operand {:?}", operand);
        if let Some(VarLocation::Stack(offset)) = self.var_locations.get(operand).cloned() {
            // stack에서 t0로 load
            asm_instrs.push(asm::Instruction::IType {
                instr: asm::IType::load(operand.dtype()),
                rd: reg,
                rs1: asm::Register::Sp,
                imm: asm::Immediate::Value(offset as u64),
            });
        } else if let ir::Operand::Constant(c) = operand {
            // 상수인 경우 li로 로드
            if c.is_undef() {
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: 0,
                }));
            } else if let ir::Operand::Constant(ir::Constant::GlobalVariable { name, dtype }) =
                operand
            {
                // 글로벌 변수의 주소를 t0에 로드 (la t0, var_name)
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::La {
                    rd: reg,
                    symbol: asm::Label(name.clone()),
                }));
            } else {
                println!("translate_operand | c {}", c);
                asm_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: c.get_int().unwrap().0 as u64,
                }));
            }
        } else {
            panic!(
                "translate_operand: unknown operand or unmapped variable: {:?}",
                operand
            );
        }

        reg
    }

    fn translate_function(&mut self, name: &str, func: &ir::FunctionDefinition) -> asm::Function {
        println!("translate_function | allocation: {:?}", func.allocations); // allocation 은 local value에 대한 것이고
        // argument의 경우 allocation이 아닌 phinode에 존재함

        self.ra_stack_offset = 0;
        self.s0_satck_offset = 0;
        self.s1_stack_offset = 0;

        self.next_stack_offset = 0;
        self.var_locations.clear();
        self.stack_allocator.stack_map.clear();
        let mut asm_blocks = vec![];
        let mut total_stack_offset: i32 = 0; // epilogue용 추후 사용

        let call_info = has_call_and_return_types(func); // 🔍 call 존재 여부
        let function_has_call = !call_info.is_empty();

        // allocation stack 자리 차지하는 공간만 만들어 놓음
        // 어느 자리를 차지하는지에 대해서는 명시를 안함. 이 값은 s0를 기반으로 하면 됨
        // for (i, dtype) in func.allocations.iter().enumerate() {
        //     let rid = ir::RegisterId::local(i);
        //     let ptr_dtype = ir::Dtype::pointer(dtype.deref().clone());
        //     let operand = ir::Operand::register(rid, ptr_dtype);
        //     let offset = self
        //         .stack_allocator
        //         .allocate_stack_slot(&operand, &mut self.next_stack_offset);
        //     let _ = self
        //         .stack_allocator
        //         .stack_map
        //         .insert(operand.clone(), offset);
        //     let _ = self
        //         .var_locations
        //         .insert(operand, VarLocation::Stack(offset));
        // }
        println!("maybe {}", self.next_stack_offset);
        // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
        // self.pad_stack_offset(8);

        for (bid, block) in func.blocks.iter() {
            println!(
                "translate_function | bid {}, phinodes {:?}",
                bid, block.phinodes
            );

            let mut body_instrs: Vec<asm::Instruction> = vec![];

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
                // self.next_stack_offset += 8;

                self.s0_satck_offset = self.next_stack_offset;
                body_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::Store(asm::DataSize::Double),
                    rs1: asm::Register::Sp,
                    rs2: asm::Register::S0,
                    imm: asm::Immediate::Value(self.s0_satck_offset as u64),
                });

                if function_has_call {
                    self.next_stack_offset -= 8;
                    // self.next_stack_offset += 8;

                    self.ra_stack_offset = self.next_stack_offset;
                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::Double),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::Ra,
                        imm: asm::Immediate::Value(self.ra_stack_offset as u64),
                    });

                    self.next_stack_offset -= 8;
                    // self.next_stack_offset += 8;

                    self.s1_stack_offset = self.next_stack_offset;
                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::Double),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::S1,
                        imm: asm::Immediate::Value(self.s1_stack_offset as u64),
                    });
                }

                // (3) addi s0, sp, -stack_size
                body_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S0,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.next_stack_offset as u64), // 임시로 넣지만 실제로 맞음
                });

                /*
                s0
                ra
                s1
                [       |       | | | | | | ] <- s0
                ptr1    ptr2

                [ptr1] sp로 저장하기

                */

                let mut alloc_offsets = Vec::new();
                let old_next_stack_offset = self.next_stack_offset;
                // allocations, phinodes 둘 다 ptr이기 때문에 초기에 값 저장이 필요함
                let mut offset = 0;
                for (i, dtype) in func.allocations.iter().enumerate() {
                    let rid = ir::RegisterId::local(i);
                    let ptr_dtype = ir::Dtype::pointer(dtype.deref().clone());
                    let operand = ir::Operand::register(rid, ptr_dtype);
                    // self.s0_stack_offset;
                    offset -= get_dtype_size(dtype);
                    self.next_stack_offset -= get_dtype_size(dtype);
                    // self.next_stack_offset += get_dtype_size(dtype);

                    println!("get_dtype_size {}", get_dtype_size(dtype));
                    alloc_offsets.push((operand.clone(), offset));
                }

                println!("alloc_offsets {:?}", alloc_offsets);
                self.pad_stack_offset(8);

                for (operand, alloc_offset) in alloc_offsets {
                    // la T0, const
                    // sw T0, -8(sp)

                    let offset = self
                        .stack_allocator
                        .allocate_stack_slot(&operand, &mut self.next_stack_offset);

                    // Sp + () = old_next_stack
                    // Sp = self.next_stack_offset
                    // old_next_stack -= offset
                    // old_next_stack - self.next_stack_offset < 0 이만큼을 더 빼면 okay

                    let alloc_offset_ver2 = alloc_offset + old_next_stack_offset;

                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Addi(asm::DataSize::Double),
                        rd: asm::Register::T0,
                        rs1: asm::Register::S0,
                        imm: asm::Immediate::Value(alloc_offset_ver2 as u64),
                    });

                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::Double),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(self.next_stack_offset as u64),
                    });

                    let _ = self
                        .stack_allocator
                        .stack_map
                        .insert(operand.clone(), offset);
                    let _ = self
                        .var_locations
                        .insert(operand, VarLocation::Stack(offset));
                }

                println!(
                    "before phinodes next_stack_offset {}",
                    self.next_stack_offset
                );

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
                    // self.next_stack_offset += get_dtype_size(&dtype);

                    let callee_offset = self.next_stack_offset;

                    body_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::Store(asm::DataSize::from_dtype(&dtype)),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(callee_offset as u64),
                    });

                    let _ = self
                        .stack_allocator
                        .stack_map
                        .insert(phi_operand.clone(), callee_offset);

                    let _unused = self
                        .var_locations
                        .insert(phi_operand, VarLocation::Stack(callee_offset));
                }

                // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
                self.pad_stack_offset(8);
            }
            println!("[DEBUG] stack_map = {{");
            for (operand, offset) in &self.stack_allocator.stack_map {
                println!("  {:?} => {}", operand, offset);
            }
            println!("}}");

            println!("[DEBUG] var_locations = {{");
            for (operand, loc) in &self.var_locations {
                println!("  {:?} => {:?}", operand, loc);
            }
            println!("}}");

            println!("================");
            println!("2️⃣ Block instructions 처리");
            println!("================");

            // 2️⃣ Block instructions 처리
            // for (iid, (bid, block)) in func.blocks.iter().enumerate() {
            for (iid, instr) in block.instructions.iter().enumerate() {
                println!(
                    "translate_function | instr {} | self.next_stack_offset {}",
                    instr, self.next_stack_offset
                );
                match instr.deref() {
                    ir::Instruction::BinOp {
                        op,
                        lhs,
                        rhs,
                        dtype,
                    } => {
                        let dst_rid = ir::RegisterId::temp(*bid, iid);
                        self.translate_binop_instruction_style(
                            dst_rid,
                            lhs,
                            rhs,
                            dtype,
                            op,
                            &mut body_instrs,
                        );
                    }
                    ir::Instruction::Load { ptr } => {
                        let dtype = ptr.dtype().get_pointer_inner().unwrap().clone();
                        let result_operand =
                            ir::Operand::register(ir::RegisterId::temp(*bid, iid), dtype.clone());

                        // 1. rs1 ← ptr이 가리키는 주소 (예: lvalue 주소)
                        let rs1 = self.translate_operand(ptr, &mut body_instrs);

                        // 2. t0 ← memory[rs1]
                        body_instrs.push(asm::Instruction::IType {
                            instr: asm::IType::load(dtype.clone()),
                            rd: asm::Register::T0,
                            rs1,
                            imm: asm::Immediate::Value(0),
                        });

                        // 3. spill t0 → stack
                        let offset = self.stack_allocator.spill_operand_to_stack(
                            &result_operand,
                            &dtype,
                            &mut self.next_stack_offset,
                            &mut self.var_locations,
                        );
                        // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
                        self.pad_stack_offset(8);

                        body_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype),
                            rs1: asm::Register::Sp,
                            rs2: asm::Register::T0,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }

                    ir::Instruction::Store { ptr, value } => {
                        println!("Store ptr {} value {}", ptr, value);
                        let rs1 =
                            self.translate_operand_reg(ptr, &mut body_instrs, asm::Register::T0);
                        let rs2 =
                            self.translate_operand_reg(value, &mut body_instrs, asm::Register::T1);

                        body_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(value.dtype()),
                            rs1,
                            rs2,
                            imm: asm::Immediate::Value(0),
                        });
                    }
                    ir::Instruction::Call {
                        callee:
                            ir::Operand::Constant(ir::Constant::GlobalVariable {
                                name: call_name,
                                dtype,
                            }),
                        args,
                        return_type,
                    } => {
                        // 인자들을 stack에 저장
                        for (i, arg) in args.iter().enumerate() {
                            // arg → t0 에 로드
                            if let Some(c) = arg.get_constant() {
                                // Constant → li t0, imm
                                body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                                    rd: asm::Register::T0,
                                    imm: c.get_int().unwrap().0 as u64,
                                }));
                            } else {
                                // Register → translate_operand + mv t0, reg
                                let tmp_reg = self.translate_operand(arg, &mut body_instrs);
                                body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                                    rd: asm::Register::T0,
                                    rs: tmp_reg,
                                }));
                            }

                            let offset = self
                                .stack_allocator
                                .allocate_stack_slot(arg, &mut self.next_stack_offset);

                            let _ = self.stack_allocator.stack_map.insert(arg.clone(), offset);
                            let _ = self
                                .var_locations
                                .insert(arg.clone(), VarLocation::Stack(offset));

                            body_instrs.push(asm::Instruction::SType {
                                instr: asm::SType::store(arg.dtype()),
                                rs1: asm::Register::Sp,
                                rs2: asm::Register::T0,
                                imm: asm::Immediate::Value(offset as u64),
                            });

                            if i == 0 {
                                // s1 = sp + offset (첫 번째 인자의 위치)
                                body_instrs.push(asm::Instruction::IType {
                                    instr: asm::IType::Addi(asm::DataSize::Double),
                                    rd: asm::Register::S1,
                                    rs1: asm::Register::Sp,
                                    imm: asm::Immediate::Value(offset as u64),
                                });
                            }
                        }

                        // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
                        self.pad_stack_offset(8);

                        // call 실행
                        body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                            offset: asm::Label(call_name.clone()),
                        }));

                        // t0 → stack 에 spill
                        let result_operand = ir::Operand::register(
                            ir::RegisterId::temp(*bid, iid),
                            return_type.clone(),
                        );

                        let offset = self.stack_allocator.spill_operand_to_stack(
                            &result_operand,
                            &return_type.clone(),
                            &mut self.next_stack_offset,
                            &mut self.var_locations,
                        );

                        // 여기서 padding을 해주기!!! 8의 배수가 아닌 경우 8의 배수로 맞추어 주기
                        self.pad_stack_offset(8);

                        // body_instrs.push(asm::Instruction::SType {
                        //     instr: asm::SType::store(return_type.clone()),
                        //     rs1: asm::Register::Sp,
                        //     rs2: asm::Register::T0,
                        //     imm: asm::Immediate::Value(offset as u64),
                        // });
                    }
                    _ => {}
                }
            }
            // }

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
                        println!("translate_function | Return value {}", value);
                        if ir::Constant::is_undef(c) {
                            // Constant → li t0
                            body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                                rd: asm::Register::T0,
                                imm: 0,
                            }));
                        } else {
                            // Constant → li t0
                            body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                                rd: asm::Register::T0,
                                imm: c.get_int().unwrap().0 as u64,
                            }));
                        }
                    }

                    // 결과: a0 → t0 => T0 -> A0
                    body_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                        rd: asm::Register::A0,
                        rs: asm::Register::T0,
                    }));
                    // 4️⃣ Epilogue → Return 시점에 항상 넣어줌

                    if function_has_call {
                        body_instrs.push(asm::Instruction::IType {
                            instr: asm::IType::Load {
                                data_size: asm::DataSize::Double,
                                is_signed: true,
                            },
                            rd: asm::Register::S1,
                            rs1: asm::Register::Sp,
                            imm: asm::Immediate::Value((self.s1_stack_offset) as u64),
                        });

                        body_instrs.push(asm::Instruction::IType {
                            instr: asm::IType::Load {
                                data_size: asm::DataSize::Double,
                                is_signed: true,
                            },
                            rd: asm::Register::Ra,
                            rs1: asm::Register::Sp,
                            imm: asm::Immediate::Value((self.ra_stack_offset) as u64),
                        });
                    }

                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size: asm::DataSize::Double,
                            is_signed: true,
                        },
                        rd: asm::Register::S0,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value((self.s0_satck_offset) as u64),
                    });

                    // addi sp, sp, MN
                    // let total_offset = (self.next_stack_offset) as u64;
                    body_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Addi(asm::DataSize::Double),
                        rd: asm::Register::Sp,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value(0),
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

            println!("[DEBUG] stack_map = {{");
            for (operand, offset) in &self.stack_allocator.stack_map {
                println!("  {:?} => {}", operand, offset);
            }
            println!("}}");

            println!("[DEBUG] var_locations = {{");
            for (operand, loc) in &self.var_locations {
                println!("  {:?} => {:?}", operand, loc);
            }
            println!("}}");
        }

        // 6️⃣ 마지막에 bid_init block의 sp placeholder patch (필수)
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
        let total_offset = (self.next_stack_offset) as u64;

        // 첫 instruction 제외 나머지 instruction만 순회
        for block in asm_blocks.iter_mut() {
            // 그 블럭 안에서 dummy addi sp, sp, 0 찾아서 수정
            for (i, instr) in block.instructions.iter_mut().enumerate() {
                if i == 0 {
                    continue;
                }
                if let asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::Sp,
                    rs1: asm::Register::Sp,
                    imm,
                } = instr
                {
                    if let asm::Immediate::Value(0) = imm {
                        *imm = asm::Immediate::Value(total_offset);
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

                // ir::Declaration::Variable { dtype, initializer } => {
                //     // 나중에 전역 변수 처리 로직 추가 가능
                //     // variables.push(...);
                // }
                ir::Declaration::Variable { dtype, initializer } => {
                    let label = asm::Label(name.clone());

                    // 초기값 파싱
                    let init_value_opt =
                        if let Some(ast::Initializer::Expression(expr)) = initializer {
                            if let ast::Expression::Constant(c) = &expr.node {
                                ir::Constant::try_from(&c.node).ok()
                            } else {
                                None
                            }
                        } else {
                            None
                        };

                    let init_value: u64 =
                        if let Some(ir::Constant::Int { value, .. }) = init_value_opt {
                            value as u64
                        } else {
                            0
                        };

                    // .word, .quad 등 선택
                    let data_directive = match get_dtype_size(dtype) {
                        1 => asm::Directive::Byte(init_value as u8),
                        2 => asm::Directive::Half(init_value as u16),
                        4 => asm::Directive::Word(init_value as u32),
                        8 => asm::Directive::Quad(init_value),
                        _ => panic!("Unsupported global var size"),
                    };

                    let header = vec![
                        asm::Directive::Globl(label.clone()),
                        asm::Directive::Section(asm::SectionType::Data),
                        asm::Directive::Type(label.clone(), asm::SymbolType::Object),
                    ];

                    let variable = asm::Variable::new(label, vec![data_directive]);
                    let section = asm::Section::new(header, variable);
                    variables.push(section);
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

fn map_binop_to_rtype(
    op: &ast::BinaryOperator,
    dtype: ir::Dtype,
    is_signed: bool,
) -> Option<asm::RType> {
    match op {
        ast::BinaryOperator::Plus => Some(asm::RType::Add(asm::DataSize::Byte)),
        ast::BinaryOperator::Minus => Some(asm::RType::Sub(asm::DataSize::Byte)),
        ast::BinaryOperator::BitwiseXor => Some(asm::RType::Xor),
        ast::BinaryOperator::BitwiseOr => Some(asm::RType::Or),
        ast::BinaryOperator::BitwiseAnd => Some(asm::RType::And),
        ast::BinaryOperator::Less => Some(asm::RType::Slt { is_signed }),
        ast::BinaryOperator::Modulo => Some(asm::RType::rem(dtype, is_signed)),
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
        ir::Dtype::Pointer { inner, is_const } => 8,
        _ => panic!("Unsupported argument type: {:?}", dtype),
    }
}
