use std::collections::{BTreeMap, HashMap, HashSet, VecDeque};
use std::ops::Deref;

use lang_c::ast::{self, FunctionDeclarator};

use crate::ir::{HasDtype, Named};
use crate::opt::opt_utils;
use crate::{Translate, asm, ir};

/*
내가 하려고 하는 것

사용할 reg: t0, t1, t2, sp, s0, s1, ra


stack에 alloc한다는 것의 의미는
ir::RegisterId -> Stack(offset)과 맵핑하고,
추후에 해당 ir::RegisterId가 들어올 경우, 해당 Stack(offset)기반으로 해서
lw 하고 사용하는 것을 의미함


기본적인 reg의 경우: t0, t1, t2만 사용함
ir instruction 단위로는 항상 t0 <- t1, t2
store instruction ptr : t0, value : t1
load instruction ptr: t0, dst: t0

function allocation
pointer의 경우에는 먼저 stack에서 어느 자리를 가리킬지 지정한 후에
그 해당 지정값을 stack에 alloc


function callee arg <- 첫번째 block phinode
const 일 경우에는
load t0 const
store t0 sp + (const data size)

register 일 경우에는
먼저 hashmap에서 해당 RegiterId에 해당하는 Stack(offset)이 있어야 함. use after define이기 때문에 항상 존재하게 되어 있음


Caller arg


*/

#[derive(Debug)]
pub struct Asmgen {
    stack_allocator: StackAllocator,
    next_stack_offset: i32,
    function_name_list: HashMap<String, (usize, ir::FunctionSignature)>,
    variable_name_list: HashMap<String, ir::Dtype>,
}

#[derive(Debug)]
struct StackAllocator {
    stack_map: HashMap<ir::RegisterId, i32>,
}

impl Default for Asmgen {
    fn default() -> Self {
        Self {
            stack_allocator: StackAllocator::new(),
            next_stack_offset: 0,
            function_name_list: HashMap::new(),
            variable_name_list: HashMap::new(),
        }
    }
}

impl StackAllocator {
    fn new() -> Self {
        Self {
            stack_map: HashMap::new(),
        }
    }

    fn allocate_stack_slot(
        // 이것을 하게 되면 내가 추가적으로 stack을 늘릴 필요x 자동으로 늘려줌
        &mut self,
        rid: &ir::RegisterId,
        dtype: &ir::Dtype,
        next_offset: &mut i32,
    ) -> i32 {
        if let Some(&offset) = self.stack_map.get(rid) {
            println!("already exist rid: {}", rid);
            offset
        } else {
            let old_next_offset = *next_offset;
            let _unused = self.stack_map.insert(*rid, *next_offset);
            let offset = get_dtype_size(dtype);

            println!(
                "insert rid {} next_offset {} offset {} dtype {}",
                rid, next_offset, offset, dtype
            );
            *next_offset += offset;
            println!("next_offset {}", next_offset);
            old_next_offset
        }
    }
}

impl Translate<ir::TranslationUnit> for Asmgen {
    type Target = asm::Asm;
    type Error = ();

    fn translate(&mut self, source: &ir::TranslationUnit) -> Result<Self::Target, Self::Error> {
        let mut functions = Vec::new();
        let mut variables = Vec::new();
        for (idx, (name, decl)) in source.decls.iter().enumerate() {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition,
                } => {
                    let _unused = self
                        .function_name_list
                        .insert(name.clone(), (idx, signature.clone())); // 
                }
                ir::Declaration::Variable { dtype, initializer } => {
                    let _unused = self.variable_name_list.insert(name.clone(), dtype.clone()); // 
                }
                _ => {}
            }
        }

        let _unused = source.decls.iter().all(|(name, decl)| {
            if let ir::Declaration::Function {
                signature,
                definition: Some(defn),
            } = decl
            {}
            true
        });

        for (name, decl) in &source.decls {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition: Some(defn),
                } => {
                    let func = self.translate_function(name, defn);

                    let header = vec![
                        asm::Directive::Globl(asm::Label(name.clone())),
                        asm::Directive::Section(asm::SectionType::Text),
                        asm::Directive::Type(asm::Label(name.clone()), asm::SymbolType::Function),
                    ];

                    functions.push(asm::Section::new(header, func));
                }

                // ir::Declaration::Variable { dtype, initializer } => {
                //     // 나중에 전역 변수 처리 로직 추가 가능
                //     // variables.push(...);
                // }
                ir::Declaration::Variable { dtype, initializer } => {
                    let label = asm::Label(name.clone());

                    // 초기값 파싱
                    let init_value_opt =
                        if let Some(ast::Initializer::Expression(expr)) = initializer {
                            if let ast::Expression::Constant(c) = &expr.node {
                                ir::Constant::try_from(&c.node).ok()
                            } else {
                                None
                            }
                        } else {
                            None
                        };

                    let init_value: u64 =
                        if let Some(ir::Constant::Int { value, .. }) = init_value_opt {
                            value as u64
                        } else {
                            0
                        };

                    // .word, .quad 등 선택
                    let data_directive = match get_dtype_size(dtype) {
                        1 => asm::Directive::Byte(init_value as u8),
                        2 => asm::Directive::Half(init_value as u16),
                        4 => asm::Directive::Word(init_value as u32),
                        8 => asm::Directive::Quad(init_value),
                        _ => panic!("Unsupported global var size"),
                    };

                    let header = vec![
                        asm::Directive::Globl(label.clone()),
                        asm::Directive::Section(asm::SectionType::Data),
                        asm::Directive::Type(label.clone(), asm::SymbolType::Object),
                    ];

                    let variable = asm::Variable::new(label, vec![data_directive]);
                    let section = asm::Section::new(header, variable);
                    variables.push(section);
                }

                _ => {} // 함수 정의가 없는 선언 (prototype) 무시
            }
        }

        println!("====translate===");
        println!("self.function_name_list {:?}", self.function_name_list);

        let asm_unit = asm::TranslationUnit {
            functions,
            variables,
        };

        Ok(asm::Asm { unit: asm_unit })
    }
}

impl Asmgen {
    fn translate_function_placeholder_handler(&mut self, asm_blocks: &mut [asm::Block]) {
        // prelogue, epilogue 둘 다 placeholder를 가지고 있음

        add_padding(&mut self.next_stack_offset);

        // 6️⃣ 마지막에 bid_init block의 sp placeholder patch (필수)
        if let Some(block_init) = asm_blocks.first_mut() {
            if let Some(asm::Instruction::IType {
                instr: asm::IType::Addi(asm::DataSize::Double),
                rd,
                rs1,
                imm,
            }) = block_init.instructions.first_mut()
            {
                *imm = asm::Immediate::Value((-self.next_stack_offset) as u64);
                println!(
                    "Patched initial sp offset to {}",
                    (-self.next_stack_offset) as u64
                );
            }
            for instr in block_init.instructions.iter_mut() {
                match instr {
                    asm::Instruction::IType {
                        instr: asm::IType::Addi(asm::DataSize::Double),
                        rd: asm::Register::S0,
                        rs1: asm::Register::Sp,
                        imm,
                    } => {
                        // Prologue용 s0 설정 patch
                        *imm = asm::Immediate::Value(self.next_stack_offset as u64);
                    }
                    _ => {
                        println!();
                    }
                }
            }
        }
        let total_offset = (self.next_stack_offset) as u64;

        // 첫 instruction 제외 나머지 instruction만 순회
        for block in asm_blocks.iter_mut() {
            // 그 블럭 안에서 dummy addi sp, sp, 0 찾아서 수정
            for (i, instr) in block.instructions.iter_mut().enumerate() {
                if i == 0 {
                    continue;
                }
                if let asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::Sp,
                    rs1: asm::Register::Sp,
                    imm,
                } = instr
                {
                    if let asm::Immediate::Value(0) = imm {
                        *imm = asm::Immediate::Value(total_offset);
                    }
                }
            }
        }
    }

    fn translate_function_prelogue(
        &mut self,
        call_flag: bool,
        block: &ir::Block,
        bid: &ir::BlockId,
        allocations: Vec<Named<ir::Dtype>>,
        name: &str,
        asm_block_instrs: &mut Vec<asm::Instruction>,
    ) {
        // prelogue
        // s0, ra, s1
        // allocation
        // phinode

        // addi sp, sp, 0 ← placeholder
        asm_block_instrs.push(asm::Instruction::IType {
            instr: asm::IType::Addi(asm::DataSize::Double),
            rd: asm::Register::Sp,
            rs1: asm::Register::Sp,
            imm: asm::Immediate::Value(0), // placeholder
        });

        // sw s0, 0(sp)
        asm_block_instrs.push(asm::Instruction::SType {
            instr: asm::SType::Store(asm::DataSize::Double),
            rs1: asm::Register::Sp,
            rs2: asm::Register::S0,
            imm: asm::Immediate::Value(self.next_stack_offset as u64),
        });
        self.next_stack_offset += 8;

        if call_flag {
            // sw ra,8(sp)
            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::Ra,
                imm: asm::Immediate::Value(self.next_stack_offset as u64),
            });
            self.next_stack_offset += 8;

            // sw s1, 16(sp)
            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::S1,
                imm: asm::Immediate::Value(self.next_stack_offset as u64),
            });
            self.next_stack_offset += 8;
        }

        asm_block_instrs.push(asm::Instruction::IType {
            instr: asm::IType::Addi(asm::DataSize::Double),
            rd: asm::Register::S0,
            rs1: asm::Register::Sp,
            imm: asm::Immediate::Value(self.next_stack_offset as u64), // placeholder
        });

        // allocations
        /*
        allocation은 보통 다 pointer를 가리키고 있음
        */
        let mut ptr_indicator_offsets = Vec::new();
        for (i, dtype) in allocations.iter().enumerate() {
            let local_rid = ir::RegisterId::local(i);
            ptr_indicator_offsets.push((local_rid, dtype.deref(), self.next_stack_offset));

            self.next_stack_offset += get_dtype_size(dtype);
        }
        add_padding(&mut self.next_stack_offset);

        for (local_rid, dtype, ptr_indicator_offset) in ptr_indicator_offsets {
            let ptr_dtype = ir::Dtype::pointer(dtype.clone());

            let offset = self.stack_allocator.allocate_stack_slot(
                &local_rid,
                &ptr_dtype,
                &mut self.next_stack_offset,
            );

            asm_block_instrs.push(asm::Instruction::IType {
                instr: asm::IType::Addi(asm::DataSize::Double),
                rd: asm::Register::T0,
                rs1: asm::Register::Sp,
                imm: asm::Immediate::Value(ptr_indicator_offset as u64),
            });

            // asm_block_instrs.push(asm::Instruction::IType {
            //     instr: asm::IType::Addi(asm::DataSize::Double),
            //     rd: asm::Register::T3,
            //     rs1: asm::Register::T3,
            //     imm: asm::Immediate::Value(0),
            // }); // just test

            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::T0,
                imm: asm::Immediate::Value(offset as u64),
            });
        }

        // phinodes
        let mut caller_offset = 0;
        println!(
            "translate_function_prelogue | phinodes {:?}",
            block.phinodes
        );
        for (i, dtype) in block.phinodes.iter().enumerate() {
            let phinode_rid = ir::RegisterId::arg(*bid, i);
            let offset = self.stack_allocator.allocate_stack_slot(
                &phinode_rid,
                dtype.deref(),
                &mut self.next_stack_offset,
            );

            asm_block_instrs.push(asm::Instruction::IType {
                instr: asm::IType::Load {
                    data_size: asm::DataSize::from_dtype(dtype.deref()),
                    is_signed: true,
                },
                rd: asm::Register::T0,
                rs1: asm::Register::S1,
                imm: asm::Immediate::Value(caller_offset as u64),
            });
            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::store(dtype.deref().clone()),
                rs1: asm::Register::Sp,
                rs2: asm::Register::T0,
                imm: asm::Immediate::Value(offset as u64),
            }); // store dst rs2

            caller_offset += get_dtype_size(dtype.deref());
        }

        // if let Some((_, functionsginature)) = self.function_name_list.get(name) {
        //     println!("==========================");
        //     println!("translate_function_prelogue");

        //     println!("functionsignature.ret {}", functionsginature.ret);

        //     if let Some(ir::Dtype::Function { ret, params }) = release_ptr(&functionsginature.ret) {
        //         println!(
        //             "functionsginautre.params {:?} params {:?}",
        //             functionsginature.params, params
        //         );
        //         for (i, dtype) in params.iter().enumerate() {
        //             let phinode_rid: ir::RegisterId = ir::RegisterId::arg(*bid, i);
        //             let offset = self.stack_allocator.allocate_stack_slot(
        //                 &phinode_rid,
        //                 dtype,
        //                 &mut self.next_stack_offset,
        //             );

        //             asm_block_instrs.push(asm::Instruction::IType {
        //                 instr: asm::IType::Load {
        //                     data_size: asm::DataSize::from_dtype(dtype),
        //                     is_signed: true,
        //                 },
        //                 rd: asm::Register::T0,
        //                 rs1: asm::Register::S1,
        //                 imm: asm::Immediate::Value(caller_offset as u64),
        //             });
        //             asm_block_instrs.push(asm::Instruction::SType {
        //                 instr: asm::SType::store(dtype.clone()),
        //                 rs1: asm::Register::Sp,
        //                 rs2: asm::Register::T0,
        //                 imm: asm::Immediate::Value(offset as u64),
        //             }); // store dst rs2

        //             caller_offset += get_dtype_size(dtype);
        //         }
        //     }
        // }

        add_padding(&mut self.next_stack_offset);
    }

    // 원하는 reg (rd)에 우리가 ir::Operand값을 넣어주기
    // sp기반으로 해야 함.
    fn translate_operand(
        // fininsh
        &mut self,
        operand: ir::Operand,
        rd: asm::Register,
        asm_block_instrs: &mut Vec<asm::Instruction>,
    ) {
        match &operand {
            ir::Operand::Register { rid, dtype } => {
                // 여기서는 resuse 하는 상황
                let offset = self.stack_allocator.allocate_stack_slot(
                    rid,
                    dtype,
                    &mut self.next_stack_offset,
                );
                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::load(operand.dtype()),
                    rd,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(offset as u64),
                });
            }
            ir::Operand::Constant(c) => {
                // c
                // undef  -> Li
                // global -> La
                // const  -> Li
                match c {
                    ir::Constant::GlobalVariable { name, dtype } => {
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::La {
                            rd,
                            symbol: asm::Label(name.clone()),
                        }));
                    }
                    ir::Constant::Undef { dtype } => {
                        asm_block_instrs
                            .push(asm::Instruction::Pseudo(asm::Pseudo::Li { rd, imm: 0 }));
                    }
                    ir::Constant::Int {
                        value,
                        width,
                        is_signed,
                    } => {
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                            rd,
                            imm: *value as u64,
                        }));
                    }
                    _ => {}
                }
            }
        }
    }

    fn translate_function_epilogue(
        // finish
        &mut self,
        block: &ir::Block,
        name: &str,
        call_flag: bool,
        asm_block_instrs: &mut Vec<asm::Instruction>,
    ) {
        match &block.exit {
            ir::BlockExit::Jump { arg } => {
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::J {
                    offset: asm::Label::new(name, arg.bid),
                }));
            }
            ir::BlockExit::ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => {
                self.translate_operand(condition.clone(), asm::Register::T0, asm_block_instrs);

                asm_block_instrs.push(asm::Instruction::BType {
                    instr: asm::BType::Beq,
                    rs1: asm::Register::T0,
                    rs2: asm::Register::Zero,
                    imm: asm::Label::new(name, arg_else.bid),
                });

                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::J {
                    offset: asm::Label::new(name, arg_then.bid),
                }));
            }
            ir::BlockExit::Return { value } => {
                println!("translate_functino_epilogue | value {}", value);

                self.translate_operand(value.clone(), asm::Register::A0, asm_block_instrs);

                if call_flag {
                    asm_block_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size: asm::DataSize::Double,
                            is_signed: true,
                        },
                        rd: asm::Register::S1,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value(16),
                    });

                    asm_block_instrs.push(asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size: asm::DataSize::Double,
                            is_signed: true,
                        },
                        rd: asm::Register::Ra,
                        rs1: asm::Register::Sp,
                        imm: asm::Immediate::Value(8),
                    });
                }
                let ret_offset = get_dtype_size(&value.dtype());
                if name != "main" && ret_offset != 0 {
                    // rs2 rs1(imm)
                    // asm_block_instrs.push(asm::Instruction::SType {
                    //     instr: asm::SType::store(value.dtype()),
                    //     rs1: asm::Register::S1,
                    //     rs2: asm::Register::A0,
                    //     imm: asm::Immediate::Value(-ret_offset as u64),
                    // });
                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(value.dtype()),
                        rs1: asm::Register::S1,
                        rs2: asm::Register::A0,
                        imm: asm::Immediate::Value(-8i64 as u64),
                    });
                }

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Load {
                        data_size: asm::DataSize::Double,
                        is_signed: true,
                    },
                    rd: asm::Register::S0,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(0),
                });

                // addi sp, sp, MN
                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::Sp,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(0), // placeholder
                });

                // ret
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Ret));
            }
            ir::BlockExit::Unreachable => {
                // No-op
            }
            ir::BlockExit::Switch {
                value,
                default,
                cases,
            } => {}
            _ => unimplemented!("BlockExit type not yet handled"),
        }
    }

    fn translate_function_instruction(
        &mut self,
        iid: usize,
        bid: ir::BlockId,
        instruction: &Named<ir::Instruction>,
        asm_block_instrs: &mut Vec<asm::Instruction>,
    ) {
        let dst_rid = ir::RegisterId::temp(bid, iid);
        println!("\n======= translate_function_instruction ========\n");
        println!("instruction {} dst_rid {}", instruction, dst_rid);
        println!("\n================================================\n");
        match instruction.deref() {
            ir::Instruction::UnaryOp { op, operand, dtype } => match op {
                ast::UnaryOperator::Minus => {
                    self.translate_operand(operand.clone(), asm::Register::T0, asm_block_instrs);

                    let pseudo =
                        asm::Pseudo::neg(dtype.clone(), asm::Register::T0, asm::Register::T0);
                    asm_block_instrs.push(asm::Instruction::Pseudo(pseudo));
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);
                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                _ => {
                    println!();
                }
            },
            ir::Instruction::BinOp {
                op,
                lhs,
                rhs,
                dtype,
            } => {
                self.translate_operand(lhs.clone(), asm::Register::T1, asm_block_instrs);
                self.translate_operand(rhs.clone(), asm::Register::T2, asm_block_instrs);

                // temp step
                let mut is_signed = dtype.is_int_signed();
                println!("instruction {} is_signed {}", instruction, is_signed);

                if let Some(rtype) = ast_binop_to_rtype(op, dtype.clone(), is_signed) {
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: rtype,
                        rd: asm::Register::T0,
                        rs1: asm::Register::T1,
                        rs2: Some(asm::Register::T2),
                    });

                    println!("\n===== binop alloc =====\n");
                    // dst_rid에 대해서 T0를 저장해야 함
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);
                    println!("\n=======================\n");

                    // // binop test
                    // asm_block_instrs.push(asm::Instruction::IType {
                    //     instr: asm::IType::Addi(asm::DataSize::Double),
                    //     rd: asm::Register::T5,
                    //     rs1: asm::Register::T5,
                    //     imm: asm::Immediate::Value(0),
                    // });

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                if *op == ast::BinaryOperator::Equals {
                    println!("binop op {:?}", op);
                    // xor t0,t1,t2   ; 두 피연산자 같으면 t0=0
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: asm::RType::Xor,
                        rd: asm::Register::T0,
                        rs1: asm::Register::T1,
                        rs2: Some(asm::Register::T2),
                    });
                    // seqz t0,t0      ; t0=1  (equal) / 0 (not equal)   ← pseudo-instr
                    asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                        rd: asm::Register::T0,
                        rs: asm::Register::T0,
                    }));

                    println!("\n===== binop alloc =====\n");
                    // dst_rid에 대해서 T0를 저장해야 함
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);
                    println!("\n=======================\n");

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                if *op == ast::BinaryOperator::Less {
                    is_signed = lhs.dtype().is_int_signed();
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: asm::RType::Slt { is_signed },
                        rd: asm::Register::T0,
                        rs1: asm::Register::T1,
                        rs2: Some(asm::Register::T2),
                    });
                    // dst_rid에 대해서 T0를 저장해야 함
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                if *op == ast::BinaryOperator::Greater {
                    is_signed = lhs.dtype().is_int_signed();
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: asm::RType::Slt { is_signed },
                        rd: asm::Register::T0,
                        rs1: asm::Register::T2,
                        rs2: Some(asm::Register::T1),
                    });
                    // dst_rid에 대해서 T0를 저장해야 함
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                if *op == ast::BinaryOperator::GreaterOrEqual {
                    // <=> Less, Less의 결과를 반전
                    // 1. signed / unsigned 결정
                    is_signed = lhs.dtype().is_int_signed();

                    // T1 >= T2
                    // T1 < T2 -> 뒤집기

                    // 2. lhs < rhs  → tmp(T0)
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: asm::RType::Slt { is_signed }, // slt(u) 선택
                        rd: asm::Register::T0,                // tmp = lhs < rhs
                        rs1: asm::Register::T1,               // lhs
                        rs2: Some(asm::Register::T2),         // rhs
                    });

                    // 3. 반전   tmp = (tmp == 0)
                    asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                        rd: asm::Register::T0,
                        rs: asm::Register::T0,
                    }));

                    // 4. dst_rid 저장
                    let offset = self.stack_allocator.allocate_stack_slot(
                        &dst_rid,
                        dtype,
                        &mut self.next_stack_offset,
                    );
                    add_padding(&mut self.next_stack_offset);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
            }
            ir::Instruction::Load { ptr } => {
                let ptr_inner_dtype = ptr.dtype().get_pointer_inner().unwrap().clone();
                self.translate_operand(ptr.clone(), asm::Register::T0, asm_block_instrs);
                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::load(ptr_inner_dtype.clone()),
                    rd: asm::Register::T0,
                    rs1: asm::Register::T0,
                    imm: asm::Immediate::Value(0),
                });

                // load test
                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::T4,
                    rs1: asm::Register::T4,
                    imm: asm::Immediate::Value(0),
                });

                // dst_rid에 대해서 T0를 저장해야 함
                let offset = self.stack_allocator.allocate_stack_slot(
                    &dst_rid,
                    &ptr_inner_dtype,
                    &mut self.next_stack_offset,
                );

                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(ptr_inner_dtype.clone()),
                    rs1: asm::Register::Sp,
                    rs2: asm::Register::T0,
                    imm: asm::Immediate::Value(offset as u64),
                });

                add_padding(&mut self.next_stack_offset);
            }

            ir::Instruction::Store { ptr, value } => {
                self.translate_operand(ptr.clone(), asm::Register::T0, asm_block_instrs);
                self.translate_operand(value.clone(), asm::Register::T1, asm_block_instrs);
                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(value.dtype()),
                    rs1: asm::Register::T0,
                    rs2: asm::Register::T1,
                    imm: asm::Immediate::Value(0),
                });
            }
            ir::Instruction::Call {
                callee:
                    ir::Operand::Constant(ir::Constant::GlobalVariable {
                        name: call_name,
                        dtype: ir::Dtype::Function { ret, params },
                    }),
                args,
                return_type,
            } => {
                println!(
                    "translate_function_instruction | before ret | next_stack_offset {}",
                    self.next_stack_offset
                );

                add_padding(&mut self.next_stack_offset);

                // dst_rid에 대해서 T0를 저장해야 함
                let ret_offset = self.stack_allocator.allocate_stack_slot(
                    &dst_rid,
                    ret,
                    &mut self.next_stack_offset,
                );

                add_padding(&mut self.next_stack_offset);

                println!(
                    "translate_function_instruction | after ret | next_stack_offset {}",
                    self.next_stack_offset
                );

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S1,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.next_stack_offset as u64),
                }); // 일단 arg 초반 시작부터 보는 거여서 맞기는 함

                // 인자들을 stack에 저장
                for (i, arg) in args.iter().enumerate() {
                    // translate_operand는 교환자임, 교환이 아닌 경우, 새로운 것이 들어왔을 경우??
                    self.translate_operand(arg.clone(), asm::Register::T0, asm_block_instrs);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(arg.dtype()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(self.next_stack_offset as u64),
                    });
                    self.next_stack_offset += get_dtype_size(&arg.dtype());
                }
                add_padding(&mut self.next_stack_offset);
                println!(
                    "translate_function_instruction next_stack_offset {}",
                    self.next_stack_offset
                );

                // call 실행
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                    offset: asm::Label(call_name.clone()),
                }));

                add_padding(&mut self.next_stack_offset);
            }
            ir::Instruction::Call {
                callee: ir::Operand::Register { rid, dtype },
                args,
                return_type,
            } => {
                let callee = ir::Operand::Register {
                    rid: *rid,
                    dtype: dtype.clone(),
                };
                println!(
                    "translate_function_instruction | before ret | next_stack_offset {}",
                    self.next_stack_offset
                );

                add_padding(&mut self.next_stack_offset);

                // dst_rid에 대해서 T0를 저장해야 함
                let ret_offset = self.stack_allocator.allocate_stack_slot(
                    &dst_rid,
                    return_type,
                    &mut self.next_stack_offset,
                );

                add_padding(&mut self.next_stack_offset);

                println!(
                    "translate_function_instruction | after ret | next_stack_offset {}",
                    self.next_stack_offset
                );

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S1,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.next_stack_offset as u64),
                }); // 일단 arg 초반 시작부터 보는 거여서 맞기는 함

                // 인자들을 stack에 저장
                for (i, arg) in args.iter().enumerate() {
                    // translate_operand는 교환자임, 교환이 아닌 경우, 새로운 것이 들어왔을 경우??
                    self.translate_operand(arg.clone(), asm::Register::T0, asm_block_instrs);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(arg.dtype()),
                        rs1: asm::Register::Sp,
                        rs2: asm::Register::T0,
                        imm: asm::Immediate::Value(self.next_stack_offset as u64),
                    });
                    self.next_stack_offset += get_dtype_size(&arg.dtype());
                }
                add_padding(&mut self.next_stack_offset);
                println!(
                    "translate_function_instruction next_stack_offset {}",
                    self.next_stack_offset
                );
                self.translate_operand(callee, asm::Register::T0, asm_block_instrs);

                // call 실행
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Jalr {
                    rs: asm::Register::T0,
                }));

                add_padding(&mut self.next_stack_offset);
            }
            ir::Instruction::TypeCast {
                value,
                target_dtype,
            } => {
                self.translate_operand(value.clone(), asm::Register::T0, asm_block_instrs);
                // Load then 상황
                let offset = self.stack_allocator.allocate_stack_slot(
                    &dst_rid,
                    target_dtype,
                    &mut self.next_stack_offset,
                );

                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(target_dtype.clone()),
                    rs1: asm::Register::Sp,
                    rs2: asm::Register::T0,
                    imm: asm::Immediate::Value(offset as u64),
                });
            }
            _ => {
                println!("todo insturction {}", instruction);
            }
        }
    }

    fn translate_function(&mut self, name: &str, func: &ir::FunctionDefinition) -> asm::Function {
        /*
        translate function할 때

        epilogue와 prelogue 필요함

        s1 : +24
        ra : +16
        s0 : +8
        */
        self.next_stack_offset = 0;
        self.stack_allocator.stack_map.clear();
        let mut asm_blocks: Vec<asm::Block> = vec![];

        let call_flag = call_flag(func);

        for (bid, block) in func.blocks.iter() {
            let mut asm_block_instrs: Vec<asm::Instruction> = vec![];

            if *bid == func.bid_init {
                // prelogue
                // s0, ra, s1
                // allocation
                // phinode
                self.translate_function_prelogue(
                    call_flag,
                    block,
                    bid,
                    func.allocations.clone(),
                    name,
                    &mut asm_block_instrs,
                );
            }

            for (iid, instr) in block.instructions.iter().enumerate() {
                // instruction
                self.translate_function_instruction(iid, *bid, instr, &mut asm_block_instrs);
            }

            // epilogue
            // block exit같은 것
            self.translate_function_epilogue(block, name, call_flag, &mut asm_block_instrs);

            let block_label = if bid.0 == func.bid_init.0 {
                asm::Label(name.to_string())
            } else {
                asm::Label::new(name, *bid)
            };
            let asm_block = asm::Block::new(Some(block_label), asm_block_instrs);
            asm_blocks.push(asm_block);

            println!("======== bid {} =========", bid);
            println!("[DEBUG] stack_map = {{");
            for (operand, offset) in &self.stack_allocator.stack_map {
                println!("  {:?} => {}", operand, offset);
            }
            println!("}}");
            println!("=========================");
        }

        self.translate_function_placeholder_handler(&mut asm_blocks);

        asm::Function::new(asm_blocks)
    }
}

impl asm::DataSize {
    pub fn from_dtype(dtype: &ir::Dtype) -> Self {
        match dtype {
            ir::Dtype::Int { width, .. } => match width {
                8 => asm::DataSize::Byte,
                16 => asm::DataSize::Half,
                32 => asm::DataSize::Word,
                64 => asm::DataSize::Double,
                _ => panic!("Unsupported int width: {}", width),
            },
            // ir::Dtype::Float => asm::DataSize::SinglePrecision,
            // ir::Dtype::Double => asm::DataSize::DoublePrecision,
            _ => panic!("Unsupported dtype for DataSize conversion: {:?}", dtype),
        }
    }
}

fn get_dtype_size(dtype: &ir::Dtype) -> i32 {
    match dtype {
        ir::Dtype::Int { width, .. } => ((width + 7) / 8) as i32,

        ir::Dtype::Pointer { inner, is_const } => 8,
        ir::Dtype::Unit { is_const } => 0,
        _ => panic!("Unsupported argument type: {:?}", dtype),
    }
}

fn call_flag(func: &ir::FunctionDefinition) -> bool {
    func.blocks.iter().any(|(bid, block)| {
        block
            .instructions
            .iter()
            .any(|instr| matches!(instr.deref(), ir::Instruction::Call { .. }))
    })
}

fn ast_binop_to_rtype(
    op: &ast::BinaryOperator,
    dtype: ir::Dtype,
    is_signed: bool,
) -> Option<asm::RType> {
    match op {
        ast::BinaryOperator::Plus => Some(asm::RType::Add(asm::DataSize::Byte)),
        ast::BinaryOperator::Minus => Some(asm::RType::Sub(asm::DataSize::Byte)),
        ast::BinaryOperator::BitwiseXor => Some(asm::RType::Xor),
        ast::BinaryOperator::BitwiseOr => Some(asm::RType::Or),
        ast::BinaryOperator::BitwiseAnd => Some(asm::RType::And),
        // ast::BinaryOperator::Less => Some(asm::RType::Slt { is_signed }),
        // ast::BinaryOperator::Greater => Some(asm::RType::S)
        ast::BinaryOperator::Modulo => Some(asm::RType::rem(dtype, is_signed)),
        _ => None,
    }
}

fn add_padding(next_offset: &mut i32) {
    let mut remainder = *next_offset % 8;
    if remainder == 0 {
        remainder = 8;
    }
    println!("add_padding: + how much {}", 8 - remainder);
    *next_offset += 8 - remainder;
}

fn release_ptr(dtype: &ir::Dtype) -> Option<&ir::Dtype> {
    match dtype {
        ir::Dtype::Pointer { inner, is_const } => release_ptr(dtype.get_pointer_inner().unwrap()),
        _ => Some(dtype),
    }
}
