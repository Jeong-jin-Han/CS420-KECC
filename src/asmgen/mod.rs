use std::collections::{BTreeMap, HashMap, HashSet, VecDeque};

use lang_c::ast;

use crate::ir::HasDtype;
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

        for (name, decl) in &source.decls {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition: Some(defn),
                } => {
                    let func = self.translate_function(name, signature, defn)?;

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
    ) -> Result<asm::Function, ()> {
        let mut asm_blocks = Vec::new();
        let bid_init = &defn.bid_init;

        for (bid, block) in &defn.blocks {
            let label = if (bid == bid_init) {
                Some(asm::Label(name.to_string()))
            } else {
                Some(asm::Label(format!(".{}_L{}", name, bid.0)))
            };
            let mut instructions = Vec::new();

            // body
            for instr in &block.instructions {
                instructions.extend(self.translate_instruction(instr));
            }

            // exit
            instructions.extend(self.translate_block_exit(&block.exit));

            asm_blocks.push(asm::Block::new(label, instructions));
        }

        Ok(asm::Function::new(asm_blocks))
    }

    fn translate_instruction(&self, instr: &ir::Named<ir::Instruction>) -> Vec<asm::Instruction> {
        use ir::Instruction::*;

        let mut instructions = Vec::<asm::Instruction>::new();

        match instr.deref() {
            BinOp {
                op,
                lhs,
                rhs,
                dtype,
            } => {
                let lhs_reg = asm::Register::T0;
                let rhs_reg = asm::Register::T1;
                let dest_reg = asm::Register::T2;

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
            } => vec![],
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
            todo!("non-integer constants not yet handled");
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

// fn translate_function(
//     &mut self,
//     name: &str, // 함수 이름은 여기서 받는다!,
//     sig: &ir::FunctionSignature,
//     defn: &ir::FunctionDefinition,
// ) -> Result<asm::Function, ()> {
//     // Prologue + Body + Epilogue
//     use std::ops::Deref;
//     use asm::{Block, Function, Instruction, Label, Pseudo, Register};
//     println!("defn | allocations {:?}", defn.allocations);
//     println!("defn | blocks {:?}", defn.blocks);
//     println!("defn | init_bid {:?}", defn.bid_init);

//     let mut asm_blocks = Vec::new();
//     for (bid, block) in &defn.blocks {
//         let label = Some(Label(name.to_string()));
//         let mut instructions = Vec::new();
//         for instr in &block.instructions {
//             let tmp = &block.phinodes;

//             match instr.deref() {
//                 _ => {},
//             }
//         }
//         match &block.exit {
//             _ => {}
//         }

//         let asm_block = Block::new(label, instructions);
//         asm_blocks.push(asm_block);
//     }

//     return Ok(Function::new(asm_blocks));

//     // 임의의 라벨 (함수 이름 기준으로 생성)
//     // let label = Some(Label(format!("{}", name)));
//     let label = Some(Label(name.to_string()));

//     // 임의의 명령어들: li a0, 1; ret
//     let instructions = vec![
//         Instruction::Pseudo(Pseudo::Li {
//             rd: Register::A0,
//             imm: 1,
//         }),
//         Instruction::Pseudo(Pseudo::Ret),
//     ];

//     // 블록으로 묶기
//     let block = Block::new(label, instructions);

//     // 함수로 묶기
//     Ok(Function::new(vec![block]))
// }
