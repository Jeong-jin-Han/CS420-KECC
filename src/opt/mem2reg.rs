use core::ops::{Deref, DerefMut};
use std::collections::{BTreeMap, HashMap, HashSet};

use itertools::rev;

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;

pub type Mem2reg = FunctionPass<Mem2regInner>;

#[derive(Default, Clone, Copy, Debug)]
pub struct Mem2regInner {}

macro_rules! some_or {
    ($option:expr, $fallback:expr) => {
        match $option {
            Some(val) => val.clone(),
            None => $fallback,
        }
    };
}

fn mark_inpromotable(inpromotable:&mut HashSet<usize>, operand:&Operand) {
    if let Some((RegisterId::Local { aid }, _)) = operand.get_register() {
        let _unused = inpromotable.insert(*aid);
    }
}

#[derive(Debug, Clone, PartialEq)]
enum OperandVar {
    Operand(Operand),
    Phi((usize, BlockId)),
}

impl OperandVar {
    pub(crate) fn lookup(
        &self,
        dtype: &Dtype,
        phinode_indexes: &HashMap<(usize, BlockId), usize>,
    ) -> Operand {
        match self {
            OperandVar::Operand(o) => o.clone(),
            OperandVar::Phi(var) => {
                if let Some(index) = phinode_indexes.get(var) {
                    Operand::register(RegisterId::arg(var.1, *index), dtype.clone())
                } else {
                    Operand::constant(Constant::undef(dtype.clone()))
                }
            }
        }
        // todo!()
    }
}

struct JoinTable<'s> {
    inner: HashMap<(usize, BlockId), BlockId>,
    domtree: &'s Domtree,
    joins: &'s HashSet<(usize, BlockId)>,
}

impl<'s> JoinTable<'s> {
    pub(crate) fn new(domtree: &'s Domtree, joins: &'s HashSet<(usize, BlockId)>) -> Self { // Maybe joins -> 
        Self {
            inner: HashMap::new(),
            domtree,
            joins,
        }
    }

    pub(crate) fn lookup(&mut self, aid: usize, mut bid: BlockId) -> BlockId {
        let mut bids = Vec::new();
        let ret = loop {
            if let Some(ret) = self.inner.get(&(aid, bid)) {
                break *ret;
            }
            bids.push(bid);

            if self.joins.contains(&(aid, bid)) {
                break bid;
            }
            bid = some_or!(self.domtree.idoms.get(&bid), break bid);
        };
        for bid in bids {
            let _unused = self.inner.insert((aid, bid), ret);
        }
        ret
    }
}

impl Optimize<FunctionDefinition> for Mem2regInner {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        // Collects inpromotable local memroy allocations and stores.

        // A local allocation is promotable only if it is used only as the pointer of store/load
        // instructions
        let mut inpromotable = HashSet::<usize>::new();

        // Stores to each promotable local allocations
        let mut stores = HashMap::<usize, Vec<BlockId>>::new();

        for (bid, block) in &code.blocks {
            for instr in &block.instructions {
                match instr.deref() {
                    Instruction::Nop => {}
                    Instruction::BinOp { lhs, rhs, ..} => {
                        mark_inpromotable(&mut inpromotable, lhs);
                        mark_inpromotable(&mut inpromotable, rhs);
                    }
                    Instruction::UnaryOp { operand, .. } => {
                        mark_inpromotable(&mut inpromotable, operand)
                    }
                    Instruction::Store { ptr, value } => {
                        mark_inpromotable(&mut inpromotable, value);
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid { // 해당 aid를 갖고 있는 bid 저장
                            stores.entry(*aid).or_insert_with(Vec::new).push(*bid);
                        }
                    }
                    Instruction::Load { ptr } => {}
                    Instruction::Call { callee, args, ..} => {
                        mark_inpromotable(&mut inpromotable, callee);
                        for arg in args {
                            mark_inpromotable(&mut inpromotable, arg);
                        }
                    }
                    Instruction::TypeCast { value, target_dtype } => {
                        mark_inpromotable(&mut inpromotable, value);
                    }
                    Instruction::Value { value } => {
                        mark_inpromotable(&mut inpromotable, value); // maybe??
                    }
                    _ => todo!() // Instruction::GetElementPtr
                }
            }
        }
        
        // If no local allocations are promotable, bail out.
        if (0..code.allocations.len()).all(|i| inpromotable.contains(&i)) {
            return false;
        }

        // Draws CFG, reverse CFG and dominator trree.
        let cfg = make_cfg(code);
        let reverse_cfg = reverse_cfg(&cfg);
        let domtree = Domtree::new(code.bid_init, &cfg, &reverse_cfg);

        // B1 -> B2 in CFG
        // B2 -> B1 in reverse CFG

        // Calculate the join blocks with which a phinode may be inserted for each promotable location.
        let joins: HashMap<usize, HashSet<BlockId>> = stores
            .iter()
            .filter(|(aid, _)| !inpromotable.contains(*aid))
            .map(|(aid, bids)| {
                (*aid, {
                    let mut stack = bids.clone();
                    let mut visited = HashSet::new();
                    while let Some(bid) = stack.pop() {
                        let bid_frontiers = some_or!(domtree.frontiers(bid), continue);
                        for bid_froniter in bid_frontiers {
                            if visited.insert(bid_froniter) { // maybe
                                stack.push(bid_froniter); // maybe
                            }
                        }
                    }
                    visited
                })
            })
            .collect();
        
        let flatten_joins:HashSet<(usize, BlockId)> = joins
            .iter()
            .flat_map(|(aid, bids)| bids.iter().map(move |bid| (*aid, *bid)))
            .collect();

        // Table for the nearest join block according to the dominator tree.
        let mut join_table = JoinTable::new(&domtree, &flatten_joins);


        // Replacement dictionary
        let mut replaces = HashMap::<RegisterId, OperandVar>::new();

        todo!()
    }
}
