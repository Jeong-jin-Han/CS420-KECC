use core::ops::Deref;
use std::collections::{HashMap, HashSet};

use itertools::izip;
use lang_c::ast;

use crate::ir::*;
use crate::opt::opt_utils::*;
use crate::opt::*;

pub type Gvn = FunctionPass<GvnInner>;

#[derive(Default, Clone, Copy, Debug)]
pub struct GvnInner {}
/*
같은 함수 내에서 -> GVN

동일한 class numbering
*/

impl Optimize<FunctionDefinition> for GvnInner {
    fn optimize(&mut self, code: &mut FunctionDefinition) -> bool {
        /*
        RT : register -> num
        ET : Expr<num> -> num
        LT : (Line, Num) -> Operand
        */
        let mut class_gen = ClassNumGen::new();

        let graph = make_cfg(code);
        let mut postorder = PostOrder {
            visited: HashSet::new(),
            cfg: &graph,
            traversed: vec![],
        };
        postorder.traverse(code.bid_init);
        let mut rpo = postorder.traversed;
        rpo.reverse();
        let mut rt: HashMap<RegisterId, u64> = HashMap::new();
        let mut ct: HashMap<Constant, u64> = HashMap::new();
        let mut et: HashMap<ExprV, u64> = HashMap::new();
        let mut lt: HashMap<(RegisterId, u64), Operand> = HashMap::new();
        for bid in &rpo {
            let bid_block = code.blocks.get(bid).unwrap();
            // println!("bid_from {:#?}", bid_from);
            // Operand -> const, reg

            // println!("bid_from {} {:#?}", bid, bid_block.instructions.deref());

            for (i, instr) in bid_block.instructions.clone().into_iter().enumerate() {
                // println!("bid_from {} {:#?}", bid, instr.name());

                match instr.deref() {
                    Instruction::BinOp {
                        op,
                        lhs,
                        rhs,
                        dtype,
                    } => {
                        let rid = RegisterId::temp(*bid, i);
                        let cn_lhs = operand_to_classnum(lhs, &mut class_gen, &mut rt, &mut ct);
                        let cn_rhs = operand_to_classnum(rhs, &mut class_gen, &mut rt, &mut ct);
                        let exprv = ExprV::BinOp {
                            op: op.clone(),
                            lhs: cn_lhs,
                            rhs: cn_rhs,
                            dtype: dtype.clone(),
                        };
                        /*
                        expr -> cn // 기존에 존재하는지 아니면 새로 할당해야하는지
                        rid -> cn
                        */
                        let cn_exprv = exprv_to_classnum(&exprv, &mut class_gen, &mut et);
                        println!("instr: {:?}\n cn_exprv {} \n\n", instr, cn_exprv);

                        let _unused = rt.insert(rid, cn_exprv);

                        let operand = Operand::Register {
                            rid,
                            dtype: dtype.clone(),
                        };

                        // let _unused = lt.insert((rid, cn_exprv), operand);
                        insert_elt_to_lt(rid, cn_exprv, operand, &mut lt);
                        /*
                        이 rid에 대해서 cn_exprv를 하는 것과 동시에

                        exprv_to_classnum하는 과정 속에서 exprv를 insert하는 순간에
                        lt 도 insert을 수행해야 한다.
                        rid, cnexprv -> operand를 제작하기

                        그런데 무엇보다도
                        */

                        // println!("binary")
                    }
                    Instruction::Store { ptr, value } => {
                        let cn_value = operand_to_classnum(value, &mut class_gen, &mut rt, &mut ct);
                        allocate_rid_to_classnum(ptr, cn_value, &mut rt);
                        let cn_ptr = operand_to_classnum(ptr, &mut class_gen, &mut rt, &mut ct);
                    }
                    Instruction::Load { ptr } => {
                        /* lt에 할당하기 */
                        let cn_ptr = operand_to_classnum(ptr, &mut class_gen, &mut rt, &mut ct);
                        let rid = RegisterId::temp(*bid, i);
                        let operand = Operand::Register {
                            rid,
                            dtype: ptr.dtype().get_pointer_inner().unwrap().clone(),
                        };

                        println!("instr: {:?}\n rid {} cn_ptr {} \n\n", instr, rid, cn_ptr);
                        let _unused = rt.insert(rid, cn_ptr);
                        // let _unused = lt.insert((rid, cn_ptr), operand); // LT
                        // insert_elt_to_lt(rid, cn_ptr, operand, &mut lt);
                    }
                    _ => {}
                }
            }
        }
        println!("optimize |\n rt {:#?}\n\n", rt.clone());
        println!("optimize |\n rt {}\n", rt.len());
        println!("optimize |class_gen.counter {}", class_gen.counter);

        println!("optimize |\n et {:#?}\n\n", et.clone());
        println!("optimize |\n lt {:#?}\n\n", lt.clone());
        println!("optimize |\n lt {}\n", lt.len());

        let replaces = make_replaces_from_lt(&lt);
        println!("optimize | replaces {:?}\n\n", replaces);
        if replaces.is_empty() {
            return false;
        }
        walk(code, &replaces);
        true
        // todo!()
    }
}

/*
rid에서 없다고 해도 같은 classnum일 수 있는데 이 문제를 어떻게 해결할까?
일단 rid와 연관된 classnum을 찾고

그리고 rid에 할당해주기, 바로 freshnum으로 해주면 안된다.
*/
fn operand_to_classnum(
    operand: &Operand,
    class_gen: &mut ClassNumGen,
    rt: &mut HashMap<RegisterId, u64>,
    ct: &mut HashMap<Constant, u64>,
) -> u64 {
    match operand {
        Operand::Register { rid, dtype } => {
            // rid -> class num
            rt.get(rid)
                .copied()
                .expect("Use-before-def: Register classnum not found in RT")
        }
        Operand::Constant(c) => {
            // constant -> class num
            if let Some(class_num) = ct.get(c) {
                *class_num
            } else {
                let fresh_num = class_gen.fresh();
                let _unused = ct.insert(c.clone(), fresh_num);
                fresh_num
            }
        }
    }
}

fn exprv_to_classnum(
    exprv: &ExprV,
    class_gen: &mut ClassNumGen,
    et: &mut HashMap<ExprV, u64>,
) -> u64 {
    if let Some(cn) = et.get(exprv) {
        *cn
    } else {
        let fresh_num = class_gen.fresh();
        let _unsed = et.insert(exprv.clone(), fresh_num);
        fresh_num
    }
    // todo!()
}

/*
rid 미리 할당하기
SSA <- register 이름을 한 번만 사용하기 때문에
*/
fn allocate_rid_to_classnum(operand: &Operand, classnum: u64, rt: &mut HashMap<RegisterId, u64>) {
    match operand {
        Operand::Register { rid, dtype } => {
            if let Some(cn) = rt.get(rid) {
                println!("is it possible case???");
            } else {
                let _unused = rt.insert(*rid, classnum);
            }
        }
        _ => {
            todo!()
        }
    }
}

fn insert_elt_to_lt(
    rid: RegisterId,
    classnum: u64,
    operand: Operand,
    lt: &mut HashMap<(RegisterId, u64), Operand>,
) {
    // 먼저: 기존 LT에 같은 classnum을 가진 entry가 있는지 확인
    if let Some((_, existing_operand)) = lt.iter().find(|((_existing_rid, cn), _)| *cn == classnum)
    {
        // 이미 리더가 있으니 그 리더를 사용해서 insert
        let _unused = lt.insert((rid, classnum), existing_operand.clone());
    } else {
        // 없다면 현재 operand를 리더로 등록
        let _unused = lt.insert((rid, classnum), operand);
    }
}

fn make_replaces_from_lt(lt: &HashMap<(RegisterId, u64), Operand>) -> HashMap<RegisterId, Operand> {
    let mut replaces = HashMap::new();

    for ((rid, _cn), operand) in lt.iter() {
        // 이미 rid가 있으면 skip (선행 리더 유지)
        let _unused = replaces.entry(*rid).or_insert(operand.clone());
    }

    replaces
}

/*
RT : register numbering
ET : Expr((reg, const) or (reg, reg) or (const, const)) -> combine numbering, generate new numberinng
and when we compare we need to compare the Expr(op, u64, u64) <- also we consider about the order

CT : constant numbering

constant에 대해서도 numbering??
*/

impl GvnInner {
    // fn local_block_optimize(&mut self, &Block)
}
#[derive(Eq, Hash, PartialEq, Clone, Debug)]
pub(crate) enum ExprV {
    BinOp {
        op: ast::BinaryOperator,
        lhs: u64,
        rhs: u64,
        dtype: Dtype,
    },
    UnaryOp {
        op: ast::UnaryOperator,
        operand: u64,
        dtype: Dtype,
    },
}
