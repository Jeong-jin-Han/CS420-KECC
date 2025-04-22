//! Utilities for implementing optimizations.
//!
//! You can freely add utilities commonly used in the implementation of multiple optimizations here.
use std::collections::{HashMap, HashSet};
use std::io::empty;
use std::ops::{Deref, DerefMut};

use itertools::izip;
use lang_c::ast::ConditionalExpression;

use crate::asm::Function;
use crate::ir::*;
// use crate::opt::opt_utils::*;
use crate::opt::*;

use core::cmp::Ordering;


pub trait Walk {
    fn walk<F>(&mut self, f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool;
}

impl Walk for FunctionDefinition {
    fn walk<F>(&mut self,mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        self.blocks
            .iter_mut()
            .map(|(_, block)| block.walk(&mut f))
            .fold(false, |l, r| l || r)
    }
}

impl Walk for Block {
    fn walk<F>(&mut self, mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        let changed1 = self
                .instructions
                .iter_mut()
                .map(|i| i.walk(&mut f))
                .fold(false, |l, r| l||r);
        
        let changed2 = self.exit.walk(&mut f);
        changed1 || changed2
    }
}

impl Walk for Instruction {
    fn walk<F>(&mut self, mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        match self {
            Self::Nop => false,
            Self::BinOp { lhs, rhs, .. } => {
                let changed1 = lhs.walk(&mut f);
                let changed2 = rhs.walk(&mut f);
                changed1 || changed2
            }
            Self::UnaryOp { operand, ..} => {
                operand.walk(&mut f)
            }
            Self::Store {ptr, value} => {
                let changed1 = ptr.walk(&mut f);
                let changed2 = value.walk(&mut f);
                changed1 || changed2
            }
            Self::Load { ptr } => {
                ptr.walk(&mut f)
            }
            Self::Call { callee, args, ..} => {
                let changed1 = callee.walk(&mut f);
                let changed2 = args
                    .iter_mut()
                    .map(|a| a.walk(&mut f))
                    .fold(false, |l,r| l||r);
                changed1 || changed2
            }
            Self::TypeCast { value, .. } => {
                value.walk(&mut f)
            }
            Self::Value { value } => {
                value.walk(&mut f) // maybe ??
            }
            _ => todo!() // GetElementPtr
        }
    }
}

impl Walk for BlockExit {
    fn walk<F>(&mut self, mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        match self {
            Self::Jump {arg} => arg.walk(&mut f),
            Self::ConditionalJump { condition, arg_then, arg_else } => {
                let changed1 = condition.walk(&mut f);
                let changed2 = arg_then.walk(&mut f);
                let changed3 = arg_else.walk(&mut f);
                changed1 || changed2 || changed3
            }
            Self::Switch { value, default, cases } => {
                let changed1 = value.walk(&mut f);
                let changed2 = default.walk(&mut f);
                let changed3 = cases
                    .iter_mut()
                    .map(|(_, op)| op.walk(&mut f))
                    .fold(false, |l,r| l||r);
                changed1 || changed2 || changed3
            }
            Self::Return { value } => {
                value.walk(&mut f)
            }
            _ => todo!()
        }
    }
}

impl Walk for JumpArg {
    fn walk<F>(&mut self, mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        self
            .args
            .iter_mut()
            .map(|op| op.walk(&mut f))
            .fold(false, |l, r| l||r) 
    }
}

impl Walk for Operand {
    fn walk<F>(&mut self, mut f: F) -> bool
        where
            F: FnMut(&mut Operand) -> bool {
        f(self)
    }
}


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

pub(crate) struct PostOrder<'c> {
    pub(crate) visited: HashSet<BlockId>,
    pub(crate) cfg: &'c HashMap<BlockId, Vec<JumpArg>>,
    pub(crate) traversed: Vec<BlockId>,
}

impl PostOrder<'_> {
    pub(crate) fn traverse(&mut self, bid: BlockId) {
        if !self.visited.insert(bid) {
            // already inserted -> return
            return;
        };
        if let Some(neighbers) = self.cfg.get(&bid) {
            for arg in neighbers {
                self.traverse(arg.bid);
            }
            self.traversed.push(bid);
        }

        // todo!()
    }
}

pub(crate) fn replace_operands(operand: &mut Operand, replaces: &HashMap<RegisterId, Operand>) {
    /*
    주어진 operand -> rid 구하기
    replaces: rid에 해당하는 operand 구하기
    */
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
                Instruction::Call {
                    callee,
                    args,
                    return_type,
                } => {
                    replace_operands(callee, replaces);
                    for arg in args {
                        replace_operands(arg, replaces);
                    }
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



pub(crate) struct ClassNumGen {
    pub(crate) counter: u64,
}

impl ClassNumGen {
    pub(crate) fn new() -> Self {
        Self { counter: 1 }
    }

    pub(crate) fn fresh(&mut self) -> u64 {
        let val = self.counter;
        self.counter += 1;
        val
    }
}
