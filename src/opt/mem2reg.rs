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

fn mark_inpromotable(inpromotable: &mut HashSet<usize>, operand: &Operand) {
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
        println!("=== OperandVar lookup ===");
        println!("phinode_indexes keys: {:?}", phinode_indexes.keys());
        match self {
            OperandVar::Operand(o) => o.clone(),
            OperandVar::Phi(var) => {
                println!("LOOKUP PHI {:?} → {:?}", var, phinode_indexes.get(var));
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
#[derive(Debug)]
struct JoinTable<'s> {
    inner: HashMap<(usize, BlockId), BlockId>,
    domtree: &'s Domtree,
    joins: &'s HashSet<(usize, BlockId)>,
}

impl<'s> JoinTable<'s> {
    pub(crate) fn new(domtree: &'s Domtree, joins: &'s HashSet<(usize, BlockId)>) -> Self {
        // Maybe joins ->
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
            bid = some_or!(self.domtree.idom(bid), break bid);
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
                    Instruction::BinOp { lhs, rhs, .. } => {
                        mark_inpromotable(&mut inpromotable, lhs);
                        mark_inpromotable(&mut inpromotable, rhs);
                    }
                    Instruction::UnaryOp { operand, .. } => {
                        mark_inpromotable(&mut inpromotable, operand)
                    }
                    Instruction::Store { ptr, value } => {
                        mark_inpromotable(&mut inpromotable, value);
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid {
                            // 해당 aid를 갖고 있는 bid 저장
                            // stores.entry(*aid).or_insert_with(Vec::new).push(*bid);
                            stores.entry(*aid).or_default().push(*bid);
                        }
                    }
                    Instruction::Load { ptr } => {}
                    Instruction::Call { callee, args, .. } => {
                        mark_inpromotable(&mut inpromotable, callee);
                        for arg in args {
                            mark_inpromotable(&mut inpromotable, arg);
                        }
                    }
                    Instruction::TypeCast {
                        value,
                        target_dtype,
                    } => {
                        mark_inpromotable(&mut inpromotable, value);
                    }
                    Instruction::Value { value } => {
                        mark_inpromotable(&mut inpromotable, value); // maybe??
                    }
                    Instruction::GetElementPtr { ptr, offset, dtype } => {
                        mark_inpromotable(&mut inpromotable, ptr);
                    }
                    _ => todo!(), // Instruction::GetElementPtr
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

        println!("stores: {:?}", stores);

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
                            if visited.insert(bid_froniter) {
                                // maybe
                                stack.push(bid_froniter); // maybe
                            }
                        }
                    }
                    visited
                })
            })
            .collect();
        for (aid, bids) in &joins {
            println!("JOINS: ({:?}, {:?})", aid, bids);
        }

        let flatten_joins: HashSet<(usize, BlockId)> = joins
            .iter()
            .flat_map(|(aid, bids)| bids.iter().map(move |bid| (*aid, *bid)))
            .collect();
        for (aid, bid) in &flatten_joins {
            println!("FLATTEN JOIN: ({:?}, {:?})", aid, bid);
        }

        // Table for the nearest join block according to the dominator tree.
        let mut join_table = JoinTable::new(&domtree, &flatten_joins);

        // Replacement dictionary
        let mut replaces = HashMap::<RegisterId, OperandVar>::new();

        // Phinodes to be inserted. If '(aid, bid)' is in this set, then a phinod for 'aid' should
        // be inserted at the beginning of 'bid'
        let mut phinode_indexes = HashSet::<(usize, BlockId)>::new();

        // The values stored in local allocations at the end of each block. If '(aid, bid) |-> x',
        // Then the value stored in 'aid' at the end of 'bid' is 'X'.
        let mut end_values = HashMap::<(usize, BlockId), OperandVar>::new();

        for (bid, block) in &code.blocks {
            for (i, instr) in block.instructions.iter().enumerate() {
                match instr.deref() {
                    Instruction::Store { ptr, value } => {
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid {
                            if inpromotable.contains(aid) {
                                println!("? | Store | continue | bid {:?}", bid);
                                continue;
                            }
                            println!("? | Store | bid {:?}", bid);

                            let _unused =
                                end_values.insert((*aid, *bid), OperandVar::Operand(value.clone()));

                            // 불필요한 phinode도 추가해주어야 함
                            // 추가: store에서도 join block 후보에 phinode 추가
                            let bid_join = join_table.lookup(*aid, *bid);
                            let _ = phinode_indexes.insert((*aid, bid_join));
                        }
                    }
                    Instruction::Load { ptr } => {
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid {
                            if inpromotable.contains(aid) {
                                continue;
                            }
                            let bid_join = join_table.lookup(*aid, *bid); // 여기서 문제가 생기는 것 같음
                            println!(
                                "? | Load instruction | bid_join {:?} (aid, bid) {:?}",
                                bid_join,
                                (aid, bid)
                            );
                            let end_value_join = end_values.get(&(*aid, bid_join)).cloned();
                            let var = end_values.entry((*aid, *bid)).or_insert_with(|| {
                                end_value_join.unwrap_or_else(|| {
                                    let _unused = phinode_indexes.insert((*aid, bid_join));
                                    OperandVar::Phi((*aid, bid_join))
                                })
                            });
                            let register_id = RegisterId::temp(*bid, i);
                            let operand_var = var.clone();
                            let result = replaces.insert(register_id, operand_var.clone());
                            println!("INSERT replace: {:?} => {:?}", register_id, operand_var);

                            assert_eq!(result, None);
                        }
                    }
                    _ => {}
                }
            }
        }
        println!(
            "GENERATE phinodes recursively | before| phinode_indexes {:?}",
            phinode_indexes
        );

        println!(
            "GENERATE phinodes recursively | before| join_table {:?}",
            join_table
        );

        // Generates phinodes recursively.
        let mut phinode_visited = phinode_indexes;
        let mut phinode_stack = phinode_visited.iter().cloned().collect::<Vec<_>>();
        let mut phinodes =
            BTreeMap::<(usize, BlockId), (Dtype, HashMap<BlockId, OperandVar>)>::new();
        while let Some((aid, bid)) = phinode_stack.pop() {
            let mut cases = HashMap::new();
            let prevs = some_or!(reverse_cfg.get(&bid), continue);
            for (bid_prev, _) in prevs {
                let bid_prev_join = join_table.lookup(aid, bid_prev);
                let end_value_prev_join = end_values.get(&(aid, bid_prev_join)).cloned();
                let var = end_values.entry((aid, bid_prev)).or_insert_with(|| {
                    end_value_prev_join.unwrap_or_else(|| {
                        if phinode_visited.insert((aid, bid_prev_join)) {
                            phinode_stack.push((aid, bid_prev_join));
                        }
                        OperandVar::Phi((aid, bid_prev_join))
                    })
                });
                let _unused = cases.insert(bid_prev, var.clone());
            }

            let _unused = phinodes.insert(
                (aid, bid),
                (code.allocations.get(aid).unwrap().deref().clone(), cases),
            );
        }

        // The phinode indexes for promoted allocations in each block
        let mut phinode_indexes = HashMap::<(usize, BlockId), usize>::new();

        println!("INSERT phinodes | before {:?}", phinodes); // phinodes를 누락함 -> 왜 누락했을까?
        // Inserts phinodes.
        for ((aid, bid), (dtype, _)) in &phinodes {
            let name = code.allocations.get(*aid).unwrap().name();
            let block = code.blocks.get_mut(bid).unwrap();
            let index = block.phinodes.len();
            println!("INSERT phinodes | before | {:?}", block.phinodes.clone());
            block
                .phinodes
                .push(Named::new(name.cloned(), dtype.clone()));
            println!("INSERT phinodes | after | {:?}", block.phinodes.clone());
            let _unused = phinode_indexes.insert((*aid, *bid), index);
            println!("INSERT PHINODE {:?} → {:?}", (aid, bid), index);
        }

        // Inserts phinode arguments
        for ((aid, bid), (dtype, phinode)) in &phinodes {
            let index = *phinode_indexes.get(&(*aid, *bid)).unwrap();
            for (bid_prev, operand_prev) in phinode {
                let block_prev = code.blocks.get_mut(bid_prev).unwrap();
                let operand_prev = operand_prev.lookup(dtype, &phinode_indexes);
                block_prev.exit.walk_jump_args(|arg| {
                    if &arg.bid == bid {
                        assert_eq!(arg.args.len(), index);
                        arg.args.push(operand_prev.clone());
                    }
                });
            }
        }

        println!("Before walk | code {:?}", code);
        println!("Before walk | replaces {:?}", replaces);
        // Replaces the values loaded from promotable allocations
        // let _unused = code.walk(|operand| {
        //     println!("Test WALK {:?}", operand.clone());
        //     true
        // });

        // walk 는 정상
        let _unused = code.walk(|operand| {
            println!("WALK | operand {:?} ", operand.clone());
            let (rid, dtype) = some_or!(operand.get_register(), return false);
            // // println!("WALK | (rid, dtype) {:?}", (rid, dtype));
            // // println!("WALK | replaces {:?}", replaces);
            let tmp = replaces.get(rid);
            println!("WALK | tmp {:?}", tmp.clone());
            let operand_var = some_or!(tmp, return false);
            // // println!("WALK | {:?} → {:?}", operand.clone(), operand_var.clone());
            let tmp = operand_var.lookup(dtype, &phinode_indexes);
            // // println!("WALK | lookup result: {:?}", tmp);
            *operand = tmp.clone();
            true
        });

        // Removes store/load instructions
        for block in code.blocks.values_mut() {
            for instr in block.instructions.iter_mut() {
                match instr.deref().deref() {
                    Instruction::Store { ptr, .. } => {
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid {
                            if !inpromotable.contains(aid) {
                                *instr.deref_mut() = Instruction::Nop;
                            }
                        }
                    }
                    Instruction::Load { ptr } => {
                        let (rid, _) = some_or!(ptr.get_register(), continue);
                        if let RegisterId::Local { aid } = rid {
                            if !inpromotable.contains(aid) {
                                *instr.deref_mut() = Instruction::Nop;
                            }
                        }
                    }
                    _ => {}
                }
            }
        }
        true
        // todo!()
    }
}
