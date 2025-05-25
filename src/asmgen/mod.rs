use std::collections::{BTreeMap, HashMap, HashSet, VecDeque};

use lang_c::ast;

use crate::ir::{BlockExit, HasDtype};
use crate::opt::opt_utils;
use crate::{Translate, asm, ir};

use std::ops::Deref;

#[derive(Debug)]
pub struct Asmgen {}

#[allow(clippy::derivable_impls)]
impl Default for Asmgen {
    fn default() -> Self {
        // todo!()
        Asmgen {}
    }
}

impl Translate<ir::TranslationUnit> for Asmgen {
    // type Target = asm::Asm;
    type Target = asm::Asm;
    type Error = ();

    fn translate(&mut self, source: &ir::TranslationUnit) -> Result<Self::Target, Self::Error> {
        let mut functions = Vec::new();
        let mut variables = Vec::new();

        let mut function_name_lists = HashMap::<&str, usize>::new();
        for (idx, (name, decl)) in source.decls.iter().enumerate() {
            // match decl {
            //     ir::Declaration::Function {
            //         signature,
            //         definition,
            //     } => {
            //         let _unused = function_name_lists.insert(name, idx);
            //     }
            //     _ => {}
            // }
            if let ir::Declaration::Function { .. } = decl {
                let _unused = function_name_lists.insert(name, idx);
            }
        }

        println!("function_name_lists | {:?}", function_name_lists);

        for (name, decl) in &source.decls {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition: Some(defn),
                } => {
                    let func =
                        self.translate_function(name, signature, defn, &function_name_lists)?;

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

impl Asmgen {
    fn translate_function(
        &mut self,
        name: &str,
        sig: &ir::FunctionSignature,
        defn: &ir::FunctionDefinition,
        function_name_list: &HashMap<&str, usize>,
    ) -> Result<asm::Function, ()> {
        let mut asm_blocks = Vec::new();
        let bid_init = &defn.bid_init;

        // 스택 오프셋 계산 초기화
        // stack pointer offset, 해당 function에 대해서는 stack_offset 동일함.
        let stack_offset = self.calculate_stack_offset(name, defn, function_name_list);

        for (bid, block) in &defn.blocks {
            let label = if (bid == bid_init) {
                Some(asm::Label(name.to_string()))
            } else {
                Some(asm::Label(format!(".{}_L{}", name, bid.0)))
            };
            let mut instructions = Vec::new();

            // body
            for (iid, instr) in block.instructions.iter().enumerate() {
                let dest_rid = ir::RegisterId::temp(*bid, iid);
                instructions.extend(self.translate_instruction(&dest_rid, &block.exit, instr));
            }

            // exit
            instructions.extend(self.translate_block_exit(&block.exit));

            asm_blocks.push(asm::Block::new(label, instructions));
        }

        Ok(asm::Function::new(asm_blocks))
    }

    fn calculate_stack_offset(
        &mut self,
        name: &str,
        defn: &ir::FunctionDefinition,
        function_name_list: &HashMap<&str, usize>,
    ) -> i32 {
        let mut stack_offset = 0;

        // 일단 먼저 call이 존재하는지 판단하기 -> 모든 block들을 보면서 call이 있는지 call이 사용되는 시점과 define되는 시점
        // 함수 이름 -> bid 수준이 아니라 function 수준이기 때문에 다른 전략이 필요해
        let current_idx = function_name_list.get(name).unwrap();
        // println!("current_idx {:?}", current_idx);
        // CALL, JALR
        let tmp: Vec<(ir::BlockId, CallType)> = defn
            .blocks
            .iter()
            .flat_map(|(bid, block)| {
                let (is_call_present, call_name) = is_call(block.instructions.clone()); // is_call 호출
                if is_call_present {
                    let call_idx = function_name_list.get(call_name.deref()).unwrap();
                    // current_idx가 call_idx보다 작은 경우는 정적 호출
                    if call_idx < current_idx {
                        Some((*bid, CallType::Call)) // 정적 호출
                    } else {
                        Some((*bid, CallType::Jalr)) // 동적 호출
                    }
                } else {
                    None
                }
            })
            .collect();

        println!("calculate_stack_offset | {:?}", tmp);

        // ra, s0 (frame pointer)
        stack_offset += 2;

        stack_offset
    }

    fn translate_instruction(
        &self,
        dest_rid: &ir::RegisterId,
        exit: &ir::BlockExit,
        instr: &ir::Named<ir::Instruction>,
    ) -> Vec<asm::Instruction> {
        use ir::Instruction::*;

        let mut instructions = Vec::<asm::Instruction>::new();

        match instr.deref() {
            BinOp {
                op,
                lhs,
                rhs,
                dtype,
            } => {
                let mut lhs_reg = asm::Register::Zero;
                let mut rhs_reg = asm::Register::Zero;
                let mut dest_rid = dest_rid;
                if let Some((lhs_rid, dtype)) = lhs.get_register() {
                    lhs_reg = map_reg_ir_to_asm(lhs_rid);
                }
                if let Some((rhs_rid, dtype)) = rhs.get_register() {
                    rhs_reg = map_reg_ir_to_asm(rhs_rid);
                }
                if let Some((lhs_rid, dtype)) = lhs.get_register() {
                    lhs_reg = map_reg_ir_to_asm(lhs_rid);
                }

                let dest_reg = if is_return_value(dest_rid, exit) {
                    asm::Register::A0
                } else {
                    map_reg_ir_to_asm(dest_rid)
                };

                // 먼저 상수 operand를 li로 처리
                translate_operand_if_constant(lhs, lhs_reg, &mut instructions);
                translate_operand_if_constant(rhs, rhs_reg, &mut instructions);

                // 그 다음 실제 연산
                translate_binop_instr(
                    op,
                    dtype.clone(),
                    dest_reg,
                    lhs_reg,
                    rhs_reg,
                    &mut instructions,
                );
                instructions
            }
            Call {
                callee,
                args,
                return_type,
            } => {
                // Call 처리
                let mut reg = asm::Register::Zero;
                for (i, arg) in args.iter().enumerate() {
                    // call 의 경우 무조건 변환 Constant여도
                    let reg = match i {
                        0 => asm::Register::A0,
                        1 => asm::Register::A1,
                        2 => asm::Register::A2,
                        3 => asm::Register::A3,
                        4 => asm::Register::A4,
                        5 => asm::Register::A5,
                        6 => asm::Register::A6,
                        7 => asm::Register::A7,
                        _ => panic!("Too many args"),
                    };

                    // 이 부분을 무조건 호출하게:
                    translate_operand_if_constant(arg, reg, &mut instructions);
                }

                if let ir::Operand::Constant(ir::Constant::GlobalVariable { name, .. }) = callee {
                    instructions.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                        offset: asm::Label(name.clone()),
                    }));
                } else {
                    panic!("Function call must be to global label");
                }
                instructions
            }
            GetElementPtr { ptr, offset, dtype } => vec![],
            Load { ptr } => vec![],
            Nop => vec![],
            Store { ptr, value } => vec![],
            TypeCast {
                value,
                target_dtype,
            } => vec![],
            UnaryOp { op, operand, dtype } => vec![],
            Value { value } => vec![],
        }
    }

    fn translate_block_exit(&self, exit: &ir::BlockExit) -> Vec<asm::Instruction> {
        use ir::BlockExit::*;
        let mut instructions = Vec::<asm::Instruction>::new();
        match exit {
            Return { value } => {
                let reg = asm::Register::A0;
                translate_operand_if_constant(value, reg, &mut instructions);
                instructions.push(asm::Instruction::Pseudo(asm::Pseudo::Ret));
                instructions
            }
            Jump { arg } => vec![],
            ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => vec![],
            Switch {
                value,
                default,
                cases,
            } => vec![],
            Unreachable => vec![],
        }
    }
}

fn translate_operand_if_constant(
    operand: &ir::Operand,
    reg: asm::Register,
    instrs: &mut Vec<asm::Instruction>,
) {
    if let ir::Operand::Constant(c) = operand {
        if let Some((value, _, _)) = c.get_int() {
            if value <= u64::MAX as u128 {
                instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: value as u64,
                }));
            } else {
                panic!(
                    "Constant value too large for 64-bit architecture: {}",
                    value
                );
            }
        } else {
            // TODO: float 상수 등 추가 처리
            // todo!("non-integer constants not yet handled");
        }
    }
}

fn map_binop_to_rtype(op: &ast::BinaryOperator, dtype: &ir::Dtype) -> asm::RType {
    use asm::{DataSize, RType};
    use ast::BinaryOperator::*;

    // 현재는 정수만 고려, float은 추후 처리
    let data_size = match dtype {
        ir::Dtype::Int { width, .. } => match width {
            8 => DataSize::Byte,
            16 => DataSize::Half,
            32 => DataSize::Word,
            64 => DataSize::Double,
            _ => panic!("Unsupported int width: {}", width),
        },
        _ => panic!("Non-integer types not yet supported in BinOp"),
    };

    let is_signed = dtype.is_int_signed();

    match op {
        Plus => RType::Add(data_size),
        Minus => RType::Sub(data_size),
        Multiply => RType::Mul(data_size),
        Divide => RType::Div {
            data_size,
            is_signed,
        },
        Modulo => RType::Rem {
            data_size,
            is_signed,
        },
        Less => RType::Slt { is_signed },
        BitwiseAnd => RType::And,
        BitwiseOr => RType::Or,
        BitwiseXor => RType::Xor,
        _ => todo!("Binary op {:?} not yet supported", op),
    }
}

fn translate_binop_instr(
    op: &ast::BinaryOperator,
    dtype: ir::Dtype,
    dest: asm::Register,
    lhs: asm::Register,
    rhs: asm::Register,
    instrs: &mut Vec<asm::Instruction>,
) {
    let rtype = map_binop_to_rtype(op, &dtype);
    instrs.push(asm::Instruction::RType {
        instr: rtype,
        rd: dest,
        rs1: lhs,
        rs2: Some(rhs),
    });
}

fn map_reg_ir_to_asm(rid: &ir::RegisterId) -> asm::Register {
    match rid {
        ir::RegisterId::Arg { aid, .. } => match aid {
            0 => asm::Register::A0,
            1 => asm::Register::A1,
            2 => asm::Register::A2,
            3 => asm::Register::A3,
            4 => asm::Register::A4,
            5 => asm::Register::A5,
            6 => asm::Register::A6,
            7 => asm::Register::A7,
            _ => panic!("Too many args for RISC-V calling convention"),
        },
        ir::RegisterId::Temp { .. } => asm::Register::T2, // 예시
        _ => todo!("Support for locals/others"),
    }
}

fn is_return_value(tmp_rid: &ir::RegisterId, exit: &ir::BlockExit) -> bool {
    /*
    현재 iid에 해당하는 값이 return이 되는지를 체크하는 것
    map_reg_ir_to_asm을 할 때 rid가 필요하기 때문에

    만약에 반환되는 값이라면 바로 a0 사용 가능??
    */
    if let ir::BlockExit::Return { value } = exit {
        if let Some((rid, _)) = value.get_register() {
            if rid == tmp_rid {
                return true;
            }
        }
    }
    false
}

fn is_call(instructions: Vec<ir::Named<ir::Instruction>>) -> (bool, String) {
    for instr in instructions.clone().iter() {
        // println!("is_call | instruction {:?}", instr.clone());
        if let ir::Instruction::Call {
            callee: ir::Operand::Constant(ir::Constant::GlobalVariable { name, dtype }),
            args,
            return_type,
        } = instr.deref()
        {
            // println!("is_call | true | name {:?}", name.clone());
            return (true, name.clone());
        }
    }
    (false, String::new()) // call 명령어가 없다면 false와 빈 문자열 반환
}

#[derive(Debug)]
enum CallType {
    Call, // 정적 호출
    Jalr, // 동적 호출
}
