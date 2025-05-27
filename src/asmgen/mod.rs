use std::collections::{BTreeMap, HashMap, HashSet, VecDeque};
use std::hash::Hash;

use itertools::all;
use lang_c::ast;

use crate::ir::{BlockExit, HasDtype};
use crate::opt::opt_utils;
use crate::{Translate, asm, ir};

use std::ops::Deref;

/*
int square(int x) {
    return x * x;
}

int foo() {
    return square(2);
}

int bar() {
    return square(3);
}
한 Callee에 대해서 multiple caller 존재가능함
*/

#[derive(Debug)]
pub struct Asmgen {
    /* Call bid는 Caller측 bid */
    caller_to_callee: HashMap<String, Vec<(ir::BlockId, String, CallType)>>, /* Caller, [(Call bid, Callee), ...] */
    // caller_to_call_type: HashMap<String, HashMap<ir::BlockId, CallType>>,
    caller_to_alloc_to_off_b: HashMap<String, HashMap<String, (i32, i32)>>,
    function_name_to_offset: HashMap<String, i32>,

    callee_to_caller: HashMap<String, Vec<(ir::BlockId, String)>>, /* Callee, [(Call bid, Caller), ...] */

    function_name_list: HashMap<String, (usize, ir::FunctionSignature)>,
    variable_name_list: HashMap<String, ir::Dtype>,
    struct_list: HashMap<String, Option<ir::Dtype>>,
    // callee_to_offset: HashMap<String, i32>,
}

#[allow(clippy::derivable_impls)]
impl Default for Asmgen {
    fn default() -> Self {
        // todo!()
        Asmgen {
            caller_to_callee: HashMap::new(),
            // caller_to_call_type: HashMap::new(),
            caller_to_alloc_to_off_b: HashMap::new(),
            function_name_to_offset: HashMap::new(),
            callee_to_caller: HashMap::new(),
            function_name_list: HashMap::new(),
            variable_name_list: HashMap::new(),
            struct_list: HashMap::new(),
        }
    }
}

impl Translate<ir::TranslationUnit> for Asmgen {
    // type Target = asm::Asm;
    type Target = asm::Asm;
    type Error = ();

    fn translate(&mut self, source: &ir::TranslationUnit) -> Result<Self::Target, Self::Error> {
        let mut functions = Vec::new();
        let mut variables = Vec::new();

        self.struct_list = source.structs.clone();
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
            {
                self.init(name, defn);
            }
            true
        });

        println!(
            "translate | caller_callee \n {:?} \n",
            self.caller_to_callee
        );
        println!(
            "translate | callee_caller \n {:?} \n",
            self.callee_to_caller
        );
        // println!(
        //     "translate | callee_to_call_type \n {:?} \n",
        //     self.caller_to_call_type
        // );

        println!("function_name_lists | {:?}", self.function_name_list);
        println!("variable_name_lists | {:?}", self.variable_name_list);
        println!("struct | {:?}", self.struct_list);

        for (name, decl) in &source.decls {
            match decl {
                ir::Declaration::Function {
                    signature,
                    definition: Some(defn),
                } => {
                    let func = self.translate_function(name, signature, defn)?;

                    let header = vec![
                        asm::Directive::Globl(asm::Label(name.clone())),
                        asm::Directive::Section(asm::SectionType::Text),
                        asm::Directive::Type(asm::Label(name.clone()), asm::SymbolType::Function),
                    ];

                    functions.push(asm::Section::new(header, func));
                }

                ir::Declaration::Variable { dtype, initializer } => {
                    // 나중에 전역 변수 처리 로직 추가 가능
                    // variables.push(...);
                }

                _ => {} // 함수 정의가 없는 선언 (prototype) 무시
            }
        }
        println!(
            "translate | stack_offset \n {:?} \n",
            self.function_name_to_offset
        );

        let asm_unit = asm::TranslationUnit {
            functions,
            variables,
        };

        Ok(asm::Asm { unit: asm_unit })
    }
}

impl Asmgen {
    fn translate_function(
        &mut self,
        name: &str,
        sig: &ir::FunctionSignature,
        defn: &ir::FunctionDefinition,
    ) -> Result<asm::Function, ()> {
        // let function_name_list = &self.function_name_list.clone();
        // let struct_list = &self.struct_list.clone();

        let mut asm_blocks = Vec::new();
        let bid_init = &defn.bid_init;

        // 스택 오프셋 계산 초기화
        // stack pointer offset, 해당 function에 대해서는 stack_offset 동일함.
        self.stack_offset_defn(name, defn);

        for (bid, block) in &defn.blocks {
            let label = if (bid == bid_init) {
                Some(asm::Label(name.to_string()))
            } else {
                Some(asm::Label(format!(".{}_L{}", name, bid.0)))
            };
            let mut instructions = Vec::new();

            // body
            for (iid, instr) in block.instructions.iter().enumerate() {
                let dest_rid = ir::RegisterId::temp(*bid, iid);
                instructions.extend(self.translate_instruction(&dest_rid, &block.exit, instr));
            }

            // exit
            instructions.extend(self.translate_block_exit(&block.exit));

            asm_blocks.push(asm::Block::new(label, instructions));
        }

        Ok(asm::Function::new(asm_blocks))
    }

    /*
    함수를 나누어서 구현하기 -> caller-callee map, calllee-caller map 구하기, CallType 정보 저장해주기
    caller, callee 정보만 제대로 저장이 된다면 스택에 어떤 식으로 값을 할당할지 구할 수 있음

    caller, callee 둘 다 해당하는 경우도 물론 존재할 수 있음
    그래서
    callee 경우 ->
    caller 경우 -> stack offset 계산해주기


    그리고 함수 인자로 계속 전달하는게 불편함 차라리
    function_name_list
    stack_list
    */
    fn init(&mut self, name: &str, defn: &ir::FunctionDefinition) {
        // HashMap<String, HashMap<ir::BlockId, CallType>>
        let current_idx = self.function_name_list.get(name).unwrap();
        let tmp: HashMap<ir::BlockId, CallType> = defn
            .blocks
            .iter()
            .flat_map(|(bid, block)| {
                let mut tmp_elt = Vec::new();
                for instr in block.instructions.clone().iter() {
                    if let ir::Instruction::Call {
                        callee:
                            ir::Operand::Constant(ir::Constant::GlobalVariable {
                                name: call_name,
                                dtype,
                            }),
                        args,
                        return_type,
                    } = instr.deref()
                    {
                        let call_idx = self.function_name_list.get(call_name.deref()).unwrap();
                        // 현재 함수 인덱스(current_idx)가 호출된 함수(call_idx)보다 작은 경우는 정적 호출
                        let calltype = if call_idx.0 < current_idx.0 {
                            CallType::Call(call_name.clone()) // 정적 호출
                        } else {
                            let saved_reg = asm::Register::S1;
                            CallType::Jalr(call_name.clone(), saved_reg) // 동적 호출
                        };

                        let entry_from_caller =
                            self.caller_to_callee.entry(name.to_string()).or_default();
                        entry_from_caller.push((*bid, call_name.clone(), calltype)); // 해당 블록에 대한 call 정보를 추가
                        let entry_from_callee =
                            self.callee_to_caller.entry(call_name.clone()).or_default();
                        entry_from_callee.push((*bid, name.to_string()));
                    }
                }
                tmp_elt
            })
            .collect();
    }

    fn stack_offset_defn(&mut self, name: &str, defn: &ir::FunctionDefinition) {
        let ra = 1;
        let s0 = 1;
        let mut stack_offset = 0;

        // 일단 먼저 call이 존재하는지 판단하기 -> 모든 block들을 보면서 call이 있는지 call이 사용되는 시점과 define되는 시점
        // 함수 이름 -> bid 수준이 아니라 function 수준이기 때문에 다른 전략이 필요해

        let mut allocation_offset = 0;
        let mut local_allocation_to_offset_and_bytes = HashMap::<String, (i32, i32)>::new();
        for allocation in defn.allocations.clone() {
            /* is_long_data i32반환 */
            // let bytes = get_dtype_size(allocation.deref(), struct_list);
            // let offset = align_to_8(bytes) / 8;
            let (offset, bytes) = is_long_data(allocation.deref(), &self.struct_list); // (stack_offset, originalsize)
            if let Some(name) = allocation.name() {
                let _unused =
                    local_allocation_to_offset_and_bytes.insert(name.clone(), (offset, bytes));
            }
            allocation_offset += offset;
        }
        stack_offset += allocation_offset;

        let caller_to_alloc_to_off_b_entry = self
            .caller_to_alloc_to_off_b
            .entry(name.to_string())
            .or_default();
        caller_to_alloc_to_off_b_entry.extend(local_allocation_to_offset_and_bytes);

        println!(
            "stack_offset_defn | caller_to_alloc_to_off_b \n {:?} \n",
            self.caller_to_alloc_to_off_b
        );

        let mut ra_offset = 0;
        let mut saved_reg_offset = 0;
        if let Some(tmp) = self.caller_to_callee.get(name) {
            if !tmp.is_empty() {
                ra_offset += ra * tmp.len() as i32;
            }
            let jalr_count = tmp
                .iter()
                .filter(|(_, _, calltype)| matches!(calltype, CallType::Jalr(_, _)))
                .count();
            saved_reg_offset += jalr_count as i32;
        }
        stack_offset += ra_offset;
        stack_offset += saved_reg_offset;

        /*
        동적 호출 개수 계산 -> + 8, 개수만큼 그리고 각각에 대해서 saved register 할당해주기
        s1 ~ s11까지 일단 우리는 무조건 s1으로 할당해주게 하기
        개수 계산과 동시에 register 할당

        반환도 단순히 stack offset을 하기 보다는
        stackoffset, HashMap<bid, saved_reg로 사용하기> ->
        이 saved reg는 동적호출 시에 사용될 reg
        */

        /*
        그 다음에 해야할 것은 stack 크기 할당 어떤 식으로 해야할지 고민하기
        (allocations) + (backup for calculations) + (parameters 개수가 많은 경우, 또는 struct를 넣어주는 경우)
        */

        /*
        paramter
        backup
        allocation
        S0 X
        RA X
        Saved register for Jalr X -> # of Jalr 개수를 계산해야 함. X
        */

        /* caller */
        let mut caller_offset = 0;
        let _unused = defn.blocks.iter().all(|(bid, block)| {
            let offset = self
                .stack_caller_offset_instrs(defn.allocations.clone(), block.instructions.clone());
            caller_offset += offset;
            true
        });
        stack_offset += caller_offset;
        let mut param_long = false;
        if let Some(tmp) = self.caller_to_callee.get(name) {
            for (_, callee_name, _) in tmp {
                let (_, signature) = self.function_name_list.get(callee_name).unwrap();
                let ret_type = signature.ret.clone();
                let arg_types = signature.params.clone();
                let (ret_offset, bytes) = is_long_data(&ret_type, &self.struct_list);

                println!("name {} tmp {:?} ret_offset {:?}", name, tmp, ret_offset);

                param_long = arg_types.iter().any(|arg| {
                    let (offset, bytes) = is_long_data(arg, &self.struct_list);
                    offset > 0
                });
                let mut parameter_offset = 0;
                let mut args_offset = 0;
                if param_long || arg_types.len() > 2 {
                    let _unused = arg_types.iter().all(|arg| {
                        let (param_offset, bytes) = is_long_data(arg, &self.struct_list);
                        parameter_offset += param_offset;

                        let bytes = get_dtype_size(arg, &self.struct_list);
                        let offset = align_to_8(bytes) / 8;

                        args_offset += offset;
                        true
                    });
                }
                /*
                이미 load가 되는 부분 다 고려되고 있기 때문에 이를 제외하기 위해서
                다 고려되는 것은 아님

                param_offset = 0인 경우만을 고려함.
                */
                // stack_offset += parameter_offset;

                let callee_name_entry = self
                    .function_name_to_offset
                    .entry(callee_name.to_string())
                    .or_default();
                println!("name {} arg_types.len() {}", name, arg_types.len());
                if param_long {
                    *callee_name_entry += args_offset;
                } else {
                    *callee_name_entry += ret_offset;
                }

                if arg_types.len() > 2 && !param_long {
                    *callee_name_entry += args_offset;
                }

                if ret_offset > 2 {
                    /*
                    callee 를 위한 자리
                    return 을 위한 자리
                    */
                    if param_long {
                        stack_offset += 2 * ret_offset;
                    } else {
                        stack_offset += ret_offset;
                    }
                }

                println!(
                    "stack_offset_defn | caller name {} | callee name {} | \n param_long {}, parameter_offset {}, args_offset {}, ret_offset {} \n",
                    name, callee_name, param_long, parameter_offset, args_offset, ret_offset
                )
            }
        }

        // /* callee */
        // let mut callee_offset = 0;
        // let mut transfer_offset = 0;
        // if let Some(tmp) = self.callee_to_caller.get(name) {
        //     // is callee?
        //     let mut param_long = false;
        //     let (_, signature) = self.function_name_list.get(name).unwrap();
        //     let ret_type = signature.ret.clone();
        //     let arg_types = signature.params.clone();

        //     param_long = arg_types.iter().any(|arg| {
        //         let (offset, bytes) = is_long_data(arg, &self.struct_list);
        //         offset > 0
        //     });
        //     let mut parameter_offset = 0;
        //     let mut args_offset = 0;
        //     if param_long {
        //         let _unused = arg_types.iter().all(|arg| {
        //             let (arg_offset, bytes) = is_long_data(arg, &self.struct_list);
        //             args_offset += arg_offset;

        //             let bytes = get_dtype_size(arg, &self.struct_list);
        //             let offset = align_to_8(bytes) / 8;
        //             parameter_offset += offset;
        //             true
        //         });
        //     }
        //     callee_offset += parameter_offset;
        //     transfer_offset += args_offset;
        //     println!("parameter_offset {:?}", parameter_offset);
        //     println!("args_offset; {:?}", args_offset);

        //     let (return_offset, bytes) = is_long_data(&ret_type, &self.struct_list);
        //     callee_offset += return_offset;
        //     // allocation -> return 값, return copy값

        //     /* transfer offset */
        //     // if return_offset > 2 {
        //     //     /* a0, a1 reg에 자리가 다 찰 경우 */
        //     //     // caller side에서 미리 지정해줌, tmp caller에 대해서 모두 할당해주기
        //     //     transfer_offset += return_offset;
        //     //     // caller 자리 하나
        //     // }
        //     // a0, a1 자리가 다 차지 않은 경우에도 불구하고
        //     // long_data인 경우에는 return_offset을 고려하지 않을까?
        //     // transfer_offset += return_offset; // 이미 caller side에서 return에 대해서 고려해줌
        //     // 여기서 우리가 해주어야 할 것은
        //     if return_offset > 2 {
        //         /* a0, a1 reg에 자리가 다 찰 경우 */
        //         // caller side에서 미리 지정해줌, tmp caller에 대해서 모두 할당해주기
        //         transfer_offset += return_offset; // callee쪽에서 caller로 복사
        //         // caller 자리 하나
        //     }
        //     if !param_long {
        //         // arg과 stack에 저장되지 않은 경우
        //         callee_offset += return_offset; // callee쪽에서 caller로 복사 전에 copy
        //     }

        //     for (bid, caller_name) in tmp {
        //         let caller_name_entry = self
        //             .function_name_to_offset
        //             .entry(caller_name.to_string())
        //             .or_default();
        //         *caller_name_entry += transfer_offset;
        //     }
        // }

        // stack_offset += callee_offset;

        // 56, 40 도 가능해서 일단 보류
        // if stack_offset % 2 == 1 {
        //     stack_offset += 1; // stack padding (multiple of 16)
        // }

        let stack_offset_ptr = self
            .function_name_to_offset
            .entry(name.to_string())
            .or_default();
        println!("before updating | stack ptr {}", stack_offset_ptr);
        *stack_offset_ptr += stack_offset;

        let mut frame_offset = 0;

        if *stack_offset_ptr > 0 {
            println!("name {}", name);
            frame_offset += s0;
        }
        *stack_offset_ptr += frame_offset;

        println!(
            "
            (
                param_long: {},
                ra_offset: {},
                frame_offset: {},
                allocation_offset: {},
                caller_offset: {},
                saved_reg_offset: {},
            )",
            param_long, ra_offset, frame_offset, allocation_offset, caller_offset, saved_reg_offset,
        );
    }

    fn stack_caller_offset_instrs(
        &mut self,
        allocations: Vec<ir::Named<ir::Dtype>>,
        instrs: Vec<ir::Named<ir::Instruction>>,
    ) -> i32 {
        let mut caller_offset = 0;
        // let mut load_count_small_data = HashMap::<String, (i32, i32)>::new();
        // for instr in instrs.clone().iter() {
        //     let (offset, bytes) = is_long_data(&instr.deref().dtype(), &self.struct_list);
        //     if offset == 0 {
        //         match instr.deref() {
        //             ir::Instruction::Store { ptr, value } => {
        //                 if let Some((ir::RegisterId::Local { aid }, dtype)) = ptr.get_register() {
        //                     let key = allocations[*aid].name().unwrap();
        //                     let (entry1, entry2) =
        //                         load_count_small_data.entry(key.clone()).or_default();
        //                     *entry1 += 1;
        //                 }
        //             }
        //             ir::Instruction::Load { ptr } => {
        //                 if let Some((ir::RegisterId::Local { aid }, dtype)) = ptr.get_register() {
        //                     let key = allocations[*aid].name().unwrap();
        //                     let (entry1, entry2) =
        //                         load_count_small_data.entry(key.clone()).or_default();
        //                     *entry2 += 1;
        //                 }
        //             }
        //             _ => {}
        //         }
        //     }
        //     caller_offset += offset;
        // }
        // println!(
        //     "stack_caller_offset_instrs | load_count_small_data \n {:?} \n",
        //     load_count_small_data
        // );

        // // small_data 여서 count 만 세는 것으로도 충분함
        // // 1. 2회 이상 로드된 변수만 필터링
        // let filtered: HashMap<String, (i32, i32)> = load_count_small_data
        //     .iter()
        //     .filter(|(_, (sct, lct))| *sct * *lct > 0)
        //     .map(|(key, (sct, lct))| (key.clone(), (*sct, *lct)))
        //     .collect();

        // // 2. count의 총합 계산
        // let total_count: i32 = filtered.len() as i32;

        // println!("2회 이상 로드된 변수들: {:?}", filtered);
        // println!("이들의 총 로드 횟수 합계: {}", total_count);

        // caller_offset += total_count;

        // caller_offset

        let mut caller_offset = 0;
        let mut load_after_store_count: HashMap<String, i32> = HashMap::new();
        let mut in_store_phase: HashMap<String, bool> = HashMap::new();

        for instr in instrs.iter() {
            let (offset, _) = is_long_data(&instr.deref().dtype(), &self.struct_list);
            if offset == 0 {
                match instr.deref() {
                    ir::Instruction::Store { ptr, .. } => {
                        if let Some((ir::RegisterId::Local { aid }, _)) = ptr.get_register() {
                            let key = allocations[*aid].name().unwrap();
                            let _unused = in_store_phase.insert(key.clone(), true);
                        }
                    }
                    ir::Instruction::Load { ptr } => {
                        if let Some((ir::RegisterId::Local { aid }, _)) = ptr.get_register() {
                            let key = allocations[*aid].name().unwrap();
                            if let Some(true) = in_store_phase.get(key) {
                                // store 다음 load 등장 → 카운트 증가
                                *load_after_store_count.entry(key.clone()).or_default() += 1;
                                let _unused = in_store_phase.insert(key.clone(), false); // 이후 load는 무시
                            }
                        }
                    }
                    _ => {}
                }
            }
            caller_offset += offset;
        }

        println!(
            "store → load 패턴이 발견된 변수들 및 개수: {:?}",
            load_after_store_count
        );

        let total_count: i32 = load_after_store_count.values().sum();
        println!("총 store → load 패턴 개수: {}", total_count);

        caller_offset += total_count;
        caller_offset
    }

    fn translate_instruction(
        &self,
        dest_rid: &ir::RegisterId,
        exit: &ir::BlockExit,
        instr: &ir::Named<ir::Instruction>,
    ) -> Vec<asm::Instruction> {
        use ir::Instruction::*;

        let mut instructions = Vec::<asm::Instruction>::new();

        match instr.deref() {
            BinOp {
                op,
                lhs,
                rhs,
                dtype,
            } => {
                println!("translate_instruction | binop | {}", instr);
                let mut lhs_reg = asm::Register::Zero;
                let mut rhs_reg = asm::Register::Zero;
                let mut dest_rid = dest_rid;
                if let Some((lhs_rid, dtype)) = lhs.get_register() {
                    lhs_reg = map_reg_ir_to_asm(lhs_rid);
                }
                if let Some((rhs_rid, dtype)) = rhs.get_register() {
                    rhs_reg = map_reg_ir_to_asm(rhs_rid);
                }
                if let Some((lhs_rid, dtype)) = lhs.get_register() {
                    lhs_reg = map_reg_ir_to_asm(lhs_rid);
                }

                let dest_reg = if is_return_value(dest_rid, exit) {
                    asm::Register::A0
                } else {
                    map_reg_ir_to_asm(dest_rid)
                };

                // 먼저 상수 operand를 li로 처리
                translate_operand_if_constant(lhs, lhs_reg, &mut instructions);
                translate_operand_if_constant(rhs, rhs_reg, &mut instructions);

                // 그 다음 실제 연산
                translate_binop_instr(
                    op,
                    dtype.clone(),
                    dest_reg,
                    lhs_reg,
                    rhs_reg,
                    &mut instructions,
                );
                instructions
            }
            Call {
                callee,
                args,
                return_type,
            } => {
                // Call 처리
                let mut reg = asm::Register::Zero;
                for (i, arg) in args.iter().enumerate() {
                    // call 의 경우 무조건 변환 Constant여도
                    let reg = match i {
                        0 => asm::Register::A0,
                        1 => asm::Register::A1,
                        2 => asm::Register::A2,
                        3 => asm::Register::A3,
                        4 => asm::Register::A4,
                        5 => asm::Register::A5,
                        6 => asm::Register::A6,
                        7 => asm::Register::A7,
                        _ => panic!("Too many args"),
                    };

                    // 이 부분을 무조건 호출하게:
                    translate_operand_if_constant(arg, reg, &mut instructions);
                }

                if let ir::Operand::Constant(ir::Constant::GlobalVariable { name, .. }) = callee {
                    instructions.push(asm::Instruction::Pseudo(asm::Pseudo::Call {
                        offset: asm::Label(name.clone()),
                    }));
                } else {
                    panic!("Function call must be to global label");
                }
                instructions
            }
            GetElementPtr { ptr, offset, dtype } => vec![],
            Load { ptr } => vec![],
            Nop => vec![],
            Store { ptr, value } => vec![],
            TypeCast {
                value,
                target_dtype,
            } => vec![],
            UnaryOp { op, operand, dtype } => vec![],
            Value { value } => vec![],
        }
    }

    fn translate_block_exit(&self, exit: &ir::BlockExit) -> Vec<asm::Instruction> {
        use ir::BlockExit::*;
        let mut instructions = Vec::<asm::Instruction>::new();
        match exit {
            Return { value } => {
                let reg = asm::Register::A0;
                translate_operand_if_constant(value, reg, &mut instructions);
                instructions.push(asm::Instruction::Pseudo(asm::Pseudo::Ret));
                instructions
            }
            Jump { arg } => vec![],
            ConditionalJump {
                condition,
                arg_then,
                arg_else,
            } => vec![],
            Switch {
                value,
                default,
                cases,
            } => vec![],
            Unreachable => vec![],
        }
    }
}

fn translate_operand_if_constant(
    operand: &ir::Operand,
    reg: asm::Register,
    instrs: &mut Vec<asm::Instruction>,
) {
    if let ir::Operand::Constant(c) = operand {
        if let Some((value, _, _)) = c.get_int() {
            if value <= u64::MAX as u128 {
                instrs.push(asm::Instruction::Pseudo(asm::Pseudo::Li {
                    rd: reg,
                    imm: value as u64,
                }));
            } else {
                panic!(
                    "Constant value too large for 64-bit architecture: {}",
                    value
                );
            }
        } else {
            // TODO: float 상수 등 추가 처리
            // todo!("non-integer constants not yet handled");
        }
    }
}

fn map_binop_to_rtype(op: &ast::BinaryOperator, dtype: &ir::Dtype) -> asm::RType {
    use asm::{DataSize, RType};
    use ast::BinaryOperator::*;

    // 현재는 정수만 고려, float은 추후 처리
    let data_size = match dtype {
        ir::Dtype::Int { width, .. } => match width {
            8 => DataSize::Byte,
            16 => DataSize::Half,
            32 => DataSize::Word,
            64 => DataSize::Double,
            // _ => panic!("Unsupported int width: {}", width),
            _ => DataSize::Byte,
        },
        _ => panic!("Non-integer types not yet supported in BinOp"),
    };

    let is_signed = dtype.is_int_signed();

    match op {
        Plus => RType::Add(data_size),
        Minus => RType::Sub(data_size),
        Multiply => RType::Mul(data_size),
        Divide => RType::Div {
            data_size,
            is_signed,
        },
        Modulo => RType::Rem {
            data_size,
            is_signed,
        },
        Less => RType::Slt { is_signed },
        BitwiseAnd => RType::And,
        BitwiseOr => RType::Or,
        BitwiseXor => RType::Xor,
        Equals => RType::Xor, // temp
        _ => todo!("Binary op {:?} not yet supported", op),
    }
}

fn translate_binop_instr(
    op: &ast::BinaryOperator,
    dtype: ir::Dtype,
    dest: asm::Register,
    lhs: asm::Register,
    rhs: asm::Register,
    instrs: &mut Vec<asm::Instruction>,
) {
    let rtype = map_binop_to_rtype(op, &dtype);
    instrs.push(asm::Instruction::RType {
        instr: rtype,
        rd: dest,
        rs1: lhs,
        rs2: Some(rhs),
    });
}

fn map_reg_ir_to_asm(rid: &ir::RegisterId) -> asm::Register {
    match rid {
        ir::RegisterId::Arg { aid, .. } => match aid {
            0 => asm::Register::A0,
            1 => asm::Register::A1,
            2 => asm::Register::A2,
            3 => asm::Register::A3,
            4 => asm::Register::A4,
            5 => asm::Register::A5,
            6 => asm::Register::A6,
            7 => asm::Register::A7,
            _ => panic!("Too many args for RISC-V calling convention"),
        },
        ir::RegisterId::Temp { .. } => asm::Register::T2, // 예시
        _ => todo!("Support for locals/others"),
    }
}

fn is_return_value(tmp_rid: &ir::RegisterId, exit: &ir::BlockExit) -> bool {
    /*
    현재 iid에 해당하는 값이 return이 되는지를 체크하는 것
    map_reg_ir_to_asm을 할 때 rid가 필요하기 때문에

    만약에 반환되는 값이라면 바로 a0 사용 가능??
    */
    if let ir::BlockExit::Return { value } = exit {
        if let Some((rid, _)) = value.get_register() {
            if rid == tmp_rid {
                return true;
            }
        }
    }
    false
}

fn is_call(
    instructions: Vec<ir::Named<ir::Instruction>>,
    struct_list: &HashMap<String, Option<ir::Dtype>>,
    asmgen: &mut Asmgen,
) -> (bool, String, i32) {
    for instr in instructions.clone().iter() {
        // println!("is_call | instruction {:?}", instr.clone());
        if let ir::Instruction::Call {
            callee: ir::Operand::Constant(ir::Constant::GlobalVariable { name, dtype }),
            args,
            return_type,
        } = instr.deref()
        {
            // println!("is_call | true | name {:?}", name.clone());
            /*
            caller 입장 parmeter <- is_long_data
            callee 입장 argument <- 하나라도 is_long_data존재시 무조건 다 stack 에 넣어쥐

            return type is_long_data 의 경우
            caller
            callee

            지금 현재 우리는 caller만 다룸
            callee를 위한다면
            callee만을 위한 stack할당량을 기입해야하는가?
            callee -> (stackoffset 얼마만큼 할당해야하는지)
            */
            let mut caller_stack_offset = 0;
            let mut callee_stack_offset = 0;
            let mut param_exist_long = false;
            let mut offset_from_caller_parameter = 0;
            let mut offset_from_callee_argument = 0;
            let mut offset_from_caller_return = 0;
            let mut offset_from_callee_return = 0;

            param_exist_long = args.iter().any(|arg| {
                let (offset, bytes) = is_long_data(&arg.dtype(), struct_list);
                let filter = offset > 0;
                offset_from_caller_parameter += offset;
                filter
            });

            if param_exist_long {
                for arg in args {
                    let bytes = get_dtype_size(&arg.dtype(), struct_list);
                    let offset = align_to_8(bytes) / 8;
                    offset_from_callee_argument += offset;
                }
            }

            let (mut offset, bytes) = is_long_data(return_type, struct_list);

            if offset > 2 {
                /* a0, a1에 담기지 않는 경우 */
                offset *= 2;
            }
            offset_from_caller_return += offset;
            offset_from_callee_return += offset;

            caller_stack_offset += offset_from_caller_parameter + offset_from_caller_return;
            callee_stack_offset += offset_from_callee_argument + offset_from_callee_return;

            // let _unused = asmgen
            //     .callee_to_offset
            //     .insert(name.clone(), callee_stack_offset);
            return (true, name.clone(), caller_stack_offset);
        }
    }
    (false, String::new(), 0) // call 명령어가 없다면 false와 빈 문자열 반환
}

fn is_long_data(
    allocation: &ir::Dtype, // Named -> Dtype로 수정
    struct_list: &HashMap<String, Option<ir::Dtype>>,
) -> (i32, i32) {
    match allocation {
        ir::Dtype::Array { inner, size } => {
            /*
            short [3][5] -> size: 3
            */
            // let tmp = *size as i32;
            // println!("is_long_data | size {:?}", size);
            // tmp
            let bytes = get_dtype_size(allocation, struct_list);
            let stack_offset = align_to_8(bytes) / 8;
            (stack_offset, bytes)
        }
        ir::Dtype::Struct {
            name: Some(struct_name),
            ..
        } => {
            if let Some(Some(dtype)) = struct_list.get(struct_name) {
                if let Some(Some((size, ..))) = dtype.clone().get_struct_size_align_offsets() {
                    let bytes: i32 = *size as i32;
                    let stack_offset: i32 = align_to_8(bytes) / 8;
                    return (stack_offset, bytes);
                };
            }
            (0, 0)
        }
        _ => {
            // get_dtype_size(dtype, struct_list)
            let bytes = get_dtype_size(allocation, struct_list);
            (0, bytes)
        }
    }
}

fn get_dtype_size(dtype: &ir::Dtype, struct_list: &HashMap<String, Option<ir::Dtype>>) -> i32 {
    println!("get_dtype_size {:?}", dtype);
    match dtype {
        ir::Dtype::Int { width, .. } => (width / 8) as i32, // bit -> byte
        ir::Dtype::Float { width, is_const } => (width / 8) as i32,
        ir::Dtype::Unit { is_const } => 0,
        ir::Dtype::Function { ret, params } => todo!(), // assume 64-bit pointer
        ir::Dtype::Struct {
            size_align_offsets: Some((usize, ..)),
            ..
        } => *usize as i32,
        ir::Dtype::Struct {
            name: Some(struct_name),
            ..
        } => {
            // 존재하는 이유는 Array[Struct] 구조 때문에
            if let Some(Some(dtype)) = struct_list.get(struct_name) {
                if let Some(Some((size, ..))) = dtype.clone().get_struct_size_align_offsets() {
                    let bytes: i32 = *size as i32;
                    println!("is_long_data | total bytes = {} ", bytes);
                    return bytes;
                };
            }
            0
        }
        ir::Dtype::Array { inner, size } => {
            let inner_size = get_dtype_size(inner, struct_list);
            inner_size * (*size as i32)
        }
        _ => 0,
    }
}

fn align_to_8(n: i32) -> i32 {
    if n % 8 == 0 { n } else { n + (8 - (n % 8)) }
}

#[derive(Debug)]
enum CallType {
    Call(String),                // 정적 호출
    Jalr(String, asm::Register), // 동적 호출
}
