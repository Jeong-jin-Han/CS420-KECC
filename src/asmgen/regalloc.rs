//! Linear-scan register allocator for KECC asmgen.
//!
//! # Algorithm
//! 1. Backward dataflow liveness analysis (live_in / live_out per block).
//! 2. For each SSA register compute a live interval [start_rpo, end_rpo].
//! 3. Linear scan over intervals sorted by start: assign first free callee-saved
//!    physical register; leave unassigned (spill to stack slot) when none free.
//! 4. Return the allocation map + the callee-saved regs actually used so the
//!    prologue/epilogue can save/restore exactly those.

use std::collections::{HashMap, HashSet};
use std::ops::Deref;

use crate::asm;
use crate::ir::{self, BlockId, Dtype, HasDtype, Instruction, Operand, RegisterId};
use crate::opt::opt_utils::{make_cfg, reverse_cfg};

// ── Physical registers available for allocation ───────────────────────────────
// Callee-saved only: safe across function calls, no need to spill around `call`.
// s0 = frame pointer, s1 = saved in prologue on call_flag → start at s2.

pub(crate) const ALLOC_INT_REGS: &[asm::Register] = &[
    asm::Register::S2,
    asm::Register::S3,
    asm::Register::S4,
    asm::Register::S5,
    asm::Register::S6,
    asm::Register::S7,
    asm::Register::S8,
    asm::Register::S9,
    asm::Register::S10,
    asm::Register::S11,
];

// Callee-saved float regs.
const ALLOC_FLOAT_CALLEE: &[asm::Register] = &[
    asm::Register::FS0,
    asm::Register::FS1,
    asm::Register::FS2,
    asm::Register::FS3,
    asm::Register::FS4,
    asm::Register::FS5,
    asm::Register::FS6,
    asm::Register::FS7,
    asm::Register::FS8,
    asm::Register::FS9,
    asm::Register::FS10,
    asm::Register::FS11,
];

// Caller-saved float regs safe for allocation when the function has no calls.
// ft0-ft3 are used as scratch regs by the instruction translators, so skip them.
const ALLOC_FLOAT_CALLER: &[asm::Register] = &[
    asm::Register::FT4,
    asm::Register::FT5,
    asm::Register::FT6,
    asm::Register::FT7,
    asm::Register::FT8,
    asm::Register::FT9,
    asm::Register::FT10,
    asm::Register::FT11,
];

pub(crate) const ALLOC_FLOAT_REGS: &[asm::Register] = ALLOC_FLOAT_CALLEE;

// ── Result ────────────────────────────────────────────────────────────────────

pub(crate) struct AllocResult {
    /// SSA register → physical register.  Registers absent from this map use a stack slot.
    pub(crate) alloc: HashMap<RegisterId, asm::Register>,
    /// Callee-saved registers actually assigned (need save/restore in prologue/epilogue).
    pub(crate) used_callee_saved: Vec<asm::Register>,
}

// ── Entry point ───────────────────────────────────────────────────────────────

pub(crate) fn allocate(func: &ir::FunctionDefinition) -> AllocResult {
    let cfg = make_cfg(func);
    let rev = reverse_cfg(&cfg);

    // RPO traversal
    let rpo = rpo_order(func.bid_init, &cfg);
    let rpo_idx: HashMap<BlockId, usize> = rpo.iter().enumerate().map(|(i, &b)| (b, i)).collect();

    // ── 1. Liveness ───────────────────────────────────────────────────────────
    let (live_in, _live_out) = compute_liveness(func, &rpo, &cfg);

    // ── 2. Live intervals [start_rpo, end_rpo] ────────────────────────────────
    // We extend each register's interval to cover all blocks it appears in.
    let mut intervals: HashMap<RegisterId, (usize, usize, bool)> = HashMap::new();

    let mut touch = |rid: RegisterId, idx: usize, is_float: bool| {
        let e = intervals.entry(rid).or_insert((idx, idx, is_float));
        if idx < e.0 {
            e.0 = idx;
        }
        if idx > e.1 {
            e.1 = idx;
        }
    };

    for (&bid, block) in &func.blocks {
        let idx = match rpo_idx.get(&bid) {
            Some(&i) => i,
            None => continue,
        };

        // Phi results (Arg registers) defined at this block
        for (aid, phi) in block.phinodes.iter().enumerate() {
            let is_float = matches!(phi.deref(), Dtype::Float { .. });
            touch(RegisterId::arg(bid, aid), idx, is_float);
        }

        // Instruction results (Temp registers)
        for (iid, instr) in block.instructions.iter().enumerate() {
            let dtype = instr.deref().dtype();
            let is_float = matches!(dtype, Dtype::Float { .. });
            touch(RegisterId::temp(bid, iid), idx, is_float);
        }

        // Extend intervals of registers live-in to cover this block
        if let Some(set) = live_in.get(&bid) {
            for &rid in set {
                touch(rid, idx, is_float_rid(rid, func));
            }
        }
    }

    // ── 3. Linear scan ────────────────────────────────────────────────────────
    // When the function has no Call instructions, caller-saved float regs are also
    // safe — nothing will clobber them.  This doubles the float allocation pool for
    // float-heavy functions like float2 (27 live floats → spills 7 instead of 15).
    let func_has_calls = func.blocks.values().any(|b| {
        b.instructions
            .iter()
            .any(|i| matches!(i.deref(), Instruction::Call { .. }))
    });

    let mut int_free: Vec<asm::Register> = ALLOC_INT_REGS.to_vec();
    let mut float_free: Vec<asm::Register> = if func_has_calls {
        ALLOC_FLOAT_CALLEE.to_vec()
    } else {
        // callee-saved first (preferred: no save/restore needed), then caller-saved
        let mut v = ALLOC_FLOAT_CALLEE.to_vec();
        v.extend_from_slice(ALLOC_FLOAT_CALLER);
        v
    };

    // active: (end_rpo, rid, phys)  kept sorted by end
    let mut active_int: Vec<(usize, RegisterId, asm::Register)> = Vec::new();
    let mut active_float: Vec<(usize, RegisterId, asm::Register)> = Vec::new();

    let mut sorted: Vec<(RegisterId, usize, usize, bool)> = intervals
        .iter()
        .filter_map(|(&rid, &(start, end, is_float))| match rid {
            RegisterId::Temp { .. } => {
                // Only allocate to physical regs if the type is a full 64-bit int/pointer,
                // a 32-bit int, or a float.  Narrow integers (u8, i8, u16, i16, u1) keep
                // their stack slots to preserve the truncation semantics that sb/lb provides.
                if !is_float && !is_wide_int_rid(rid, func) {
                    return None;
                }
                Some((rid, start, end, is_float))
            }
            // Arg registers are phi-node destinations.  They are always written by the
            // phi-move machinery (which uses stack slots), so they must stay on the stack.
            RegisterId::Arg { .. } | RegisterId::Local { .. } => None,
        })
        .collect();
    sorted.sort_by_key(|&(_, start, _, _)| start);

    let mut alloc: HashMap<RegisterId, asm::Register> = HashMap::new();

    for (rid, start, end, is_float) in sorted {
        // Expire intervals that ended strictly before this one starts
        if is_float {
            expire(&mut active_float, start, &mut float_free);
        } else {
            expire(&mut active_int, start, &mut int_free);
        }

        let (free_pool, active_pool) = if is_float {
            (&mut float_free, &mut active_float)
        } else {
            (&mut int_free, &mut active_int)
        };

        if let Some(phys) = free_pool.pop() {
            let _unused = alloc.insert(rid, phys);
            active_pool.push((end, rid, phys));
            active_pool.sort_by_key(|&(e, _, _)| e);
        }
        // else: spill — leave unassigned → falls back to stack slot
    }

    // Collect only callee-saved regs actually used (those need save/restore in prologue).
    // Caller-saved regs assigned to call-free functions don't need prologue save/restore.
    let callee_saved_set: HashSet<asm::Register> = ALLOC_INT_REGS
        .iter()
        .chain(ALLOC_FLOAT_CALLEE.iter())
        .copied()
        .collect();
    let mut used_set: HashSet<asm::Register> = HashSet::new();
    for &phys in alloc.values() {
        if callee_saved_set.contains(&phys) {
            let _unused = used_set.insert(phys);
        }
    }
    let mut used_callee_saved: Vec<asm::Register> = used_set.into_iter().collect();
    used_callee_saved.sort_by_key(|r| format!("{r}"));

    AllocResult {
        alloc,
        used_callee_saved,
    }
}

// ── Helpers ───────────────────────────────────────────────────────────────────

fn expire(
    active: &mut Vec<(usize, RegisterId, asm::Register)>,
    current_start: usize,
    free: &mut Vec<asm::Register>,
) {
    let mut i = 0;
    while i < active.len() {
        if active[i].0 < current_start {
            free.push(active[i].2);
            let _unused = active.remove(i);
        } else {
            i += 1;
        }
    }
}

/// Returns true if the SSA register holds a type that is safe to keep in a 64-bit
/// physical register without extra masking: i64, u64, i32, u32, pointers.
/// Narrow types (u1, i8, u8, i16, u16) keep stack-slot semantics.
fn is_wide_int_rid(rid: RegisterId, func: &ir::FunctionDefinition) -> bool {
    let dtype = match rid {
        RegisterId::Arg { bid, aid } => func
            .blocks
            .get(&bid)
            .and_then(|b| b.phinodes.get(aid))
            .map(|phi| phi.deref().clone()),
        RegisterId::Temp { bid, iid } => func
            .blocks
            .get(&bid)
            .and_then(|b| b.instructions.get(iid))
            .map(|instr| instr.deref().dtype()),
        _ => return false,
    };
    match dtype {
        Some(Dtype::Int { width, .. }) => width >= 32,
        Some(Dtype::Pointer { .. }) => true,
        _ => false,
    }
}

fn is_float_rid(rid: RegisterId, func: &ir::FunctionDefinition) -> bool {
    match rid {
        RegisterId::Arg { bid, aid } => {
            if let Some(block) = func.blocks.get(&bid) {
                if let Some(phi) = block.phinodes.get(aid) {
                    return matches!(phi.deref(), Dtype::Float { .. });
                }
            }
            false
        }
        RegisterId::Temp { bid, iid } => {
            if let Some(block) = func.blocks.get(&bid) {
                if let Some(instr) = block.instructions.get(iid) {
                    return matches!(instr.deref().dtype(), Dtype::Float { .. });
                }
            }
            false
        }
        _ => false,
    }
}

/// Simple RPO traversal.
fn rpo_order(entry: BlockId, cfg: &HashMap<BlockId, Vec<ir::JumpArg>>) -> Vec<BlockId> {
    let mut visited: HashSet<BlockId> = HashSet::new();
    let mut post: Vec<BlockId> = Vec::new();
    dfs(entry, cfg, &mut visited, &mut post);
    post.reverse();
    post
}

fn dfs(
    bid: BlockId,
    cfg: &HashMap<BlockId, Vec<ir::JumpArg>>,
    visited: &mut HashSet<BlockId>,
    post: &mut Vec<BlockId>,
) {
    if !visited.insert(bid) {
        return;
    }
    if let Some(succs) = cfg.get(&bid) {
        for jump in succs {
            dfs(jump.bid, cfg, visited, post);
        }
    }
    post.push(bid);
}

// ── Liveness analysis ─────────────────────────────────────────────────────────

/// Standard backward dataflow: live_in[B] = use[B] ∪ (live_out[B] \ def[B])
/// live_out[B] = ∪_{S ∈ succ(B)} live_in[S]
///
/// Only tracks Temp and Arg registers (not Local address registers).
pub(crate) fn compute_liveness(
    func: &ir::FunctionDefinition,
    rpo: &[BlockId],
    cfg: &HashMap<BlockId, Vec<ir::JumpArg>>,
) -> (
    HashMap<BlockId, HashSet<RegisterId>>,
    HashMap<BlockId, HashSet<RegisterId>>,
) {
    let mut live_in: HashMap<BlockId, HashSet<RegisterId>> =
        rpo.iter().map(|&b| (b, HashSet::new())).collect();
    let mut live_out: HashMap<BlockId, HashSet<RegisterId>> =
        rpo.iter().map(|&b| (b, HashSet::new())).collect();

    let mut changed = true;
    while changed {
        changed = false;
        // Process reverse RPO (backwards) for faster convergence
        for &bid in rpo.iter().rev() {
            let block = func.blocks.get(&bid).unwrap();

            // live_out[B] = ∪ live_in[S]
            let mut new_lo: HashSet<RegisterId> = HashSet::new();
            if let Some(succs) = cfg.get(&bid) {
                for jarg in succs {
                    if let Some(s_li) = live_in.get(&jarg.bid) {
                        new_lo.extend(s_li.iter().copied());
                    }
                    // Phi args used at end of B (they feed the successor's phinodes)
                    for op in &jarg.args {
                        if let Operand::Register { rid, .. } = op {
                            if matches!(rid, RegisterId::Temp { .. } | RegisterId::Arg { .. }) {
                                let _unused = new_lo.insert(*rid);
                            }
                        }
                    }
                }
            }

            // Compute def[B] and use[B] for this block
            let mut def: HashSet<RegisterId> = HashSet::new();
            let mut use_set: HashSet<RegisterId> = HashSet::new();

            // Phi results are defs
            for aid in 0..block.phinodes.len() {
                let _unused = def.insert(RegisterId::arg(bid, aid));
            }

            // Instructions (forward scan for use-before-def)
            for (iid, instr) in block.instructions.iter().enumerate() {
                // Uses
                for op in instr_operands(instr.deref()) {
                    if let Operand::Register { rid, .. } = op {
                        if matches!(rid, RegisterId::Temp { .. } | RegisterId::Arg { .. })
                            && !def.contains(&rid)
                        {
                            let _unused = use_set.insert(rid);
                        }
                    }
                }
                // Def
                let _unused = def.insert(RegisterId::temp(bid, iid));
            }

            // Exit uses
            for op in exit_operands(&block.exit) {
                if let Operand::Register { rid, .. } = op {
                    if matches!(rid, RegisterId::Temp { .. } | RegisterId::Arg { .. })
                        && !def.contains(&rid)
                    {
                        let _unused = use_set.insert(rid);
                    }
                }
            }

            // live_in[B] = use[B] ∪ (live_out[B] \ def[B])
            let mut new_li = use_set;
            for &r in &new_lo {
                if !def.contains(&r) {
                    let _unused = new_li.insert(r);
                }
            }

            if new_li != *live_in.get(&bid).unwrap() || new_lo != *live_out.get(&bid).unwrap() {
                changed = true;
                *live_in.get_mut(&bid).unwrap() = new_li;
                *live_out.get_mut(&bid).unwrap() = new_lo;
            }
        }
    }

    (live_in, live_out)
}

/// Collect all register operands used by an instruction.
fn instr_operands(instr: &Instruction) -> Vec<Operand> {
    match instr {
        Instruction::Nop => vec![],
        Instruction::Value { value } => vec![value.clone()],
        Instruction::BinOp { lhs, rhs, .. } => vec![lhs.clone(), rhs.clone()],
        Instruction::UnaryOp { operand, .. } => vec![operand.clone()],
        Instruction::Store { ptr, value } => vec![ptr.clone(), value.clone()],
        Instruction::Load { ptr } => vec![ptr.clone()],
        Instruction::Call { callee, args, .. } => {
            let mut v = vec![callee.clone()];
            v.extend(args.iter().cloned());
            v
        }
        Instruction::TypeCast { value, .. } => vec![value.clone()],
        Instruction::GetElementPtr { ptr, offset, .. } => vec![ptr.clone(), offset.clone()],
    }
}

/// Collect all register operands used in a block exit (excluding jump args, which
/// are handled separately in the liveness computation above).
fn exit_operands(exit: &ir::BlockExit) -> Vec<Operand> {
    match exit {
        ir::BlockExit::Jump { .. } => vec![],
        ir::BlockExit::ConditionalJump { condition, .. } => vec![condition.clone()],
        ir::BlockExit::Switch { value, .. } => vec![value.clone()],
        ir::BlockExit::Return { value } => vec![value.clone()],
        ir::BlockExit::Unreachable => vec![],
    }
}
