use core::ops::Deref;
use std::collections::{HashMap, HashSet};

use itertools::izip;
use lang_c::ast;

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;
use std::collections::BTreeMap;
pub type Gvn = FunctionPass<GvnInner>;

#[derive(Default, Clone, Copy, Debug)]
pub struct GvnInner {}

macro_rules! some_or {
    ($option:expr, $fallback:expr) => {
        match $option {
            Some(val) => val.clone(),
            None => $fallback,
        }
    };
}

// SSA 레지스터나 계산된 값
type ClassNum = u64;

struct GvnContext {
    rt: HashMap<Operand, ClassNum>, // SSA 레지스터 → classnum
    et: HashMap<ExprV, ClassNum>,   // 표현식 → classnum
    class_gen: ClassNumGen,
    lt_map: HashMap<BlockId, HashMap<ClassNum, OperandVar>>, // leader table
}

#[derive(Debug, Clone, PartialEq)]
enum OperandVar {
    Operand(Operand),
    Phi((ClassNum, BlockId)),
}

impl OperandVar {
    pub(crate) fn lookup(
        &self,
        dtype: &Dtype,
        phinode_indexes: &HashMap<(ClassNum, BlockId), usize>,
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

impl Optimize<FunctionDefinition> for GvnInner {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        /*
        RT : register -> num
        ET : Expr<num> -> num
        LT : (Line, Num) -> Operand
        */
        let mut ctx = GvnContext {
            rt: HashMap::new(),
            et: HashMap::new(),
            class_gen: ClassNumGen::new(),
            lt_map: HashMap::new(),
        };

        let mut changed = false;

        // Draws CFG, reverse CFG and dominator trree.
        let cfg = make_cfg(code);
        let reverse_cfg = reverse_cfg(&cfg);
        let domtree = Domtree::new(code.bid_init, &cfg, &reverse_cfg);
        println!("cfg {:?}", cfg);
        println!("reverse_cfg {:?}", reverse_cfg);

        for bid in &domtree.reverse_post_order {
            // 1. LT@B_init = LT@idom(B)_final
            let inherited_lt = domtree
                .idom(*bid)
                .and_then(|idom| ctx.lt_map.get(&idom))
                .cloned()
                .unwrap_or_default();

            let mut current_lt = inherited_lt;
            println!("bid {:?} | current LT {:?}", bid, current_lt);
            // 2. 각 명령어 처리
            for (instr_idx, instr) in code.blocks[bid].instructions.iter().enumerate() {
                println!();
                match instr.deref() {
                    Instruction::BinOp {
                        op,
                        lhs,
                        rhs,
                        dtype,
                    } => {
                        let lhs = operand_to_class(lhs, &mut ctx);
                        let rhs = operand_to_class(rhs, &mut ctx);

                        let expr = ExprV::BinOp {
                            op: op.clone(),
                            lhs,
                            rhs,
                            dtype: dtype.clone(),
                        };

                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::GetElementPtr { ptr, offset, dtype } => {
                        let ptr = operand_to_class(ptr, &mut ctx);
                        let offset = operand_to_class(offset, &mut ctx);

                        let expr = ExprV::GetElementPtr {
                            ptr,
                            offset,
                            dtype: dtype.clone(),
                        };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::Load { ptr } => {
                        let dtype = ptr.dtype();
                        let ptr = operand_to_class(ptr, &mut ctx);
                        let expr = ExprV::Load { ptr };
                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register { rid, dtype };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }
                    Instruction::Call {
                        callee,
                        args,
                        return_type,
                    } => {
                        let callee = operand_to_class(callee, &mut ctx);
                        let args = args
                            .iter()
                            .map(|arg| operand_to_class(arg, &mut ctx))
                            .collect::<Vec<_>>();
                        let expr = ExprV::Call {
                            callee,
                            args,
                            return_type: return_type.clone(),
                        };

                        let classnum = *ctx.et.entry(expr.clone()).or_insert_with(|| {
                            println!("ET new {:?} | ", expr.clone());
                            ctx.class_gen.fresh()
                        });
                        println!(
                            "bid : {:?} | classnum : {:?} | instr : {:?} ",
                            bid, instr, classnum
                        );

                        let rid = RegisterId::temp(*bid, instr_idx);
                        let operand = Operand::Register {
                            rid,
                            dtype: return_type.clone(),
                        };
                        let _unused = ctx.rt.insert(operand.clone(), classnum);

                        let operandvar = OperandVar::Operand(operand.clone()); // maybe??

                        // LT에 리더 없으면 등록
                        let _unused = current_lt.entry(classnum).or_insert_with(|| {
                            println!("LT new | classnum : {:?}", classnum); // 존재할 때는 실행 안 됨!
                            operandvar
                        });
                    }

                    _ => {} // 다른 명령어는 추후 확장
                }
                println!();
            }

            let _unused = ctx.lt_map.insert(*bid, current_lt);

            /*

            아래 코드는 mem2reg에서 사용한 join 구현
            내가 하고 싶은 것은 ctx.rt 를 이용, DF 이용

            DF의 교집합에서 해당 classnum, bid <- 중복되어서 들어오는 clas
            */

            /*
            phinodes를 어떻게 넣어주어야 할 것인가?
            Leader table management만 작성하면 됨
            */

            // make phinode_indexes based on classnumber existing in the pred LT

            /* inertion phinodes (replacement) */
            // (1) phinode_indexes (ClassNum, BlockId) -> argument는

            let mut phinodes = BTreeMap::<ClassNum, (Dtype, HashMap<BlockId, OperandVar>)>::new();
            // (2) LT phinode insert

            /* insertion declaration, arguments*/
            // (1) phinode_indexes

            // The phinode indexes for same classnum allocations in each block
            let phinode_indexes = HashMap::<(ClassNum, BlockId), usize>::new();

            // (2) insert phinode declaration
            for ((cn), (dtype, _)) in &phinodes {
                // let name = code.allocations.get(*aid).unwrap().name();
                // let block = code.blocks.get_mut(bid).unwrap();
                // let index = block.phinodes.len();
                // println!("INSERT phinodes | before | {:?}", block.phinodes.clone());
                // block
                //     .phinodes
                //     .push(Named::new(name.cloned(), dtype.clone()));
                // println!("INSERT phinodes | after | {:?}", block.phinodes.clone());
                // let _unused = phinode_indexes.insert((*aid, *bid), index);
                // println!("INSERT PHINODE {:?} → {:?}", (aid, bid), index);
            }

            // (3) insert phinode arguments

            let replaces = make_replaces_from_lt(&ctx, &phinode_indexes);

            changed |= code.walk(|op| {
                if let Some(replacement) = replaces.get(op) {
                    // println!("REPLACES | op : {:?} -> replacement : {:?}", op.clone(), replacement.clone());
                    *op = replacement.clone();
                    return true;
                }
                false
            });

            println!("========== bid | {} ==========", bid);
            println!("REPLACES | {:?}", replaces);
            println!("RT | {:?}", ctx.rt);
            println!("ET | {:?}", ctx.et);
            println!("LT | {:?}", ctx.lt_map);
            println!("===============================");
        }

        // changed를 규합해야 하는 로직
        changed
    }
}

fn operand_to_class(operand: &Operand, ctx: &mut GvnContext) -> ClassNumOrConst {
    match operand {
        Operand::Register { .. } => {
            let classnum = ctx
                .rt
                .entry(operand.clone())
                .or_insert_with(|| ctx.class_gen.fresh());
            ClassNumOrConst::ClassNum(*classnum)
        }
        Operand::Constant(c) => {
            ClassNumOrConst::Const(c.clone()) // 상수는 그대로
        }
    }
}

fn make_replaces_from_lt(
    ctx: &GvnContext,
    phinode_indexes: &HashMap<(ClassNum, BlockId), usize>,
) -> HashMap<Operand, Operand> {
    let rt = &ctx.rt;
    let lt_map = &ctx.lt_map;
    let mut replaces = HashMap::new();

    for (bid, lt_block) in lt_map {
        for (classnum, operandvar) in lt_block {
            let old_operands = find_all_keys_by_value_in_block(rt, *bid, &classnum);
            for old_operand in old_operands {
                let _unused = replaces.entry(old_operand.clone()).or_insert_with(|| {
                    operandvar.lookup(
                        &old_operand.dtype(), // 실제 dtype 필요시 LT 저장 구조 확장 가능
                        phinode_indexes,
                    )
                });
            }
        }
    }

    replaces
}

fn find_all_keys_by_value_in_block(
    rt: &HashMap<Operand, ClassNum>,
    bid: BlockId,
    classnum: &ClassNum,
) -> Vec<Operand> {
    rt.iter()
        .filter_map(|(op, cn)| match op {
            Operand::Register {
                rid: RegisterId::Temp { bid: obid, .. },
                ..
            } if cn == classnum && *obid == bid => Some(op.clone()),
            _ => None,
        })
        .collect()
}

#[derive(Clone, PartialEq, Eq, Hash, Debug)]
enum ClassNumOrConst {
    ClassNum(u64),
    Const(Constant),
}

#[derive(Eq, Hash, PartialEq, Clone, Debug)]
enum ExprV {
    BinOp {
        op: ast::BinaryOperator,
        lhs: ClassNumOrConst,
        rhs: ClassNumOrConst,
        dtype: Dtype,
    },
    GetElementPtr {
        ptr: ClassNumOrConst,
        offset: ClassNumOrConst,
        dtype: Dtype,
    },
    Load {
        ptr: ClassNumOrConst,
    }, // UnaryOp 등 추가 가능
    Call {
        callee: ClassNumOrConst,
        args: Vec<ClassNumOrConst>,
        return_type: Dtype,
    },
}
