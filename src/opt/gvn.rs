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
                    Instruction::BinOp { op, lhs, rhs, dtype } => {
                        let rid = RegisterId::temp(bid.clone(), i); 
                        let cn_lhs = operand_to_classnum(lhs, &mut class_gen, &mut rt, &mut ct);
                        let cn_rhs = operand_to_classnum(rhs, &mut class_gen, &mut rt, &mut ct);
                        let exprv = ExprV::BinOp { op: op.clone(), lhs: cn_lhs, rhs: cn_rhs, dtype: dtype.clone() };
                        /*
                        expr -> cn // 기존에 존재하는지 아니면 새로 할당해야하는지
                        rid -> cn
                        */
                        let cn_exprv = exprv_to_classnum(&exprv, &mut class_gen, &mut et);
                        println!("instr: {:?}\n cn_exprv {} \n\n", instr, cn_exprv);

                        let _unused = rt.insert(rid, cn_exprv);
                        
                        // println!("binary")
                    },
                    Instruction::Store { ptr, value } => {
                        let cn_value = operand_to_classnum(value, &mut class_gen, &mut rt, &mut ct);
                        allocate_rid_to_classnum(ptr, cn_value, &mut rt);
                        let cn_ptr = operand_to_classnum(ptr, &mut class_gen, &mut rt, &mut ct);
                    }
                    Instruction::Load {ptr} => {
                        let cn_ptr =  operand_to_classnum(ptr, &mut class_gen, &mut rt, &mut ct);
                        let rid = RegisterId::temp(bid.clone(), i); 
                        println!("instr: {:?}\n rid {} cn_ptr {} \n\n", instr, rid, cn_ptr);
                        let _unused = rt.insert(rid, cn_ptr);
                    }
                    _ => {}
                }
            }

        }
        println!("optimize |\n rt {:#?}\n\n", rt.clone());
        println!("optimize |\n rt {}\n", rt.len());
        println!("optimize |class_gen.counter {}", class_gen.counter);

        println!("optimize |\n et {:#?}", et.clone());

        false
        // todo!()
    }
}

/*
rid에서 없다고 해도 같은 classnum일 수 있는데 이 문제를 어떻게 해결할까? 
일단 rid와 연관된 classnum을 찾고

그리고 rid에 할당해주기, 바로 freshnum으로 해주면 안된다.
*/
fn operand_to_classnum(operand: &Operand, class_gen: &mut ClassNumGen, rt: &mut HashMap<RegisterId, u64>, ct: &mut HashMap<Constant, u64>) -> u64 {
    match operand {
        Operand::Register { rid, dtype } => {
            // rid -> class num
            if let Some(class_num) = rt.get(rid) {
                class_num.clone()
            } else {
                println!("is it possible case");
                let fresh_num = class_gen.fresh();
                let _unused = rt.insert(rid.clone(), fresh_num);
                fresh_num
            }
        }
        Operand::Constant(c) => {
            // constant -> class num
            if let Some(class_num) = ct.get(c) {
                class_num.clone()
            } else {
                let fresh_num = class_gen.fresh();
                let _unused = ct.insert(c.clone(), fresh_num);
                fresh_num
            }
        }
    }
}

fn exprv_to_classnum(exprv: &ExprV, class_gen: &mut ClassNumGen, et: &mut HashMap<ExprV, u64>) -> u64 {
    if let Some(cn) = et.get(exprv) {
        cn.clone()
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
                let _unused = rt.insert(rid.clone(), classnum);
            }
        }
        _ => {}
    }
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
