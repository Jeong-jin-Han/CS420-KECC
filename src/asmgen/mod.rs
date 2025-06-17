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
    function_name_list: HashMap<String, (usize, ir::FunctionSignature)>,
    variable_name_list: HashMap<String, ir::Dtype>,
}

#[derive(Debug)]
struct StackAllocator {
    stack_map: HashMap<ir::RegisterId, Loc>,
    next_stack_offset: i32,
}

#[derive(Clone, Copy, Debug)]
enum Loc {
    Stack(i32),         // 기존 offset
    Reg(asm::Register), // a0..a7, t0.. 등
}

impl Default for Asmgen {
    fn default() -> Self {
        Self {
            stack_allocator: StackAllocator::new(),
            function_name_list: HashMap::new(),
            variable_name_list: HashMap::new(),
        }
    }
}

impl StackAllocator {
    fn new() -> Self {
        Self {
            stack_map: HashMap::new(),
            next_stack_offset: 0,
        }
    }

    fn allocate_stack_slot(&mut self, rid: &ir::RegisterId, dtype: &ir::Dtype) -> i32 {
        println!("allocat_stack_slot {}", self.next_stack_offset);

        match self.stack_map.get(rid) {
            Some(Loc::Stack(off)) => *off,
            Some(Loc::Reg(_)) => {
                println!("allocate_stack_slot | Reg");
                0
            } // 레지스터면 offset 의미 0 (안 씀)
            None => {
                let off = self.next_stack_offset;
                let _ = self.stack_map.insert(*rid, Loc::Stack(off));
                self.next_stack_offset += get_dtype_size(dtype);
                off
            }
        }
    }
    fn force_spill_if_reg(
        &mut self,
        rid: &ir::RegisterId,
        dtype: &ir::Dtype,
        asm_instrs: &mut Vec<asm::Instruction>,
    ) {
        if let Some(Loc::Reg(reg)) = self.stack_map.get(rid) {
            let off = self.next_stack_offset;
            asm_instrs.push(asm::Instruction::SType {
                instr: asm::SType::store(dtype.clone()),
                rs1: asm::Register::Sp,
                rs2: *reg,
                imm: asm::Immediate::Value(off as u64),
            });
            let _ = self.stack_map.insert(*rid, Loc::Stack(off));
            self.next_stack_offset += get_dtype_size(dtype);
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
                    println!(
                        "init_value_opt | dtype {} initializer {:?}",
                        dtype, initializer
                    );

                    // 초기값 파싱
                    let init_value_opt = match initializer {
                        Some(ast::Initializer::Expression(expr)) => match &expr.node {
                            ast::Expression::Constant(c) => Some(c.node.clone()),

                            ast::Expression::UnaryOperator(unary_expr) => {
                                let ast::UnaryOperatorExpression { operator, operand } =
                                    &unary_expr.node;
                                match (&operator.node, &operand.node) {
                                    (ast::UnaryOperator::Minus, ast::Expression::Constant(c)) => {
                                        match &c.node {
                                            ast::Constant::Integer(i) => {
                                                Some(ast::Constant::Integer(ast::Integer {
                                                    number: format!("-{}", i.number).into(),
                                                    ..i.clone()
                                                }))
                                            }
                                            ast::Constant::Float(f) => {
                                                Some(ast::Constant::Float(ast::Float {
                                                    number: format!("-{}", f.number).into(),
                                                    ..f.clone()
                                                }))
                                            }
                                            _ => None,
                                        }
                                    }
                                    _ => None,
                                }
                            }

                            _ => None,
                        },
                        _ => None,
                    };

                    let init_value_opt = if let Some(c) = init_value_opt {
                        ir::Constant::try_from(&c).ok()
                    } else {
                        None
                    };

                    println!("name {} init_valu_opt {:?}", name, init_value_opt);
                    let init_value: u64 = match init_value_opt {
                        Some(ir::Constant::Int { value, .. }) => value as u64,
                        Some(ir::Constant::Float { value, width }) => {
                            println!("value.0.to_bits() {}", value.0.to_bits());
                            match width {
                                32 => {
                                    let f: f32 = value.0 as f32;
                                    f.to_bits() as u64
                                }
                                64 => value.0.to_bits(),
                                _ => panic!("Unsupported float width"),
                            }
                        }
                        _ => 0,
                    };

                    println!("name {} init_value {}", name, init_value);
                    // .word, .quad 등 선
                    let data_directive = match dtype {
                        ir::Dtype::Int { width: 8, .. } => asm::Directive::Byte(init_value as u8),
                        ir::Dtype::Int { width: 16, .. } => asm::Directive::Half(init_value as u16),
                        ir::Dtype::Int { width: 32, .. } => asm::Directive::Word(init_value as u32),
                        ir::Dtype::Int { width: 64, .. } => asm::Directive::Quad(init_value),
                        ir::Dtype::Float { width: 32, .. } => {
                            asm::Directive::Word(init_value as u32)
                        }
                        ir::Dtype::Float { width: 64, .. } => asm::Directive::Quad(init_value),

                        _ => panic!("Unsupported global var dtype: {:?}", dtype),
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

        // println!("====translate===");
        // println!("self.function_name_list {:?}", self.function_name_list);

        let asm_unit = asm::TranslationUnit {
            functions,
            variables,
        };

        Ok(asm::Asm { unit: asm_unit })
    }
}

/// 12-bit 즉시값 범위를 벗어나면 여러 개의 addi 로 분해한다.
///   rd : 결과를 쓸 레지스터 (sp 등)
///   rs : 첫 addi 의 rs1  (첫 번째는 기존 rs1, 이후부터는 rd)
fn split_large_addi(rd: asm::Register, rs: asm::Register, imm64: i64) -> Vec<asm::Instruction> {
    use asm::{DataSize, IType, Immediate, Instruction};

    let mut seq = Vec::new();
    let mut rest = imm64;
    let mut cur_rs = rs; // 첫 번은 원래 rs1 사용

    while rest != 0 {
        // 12-bit signed 범위에 들어가는 chunk 계산
        let chunk = rest.clamp(-2048, 2047);

        seq.push(Instruction::IType {
            instr: IType::Addi(DataSize::Double),
            rd,
            rs1: cur_rs,
            imm: Immediate::Value(chunk as u64),
        });

        rest -= chunk;
        cur_rs = rd; // 이후부터 rs1 = rd
    }
    seq
}

fn split_large_memory_offset(instr: asm::Instruction) -> Option<Vec<asm::Instruction>> {
    match instr {
        // --- S-Type: store t0, offset(sp)
        asm::Instruction::SType {
            instr: stype,
            rs1,
            rs2,
            imm: asm::Immediate::Value(imm),
        } => {
            let simm = imm as i64;
            if !(-2048..=2047).contains(&simm) {
                Some(vec![
                    asm::Instruction::Pseudo(asm::Pseudo::Li {
                        rd: asm::Register::T4,
                        imm,
                    }),
                    asm::Instruction::RType {
                        instr: asm::RType::Add(asm::DataSize::Double),
                        rd: asm::Register::T4,
                        rs1,
                        rs2: Some(asm::Register::T4),
                    },
                    asm::Instruction::SType {
                        instr: stype,
                        rs1: asm::Register::T4,
                        rs2,
                        imm: asm::Immediate::Value(0),
                    },
                ])
            } else {
                None
            }
        }

        // --- I-Type: load t0, offset(sp)
        asm::Instruction::IType {
            instr:
                asm::IType::Load {
                    data_size,
                    is_signed,
                },
            rd,
            rs1,
            imm: asm::Immediate::Value(imm),
        } => {
            let simm = imm as i64;
            if !(-2048..=2047).contains(&simm) {
                Some(vec![
                    asm::Instruction::Pseudo(asm::Pseudo::Li {
                        rd: asm::Register::T4,
                        imm,
                    }),
                    asm::Instruction::RType {
                        instr: asm::RType::Add(asm::DataSize::Double),
                        rd: asm::Register::T4,
                        rs1,
                        rs2: Some(asm::Register::T4),
                    },
                    asm::Instruction::IType {
                        instr: asm::IType::Load {
                            data_size,
                            is_signed,
                        },
                        rd,
                        rs1: asm::Register::T4,
                        imm: asm::Immediate::Value(0),
                    },
                ])
            } else {
                None
            }
        }

        _ => None,
    }
}

impl Asmgen {
    fn translate_function_divider_for_memory_offset(&mut self, asm_blocks: &mut [asm::Block]) {
        for block in asm_blocks.iter_mut() {
            let mut new_instrs = Vec::with_capacity(block.instructions.len());

            for instr in block.instructions.drain(..) {
                if let Some(mut expanded) = split_large_memory_offset(instr.clone()) {
                    new_instrs.append(&mut expanded);
                } else {
                    new_instrs.push(instr);
                }
            }

            block.instructions = new_instrs;
        }
    }

    fn translate_function_divider_for_addi(&mut self, asm_blocks: &mut [asm::Block]) {
        use asm::{DataSize, IType, Immediate, Instruction, Register};

        for block in asm_blocks.iter_mut() {
            let mut new_instrs = Vec::with_capacity(block.instructions.len());

            for instr in block.instructions.drain(..) {
                // addi *, *, imm   인지 확인
                if let Instruction::IType {
                    instr: IType::Addi(DataSize::Double),
                    rd,
                    rs1,
                    imm: Immediate::Value(val),
                } = &instr
                {
                    let simm = *val as i64;
                    if !(-2048..=2047).contains(&simm) {
                        // 12-bit 초과 → 분해해서 삽입
                        new_instrs.extend(split_large_addi(*rd, *rs1, simm));
                        continue; // 원본 instr 버림
                    }
                }
                // 그대로 사용
                new_instrs.push(instr);
            }

            block.instructions = new_instrs;
        }
    }

    fn translate_function_placeholder_handler(&mut self, asm_blocks: &mut [asm::Block]) {
        // prelogue, epilogue 둘 다 placeholder를 가지고 있음

        add_padding(&mut self.stack_allocator.next_stack_offset);

        // 6️⃣ 마지막에 bid_init block의 sp placeholder patch (필수)
        if let Some(block_init) = asm_blocks.first_mut() {
            if let Some(asm::Instruction::IType {
                instr: asm::IType::Addi(asm::DataSize::Double),
                rd,
                rs1,
                imm,
            }) = block_init.instructions.first_mut()
            {
                *imm = asm::Immediate::Value((-self.stack_allocator.next_stack_offset) as u64);
                println!(
                    "Patched initial sp offset to {}",
                    (-self.stack_allocator.next_stack_offset) as u64
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
                        *imm = asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64);
                    }
                    _ => {
                        // panic!("not yet implemented");
                        // println!();
                    }
                }
            }
        }
        let total_offset = (self.stack_allocator.next_stack_offset) as u64;

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
            imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
        });
        self.stack_allocator.next_stack_offset += 8;

        if call_flag {
            // sw ra,8(sp)
            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::Ra,
                imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
            });
            self.stack_allocator.next_stack_offset += 8;

            // sw s1, 16(sp)
            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::S1,
                imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
            });
            self.stack_allocator.next_stack_offset += 8;
        }

        asm_block_instrs.push(asm::Instruction::IType {
            instr: asm::IType::Addi(asm::DataSize::Double),
            rd: asm::Register::S0,
            rs1: asm::Register::Sp,
            imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64), // placeholder
        });

        // allocations
        /*
        allocation은 보통 다 pointer를 가리키고 있음
        */
        let mut ptr_indicator_offsets = Vec::new();
        for (i, dtype) in allocations.iter().enumerate() {
            let local_rid = ir::RegisterId::local(i);
            ptr_indicator_offsets.push((
                local_rid,
                dtype.deref(),
                self.stack_allocator.next_stack_offset,
            ));

            self.stack_allocator.next_stack_offset += get_dtype_size(dtype);
        }
        add_padding(&mut self.stack_allocator.next_stack_offset);

        for (local_rid, dtype, ptr_indicator_offset) in ptr_indicator_offsets {
            let ptr_dtype = ir::Dtype::pointer(dtype.clone());

            let offset = self
                .stack_allocator
                .allocate_stack_slot(&local_rid, &ptr_dtype);

            // let t0_reg = asm_register_instruction(0, dtype);
            // println!("translate_function_prelogue | t0_reg {t0_reg}");
            asm_block_instrs.push(asm::Instruction::IType {
                instr: asm::IType::Addi(asm::DataSize::Double),
                rd: asm::Register::T0,
                rs1: asm::Register::Sp,
                imm: asm::Immediate::Value(ptr_indicator_offset as u64),
            });

            asm_block_instrs.push(asm::Instruction::SType {
                instr: asm::SType::Store(asm::DataSize::Double),
                rs1: asm::Register::Sp,
                rs2: asm::Register::T0,
                imm: asm::Immediate::Value(offset as u64),
            });
        }

        // phinodes
        // 계속 allocate_stack_slot을 할 이유가 없음
        let mut caller_offset = 0;
        for (i, dtype) in block.phinodes.iter().enumerate() {
            let rid = ir::RegisterId::arg(*bid, i);
            let slot_off = self
                .stack_allocator
                .allocate_stack_slot(&rid, dtype.deref());

            let arg_reg = asm_register_args(i, dtype);
            let t0_reg = asm_register_instruction(0, dtype);

            if i < 8 {
                // a<i> 값을 바로 스택에 복사
                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(dtype.deref().clone()),
                    rs1: asm::Register::Sp,
                    rs2: arg_reg,
                    imm: asm::Immediate::Value(slot_off as u64),
                });
            } else {
                // 8번째 이후는 호출자가 S1 에 남겨둔 영역에서 load (기존 코드)

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Load {
                        data_size: asm::DataSize::from_dtype(dtype.deref()),
                        is_signed: true,
                    },
                    rd: t0_reg,
                    rs1: asm::Register::S1,
                    imm: asm::Immediate::Value(caller_offset as u64),
                });
                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(dtype.deref().clone()),
                    rs1: asm::Register::Sp,
                    rs2: t0_reg,
                    imm: asm::Immediate::Value(slot_off as u64),
                });
                caller_offset += get_dtype_size(dtype.deref());
            }
        }

        add_padding(&mut self.stack_allocator.next_stack_offset);
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
                let offset = self.stack_allocator.allocate_stack_slot(rid, dtype);
                println!("translate_operand | offset {}", offset);
                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::load(operand.dtype()),
                    rd,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(offset as u64),
                });
            }
            ir::Operand::Constant(c) => {
                println!("translate_operand | Constant c {}", c);
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
                    ir::Constant::Undef { dtype } => match dtype {
                        ir::Dtype::Float { width, is_const } => {}
                        _ => {
                            asm_block_instrs
                                .push(asm::Instruction::Pseudo(asm::Pseudo::Li { rd, imm: 0 }));
                        }
                    },
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
                    ir::Constant::Float { value, width } => {
                        let imm = match width {
                            32 => {
                                let f: f32 = value.0 as f32;
                                f.to_bits() as u64
                            }
                            64 => value.0.to_bits(),
                            _ => panic!("Unsupported float width"),
                        };

                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                            rd: asm::Register::T2,
                            imm,
                        }));
                        let data_size = asm::DataSize::from_dtype(&operand.dtype());
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::FmvIntToFloat {
                                float_data_size: data_size,
                            },
                            rd,
                            rs1: asm::Register::T2,
                            rs2: None,
                        });
                    }
                    _ => {
                        println!("TODO")
                    }
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
                // add_padding(&mut self.stack_allocator.next_stack_offset);
                println!("translate_functino_epilogue | value {}", value);

                let a0_reg = asm_register_args(0, &value.dtype());
                // asm::Register::A0 -> a0_reg

                self.translate_operand(value.clone(), a0_reg, asm_block_instrs);

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
                        rs2: a0_reg,
                        imm: asm::Immediate::Value((-8i64) as u64),
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
            } => {
                // float 불가
                // ① 분기 값 → T0
                self.translate_operand(value.clone(), asm::Register::T1, asm_block_instrs);
                // li T0, const_val

                // ② 각 case 비교-분기
                for (const_val, case_arg) in cases {
                    let constant_operand = ir::Operand::Constant(const_val.clone());
                    self.translate_operand(
                        constant_operand.clone(),
                        asm::Register::T2,
                        asm_block_instrs,
                    );

                    // xor T0,T1,T2
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: asm::RType::Xor,
                        rd: asm::Register::T0,
                        rs1: asm::Register::T1,
                        rs2: Some(asm::Register::T2),
                    });
                    // beq T0,zero, <case label>
                    asm_block_instrs.push(asm::Instruction::BType {
                        instr: asm::BType::Beq,
                        rs1: asm::Register::T0,
                        rs2: asm::Register::Zero,
                        imm: asm::Label::new(name, case_arg.bid),
                    });
                }

                // ③ 모두 빗나가면 default 로
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::J {
                    offset: asm::Label::new(name, default.bid),
                }));
            }
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
            ir::Instruction::UnaryOp {
                op,
                operand,
                dtype,
                // dtype:
                //     ir::Dtype::Int {
                //         width,
                //         is_signed,
                //         is_const,
                //     },
            } => match op {
                ast::UnaryOperator::Minus => {
                    // let dtype = &ir::Dtype::Int {
                    //     width: *width,
                    //     is_signed: *is_signed,
                    //     is_const: *is_const,
                    // };
                    let t0_reg = asm_register_instruction(0, dtype);

                    self.translate_operand(operand.clone(), t0_reg, asm_block_instrs);
                    println!(
                        "Unaryop Minus | operand.dtype {} instr dtype {} t0_reg {}",
                        operand.dtype(),
                        dtype,
                        t0_reg,
                    );

                    let pseudo = if t0_reg == asm::Register::T0 {
                        asm::Pseudo::neg(dtype.clone(), t0_reg, t0_reg)
                    } else {
                        asm::Pseudo::fneg(dtype.clone(), t0_reg, t0_reg)
                    };

                    asm_block_instrs.push(asm::Instruction::Pseudo(pseudo));
                    let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                    println!("unaryop offset {}", offset);
                    add_padding(&mut self.stack_allocator.next_stack_offset);
                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: t0_reg,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                ast::UnaryOperator::Negate => {
                    let t0_reg = asm_register_instruction(0, dtype);
                    // operand를 T0에 옮긴다
                    self.translate_operand(operand.clone(), t0_reg, asm_block_instrs);

                    // T0이 0이면 T0 ← 1, 아니면 T0 ← 0
                    asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                        rd: t0_reg,
                        rs: t0_reg,
                    }));
                    // 스택 슬롯 할당 및 저장
                    let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                    println!("unaryop negate offset {}", offset);
                    add_padding(&mut self.stack_allocator.next_stack_offset);

                    asm_block_instrs.push(asm::Instruction::SType {
                        instr: asm::SType::store(dtype.clone()),
                        rs1: asm::Register::Sp,
                        rs2: t0_reg,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                }
                _ => {
                    println!("TODO unaryop {:?}", op);
                }
            },
            ir::Instruction::BinOp {
                op,
                lhs,
                rhs,
                dtype,
            } => {
                let t0_reg = asm_register_instruction(0, dtype);
                let t1_reg = asm_register_instruction(1, &lhs.dtype());
                let t2_reg = asm_register_instruction(2, &rhs.dtype());

                self.translate_operand(lhs.clone(), t1_reg, asm_block_instrs);
                self.translate_operand(rhs.clone(), t2_reg, asm_block_instrs);

                // temp step
                let mut is_signed = true;
                if let ir::Dtype::Int { .. } = dtype {
                    is_signed = dtype.is_int_signed();
                }

                println!("instruction {} is_signed {}", instruction, is_signed);

                if let Some(rtype) = ast_binop_to_rtype(op, dtype.clone(), is_signed) {
                    asm_block_instrs.push(asm::Instruction::RType {
                        instr: rtype,
                        rd: t0_reg,
                        rs1: t1_reg,
                        rs2: Some(t2_reg),
                    });

                    println!("\n===== binop alloc =====\n");
                    // dst_rid에 대해서 T0를 저장해야 함
                    let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                    add_padding(&mut self.stack_allocator.next_stack_offset);
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
                        rs2: t0_reg,
                        imm: asm::Immediate::Value(offset as u64),
                    });
                } else {
                    println!("TODO maybe | instruction {}", instruction);
                }
                let t0_reg = asm_register_instruction(0, dtype);
                let t1_reg = asm_register_instruction(1, &lhs.dtype());
                let t2_reg = asm_register_instruction(2, &rhs.dtype());
                match *op {
                    // ast::BinaryOperator::ShiftLeft | ast::BinaryOperator::ShiftRight => {

                    // }
                    ast::BinaryOperator::Equals => {
                        println!("binop op {:?}", op);
                        // xor t0,t1,t2   ; 두 피연산자 같으면 t0=0
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::Xor,
                            rd: t0_reg,
                            rs1: t1_reg,
                            rs2: Some(t2_reg),
                        });
                        // seqz t0,t0      ; t0=1  (equal) / 0 (not equal)   ← pseudo-instr
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                            rd: t0_reg,
                            rs: t0_reg,
                        }));

                        println!("\n===== binop alloc =====\n");
                        // dst_rid에 대해서 T0를 저장해야 함
                        let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                        add_padding(&mut self.stack_allocator.next_stack_offset);
                        println!("\n=======================\n");

                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype.clone()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }
                    ast::BinaryOperator::NotEquals => {
                        // 1) xor t0,t1,t2   ; 같으면 0, 다르면 ≠0
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::Xor,
                            rd: t0_reg,
                            rs1: t1_reg,
                            rs2: Some(t2_reg),
                        });

                        // 2) snez t0,t0      ; t0 = 1 (≠) / 0 (＝)
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Snez {
                            // <- snez 한 줄
                            rd: t0_reg,
                            rs: t0_reg,
                        }));

                        // 3) 결과를 스택에 저장
                        let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                        add_padding(&mut self.stack_allocator.next_stack_offset);

                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype.clone()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }
                    ast::BinaryOperator::Less => {
                        is_signed = true;
                        if let ir::Dtype::Int { .. } = lhs.dtype() {
                            is_signed = lhs.dtype().is_int_signed();
                        }
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::Slt { is_signed },
                            rd: t0_reg,
                            rs1: t1_reg,
                            rs2: Some(t2_reg),
                        });
                        // dst_rid에 대해서 T0를 저장해야 함
                        let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                        add_padding(&mut self.stack_allocator.next_stack_offset);

                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype.clone()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }
                    ast::BinaryOperator::Greater => {
                        is_signed = true;
                        if let ir::Dtype::Int { .. } = lhs.dtype() {
                            is_signed = lhs.dtype().is_int_signed();
                        }
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::Slt { is_signed },
                            rd: t0_reg,
                            rs1: t2_reg,
                            rs2: Some(t1_reg),
                        });
                        // dst_rid에 대해서 T0를 저장해야 함
                        let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                        add_padding(&mut self.stack_allocator.next_stack_offset);

                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype.clone()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }
                    ast::BinaryOperator::GreaterOrEqual => {
                        // <=> Less, Less의 결과를 반전
                        // 1. signed / unsigned 결정
                        is_signed = true;
                        if let ir::Dtype::Int { .. } = lhs.dtype() {
                            is_signed = lhs.dtype().is_int_signed();
                        }

                        // T1 >= T2
                        // T1 < T2 -> 뒤집기

                        // 2. lhs < rhs  → tmp(T0)
                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::Slt { is_signed }, // slt(u) 선택
                            rd: t0_reg,                           // tmp = lhs < rhs
                            rs1: t1_reg,                          // lhs
                            rs2: Some(t2_reg),                    // rhs
                        });

                        // 3. 반전   tmp = (tmp == 0)
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Seqz {
                            rd: t0_reg,
                            rs: t0_reg,
                        }));

                        // 4. dst_rid 저장
                        let offset = self.stack_allocator.allocate_stack_slot(&dst_rid, dtype);
                        add_padding(&mut self.stack_allocator.next_stack_offset);

                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(dtype.clone()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(offset as u64),
                        });
                    }
                    _ => {}
                }
            }
            ir::Instruction::Load { ptr } => {
                let ptr_inner_dtype = ptr.dtype().get_pointer_inner().unwrap().clone();
                let t0_reg = asm_register_instruction(0, &ptr_inner_dtype);

                self.translate_operand(ptr.clone(), asm::Register::T0, asm_block_instrs);

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::load(ptr_inner_dtype.clone()),
                    rd: t0_reg,
                    rs1: asm::Register::T0,
                    imm: asm::Immediate::Value(0),
                });

                // dst_rid에 대해서 T0를 저장해야 함
                let offset = self
                    .stack_allocator
                    .allocate_stack_slot(&dst_rid, &ptr_inner_dtype);

                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(ptr_inner_dtype.clone()),
                    rs1: asm::Register::Sp,
                    rs2: t0_reg,
                    imm: asm::Immediate::Value(offset as u64),
                });

                add_padding(&mut self.stack_allocator.next_stack_offset);
            }

            ir::Instruction::Store { ptr, value } => {
                self.translate_operand(ptr.clone(), asm::Register::T0, asm_block_instrs);

                let t1_reg = asm_register_instruction(1, &value.dtype());
                self.translate_operand(value.clone(), t1_reg, asm_block_instrs);
                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(value.dtype()),
                    rs1: asm::Register::T0,
                    rs2: t1_reg,
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
                    self.stack_allocator.next_stack_offset
                );

                add_padding(&mut self.stack_allocator.next_stack_offset);

                // dst_rid에 대해서 T0를 저장해야 함
                let ret_offset = self.stack_allocator.allocate_stack_slot(&dst_rid, ret);

                add_padding(&mut self.stack_allocator.next_stack_offset);

                println!(
                    "translate_function_instruction | after ret | next_stack_offset {}",
                    self.stack_allocator.next_stack_offset
                );

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S1,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
                }); // 일단 arg 초반 시작부터 보는 거여서 맞기는 함

                // 인자들을 stack에 저장
                for (i, arg) in args.iter().enumerate() {
                    // translate_operand는 교환자임, 교환이 아닌 경우, 새로운 것이 들어왔을 경우??
                    let t0_reg = asm_register_instruction(0, &arg.dtype());
                    let arg_reg = asm_register_args(i, &arg.dtype());
                    // arg_reg -> a(i)

                    self.translate_operand(arg.clone(), t0_reg, asm_block_instrs);

                    // asm_block_instrs.push(asm::Instruction::SType {
                    //     instr: asm::SType::store(arg.dtype()),
                    //     rs1: asm::Register::Sp,
                    //     rs2: asm::Register::T0,
                    //     imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
                    // });
                    // self.stack_allocator.next_stack_offset += get_dtype_size(&arg.dtype());
                    if i < 8 {
                        // a<i> ← T0
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                            rd: arg_reg,
                            rs: t0_reg,
                        }));
                    } else {
                        // 8번째 이후는 스택 spill (지금 쓰고 있는 코드 재사용)
                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(arg.dtype()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(
                                self.stack_allocator.next_stack_offset as u64,
                            ),
                        });
                        self.stack_allocator.next_stack_offset += get_dtype_size(&arg.dtype());
                    }
                }
                add_padding(&mut self.stack_allocator.next_stack_offset);
                println!(
                    "translate_function_instruction next_stack_offset {}",
                    self.stack_allocator.next_stack_offset
                );

                // call 실행
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                    offset: asm::Label(call_name.clone()),
                }));

                add_padding(&mut self.stack_allocator.next_stack_offset);
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
                    self.stack_allocator.next_stack_offset
                );

                add_padding(&mut self.stack_allocator.next_stack_offset);

                // dst_rid에 대해서 T0를 저장해야 함
                let ret_offset = self
                    .stack_allocator
                    .allocate_stack_slot(&dst_rid, return_type);

                add_padding(&mut self.stack_allocator.next_stack_offset);

                println!(
                    "translate_function_instruction | after ret | next_stack_offset {}",
                    self.stack_allocator.next_stack_offset
                );

                asm_block_instrs.push(asm::Instruction::IType {
                    instr: asm::IType::Addi(asm::DataSize::Double),
                    rd: asm::Register::S1,
                    rs1: asm::Register::Sp,
                    imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
                }); // 일단 arg 초반 시작부터 보는 거여서 맞기는 함

                // 인자들을 stack에 저장
                for (i, arg) in args.iter().enumerate() {
                    // translate_operand는 교환자임, 교환이 아닌 경우, 새로운 것이 들어왔을 경우??
                    let t0_reg = asm_register_instruction(0, &arg.dtype());
                    let arg_reg = asm_register_args(i, &arg.dtype());
                    // T0 -> reg
                    self.translate_operand(arg.clone(), t0_reg, asm_block_instrs);

                    // asm_block_instrs.push(asm::Instruction::SType {
                    //     instr: asm::SType::store(arg.dtype()),
                    //     rs1: asm::Register::Sp,
                    //     rs2: asm::Register::T0,
                    //     imm: asm::Immediate::Value(self.stack_allocator.next_stack_offset as u64),
                    // });
                    // self.stack_allocator.next_stack_offset += get_dtype_size(&arg.dtype());

                    if i < 8 {
                        // a<i> ← T0
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                            rd: arg_reg,
                            rs: t0_reg,
                        }));
                    } else {
                        // 8번째 이후는 스택 spill (지금 쓰고 있는 코드 재사용)
                        asm_block_instrs.push(asm::Instruction::SType {
                            instr: asm::SType::store(arg.dtype()),
                            rs1: asm::Register::Sp,
                            rs2: t0_reg,
                            imm: asm::Immediate::Value(
                                self.stack_allocator.next_stack_offset as u64,
                            ),
                        });
                        self.stack_allocator.next_stack_offset += get_dtype_size(&arg.dtype());
                    }
                }
                add_padding(&mut self.stack_allocator.next_stack_offset);
                println!(
                    "translate_function_instruction next_stack_offset {}",
                    self.stack_allocator.next_stack_offset
                );
                // callee ?? T0 -> reg

                let t0_reg = asm_register_instruction(0, &callee.dtype());
                self.translate_operand(callee, t0_reg, asm_block_instrs);

                // call 실행
                asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Jalr { rs: t0_reg }));

                add_padding(&mut self.stack_allocator.next_stack_offset);
            }
            ir::Instruction::TypeCast {
                value,
                target_dtype,
            } => {
                // value, target_dtype에 대해서

                let t1_value_reg = asm_register_instruction(1, &value.dtype());

                let t2_target_reg = asm_register_instruction(2, target_dtype);

                self.translate_operand(value.clone(), t1_value_reg, asm_block_instrs);
                // Load then 상황
                let offset = self
                    .stack_allocator
                    .allocate_stack_slot(&dst_rid, target_dtype);

                match (t1_value_reg, t2_target_reg) {
                    (asm::Register::T1, asm::Register::FT2) => {
                        let int_size = asm::DataSize::from_dtype(&value.dtype());
                        let float_size = asm::DataSize::from_dtype(target_dtype);
                        let is_signed = value.dtype().is_int_signed();

                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::FcvtIntToFloat {
                                int_data_size: int_size,
                                float_data_size: float_size,
                                is_signed,
                            },
                            rd: asm::Register::FT2,
                            rs1: asm::Register::T1,
                            rs2: None,
                        });
                    }
                    (asm::Register::FT1, asm::Register::T2) => {
                        let float_size = asm::DataSize::from_dtype(&value.dtype());
                        let int_size = asm::DataSize::from_dtype(target_dtype);
                        let is_signed = target_dtype.is_int_signed();

                        asm_block_instrs.push(asm::Instruction::RType {
                            instr: asm::RType::FcvtFloatToInt {
                                float_data_size: float_size,
                                int_data_size: int_size,
                                is_signed,
                            },
                            rd: asm::Register::T2,
                            rs1: asm::Register::FT1,
                            rs2: None,
                        });
                    }
                    (asm::Register::FT1, asm::Register::FT2) => {
                        let data_target_size = asm::DataSize::from_dtype(target_dtype);
                        let data_value_size = asm::DataSize::from_dtype(&value.dtype());

                        if data_value_size == data_target_size {
                            // 타입이 같으면 fmv.{s,d}
                            let pseudo = asm::Pseudo::Fmv {
                                data_size: data_value_size,
                                rd: t2_target_reg,
                                rs: t1_value_reg,
                            };
                            asm_block_instrs.push(asm::Instruction::Pseudo(pseudo));
                        } else {
                            // 타입이 다르면 fcvt.{d,s}.{s,d}
                            asm_block_instrs.push(asm::Instruction::RType {
                                instr: asm::RType::FcvtFloatToFloat {
                                    from: data_value_size,
                                    to: data_target_size,
                                },
                                rd: asm::Register::FT2,
                                rs1: asm::Register::FT1,
                                rs2: None,
                            });
                        };
                    }

                    _ => {
                        asm_block_instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Mv {
                            rd: t2_target_reg,
                            rs: t1_value_reg,
                        }));
                    }
                }

                asm_block_instrs.push(asm::Instruction::SType {
                    instr: asm::SType::store(target_dtype.clone()),
                    rs1: asm::Register::Sp,
                    rs2: t2_target_reg,
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
        self.stack_allocator.next_stack_offset = 0;
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
                println!("  {:?} => {:?}", operand, offset);
            }
            println!("}}");
            println!("=========================");
        }

        self.translate_function_placeholder_handler(&mut asm_blocks);
        self.translate_function_divider_for_memory_offset(&mut asm_blocks);
        self.translate_function_divider_for_addi(&mut asm_blocks);

        asm::Function::new(asm_blocks)
    }
}

// impl asm::Register {
//     /// 0‥7 → a0‥a7
//     pub fn a(i: usize) -> Self {
//         [
//             asm::Register::A0,
//             asm::Register::A1,
//             asm::Register::A2,
//             asm::Register::A3,
//             asm::Register::A4,
//             asm::Register::A5,
//             asm::Register::A6,
//             asm::Register::A7,
//         ][i]
//     }
// }

impl asm::DataSize {
    pub fn from_dtype(dtype: &ir::Dtype) -> Self {
        match dtype {
            ir::Dtype::Int { width, .. } => match width {
                8 => asm::DataSize::Byte,
                16 => asm::DataSize::Half,
                32 => asm::DataSize::Word,
                64 => asm::DataSize::Double,
                _ => asm::DataSize::Byte, // maybe??
            },
            ir::Dtype::Float {
                width: 32,
                is_const,
            } => asm::DataSize::SinglePrecision,
            ir::Dtype::Float {
                width: 64,
                is_const,
            } => asm::DataSize::DoublePrecision,
            _ => panic!("Unsupported dtype for DataSize conversion: {:?}", dtype),
        }
    }
}

fn get_dtype_size(dtype: &ir::Dtype) -> i32 {
    match dtype {
        ir::Dtype::Int { width, .. } => ((width + 7) / 8) as i32,
        ir::Dtype::Float { width, .. } => ((width + 7) / 8) as i32, // 예: float32 → 4, float64 → 8

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
    use asm::{DataSize, RType};
    let ds = DataSize::from_dtype(&dtype);

    match dtype {
        ir::Dtype::Float { .. } => match op {
            ast::BinaryOperator::Plus => Some(RType::Fadd(ds)),
            ast::BinaryOperator::Minus => Some(RType::Fsub(ds)),
            ast::BinaryOperator::Multiply => Some(RType::Fmul(ds)),
            ast::BinaryOperator::Divide => Some(RType::Fdiv(ds)),
            // ast::BinaryOperator::Equals => Some(RType::Feq(ds)),
            // ast::BinaryOperator::Less => Some(RType::Flt(ds)),
            // 필요시 Greater → float용 별도 추가 가능
            _ => None,
        },
        _ => match op {
            ast::BinaryOperator::Plus => Some(RType::Add(ds)),
            ast::BinaryOperator::Minus => Some(RType::Sub(ds)),
            ast::BinaryOperator::Multiply => Some(RType::Mul(ds)),
            ast::BinaryOperator::BitwiseXor => Some(RType::Xor),
            ast::BinaryOperator::BitwiseOr => Some(RType::Or),
            ast::BinaryOperator::BitwiseAnd => Some(RType::And),
            ast::BinaryOperator::ShiftLeft => Some(RType::Sll(ds)),
            ast::BinaryOperator::ShiftRight => Some(if is_signed {
                RType::Sra(ds)
            } else {
                RType::Srl(ds)
            }),
            ast::BinaryOperator::Modulo => Some(RType::Rem {
                data_size: ds,
                is_signed,
            }),
            ast::BinaryOperator::Divide => Some(RType::Div {
                data_size: ds,
                is_signed,
            }),
            // ast::BinaryOperator::Less => Some(RType::Slt { is_signed }),
            _ => None,
        },
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

fn asm_register_instruction(idx: usize, dtype: &ir::Dtype) -> asm::Register {
    use asm::Register;

    const INT_REGS: [Register; 3] = [Register::T0, Register::T1, Register::T2];
    const FLOAT_REGS: [Register; 3] = [Register::FT0, Register::FT1, Register::FT2];

    match dtype {
        ir::Dtype::Float { .. } => FLOAT_REGS[idx],
        _ => INT_REGS[idx],
    }
}

fn asm_register_args(idx: usize, dtype: &ir::Dtype) -> asm::Register {
    use asm::Register;

    const INT_REGS: [Register; 8] = [
        Register::A0,
        Register::A1,
        Register::A2,
        Register::A3,
        Register::A4,
        Register::A5,
        Register::A6,
        Register::A7,
    ];
    const FLOAT_REGS: [Register; 8] = [
        Register::FA0,
        Register::FA1,
        Register::FA2,
        Register::FA3,
        Register::FA4,
        Register::FA5,
        Register::FA6,
        Register::FA7,
    ];

    match dtype {
        ir::Dtype::Float { .. } => FLOAT_REGS[idx],
        _ => INT_REGS[idx],
    }
}
