//! Utilities for implementing optimizations.
//!
//! You can freely add utilities commonly used in the implementation of multiple optimizations here.
use std::cmp::Reverse;
use std::collections::btree_map::IntoValues;
use std::collections::{HashMap, HashSet};
use std::io::empty;
use std::ops::{Deref, DerefMut};

use itertools::izip;
use itertools::traits::HomogeneousTuple;
use lang_c::ast::ConditionalExpression;

use crate::asm::Function;
use crate::ir::*;
// use crate::opt::opt_utils::*;
use crate::opt::*;

use core::cmp::Ordering;

macro_rules! some_or {
    ($option:expr, $fallback:expr) => {
        match $option {
            Some(val) => val,
            None => $fallback,
        }
    };
}
pub(crate) trait Walk {
    fn walk<F>(&mut self, f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool;
}

impl Walk for FunctionDefinition {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        #[allow(clippy::unnecessary_fold)]
        self.blocks
            .iter_mut()
            .map(|(_, block)| block.walk(&mut f))
            .fold(false, |l, r| l || r)

        // self.blocks.iter_mut().any(|(_, block)| block.walk(&mut f))
    }
}

impl Walk for Block {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        #[allow(clippy::unnecessary_fold)]
        let changed1 = self
            .instructions
            .iter_mut()
            .map(|i| i.walk(&mut f))
            .fold(false, |l, r| l || r);

        let changed2 = self.exit.walk(&mut f);
        changed1 || changed2
    }
}

impl Walk for Instruction {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        match self {
            Self::Nop => false,
            Self::BinOp { lhs, rhs, .. } => {
                let changed1 = lhs.walk(&mut f);
                let changed2 = rhs.walk(&mut f);
                changed1 || changed2
            }
            Self::UnaryOp { operand, .. } => operand.walk(&mut f),
            Self::Store { ptr, value } => {
                let changed1 = ptr.walk(&mut f);
                let changed2 = value.walk(&mut f);
                changed1 || changed2
            }
            Self::Load { ptr } => ptr.walk(&mut f),
            Self::Call { callee, args, .. } => {
                let changed1 = callee.walk(&mut f);
                #[allow(clippy::unnecessary_fold)]
                let changed2 = args
                    .iter_mut()
                    .map(|a| a.walk(&mut f))
                    .fold(false, |l, r| l || r);
                changed1 || changed2
            }
            Self::TypeCast { value, .. } => value.walk(&mut f),
            Self::Value { value } => {
                value.walk(&mut f) // maybe ??
            }
            Self::GetElementPtr { ptr, offset, dtype } => {
                let changed1 = ptr.walk(&mut f);
                let changed2 = offset.walk(&mut f);
                changed1 || changed2
                // offset.walk(&mut f);
            }
            _ => todo!(), // GetElementPtr
        }
    }
}

impl Walk for BlockExit {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        match self {
            Self::Jump { arg } => arg.walk(&mut f),
            Self::ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => {
                let changed1 = condition.walk(&mut f);
                let changed2 = arg_then.walk(&mut f);
                let changed3 = arg_else.walk(&mut f);
                changed1 || changed2 || changed3
            }
            Self::Switch {
                value,
                default,
                cases,
            } => {
                let changed1 = value.walk(&mut f);
                let changed2 = default.walk(&mut f);
                #[allow(clippy::unnecessary_fold)]
                let changed3 = cases
                    .iter_mut()
                    .map(|(_, op)| op.walk(&mut f))
                    .fold(false, |l, r| l || r);
                changed1 || changed2 || changed3
            }
            Self::Return { value } => value.walk(&mut f),
            _ => todo!(),
        }
    }
}

impl Walk for JumpArg {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        #[allow(clippy::unnecessary_fold)]
        self.args
            .iter_mut()
            .map(|op| op.walk(&mut f))
            .fold(false, |l, r| l || r)
    }
}

impl Walk for Operand {
    fn walk<F>(&mut self, mut f: F) -> bool
    where
        F: FnMut(&mut Operand) -> bool,
    {
        // debug_print!("WALK Operand: {:?}", self);
        // let tmp = f(self);
        // debug_print!("Operand tmp: {:?}", tmp);
        // tmp
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

// impl PostOrder<'_> {
//     pub(crate) fn traverse(&mut self, bid: BlockId) {
//         if !self.visited.insert(bid) {
//             // already inserted -> return
//             return;
//         };
//         if let Some(neighbers) = self.cfg.get(&bid) {
//             for arg in neighbers {
//                 self.traverse(arg.bid);
//             }
//             self.traversed.push(bid);
//         }

//         // todo!()
//     }
// }

impl PostOrder<'_> {
    pub(crate) fn traverse(&mut self, bid: BlockId) {
        for jump in self.cfg.get(&bid).unwrap() {
            if self.visited.insert(jump.bid) {
                self.traverse(jump.bid);
            }
        }
        self.traversed.push(bid);
    }
}

fn traverse_postorder(bid_init: BlockId, cfg: &HashMap<BlockId, Vec<JumpArg>>) -> Vec<BlockId> {
    let mut post_order = PostOrder {
        visited: HashSet::new(),
        cfg,
        traversed: Vec::new(),
    };
    let _unused = post_order.visited.insert(bid_init);
    post_order.traverse(bid_init);
    post_order.traversed
}
#[derive(Debug)]
pub(crate) struct Domtree {
    pub(crate) idoms: HashMap<BlockId, BlockId>,
    pub(crate) frontiers: HashMap<BlockId, Vec<BlockId>>,
    pub(crate) reverse_post_order: Vec<BlockId>,
}

impl Domtree {
    pub(crate) fn new(
        bid_init: BlockId,
        cfg: &HashMap<BlockId, Vec<JumpArg>>,
        reverse_cfg: &HashMap<BlockId, Vec<(BlockId, JumpArg)>>,
    ) -> Self {
        let mut reverse_post_order = traverse_postorder(bid_init, cfg);
        reverse_post_order.reverse();

        let inverse_reverse_post_order: HashMap<BlockId, usize> = reverse_post_order
            .iter()
            .enumerate()
            .map(|(i, bid)| (*bid, i))
            .collect(); // maybe type??

        // The immediate dominator (idom) of each block
        let mut idoms = HashMap::<BlockId, BlockId>::new();

        loop {
            let mut changed = false;

            for bid in &reverse_post_order {
                if *bid == bid_init {
                    continue;
                }

                let mut idom = None;
                for (bid_prev, _) in reverse_cfg.get(bid).unwrap() {
                    // if *bid_prev == bid_init || idoms.get(bid_prev).is_some() {
                    if *bid_prev == bid_init || idoms.contains_key(bid_prev) {
                        idom = Some(intersect_idom(
                            idom,
                            *bid_prev,
                            &inverse_reverse_post_order,
                            &idoms,
                        ));
                    }
                }

                if let Some(idom) = idom {
                    let _unused = idoms
                        .entry(*bid)
                        .and_modify(|v| {
                            if *v != idom {
                                changed = true;
                                *v = idom;
                            }
                        })
                        .or_insert_with(|| {
                            changed = true;
                            idom
                        });
                }
            }

            if !changed {
                // not changed
                break;
            }
        }

        let mut frontiers = HashMap::new();
        for (bid, prevs) in reverse_cfg {
            if prevs.len() <= 1 {
                continue;
            }

            let idom = *some_or!(idoms.get(bid), continue);

            for (bid_prev, _) in prevs {
                let mut runner = *bid_prev;
                while !Self::dominates(&idoms, runner, *bid) {
                    frontiers.entry(runner).or_insert_with(Vec::new).push(*bid);
                    debug_print!("runner: {}, bid: {}, idom: {}", runner, bid, idom);
                    runner = *idoms.get(&runner).unwrap();
                }
            }
        }
        Self {
            idoms,
            frontiers,
            reverse_post_order,
        }
    }

    pub(crate) fn idom(&self, bid: BlockId) -> Option<BlockId> {
        self.idoms.get(&bid).cloned()
    }

    pub(crate) fn dominates(
        idoms: &HashMap<BlockId, BlockId>,
        bid1: BlockId,
        mut bid2: BlockId,
    ) -> bool {
        loop {
            bid2 = *some_or!(idoms.get(&bid2), return false);
            if bid1 == bid2 {
                return true;
            }
        }
    }

    pub(crate) fn frontiers(&self, bid: BlockId) -> Option<&Vec<BlockId>> {
        self.frontiers.get(&bid)
    }

    pub(crate) fn walk<F>(&self, mut f: F)
    where
        F: FnMut(Option<BlockId>, BlockId),
    {
        for bid in &self.reverse_post_order {
            f(self.idoms.get(bid).cloned(), *bid);
        }
    }
}

fn intersect_idom(
    lhs: Option<BlockId>,
    mut rhs: BlockId,
    inverse_reverse_post_order: &HashMap<BlockId, usize>,
    idoms: &HashMap<BlockId, BlockId>,
) -> BlockId {
    let mut lhs = some_or!(lhs, return rhs);

    loop {
        if lhs == rhs {
            return lhs;
        }

        let lhs_index = inverse_reverse_post_order.get(&lhs).unwrap();
        let rhs_index = inverse_reverse_post_order.get(&rhs).unwrap();

        match lhs_index.cmp(rhs_index) {
            Ordering::Less => rhs = *idoms.get(&rhs).unwrap(),
            Ordering::Greater => lhs = *idoms.get(&lhs).unwrap(),
            Ordering::Equal => panic!("intersect_idom: lhs == rhs cannot happen"),
        }
    }
}

pub(crate) fn replace_operands(
    operand: &mut Operand,
    replaces: &HashMap<RegisterId, Operand>,
) -> bool {
    /*
    주어진 operand -> rid 구하기
    replaces: rid에 해당하는 operand 구하기
    */
    if let Operand::Register { rid, dtype } = operand {
        if let Some(replacement) = replaces.get(rid) {
            *operand = replacement.clone();
            return true;
        }
    }
    false
    // todo!()
}

// pub(crate) fn walk(code: &mut FunctionDefinition, replaces: &HashMap<RegisterId, Operand>) {
//     for block in code.blocks.values_mut() {
//         // instructions
//         for instr in block.instructions.iter_mut() {
//             // let tmp = instr.deref_mut();
//             match instr.deref_mut() {
//                 Instruction::BinOp {
//                     op,
//                     lhs,
//                     rhs,
//                     dtype,
//                 } => {
//                     let _unused = replace_operands(lhs, replaces);
//                     let _unused = replace_operands(rhs, replaces);
//                 }
//                 Instruction::Store { ptr, value } => {
//                     let _unused = replace_operands(ptr, replaces);
//                     let _unused = replace_operands(value, replaces);
//                 }
//                 Instruction::Call {
//                     callee,
//                     args,
//                     return_type,
//                 } => {
//                     let _unused = replace_operands(callee, replaces);
//                     for arg in args {
//                         let _unused = replace_operands(arg, replaces);
//                     }
//                 }
//                 // Instruction::
//                 // 등등 모든 instruction variants 처리
//                 _ => {}
//             }
//         }

//         match &mut block.exit {
//             BlockExit::Return { value } => {
//                 let _unused = replace_operands(value, replaces);
//             }
//             BlockExit::ConditionalJump {
//                 condition,
//                 arg_then,
//                 arg_else,
//             } => {
//                 let _unused = replace_operands(condition, replaces);
//             }
//             _ => {}
//         }
//     }
// }

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
