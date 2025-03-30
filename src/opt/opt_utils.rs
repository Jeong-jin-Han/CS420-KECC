//! Utilities for implementing optimizations.
//!
//! You can freely add utilities commonly used in the implementation of multiple optimizations here.
use std::collections::{HashMap, HashSet};
use std::io::empty;
use std::ops::{Deref, DerefMut};

use itertools::izip;
use lang_c::ast::ConditionalExpression;

use crate::ir::*;
// use crate::opt::opt_utils::*;
use crate::opt::*;

/// .
// #![allow(dead_code)]
pub(crate) fn make_cfg(fdef: &FunctionDefinition) -> HashMap<BlockId, Vec<JumpArg>> {
    fdef.blocks
        .iter()
        .map(|(bid, block)| {
            let mut args = Vec::new();
            match &block.exit {
                BlockExit::Jump { arg } => args.push(arg.clone()),
                BlockExit::ConditionalJump {
                    condition,
                    arg_then,
                    arg_else,
                } => {
                    args.push(arg_then.clone());
                    args.push(arg_else.clone());
                }
                BlockExit::Switch {
                    value,
                    default,
                    cases,
                } => {
                    args.push(default.clone());
                    for (_, arg) in cases {
                        args.push(arg.clone());
                    }
                }
                _ => {}
            }
            (*bid, args)
        })
        .collect()
    // todo!()
}

pub(crate) fn reverse_cfg(
    cfg: &HashMap<BlockId, Vec<JumpArg>>,
) -> HashMap<BlockId, Vec<(BlockId, JumpArg)>> {
    let mut result = HashMap::new();

    for (bid, jumps) in cfg {
        for jump in jumps {
            result
                .entry(jump.bid)
                .or_insert_with(Vec::new)
                .push((*bid, jump.clone()));
        }
    }
    result
    // todo!()
}

struct PostOrder<'c> {
    visited: HashSet<BlockId>,
    cfg: &'c HashMap<BlockId, Vec<JumpArg>>,
    traversed: Vec<BlockId>,
}

impl PostOrder<'_> {
    fn traverse(&mut self, bid: BlockId) {
        todo!()
    }
}

pub(crate) fn replace_operands(operand: &mut Operand, replaces: &HashMap<RegisterId, Operand>) {
    if let Operand::Register { rid, dtype } = operand {
        if let Some(replacement) = replaces.get(rid) {
            *operand = replacement.clone();
        }
    }
    // todo!()
}

pub(crate) fn walk(code: &mut FunctionDefinition, replaces: &HashMap<RegisterId, Operand>) {
    for block in code.blocks.values_mut() {
        // instructions
        for instr in block.instructions.iter_mut() {
            // let tmp = instr.deref_mut();
            match instr.deref_mut() {
                Instruction::BinOp {
                    op,
                    lhs,
                    rhs,
                    dtype,
                } => {
                    replace_operands(lhs, replaces);
                    replace_operands(rhs, replaces);
                }
                Instruction::Store { ptr, value } => {
                    replace_operands(ptr, replaces);
                    replace_operands(value, replaces);
                }
                // Instruction::
                // 등등 모든 instruction variants 처리
                _ => {}
            }
        }

        match &mut block.exit {
            BlockExit::Return { value } => {
                replace_operands(value, replaces);
            }
            BlockExit::ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => {
                replace_operands(condition, replaces);
            }
            _ => {}
        }
    }
}
