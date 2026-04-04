use std::collections::{HashMap, HashSet};
use std::hash::Hash;
use std::io::empty;
use std::ops::Deref;

use itertools::izip;
use lang_c::ast::{ConditionalExpression, GnuAsmOperand};

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;

pub type SimplifyCfg = FunctionPass<
    Repeat<(
        SimplifyCfgConstProp,
        (SimplifyCfgReach, (SimplifyCfgMerge, SimplifyCfgEmpty)),
    )>,
>;

/// Simplifies block exits by propagating constants.
#[derive(Default, Clone, Copy, Debug)]
pub struct SimplifyCfgConstProp {}

/// Retains only those blocks that are reachable from the init.
#[derive(Default, Clone, Copy, Debug)]
pub struct SimplifyCfgReach {}

/// Merges two blocks if a block is pointed to only by another
#[derive(Default, Clone, Copy, Debug)]
pub struct SimplifyCfgMerge {}

/// Removes empty blocks
#[derive(Default, Clone, Copy, Debug)]
pub struct SimplifyCfgEmpty {}

impl Optimize<FunctionDefinition> for SimplifyCfgConstProp {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        code.blocks.iter_mut().any(|(_, block)| {
            if let Some(exit) = self.simplify_block_exit(&block.exit) {
                block.exit = exit;
                true
            } else {
                false
            }
        })

        // .map(|(_, block)| {
        //     if let Some(exit) = self.simplify_block_exit(&block.exit) {
        //         block.exit = exit;
        //         true
        //     } else {
        //         false
        //     }
        // })
        // .fold(false, |l, r| l || r)
        // todo!()
    }
}

impl Optimize<FunctionDefinition> for SimplifyCfgReach {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        let graph = make_cfg(code);
        // DFS
        /*
        bid -> vec<args -> arg.bid>
        */
        let mut queue = vec![code.bid_init];
        let mut visited = HashSet::new();
        let _unused = visited.insert(code.bid_init);
        while let Some(bid) = queue.pop() {
            if let Some(args) = graph.get(&bid) {
                for arg in args {
                    if visited.insert(arg.bid) {
                        queue.push(arg.bid);
                    }
                }
            }
        }
        let size_orig = code.blocks.len();
        code.blocks.retain(|bid, _| visited.contains(bid)); // shrink 
        code.blocks.len() < size_orig
        // todo!()
    }
}

impl Optimize<FunctionDefinition> for SimplifyCfgMerge {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        let graph: HashMap<BlockId, Vec<JumpArg>> = make_cfg(code);
        // debug_print!("SimplifyCfgMerge | optimize | graph {:#?}", graph.clone());
        // let reverse_graph = reverse_cfg(&graph.clone());
        let mut postorder = PostOrder {
            visited: HashSet::new(),
            cfg: &graph,
            traversed: vec![],
        };
        postorder.traverse(code.bid_init);

        /*
        b2(from) -> b3(to)

        post order를 사용해서 merge_targets 생성
        b1 -> b2 -> b3 일 때 b3, b2, b1 순으로

        merge(b2, b3) ->  b2
        merge(b1, b2)

        역순의 경우
        merge(b1, b2) -> b1
        merge(b2, b3) // 여기서 문제가 발생한다. b2가 사라졌으므로
        */

        // 1. 블록으로 들어오는 점프 수 계산
        let mut indegrees: HashMap<BlockId, i32> = HashMap::new();
        for args in graph.values() {
            for arg in args {
                *indegrees.entry(arg.bid).or_insert(0) += 1;
            }
        }

        let mut result = false;
        let mut merge_targets = vec![];

        // 2. merge 대상 블록 추출 (불변 참조)
        // for (bid_from, block_from) in &code.blocks {
        //     if let BlockExit::Jump { arg } = &block_from.exit {
        //         if *bid_from != arg.bid && indegrees.get(&arg.bid) == Some(&1) {
        //             merge_targets.push((*bid_from, arg.bid, arg.args.clone()));
        //         }
        //     }
        // }

        for bid_from in &postorder.traversed {
            let block_from = code.blocks.get(bid_from).unwrap();
            if let BlockExit::Jump { arg } = &block_from.exit {
                if *bid_from != arg.bid && indegrees.get(&arg.bid) == Some(&1) {
                    merge_targets.push((*bid_from, arg.bid, arg.args.clone())); // arg.bid는 jump 이후 blockId
                }
            }
        }

        // 3. 수정 단계 (가변 참조, borrow 충돌 없음)
        for (bid_from, bid_to, args_to) in merge_targets {
            // block_to를 먼저 제거해서 mutable borrow 1개만 유지
            let block_to = code.blocks.remove(&bid_to).unwrap();

            // 그 후 block_from을 가변 참조
            let block_from = code.blocks.get_mut(&bid_from).unwrap();

            let mut replaces = HashMap::new();

            // phi node operand 치환 정보 수집
            for (i, (a, p)) in izip!(&args_to, block_to.phinodes.iter()).enumerate() {
                assert_eq!(&a.dtype(), p.deref());
                let old_rid = RegisterId::arg(bid_to, i); // #rid 제작하기, phinod -> rid::arg
                let _unused = replaces.insert(old_rid, a.clone());
            }

            // instruction 이동
            let len = block_from.instructions.len();
            for (i, instr) in block_to.instructions.into_iter().enumerate() {
                let dtype = instr.dtype();
                block_from.instructions.push(instr);
                let old_rid = RegisterId::temp(bid_to, i); // new inserted instr, but old rid
                let to = Operand::register(RegisterId::temp(bid_from, len + i), dtype.clone());
                let _unused = replaces.insert(old_rid, to);
            }

            // Move block exit // change the exit
            block_from.exit = block_to.exit;

            // debug_print!("SimplifyCfgMerge | optimize\n");
            // debug_print!("code {:?}\n", code.clone());

            // debug_print!("replaces {:?}\n\n", replaces.clone());

            // Replaces removed registers
            let _ = code.walk(|operand| replace_operands(operand, &replaces));
            // walk(code, &replaces);

            result = true;
        }

        result
    }
    // fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
    //     let graph = make_cfg(code);

    //     let mut indegrees = HashMap::new();
    //     for args in graph.values() {
    //         for arg in args {
    //             *indegrees.entry(arg.bid).or_insert(0) += 1;
    //         }
    //     }

    //     let mut result = false;
    //     for (bid_from, block_from) in
    //         unsafe {
    //             &mut *(&mut code.blocks as *mut HashMap<BlockId, Block>)
    //         }
    //     {
    //         if let BlockExit::Jump { arg } = &block_from.exit {
    //             if *bid_from != arg.bid && indegrees.get(&arg.bid) == Some(&1) {
    //                 let block_to = code.blocks.remove(&arg.bid).unwrap();
    //                 let bid_to = arg.bid;
    //                 let args_to = arg.args.clone();
    //                 let mut replaces = HashMap::new();

    //                 //Gathers phinode replacement information,
    //                 for (i, (a, p)) in izip!(&args_to, block_to.phinodes.iter()).enumerate() {
    //                     assert_eq!(&a.dtype(), p.deref());
    //                     let from = RegisterId::arg(bid_to, i);
    //                     replaces.insert(from, a.clone());
    //                 }

    //                 //Moves instructions
    //                 let len = block_from.instructions.len();
    //                 for (i, instr) in block_to.instructions.into_iter().enumerate() {
    //                     let dtype = instr.dtype();
    //                     block_from.instructions.push(instr);
    //                     let from = RegisterId::temp(arg.bid, i);
    //                     let to = Operand::register(RegisterId::temp(*bid_from, len+i), dtype.clone());
    //                     replaces.insert(from, to);
    //                 }

    //                 // Moves block exit
    //                 block_from.exit = block_to.exit;

    //                 // Replaces removed registers
    //                 // let _ = code.walk(|operand| replace_operands(operand, &replaces));
    //                 result = true;
    //             }
    //         }
    //     }
    //     result
    //     // todo!()
    // }
}

impl Optimize<FunctionDefinition> for SimplifyCfgEmpty {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        let empty_blocks = code
            .blocks
            .iter()
            .filter(|(_, block)| block.phinodes.is_empty() && block.instructions.is_empty())
            .map(|(bid, block)| (*bid, block.clone()))
            .collect::<HashMap<_, _>>();

        code.blocks
            .iter_mut()
            .any(|(_, block)| self.simplify_block_exit(&mut block.exit, &empty_blocks))
        // .map(|(_, block)| self.simplify_block_exit(&mut block.exit, &empty_blocks))
        // .fold(false, |l, r| l || r)
        // todo!()
    }
}

impl SimplifyCfgConstProp {
    fn simplify_block_exit(&self, exit: &BlockExit) -> Option<BlockExit> {
        match exit {
            BlockExit::ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => {
                if arg_then == arg_else {
                    /* same branch */
                    return Some(BlockExit::Jump {
                        arg: arg_then.clone(),
                    });
                    // todo!()
                }

                if let Some(c) = condition.get_constant() {
                    match c {
                        Constant::Int { value: 0, .. } => {
                            /* false branch */
                            return Some(BlockExit::Jump {
                                arg: arg_else.clone(),
                            });
                        }
                        Constant::Int { value: 1, .. } => {
                            /* true branch */
                            return Some(BlockExit::Jump {
                                arg: arg_then.clone(),
                            });
                        }
                        _ => {}
                    }
                }
                None
            }
            BlockExit::Switch {
                value,
                default,
                cases,
            } => {
                if cases.iter().all(|(_, bid)| default == bid) {
                    return Some(BlockExit::Jump {
                        arg: default.clone(),
                    });
                }

                if let Some(v) = value.get_constant() {
                    return Some(BlockExit::Jump {
                        arg: if let Some((_, arg)) = cases.iter().find(|(c, _)| v == c) {
                            arg.clone()
                        } else {
                            default.clone()
                            // todo!()
                        },
                    });
                }
                None
            }
            _ => None,
        }
        // todo!()
    }
}

macro_rules! some_or {
    ($option:expr, $fallback:expr) => {
        match $option {
            Some(val) => val,
            None => $fallback,
        }
    };
}

impl SimplifyCfgEmpty {
    fn simplify_jump_arg(&self, arg: &mut JumpArg, empty_blocks: &HashMap<BlockId, Block>) -> bool {
        /*
        block을 지우는 것이 다음 block의 blockexit을 미리 앞으로 가지고 오는 것
        */
        let block = some_or!(empty_blocks.get(&arg.bid), return false);

        // An empty block has no phinodes; stale args are dropped by the redirect below
        if let BlockExit::Jump { arg: a } = &block.exit {
            *arg = a.clone();
            true
        } else {
            false
        }
        // todo!()
    }
    fn simplify_block_exit(
        &self,
        exit: &mut BlockExit,
        empty_blocks: &HashMap<BlockId, Block>,
    ) -> bool {
        match exit {
            BlockExit::Jump { arg } => {
                let block = some_or!(empty_blocks.get(&arg.bid), return false);
                *exit = block.exit.clone();
                true
            }
            BlockExit::ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => {
                let changed1 = self.simplify_jump_arg(arg_then, empty_blocks);
                let changed2 = self.simplify_jump_arg(arg_else, empty_blocks);
                changed1 || changed2
            }
            BlockExit::Switch {
                value,
                default,
                cases,
            } => {
                let changed1 = self.simplify_jump_arg(default, empty_blocks);
                let changed2 = cases
                    .iter_mut()
                    .map(|c| self.simplify_jump_arg(&mut c.1, empty_blocks))
                    .fold(false, |l, r| l | r);
                changed1 || changed2
            }
            BlockExit::Return { .. } | BlockExit::Unreachable => false,
        }
        // todo!()
    }
}
