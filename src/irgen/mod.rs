//! # Homework: IR Generation
//!
//! The goal of this homework is to translate the components of a C file into KECC IR. While doing
//! so, you will familarize yourself with the structure of KECC IR, and understand the semantics of
//! C in terms of KECC.
//!
//! We highly recommend checking out the [slides][slides] and [github repo][github-qna-irgen] for
//! useful information.
//!
//! ## Guide
//!
//! ### High Level Guide
//!
//! Please watch the following video from 2020 along the lecture slides.
//! - [Intermediate Representation][ir]
//! - [IRgen (Overview)][irgen-overview]
//!
//! ### Coding Guide
//!
//! We highly recommend you copy-and-paste the code given in the following lecture videos from 2020:
//! - [IRgen (Code, Variable Declaration)][irgen-var-decl]
//! - [IRgen (Code, Function Definition)][irgen-func-def]
//! - [IRgen (Code, Statement 1)][irgen-stmt-1]
//! - [IRgen (Code, Statement 2)][irgen-stmt-2]
//!
//! The skeleton code roughly consists of the code for the first two videos, but you should still
//! watch them to have an idea of what the code is like.
//!
//! [slides]: https://docs.google.com/presentation/d/1SqtU-Cn60Sd1jkbO0OSsRYKPMIkul0eZoYG9KpMugFE/edit?usp=sharing
//! [ir]: https://youtu.be/7CY_lX5ZroI
//! [irgen-overview]: https://youtu.be/YPtnXlKDSYo
//! [irgen-var-decl]: https://youtu.be/HjARCUoK08s
//! [irgen-func-def]: https://youtu.be/Rszt9x0Xu_0
//! [irgen-stmt-1]: https://youtu.be/jFahkyxm994
//! [irgen-stmt-2]: https://youtu.be/UkaXaNw462U
//! [github-qna-irgen]: https://github.com/kaist-cp/cs420/labels/homework%20-%20irgen
use core::cmp::Ordering;
use core::convert::TryFrom;
use core::{fmt, mem};
use std::collections::{BTreeMap, HashMap};
use std::ops::Deref;

use ir::JumpArg;
use itertools::izip;
use lang_c::ast::*;
use lang_c::driver::Parse;
use lang_c::span::Node;
use thiserror::Error;

use crate::ir::{DtypeError, HasDtype, Named};
use crate::write_base::WriteString;
use crate::*;

#[derive(Debug)]
pub struct IrgenError {
    pub code: String,
    pub message: IrgenErrorMessage,
}

impl IrgenError {
    pub fn new(code: String, message: IrgenErrorMessage) -> Self {
        Self { code, message }
    }
}

impl fmt::Display for IrgenError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "error: {}\r\n\r\ncode: {}", self.message, self.code)
    }
}

/// Error format when a compiler error happens.
///
/// Feel free to add more kinds of errors.
#[derive(Debug, PartialEq, Eq, Error)]
pub enum IrgenErrorMessage {
    /// For uncommon error
    #[error("{message}")]
    Misc { message: String },
    #[error("called object `{callee:?}` is not a function or function pointer")]
    NeedFunctionOrFunctionPointer { callee: ir::Operand },
    #[error("redefinition, `{name}`")]
    Redefinition { name: String },
    #[error("`{dtype}` conflicts prototype's dtype, `{protorype_dtype}`")]
    ConflictingDtype {
        dtype: ir::Dtype,
        protorype_dtype: ir::Dtype,
    },
    #[error("{dtype_error}")]
    InvalidDtype { dtype_error: DtypeError },
    #[error("l-value required as {message}")]
    RequireLvalue { message: String },
}

/// A C file going through IR generation.
#[derive(Default, Debug)]
pub struct Irgen {
    /// Declarations made in the C file (e.g, global variables and functions)
    decls: BTreeMap<String, ir::Declaration>,
    /// Type definitions made in the C file (e.g, typedef my_type = int;)
    typedefs: HashMap<String, ir::Dtype>,
    /// Structs defined in the C file,
    // TODO: explain how to use this.
    structs: HashMap<String, Option<ir::Dtype>>,
    /// Temporary counter for anonymous structs. One should not need to use this any more.
    struct_tempid_counter: usize,
}

impl Translate<Parse> for Irgen {
    type Target = ir::TranslationUnit;
    type Error = IrgenError;

    fn translate(&mut self, source: &Parse) -> Result<Self::Target, Self::Error> {
        self.translate(&source.unit)
    }
}

impl Translate<TranslationUnit> for Irgen {
    type Target = ir::TranslationUnit;
    type Error = IrgenError;

    fn translate(&mut self, source: &TranslationUnit) -> Result<Self::Target, Self::Error> {
        for ext_decl in &source.0 {
            match &ext_decl.node {
                ExternalDeclaration::Declaration(var) => {
                    self.add_declaration(&var.node)?;
                }
                ExternalDeclaration::StaticAssert(_) => {
                    panic!("ExternalDeclaration::StaticAssert is unsupported")
                }
                ExternalDeclaration::FunctionDefinition(func) => {
                    self.add_function_definition(&func.node)?;
                }
            }
        }

        let decls = mem::take(&mut self.decls);
        let structs = mem::take(&mut self.structs);
        Ok(Self::Target { decls, structs })
    }
}

impl Irgen {
    const BID_INIT: ir::BlockId = ir::BlockId(0);
    // `0` is used to create `BID_INIT`
    const BID_COUNTER_INIT: usize = 1;
    const TEMPID_COUNTER_INIT: usize = 0;

    /// Add a declaration. It can be either a struct, typedef, or a variable.
    fn add_declaration(&mut self, source: &Declaration) -> Result<(), IrgenError> {
        let (base_dtype, is_typedef) =
            ir::Dtype::try_from_ast_declaration_specifiers(&source.specifiers).map_err(|e| {
                IrgenError::new(
                    format!("{source:#?}"),
                    IrgenErrorMessage::InvalidDtype { dtype_error: e },
                )
            })?;
        let base_dtype = base_dtype.resolve_typedefs(&self.typedefs).map_err(|e| {
            IrgenError::new(
                format!("{source:#?}"),
                IrgenErrorMessage::InvalidDtype { dtype_error: e },
            )
        })?;

        let base_dtype = if let ir::Dtype::Struct { name, fields, .. } = &base_dtype {
            if let Some(name) = name {
                let _ = self.structs.entry(name.to_string()).or_insert(None);
            }

            if fields.is_some() {
                base_dtype
                    .resolve_structs(&mut self.structs, &mut self.struct_tempid_counter)
                    .map_err(|e| {
                        IrgenError::new(
                            format!("{source:#?}"),
                            IrgenErrorMessage::InvalidDtype { dtype_error: e },
                        )
                    })?
            } else {
                base_dtype
            }
        } else {
            base_dtype
        };

        for init_decl in &source.declarators {
            let declarator = &init_decl.node.declarator.node;
            let name = name_of_declarator(declarator);
            let dtype = base_dtype
                .clone()
                .with_ast_declarator(declarator)
                .map_err(|e| {
                    IrgenError::new(
                        format!("{source:#?}"),
                        IrgenErrorMessage::InvalidDtype { dtype_error: e },
                    )
                })?
                .deref()
                .clone();
            let dtype = dtype.resolve_typedefs(&self.typedefs).map_err(|e| {
                IrgenError::new(
                    format!("{source:#?}"),
                    IrgenErrorMessage::InvalidDtype { dtype_error: e },
                )
            })?;
            if !is_typedef && is_invalid_structure(&dtype, &self.structs) {
                return Err(IrgenError::new(
                    format!("{source:#?}"),
                    IrgenErrorMessage::Misc {
                        message: "incomplete struct type".to_string(),
                    },
                ));
            }

            if is_typedef {
                // Add new typedef if nothing has been declared before
                let prev_dtype = self
                    .typedefs
                    .entry(name.clone())
                    .or_insert_with(|| dtype.clone());

                if prev_dtype != &dtype {
                    return Err(IrgenError::new(
                        format!("{source:#?}"),
                        IrgenErrorMessage::ConflictingDtype {
                            dtype,
                            protorype_dtype: prev_dtype.clone(),
                        },
                    ));
                }

                continue;
            }

            // Creates a new declaration based on the dtype.
            let mut decl = ir::Declaration::try_from(dtype.clone()).map_err(|e| {
                IrgenError::new(
                    format!("{source:#?}"),
                    IrgenErrorMessage::InvalidDtype { dtype_error: e },
                )
            })?;

            // If `initializer` exists, convert initializer to a constant value
            if let Some(initializer) = init_decl.node.initializer.as_ref() {
                if !is_valid_initializer(&initializer.node, &dtype, &self.structs) {
                    return Err(IrgenError::new(
                        format!("{source:#?}"),
                        IrgenErrorMessage::Misc {
                            message: "initializer is not valid".to_string(),
                        },
                    ));
                }

                match &mut decl {
                    ir::Declaration::Variable {
                        initializer: var_initializer,
                        ..
                    } => {
                        if var_initializer.is_some() {
                            return Err(IrgenError::new(
                                format!("{source:#?}"),
                                IrgenErrorMessage::Redefinition { name },
                            ));
                        }
                        *var_initializer = Some(initializer.node.clone());
                    }
                    ir::Declaration::Function { .. } => {
                        return Err(IrgenError::new(
                            format!("{source:#?}"),
                            IrgenErrorMessage::Misc {
                                message: "illegal initializer (only variables can be initialized)"
                                    .to_string(),
                            },
                        ));
                    }
                }
            }

            self.add_decl(&name, decl)?;
        }

        Ok(())
    }

    /// Add a function definition.
    fn add_function_definition(&mut self, source: &FunctionDefinition) -> Result<(), IrgenError> {
        // Creates name and signature.
        let specifiers = &source.specifiers;
        let declarator = &source.declarator.node;

        let name = name_of_declarator(declarator);
        let name_of_params = name_of_params_from_function_declarator(declarator)
            .expect("declarator is not from function definition");

        let (base_dtype, is_typedef) = ir::Dtype::try_from_ast_declaration_specifiers(specifiers)
            .map_err(|e| {
            IrgenError::new(
                format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"),
                IrgenErrorMessage::InvalidDtype { dtype_error: e },
            )
        })?;

        if is_typedef {
            return Err(IrgenError::new(
                format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"),
                IrgenErrorMessage::Misc {
                    message: "function definition declared typedef".into(),
                },
            ));
        }

        let dtype = base_dtype
            .with_ast_declarator(declarator)
            .map_err(|e| {
                IrgenError::new(
                    format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"),
                    IrgenErrorMessage::InvalidDtype { dtype_error: e },
                )
            })?
            .deref()
            .clone();
        let dtype = dtype.resolve_typedefs(&self.typedefs).map_err(|e| {
            IrgenError::new(
                format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"),
                IrgenErrorMessage::InvalidDtype { dtype_error: e },
            )
        })?;

        let signature = ir::FunctionSignature::new(dtype.clone());

        // Adds new declaration if nothing has been declared before
        let decl = ir::Declaration::try_from(dtype).unwrap();
        self.add_decl(&name, decl)?;

        // Prepare scope for global variable
        let global_scope: HashMap<_, _> = self
            .decls
            .iter()
            .map(|(name, decl)| {
                let dtype = decl.dtype();
                let pointer = ir::Constant::global_variable(name.clone(), dtype);
                let operand = ir::Operand::constant(pointer);
                (name.clone(), operand)
            })
            .collect();

        // Prepares for irgen pass.
        let mut irgen = IrgenFunc {
            return_type: signature.ret.clone(),
            bid_init: Irgen::BID_INIT,
            phinodes_init: Vec::new(),
            allocations: Vec::new(),
            blocks: BTreeMap::new(),
            bid_counter: Irgen::BID_COUNTER_INIT,
            tempid_counter: Irgen::TEMPID_COUNTER_INIT,
            typedefs: &self.typedefs,
            structs: &self.structs,
            // Initial symbol table has scope for global variable already
            symbol_table: vec![global_scope],
        };
        let mut context = Context::new(irgen.bid_init);

        // Enter variable scope for alloc registers matched with function parameters
        irgen.enter_scope();

        // Creates the init block that stores arguments.
        irgen
            .translate_parameter_decl(&signature, irgen.bid_init, &name_of_params, &mut context)
            .map_err(|e| {
                IrgenError::new(format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"), e)
            })?;

        // Translates statement.
        irgen.translate_stmt(&source.statement.node, &mut context, None, None)?;

        // Creates the end block
        let ret = signature.ret.set_const(false);
        // let value = if ret == ir::Dtype::unit() {
        //     ir::Operand::constant(ir::Constant::unit())
        // } else if ret == ir::Dtype::INT {
        //     // If "main" function, default return value is `0` when return type is `int`
        //     if name == "main" {
        //         // ir::Operand::constant(ir::Constant::int(0, ret))
        //         ir::Operand::constant(ir::Constant::int(0, ret))
        //     } else {
        //         ir::Operand::constant(ir::Constant::undef(ret))
        //     }
        // } else {
        //     ir::Operand::constant(ir::Constant::undef(ret))
        // };
        let value = if let Some(ret_value) = context.return_value.clone() {
            ret_value
        } else if ret == ir::Dtype::unit() {
            ir::Operand::constant(ir::Constant::unit())
        } else if ret == ir::Dtype::INT {
            if name == "main" {
                ir::Operand::constant(ir::Constant::int(0, ret))
            } else {
                ir::Operand::constant(ir::Constant::undef(ret))
            }
        } else {
            ir::Operand::constant(ir::Constant::undef(ret))
        };
        println!("Irgen | before blockexit {:?}", value);

        // Last Block of the function
        irgen.insert_block(context, ir::BlockExit::Return { value });

        // Exit variable scope created above
        irgen.exit_scope();

        let func_def = ir::FunctionDefinition {
            allocations: irgen.allocations,
            blocks: irgen.blocks,
            bid_init: irgen.bid_init,
        };

        let decl = self
            .decls
            .get_mut(&name)
            .unwrap_or_else(|| panic!("The declaration of `{name}` must exist"));
        if let ir::Declaration::Function { definition, .. } = decl {
            if definition.is_some() {
                return Err(IrgenError::new(
                    format!("specs: {specifiers:#?}\ndecl: {declarator:#?}"),
                    IrgenErrorMessage::Misc {
                        message: format!("the name `{name}` is defined multiple time"),
                    },
                ));
            }

            // Update function definition
            *definition = Some(func_def);
        } else {
            panic!("`{name}` must be function declaration")
        }

        Ok(())
    }

    /// Adds a possibly existing declaration.
    ///
    /// Returns error if the previous declearation is incompatible with `decl`.
    fn add_decl(&mut self, name: &str, decl: ir::Declaration) -> Result<(), IrgenError> {
        let Some(old_decl) = self.decls.insert(name.to_string(), decl.clone()) else {
            return Ok(());
        };

        // Check if type is conflicting for pre-declared one
        if !old_decl.is_compatible(&decl) {
            return Err(IrgenError::new(
                name.to_string(),
                IrgenErrorMessage::ConflictingDtype {
                    dtype: old_decl.dtype(),
                    protorype_dtype: decl.dtype(),
                },
            ));
        }

        Ok(())
    }
}

/// Storage for instructions up to the insertion of a block
#[derive(Debug)]
struct Context {
    /// The block id of the current context.
    bid: ir::BlockId,
    /// Current instructions of the block.
    instrs: Vec<Named<ir::Instruction>>,
    return_value: Option<ir::Operand>, // me
}

impl Context {
    /// Create a new context with block number bid
    fn new(bid: ir::BlockId) -> Self {
        Self {
            bid,
            instrs: Vec::new(),
            return_value: None, // me
        }
    }

    // Adds `instr` to the current context.
    fn insert_instruction(
        &mut self,
        instr: ir::Instruction,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let dtype = instr.dtype();
        self.instrs.push(Named::new(None, instr));

        Ok(ir::Operand::register(
            ir::RegisterId::temp(self.bid, self.instrs.len() - 1),
            dtype,
        ))
    }
}

/// A C function being translated.
struct IrgenFunc<'i> {
    /// return type of the function.
    return_type: ir::Dtype,
    /// initial block id for the function, typically 0.
    bid_init: ir::BlockId,
    /// arguments represented as initial phinodes. Order must be the same of that given in the C
    /// function.
    phinodes_init: Vec<Named<ir::Dtype>>,
    /// local allocations.
    allocations: Vec<Named<ir::Dtype>>,
    /// Map from block id to basic blocks
    blocks: BTreeMap<ir::BlockId, ir::Block>,
    /// current block id. `blocks` must have an entry for all ids less then this
    bid_counter: usize,
    /// current temporary id. Used to create temporary names in the IR for e.g,
    tempid_counter: usize,
    /// Usable definitions
    typedefs: &'i HashMap<String, ir::Dtype>,
    /// Usable structs
    // TODO: Add examples on how to use properly use this field.
    structs: &'i HashMap<String, Option<ir::Dtype>>,
    /// Current symbol table. The initial symbol table has the global variables.
    symbol_table: Vec<HashMap<String, ir::Operand>>,
}

impl IrgenFunc<'_> {
    /// Allocate a new block id.
    fn alloc_bid(&mut self) -> ir::BlockId {
        let bid = self.bid_counter;
        self.bid_counter += 1;
        ir::BlockId(bid)
    }

    /// Allocate a new temporary id.
    fn alloc_tempid(&mut self) -> String {
        let tempid = self.tempid_counter;
        self.tempid_counter += 1;
        format!("t{tempid}")
    }

    /// Create a new allocation with type given by `alloc`.
    fn insert_alloc(&mut self, alloc: Named<ir::Dtype>) -> ir::RegisterId {
        self.allocations.push(alloc);
        let id = self.allocations.len() - 1;
        ir::RegisterId::local(id)
    }

    /// Insert a new block `context` with exit instruction `exit`.
    ///
    /// # Panic
    ///
    /// Panics if another block with the same bid as `context` already existed.
    fn insert_block(&mut self, context: Context, exit: ir::BlockExit) {
        let block = ir::Block {
            phinodes: if context.bid == self.bid_init {
                self.phinodes_init.clone()
            } else {
                Vec::new()
            },
            instructions: context.instrs,
            exit,
        };
        if self.blocks.insert(context.bid, block).is_some() {
            panic!("the bid `{}` is defined multiple time", context.bid)
        }
    }


    /// Enter a scope and create a new symbol table entry, i.e, we are at a `{` in the function.
    fn enter_scope(&mut self) {
        self.symbol_table.push(HashMap::new());
    }

    /// Exit a scope and remove the a oldest symbol table entry. i.e, we are at a `}` in the
    /// function.
    ///
    /// # Panic
    ///
    /// Panics if there are no scopes to exit, i.e, the function has a unmatched `}`.
    fn exit_scope(&mut self) {
        let _unused = self.symbol_table.pop().unwrap();
        debug_assert!(!self.symbol_table.is_empty())
    }

    /// Inserts `var` with `value` to the current symbol table.
    ///
    /// Returns Ok() if the current scope has no previously-stored entry for a given variable.
    fn insert_symbol_table_entry(
        &mut self,
        var: String,
        value: ir::Operand,
    ) -> Result<(), IrgenErrorMessage> {
        let cur_scope = self
            .symbol_table
            .last_mut()
            .expect("symbol table has no valid scope");
        if cur_scope.insert(var.clone(), value).is_some() {
            return Err(IrgenErrorMessage::Redefinition { name: var });
        }

        Ok(())
    }

    /// Transalte a C statement `stmt` under the current block `context`, with `continue` block
    /// `bid_continue` and break block `bid_break`.
    fn translate_stmt(
        &mut self,
        stmt: &Statement,
        context: &mut Context,
        bid_continue: Option<ir::BlockId>,
        bid_break: Option<ir::BlockId>,
    ) -> Result<(), IrgenError> {
        // todo!()
        match stmt {
            // {
            //     stmt1;
            //     stmt2;
            // }
            // 1️⃣ Block Statement (Compound Statement)
            Statement::Compound(items) => {
                // Enter variable scope for compound statement
                self.enter_scope(); // 새 스코프 생성
                for item in items {
                    match &item.node {
                        BlockItem::Declaration(decl) => {
                            self.translate_decl(&decl.node, context)
                                .map_err(|e| IrgenError::new(decl.write_string(), e))?;
                        }
                        BlockItem::StaticAssert(_) => {
                            panic!("BlockItem::StaticAssert is unsupported")
                        }
                        BlockItem::Statement(stmt) => {
                            self.translate_stmt(&stmt.node, context, bid_continue, bid_break)?;
                        }
                    }
                }
                // Exit variable scope created above
                self.exit_scope(); // 스코프 종료
                Ok(())
            }
            // x + 1;
            Statement::Expression(expr) => {
                if let Some(expr) = expr {
                    let _unused = self
                        .translate_expr_rvalue(&expr.node, context)
                        .map_err(|e| IrgenError::new(expr.write_string(), e))?;
                }
                Ok(())
            }
            Statement::If(stmt) => {
                let bid_then = self.alloc_bid();
                let bid_else = self.alloc_bid();
                let bid_end = self.alloc_bid();

                self.translate_condition(
                    &stmt.node.condition.node,
                    mem::replace(context, Context::new(bid_end)),
                    bid_then,
                    bid_else,
                )
                .map_err(|e| IrgenError::new(stmt.node.condition.write_string(), e))?;

                // Translates then branch
                let mut context_then = Context::new(bid_then);
                self.translate_stmt(
                    &stmt.node.then_statement.node,
                    &mut context_then,
                    bid_continue,
                    bid_break,
                )?;
                self.insert_block(
                    context_then,
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_end, Vec::new())
                    }
                );

                // Translates else branch
                let mut context_else = Context::new(bid_else);
                if let Some(else_stmt) = &stmt.node.else_statement {
                    self.translate_stmt(
                        &else_stmt.node,
                        &mut context_else,
                        bid_continue,
                        bid_break,
                    )?;
                }
                self.insert_block(
                    context_else,
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_end, Vec::new())
                    }
                );
                Ok(())
            }
            // return x + 1;
            Statement::Return(expr) => {
                let value = match expr {
                    Some(expr) => self
                        .translate_expr_rvalue(&expr.node, context)
                        .map_err(|e| IrgenError::new(expr.write_string(), e))?,
                    None => ir::Operand::constant(ir::Constant::unit())
                };

                // Implicit type casting
                let value = self
                    .translate_typecast(value, self.return_type.clone(), context)
                    .map_err(|e| IrgenError::new(expr.write_string(), e))?;
                
                let bid_end = self.alloc_bid();
                self.insert_block(
                    mem::replace(
                        context, Context::new(bid_end)),
                        ir::BlockExit::Return { value } 
                );
                Ok(())
            }

            // for (int i = 0; i < 10; ++i) {
            //     A;
            // }
            // B;
            // block 1: for initializer (int i = 0),    bid_init
            // block 2: for condition (i < 10),         bid_cond
            // block 3: for increment (++i),            bid_incr
            // block 4: for body (A),                   bid_body
            // block 5: for continuation (B),           bid_cont


            Statement::For(for_stmt) => {
                let for_stmt = &for_stmt.node;

                // Jumps to the for-loop initializer block
                let bid_init = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_init)),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_init, Vec::new()) 
                    }
                );

                // Enter variable scope for for-loop initializer
                self.enter_scope();
                self.translate_for_initializer(&for_stmt.initializer.node, context)
                    .map_err(|e| IrgenError::new(for_stmt.initializer.write_string(), e))?;

                // Jump to the for-loop conditional block
                let bid_cond = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_cond)), 
                    ir::BlockExit::Jump { 
                        arg: ir::JumpArg::new(bid_cond, Vec::new()), 
                    }
                );

                let bid_body = self.alloc_bid();
                let bid_step = self.alloc_bid();
                let bid_end = self.alloc_bid();
                self.translate_opt_condition(
                    &for_stmt.condition,
                    mem::replace(context, Context::new(bid_end)),
                    bid_body,
                    bid_end,
                )
                .map_err(|e| IrgenError::new(for_stmt.condition.write_string(), e))?;

                // Enter variable scope for for-loop body
                self.enter_scope();

                let mut context_body = Context::new(bid_body);
                self.translate_stmt(
                    &for_stmt.statement.node,
                    &mut context_body,
                    Some(bid_step),
                    Some(bid_end),
                )?;

                //  for (.. x ..; ++i) { // not possible
                //      int x;
                //      A;
                //      
                //      continue; // jump to "++i" (bid_step)
                //      break; // jump to "B" (bid_end)       
                //  }
                //  B

                // Exit variable scope for for-loop body
                self.exit_scope();

                self.insert_block(
                    context_body,
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_step,Vec::new())
                     }
                );

                let mut context_step = Context::new(bid_step);
                if let Some(step_expr) = &for_stmt.step {
                    let _unused = self
                        .translate_expr_rvalue(&step_expr.node, &mut context_step)
                        .map_err(|e| IrgenError::new(for_stmt.step.write_string(), e))?;
                }
                self.insert_block(
                    context_step, 
                    ir::BlockExit::Jump { 
                        arg: ir::JumpArg::new(bid_cond, Vec::new())
                     }
                );
                // ++i -> i < 10?


                // Exit variable scope for for-loop initializer // ME
                self.exit_scope(); // ME
                Ok(())
            }
            // While (C) {A}
            Statement::While(while_stmt) => {
                let while_stmt = &while_stmt.node;

                // Jump to starting block of while-loop
                let bid_cond = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_cond)),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_cond, Vec::new()),
                    }
                );

                let bid_body = self.alloc_bid();
                let bid_end = self.alloc_bid();
                self.translate_condition(
                    &while_stmt.expression.node,
                    mem::replace(context, Context::new(bid_end)),
                    bid_body,
                    bid_end,
                )
                .map_err(|e| IrgenError::new(while_stmt.expression.write_string(), e))?;

                // Enter variable scope for while-loop body
                self.enter_scope();

                let mut context_body = Context::new(bid_body);
                self.translate_stmt(
                    &while_stmt.statement.node,
                    &mut context_body,
                    Some(bid_cond),
                    Some(bid_end),
                )?;
                self.insert_block(
                    context_body, 
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_cond, Vec::new())
                    }
                );

                // Exit variable scope created above
                self.exit_scope();

                Ok(())
            }
            Statement::DoWhile(do_while_stmt) => {
                let while_stmt = &do_while_stmt.node;

                // Jump to starting blok of do-while loop
                let bid_body= self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_body)), 
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_body, Vec::new())
                    }
                );

                // Enter variable scope for do-while-loop body 
                self.enter_scope();

                let bid_cond = self.alloc_bid();
                let bid_end = self.alloc_bid();
                self.translate_stmt(
                    &while_stmt.statement.node, 
                    context, 
                    Some(bid_cond),
                    Some(bid_end),
                )?;

                // Exit variablescope created above
                self.exit_scope();

                self.insert_block(
                    mem::replace(context, Context::new(bid_cond)),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_cond, Vec::new())
                    }
                );

                self.translate_condition(
                    &while_stmt.expression.node,
                    mem::replace(context, Context::new(bid_end)),
                    bid_body,
                    bid_end,
                )
                .map_err(|e| IrgenError::new(while_stmt.expression.write_string(), e))?;

                Ok(())
            }
            // switch (e) {
            //     case v1: {A1; break;}
            //     case v2: {A2; break;}
            //     case v3: {A3}
            //     case v4: {A4}
            //     default: A; 
            // }

            // switch (e) {
            //     case v1: {A1; break;}
            //     case v2: {A2; break;}
            //     default: D; 
            // }
            // B;
            Statement::Switch(switch_stmt) => {
                let value = self
                    .translate_expr_rvalue(&switch_stmt.node.expression.node, context)
                    .map_err(|e| IrgenError::new(switch_stmt.node.expression.write_string(), e))?;

                let bid_end = self.alloc_bid();
                let (cases, bid_default) = 
                    self.translate_switch_body(&switch_stmt.node.statement.node, bid_end)?;
                
                self.insert_block(
                    mem::replace(context, Context::new(bid_end)), 
                    ir::BlockExit::Switch { 
                        value, 
                        default: ir::JumpArg::new(bid_default, Vec::new()), 
                        cases 
                    },
                );

                Ok(())
            }
            Statement::Continue => {
                let bid_continue = bid_continue.ok_or_else(||{
                    IrgenError::new(
                        "continue;".to_string(),
                        IrgenErrorMessage::Misc {
                            message: "contiue statement not whithn a loop".to_string(),
                        },
                    )
                })?;

                let next_context = Context::new(self.alloc_bid());
                self.insert_block(
                    mem::replace(context, next_context),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_continue, Vec::new())
                    },
                );

                Ok(())
            }
            Statement::Break => {
                let bid_break = bid_break.ok_or_else(|| {
                    IrgenError::new(
                        "break".to_string(),
                        IrgenErrorMessage::Misc {
                            message: "break statement not within a loop or switch".to_string(),
                        },
                    )
                })?;

                let next_context = Context::new(self.alloc_bid());
                self.insert_block(
                    mem::replace(context, next_context),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_break, Vec::new())
                    }
                );
                Ok(())
            }
            Statement::Labeled(label_stmt) => {
                Err(IrgenError::new(
                    label_stmt.node.label.write_string(),
                    IrgenErrorMessage::Misc {
                        message: "label statement not within a switch".to_string()
                    },
                ))
            }
            // Statement::Return(return_stmt) => {
            //     let ret_value = if let Some(expr) = return_stmt {
            //         let translated = self.translate_expr(&expr.node, context)
            //             .map_err(|e| IrgenError::new("Error in return expression".to_string(), e))?;
            //         println!("Translated return value: {:?}", translated); // 디버깅 로그 추가
            
            //         // ✅ 변환된 값을 `context.return_value`에 저장
            //         context.return_value = Some(translated.clone());
            
            //         translated
            //     } else {
            //         ir::Operand::constant(ir::Constant::unit())
            //     };
            
            // }
            _ => todo!()
        }
        
    }

    fn translate_decl(
        &mut self,
        decl: &Declaration,
        context: &mut Context,
    ) -> Result<(), IrgenErrorMessage> {
        let (base_dtype, is_typedef) = 
            ir::Dtype::try_from_ast_declaration_specifiers(&decl.specifiers)
            .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

        // We do not cover typedef declaration inside function
        assert!(!is_typedef);

        // TODO: consider various declarator format in the future
        for init_decl in &decl.declarators {
            let declarator = &init_decl.node.declarator.node;
            let dtype = base_dtype
                .clone()
                .with_ast_declarator(declarator)
                .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

            let dtype = <ir::Dtype as Clone>::clone(&dtype); // ME
            let dtype = dtype
                .resolve_typedefs(&self.typedefs)
                .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

            let name = name_of_declarator(declarator);

            match &dtype {
                ir::Dtype::Unit { .. } => todo!(),
                // TODO: when applying initiallizer, type checking is necessary
                ir::Dtype::Int { .. }
                | ir::Dtype::Float {..}
                | ir::Dtype::Pointer {..}
                | ir::Dtype::Array {..} => {
                    // Check whether Initializer is exist
                    let value = if let Some(initializer) = &init_decl.node.initializer {
                        Some(self.translate_initializer(&initializer.node, context)?)
                    } else {
                        None
                    };

                    let _unused = self.translate_alloc(name, dtype.clone(), value, context)?;
                }
                ir::Dtype::Function {..} => todo!(),
                ir::Dtype::Typedef {..} => panic!("typedef should be replaced by real dtype"),
                _ => todo!()
            }
        }

        Ok(())
    }

    fn translate_switch_body(
        &mut self,
        stmt: &Statement,
        bid_end: ir::BlockId
    ) -> Result<(Vec<(ir::Constant, ir::JumpArg)>, ir::BlockId), IrgenError> {
        let mut cases = Vec::new();
        let mut default = None;

        let items = if let Statement::Compound(items) = stmt {
            items
        } else {
            panic!("'Statement' in the 'switch' is unsupported except 'Statement::Compound'")
        };

        // Enter variable scope for compound statement
        self.enter_scope();

        for item in items {
            // Extract Statement from Block Item
            match &item.node {
                BlockItem::Statement(stmt) => {
                    self.translate_switch_body_inner(&stmt.node, &mut cases, &mut default, bid_end)?
                },
                _ => panic!("is unsupported")
            }
        }

        self.exit_scope();

        // If 'default' is not present, just jump to 'bid_end'
        let default = default.unwrap_or(bid_end);
        Ok((cases, default))
    }

    fn translate_switch_body_inner(
        &mut self,
        stmt: &Statement,
        cases: &mut Vec<(ir::Constant, ir::JumpArg)>,
        default: &mut Option<ir::BlockId>,
        bid_end: ir::BlockId
    ) -> Result<(), IrgenError> {   
        // stmt = case 1; {A1; break}
        let label_stmt = if let Statement::Labeled(label_stmt) = stmt{
            &label_stmt.node
        } else {
            panic!(r"'BlockItem::Statement' in the 'Statement::Compound' of the 'switch' \
            is unsupported except 'Satement::Labeled")
        };

        let bid = self.alloc_bid();
        let case = self.translate_switch_body_label_statement(label_stmt, bid, bid_end)?;

        if let Some(case) = case {
            if !case.is_integer_constant() {
                return Err(IrgenError::new(
                    label_stmt.label.write_string(),
                    IrgenErrorMessage::Misc { message: 
                    "expression is inot an integer cnstant expression".to_string() }
                ));
            }

            // TODO: consider the case that same 'value' but different 'width'
            if cases.iter().any(|(c,_)| &case==c) {
                return Err(
                    IrgenError::new(
                        label_stmt.label.write_string(),
                        IrgenErrorMessage::Misc { message:
                            "duplicate case value".to_string()
                        }
                    )
                )
            }
            cases.push((case, ir::JumpArg::new(bid, Vec::new())));
        } else {
            if default.is_some() {
                return Err(
                    IrgenError::new(
                        label_stmt.label.write_string(),
                        IrgenErrorMessage::Misc { message:
                            "previous default already exists".to_string()
                        }
                    )
                )
            }
        }

        Ok(())
    }
    fn translate_switch_body_label_statement(
        &mut self,
        label_stmt: &LabeledStatement,
        bid: ir::BlockId,
        bid_end: ir::BlockId,
    ) -> Result<Option<ir::Constant>, IrgenError> {
        // Get case value from constant expression
        let case = match &label_stmt.label.node {
            Label::Identifier(_) => panic!("'Label::Identifier' is unsupported"),
            Label::Case(expr) => {
                // case 1: {...}
                let constant = ir::Constant::try_from(&expr.node)
                    .map_err(|_| IrgenError::new(
                        expr.write_string(),
                        IrgenErrorMessage::Misc { message: 
                            "case label does not reduce to an integer constant".to_string()
                        }
                    ))?;

                Some(constant)
            }
            Label::Default => None,
            Label::CaseRange(_) => todo!(),
        };

        let items = if let Statement::Compound(items) = &label_stmt.statement.node {
            items
        } else {
            panic!("'Statement' in the 'label' is unsupported except 'Statement::Compound'")
        };

        // Enter variable scope for compound statement
        self.enter_scope();

        // Split last and all the rest of the elements of the 'Compound' items
        let (last, item) = items
            .split_last()
            .expect("'Statement::Compound' has no item");

        let mut context = Context::new(bid);
        for item in items {
            match &item.node {
                BlockItem::Declaration(decl) => {
                    self.translate_decl(&decl.node, &mut context)
                        .map_err(|e| IrgenError::new(decl.write_string(), e))?;
                }
                BlockItem::Statement(stmt) => {
                    self.translate_stmt(&stmt.node, &mut context, None, None)?
                }
                _ => panic!("is unsupported")
            }
        }

        // The last element of the 'Compound' items must be 'Statement::Break'
        let stmt = if let BlockItem::Statement(stmt) = &last.node {
            &stmt.node
        } else {
            panic!(
                r"'BlockItem' in the 'Statement::Compound' of the 'babel' \
                is unsupported except 'BlockItem::Statement'"
            )
        };

        assert_eq!(
            stmt,
            &Statement::Break,
            r"the lats 'Block::Item' in the 'Statement::Compound' \
            of the 'label' must be 'Statement::Break'"
        );

        // Translate 'Statement::Break' to IR
        self.insert_block(context, 
            ir::BlockExit::Jump { 
                arg: ir::JumpArg::new(bid_end, Vec::new())
            }
        );

        self.exit_scope();

        Ok(case)
    }

    fn translate_for_initializer(
        &mut self,
        initializer: &ForInitializer,
        context: &mut Context
    ) -> Result<(), IrgenErrorMessage> {
        match initializer {
            ForInitializer::Empty => (),
            ForInitializer::Expression(expr) => {
                let _unused = self.translate_expr_rvalue(&expr.node, context)?;
            }
            ForInitializer::Declaration(decl) => {
                return self.translate_decl(&decl.node, context);
            }
            ForInitializer::StaticAssert(_) => {
                panic!("ForInitializer::StaticAssert is unsupported")
            }
            _ => todo!()
        }
        todo!();
        Ok(())
    }

    /// Translate allocation to IR instructions
    fn translate_alloc(
        &mut self,
        var: String,
        dtype: ir::Dtype,
        value: Option<ir::Operand>,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // Insert allocation
        let id = self.insert_alloc(Named::new(Some(var.clone()),dtype.clone()));

        // Create pointer
        let pointer_type = ir::Dtype::pointer(dtype.clone());
        // let rid = ir::RegisterId::local(id); // ME
        let ptr = ir::Operand::register(id, pointer_type);
        self.insert_symbol_table_entry(var, ptr.clone())?;

        // Initialize allocated register if "value" is not 'None'
        if let Some(value) = value {
            // Implicit type cast
            let value = self.translate_typecast(value, dtype, context)?;
            return context.insert_instruction(ir::Instruction::Store { ptr, value})
        }

        // Return alloc register if there is no store instruction
        Ok(ptr)
    }

    fn translate_typecast(
        &mut self,
        value: ir::Operand,
        dtype: ir::Dtype,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let value_dtype = value.dtype();

        // 변환이 필요 없는 경우 그대로 반환
        if value_dtype == dtype {
            return Ok(value);
        }
    

        match (&value_dtype, &dtype) {
            // ✅ 정수 -> 정수 변환 (예: int -> char, short -> long)
            (&ir::Dtype::Int { .. }, &ir::Dtype::Int { .. }) => {
                context.insert_instruction(ir::Instruction::TypeCast { value, target_dtype: dtype })
            }
    
            // ✅ 정수 <-> 실수 변환 (예: int -> float, double -> int)
            (&ir::Dtype::Int { .. }, &ir::Dtype::Float { .. }) |
            (&ir::Dtype::Float { .. }, &ir::Dtype::Int { .. }) => {
                context.insert_instruction(ir::Instruction::TypeCast { value, target_dtype: dtype })
            }
    
            // ✅ 포인터 <-> 정수 변환 (예: (int*) 0x1234, (int) ptr)
            (&ir::Dtype::Pointer { .. }, &ir::Dtype::Int { .. }) |
            (&ir::Dtype::Int { .. }, &ir::Dtype::Pointer { .. }) => {
                context.insert_instruction(ir::Instruction::TypeCast { value, target_dtype: dtype })
            }
    
            // ✅ 포인터 <-> 포인터 변환 (예: void* → int*)
            (&ir::Dtype::Pointer { .. }, &ir::Dtype::Pointer { .. }) => {
                context.insert_instruction(ir::Instruction::TypeCast { value, target_dtype: dtype })
            }
    
            // ❌ 변환이 불가능한 경우 (예: struct → int)
            _ => Err(IrgenErrorMessage::Misc {
                message: format!("Invalid type cast from {:?} to {:?}", value_dtype, dtype),
            }),
        }
    }

    fn translate_typecast_to_bool(
        &mut self, 
        condition: ir::Operand,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }

    /// Translate Initializer to IR instruction
    fn translate_initializer(
        &mut self,
        initializer: &Initializer,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match initializer {
            Initializer::Expression(expr) => self.translate_expr_rvalue(&expr.node, context),
            Initializer::List(_) => panic!("Initializer:;List is unsupported"),
        }
    }

    fn lookup_symbol_table(
        &mut self,
        identifier: &String,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }

    fn convert_array_to_pointer(
        &mut self,
        ptr: ir::Operand,
        dtype: ir::Dtype,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }

    fn translate_expr_rvalue(
        &mut self,
        expr: &Expression,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match expr {
            Expression::Identifier(identifier) => {
                // let tmp = &identifier.node.name;
                let ptr = self.lookup_symbol_table(&identifier.node.name)?;

                let dtype_of_ptr = ptr.dtype();
                let ptr_inner_type = dtype_of_ptr
                    .get_pointer_inner()
                    .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;

                // When 'ptr' pointer from identifier of which inner type represents
                // 'function' or 'array', 'return', 'ptr' without 'Load' instructions
                if ptr_inner_type.get_function_inner().is_some() {
                    return Ok(ptr);
                }

                // let's say two declarations are 'int a' and 'int b[10], 'a' and 'b' represent
                // int* and '[10 x i32]' respectively. When 'a' is used as an r-value, it's an 
                // integer value from 'int*' by 'Load' instruction. On the other hand, when 'b' is 
                // used as an r-value, it's interpreted as an integer pointer that will be indexed.
                if let Some(array_inner) = ptr_inner_type.get_array_inner() {
                    // We convert array into pointer if, e.g. 'b' is used as an r-value
                    return self.convert_array_to_pointer(ptr, array_inner.clone(), context);
                }

                context.insert_instruction(ir::Instruction::Load { ptr })
            }
            Expression::Constant(constant) => {
                let constant = ir::Constant::try_from(&constant.node)
                    .expect("'constant' must be interpreted to 'ir::Constant' value");
                Ok(ir::Operand::constant(constant))
            }
            Expression::StringLiteral(_string_llt) => todo!(),
            Expression::Member(_member) => todo!(),
            Expression::Call(call) => {
                self.translate_func_call(&call.node, context)
            }
            Expression::SizeOfTy(type_name) => {
                // let tmp = &type_name.node.0.node; // TypeName
                let dtype = ir::Dtype::try_from(&type_name.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let (size_of, _) = dtype
                    .size_align_of(self.structs) // ME
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(ir::Constant::int(
                    size_of as u128, 
                    ir::Dtype::LONG 
                )))
            }
            Expression::SizeOfVal(sizeval) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: sizeval".to_string(),
                })
            }
            Expression::AlignOf(alignof) => {
                let tmp = &alignof.node.0.node;
                let dtype = ir::Dtype::try_from(&alignof.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let (_, align_of) = dtype
                    .size_align_of(self.structs)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(
                    ir::Constant::int(
                        align_of as u128,
                        ir::Dtype::LONG,
                    )
                ))
            }
            Expression::UnaryOperator(unary) => {
                self.translate_unary_op(&unary.node, context)
            }
            Expression::Cast(cast) => {
                let target_dtype = ir::Dtype::try_from(&cast.node.type_name.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let target_dtype = target_dtype
                    .resolve_typedefs(&self.typedefs)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                let operand = self.translate_expr_rvalue(&cast.node.expression.node, context)?;
                
                self.translate_typecast(operand, target_dtype, context)
            }
            Expression::BinaryOperator(binary) => {
                self.translate_binary_op(
                    binary.node.operator.node.clone(),
                    &binary.node.lhs.node,
                    &binary.node.rhs.node,
                    context,
                )
            }
            Expression::Conditional(conditional) => {
                self.translate_conditional(&conditional.node, context)
            }
            Expression::Comma(exprs) => {
                self.translate_comma(&exprs, context)
            }
            _ => todo!()
        }
    }

    fn merge_dtype(
        &mut self,
        ty1: ir::Dtype,
        ty2: ir::Dtype,
    ) -> ir::Dtype {
        todo!()
    }

    fn translate_conditional(
        &mut self,
        conditional_expr: &ConditionalExpression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let bid_then = self.alloc_bid();
        let bid_else = self.alloc_bid();
        let bid_end = self.alloc_bid();

        self.translate_condition(
            &conditional_expr.condition.node,
            mem::replace(context, Context::new(bid_end)),
            bid_then,
            bid_else,
        )?;

        // Translate the then branch.
        let mut context_then = Context::new(bid_then);
        let val_then = 
            self.translate_expr_rvalue(&conditional_expr.then_expression.node, &mut context_then)?;
        
        // Translate the else branch.
        let mut context_else = Context::new(bid_else);
        let val_else =
            self.translate_expr_lvalue(&conditional_expr.else_expression.node, &mut context_else)?;
        
        let merged_dtype = self.merge_dtype(val_then.dtype(), val_else.dtype());
        let val_then = 
            self.translate_typecast(val_then, merged_dtype.clone(), &mut context_then)?;
        let val_else =
            self.translate_typecast(val_else, merged_dtype.clone(), &mut context_else)?;
        
        // Allocates at the satck.
        let var = self.alloc_tempid();
        // let ptr = self.translate_alloc(var, merged_dtype)?; // ME 
        let ptr = self.translate_alloc(var, merged_dtype, None, context)?; // ME 


        // Finishes the then branch
        let _unused = context_then.insert_instruction(
            ir::Instruction::Store {
                ptr: ptr.clone(),
                value: val_then,
            }
        );
        self.insert_block(
            context_then,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new())
            }
        );
        
        // Finishes the else branch
        let _unused = context_else.insert_instruction(
            ir::Instruction::Store {
                ptr: ptr.clone(),
                value: val_else
            }
        );
        self.insert_block(
            context_else, 
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new())
            }
        );


        context.insert_instruction(ir::Instruction::Load {ptr})
    }

    /// Translate comma expression to IR instructions
    fn translate_comma(
        &mut self,
        exprs: &[Node<Expression>],
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let mut result = exprs
            .iter()
            .map(|e| self.translate_expr_rvalue(&e.node, context))
            .collect::<Result<Vec<_>, _>>()?;
        
        Ok(result.pop().expect("Comma expression expected expressions"))
    }

    fn translate_func_call(
        &mut self,
        call: &CallExpression,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // Extract function signature of callee
        let callee = self.translate_expr_rvalue(&call.callee.node, context)?;
        let function_pointer_type = callee.dtype();
        let function = function_pointer_type.get_pointer_inner().ok_or_else(|| {
            IrgenErrorMessage::NeedFunctionOrFunctionPointer { callee: callee.clone() }
        })?;
        let (return_type, parameters) = function.get_function_inner().ok_or_else(|| {
            IrgenErrorMessage::NeedFunctionOrFunctionPointer { callee: callee.clone() }
        })?;

        let args = call
            .arguments
            .iter()
            .map(|a| self.translate_expr_rvalue(&a.node, context))
            .collect::<Result<Vec<_>, _>>()?;

        // Implicit type casting
        if args.len() != parameters.len() {
            return Err(
                IrgenErrorMessage::Misc { message: 
                    format!("too few arguments to function '{}'", call.callee.write_string()) // ME
                }
            );
        }

        let args = izip!(args, parameters)
            .map(|(a,p)| self.translate_typecast(a, p.clone(), context))
            .collect::<Result<Vec<_>,_>>()?;

        let return_type = return_type.clone().set_const(false);
        context.insert_instruction(
            ir::Instruction::Call {
                callee, 
                args,
                return_type
            }
        )
    }

    fn translate_binary_op(
        &mut self,
        op: BinaryOperator,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }
    fn translate_unary_op(
        &mut self,
        unary: &UnaryOperatorExpression,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }
    fn translate_index_op(
        &mut self,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        todo!()
    }

    fn translate_expr_lvalue(
        &mut self,
        expr: &Expression,
        context: &mut Context
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match expr {
            Expression::Identifier(identifier) => {
                self.lookup_symbol_table(&identifier.node.name)
            }
            Expression::UnaryOperator(unary) => {
                match &unary.node.operator.node {
                    UnaryOperator::Indirection => {
                        self.translate_expr_rvalue(&unary.node.operand.node, context)
                    }
                    _ => Err(IrgenErrorMessage::Misc { 
                        message: "This error occurred at 'IrgenFunc::translate_expr_lvalue"
                            .to_string()
                    })
                }
            }
            Expression::BinaryOperator(binary) => {
                match binary.node.operator.node {
                    BinaryOperator::Index => {
                        self.translate_index_op(&binary.node.lhs.node, &binary.node.rhs.node, context)
                    }
                    _ => Err(IrgenErrorMessage::Misc { 
                        message: r"binary operator expression cannot be used as l-value except \ 
                        index operator expression".to_string()
                    })
                }
            }
            Expression::StringLiteral(_string_llt) => todo!(),
            Expression::Member(_member) => todo!(),
            Expression::Conditional(_)
            | Expression::Constant(_)
            | Expression::Call(_)
            | Expression::Comma(_)
            | Expression::SizeOfTy(_)
            | Expression::SizeOfVal(_)
            | Expression::AlignOf(_)
            | Expression::Cast(_) => {
                Err(IrgenErrorMessage::Misc { 
                    message: "This error occurred at 'IrgenFunc::translate_expr_lvalue'".to_string() 
                })
            }
            _ => todo!()
        }
    }

    /// Translate Condition Expression of for-loop to IR block
    fn translate_opt_condition(
        &mut self,
        condition: &Option<Box<Node<Expression>>>,
        context: Context,
        bid_then: ir::BlockId,
        bid_else: ir::BlockId
    ) -> Result<(), IrgenErrorMessage> {
        if let Some(condition) = condition {
            self.translate_condition(&condition.node, context, bid_then, bid_else)
        } else {
            self.insert_block(
                context,
                ir::BlockExit::Jump {
                    arg: ir::JumpArg::new(bid_then, Vec::new())
                }
            );
            Ok(())
        }
    }

    /// Translate Condition Expression of (do-)while-loop and if statement to IR block
    fn translate_condition(
        &mut self,
        condition: &Expression,
        mut context: Context,
        bid_then: ir::BlockId,
        bid_else: ir::BlockId,
    ) -> Result<(), IrgenErrorMessage> {
        let condition = self.translate_expr_rvalue(condition, &mut context)?;
        
        // Implicit type casting
        let condition = self.translate_typecast_to_bool(condition, &mut context)?;

        self.insert_block(
            context,
            ir::BlockExit::ConditionalJump { 
                condition, 
                arg_then: ir::JumpArg::new(bid_then, Vec::new()), 
                arg_else: ir::JumpArg::new(bid_else, Vec::new()) 
            }
        );

        Ok(())
    }

    fn translate_expr(
        &mut self,
        expr: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match expr {
            Expression::Identifier(ident) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: ident".to_string(),
                })
            }
            // 1️⃣ 리터럴(Constant) 변환
            Expression::Constant(constant) => {
                let const_value = ir::Constant::try_from(&constant.node)
                    .map_err(|_| IrgenErrorMessage::Misc {
                        message: "Invalid constant".to_string(),
                    })?;
                println!("const_value: {}", const_value);
                Ok(ir::Operand::constant(const_value))
            }
            Expression::StringLiteral(strlit) =>{
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: strlit".to_string(),
                })
            }
            Expression::GenericSelection(gensel) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: gensel".to_string(),
                })
            }
            Expression::Member(memexpr) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: memexpr".to_string(),
                })
            }
            // 5️⃣ 함수 호출(Call)
            Expression::Call(call_expr) => {
                let callee = self.translate_expr(&call_expr.node.callee.node, context)?;
                let args: Result<Vec<_>, _> = call_expr
                    .node
                    .arguments
                    .iter()
                    .map(|arg| self.translate_expr(&arg.node, context))
                    .collect();
    
                let instr = ir::Instruction::Call {
                    callee,
                    args: args?,
                    return_type: ir::Dtype::unit(), // 기본적으로 unit()을 반환, 실제 타입은 추후 결정
                };
    
                context.insert_instruction(instr)
            }
            Expression::CompoundLiteral(complit) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: complit".to_string(),
                })
            }
            Expression::SizeOfTy(sizet) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: sizet".to_string(),
                })
            }

            // 2️⃣ 변수 참조 (Identifier)
            // Expression::Identifier(ident) => {
            //     let var_name = ident.node.name.clone();
            //     if let Some(operand) = self.lookup_variable(&var_name) {
            //         Ok(operand)
            //     } else {
            //         Err(IrgenErrorMessage::Misc {
            //             message: format!("Undefined variable `{}`", var_name),
            //         })
            //     }
            // }
    
            // 3️⃣ 이항 연산(Binary Operator)
            // Expression::BinaryOperator(bin_op) => {
            //     let lhs = self.translate_expr(&bin_op.node.lhs.node, context)?;
            //     let rhs = self.translate_expr(&bin_op.node.rhs.node, context)?;
    
            //     let instr = ir::Instruction::BinOp {
            //         op: bin_op.node.operator.node.clone(),
            //         lhs,
            //         rhs,
            //         dtype: lhs.dtype(), // 결과 타입은 lhs와 동일하다고 가정
            //     };
    
            //     context.insert_instruction(instr)
            // }
    
            // 4️⃣ 단항 연산(Unary Operator)
            // Expression::UnaryOperator(unary_op) => {
            //     let operand = self.translate_expr(&unary_op.node.operand.node, context)?;
    
            //     let instr = ir::Instruction::UnaryOp {
            //         op: unary_op.node.operator.node.clone(),
            //         operand,
            //         dtype: operand.dtype(),
            //     };
    
            //     context.insert_instruction(instr)
            // }
    

            Expression::AlignOf(alignof) => {
                // Type name 가져오기
                let type_name = &alignof.node.0.node;

                // 타입 정보를 변환하여 align 값을 가져오기
                let dtype= ir::Dtype::try_from(type_name)
                .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
        
                // let (_, align_value) = dtype
                //     .size_align_of(&self.structs)
                //     .map_err(|e| IrgenErrorMessage::Misc { message: format!("align_size error: {:?}", e) })?;
                
           
                let (size, align_value) = dtype
                    .size_align_of(&self.structs)
                    .map_err(|e| IrgenErrorMessage::Misc { message: format!("align_size error: {:?}", e) })?;
                
                let const_align = ir::Operand::constant(ir::Constant::int(align_value as u128, dtype.clone()));
                
                println!("_Alignof({:?}) -> {}, size: {}, align: {}", dtype, align_value, size, align_value);
                println!("const_align {}", const_align.clone());
                let instr = ir::Instruction::Value { value: const_align };
                context.insert_instruction(instr)
            
                // Ok(const_align) // 변환된 값 반환
            }
            Expression::UnaryOperator(unaryop) =>{
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: unaryop".to_string(),
                })
            }
            Expression::Cast(cast) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: cast".to_string(),
                })
            }
            Expression::BinaryOperator(binop) => {
                // let tmp = &binop.node.lhs.node;
                let tmp = &binop.node.operator.node;

                let lhs = self.translate_expr(&binop.node.lhs.node, context)?;
                let lhs_type = lhs.dtype();
                let rhs = self.translate_expr(&binop.node.rhs.node, context)?;
                let rhs_type =  rhs.dtype();
                if lhs_type != rhs_type {
                    return Err(IrgenErrorMessage::Misc {
                        message: "Mismatched expression type: lhs!=rhs".to_string(),
                    });
                }
                let operator = &binop.node.operator.node;
                let instr =ir::Instruction::BinOp { op: operator.clone(), lhs, rhs, dtype: lhs_type };
                context.insert_instruction(instr)
            }
            Expression::Conditional(condexpr) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: condexpr".to_string(),
                })
            }
            Expression::Comma(exprs) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: comma".to_string(),
                })
            }
            Expression::OffsetOf(offsetexpr) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: offsetexpr".to_string(),
                })
            }
            Expression::VaArg(vaargexpr) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: vaargexpr".to_string(),
                })
            }
            Expression::Statement(stmt) => {
                Err(IrgenErrorMessage::Misc {
                    message: "Unsupported expression type: stmt".to_string(),
                })
            }
            _ => Err(IrgenErrorMessage::Misc {
                message: "Unsupported expression type".to_string(),
            }),
        }
    }
    


    /// Translate initial parameter declarations of the functions to IR.
    ///
    /// For example, given the following C function from [`foo.c`][foo]:
    ///
    /// ```C
    /// int foo(int x, int y, int z) {
    ///    if (x == y) {
    ///       return y;
    ///    } else {
    ///       return z;
    ///    }
    /// }
    /// ```
    ///
    /// The IR before this function looks roughly as follows:
    ///
    /// ```text
    /// fun i32 @foo (i32, i32, i32) {
    ///   init:
    ///     bid: b0
    ///     allocations:
    ///
    ///   block b0:
    ///     %b0:p0:i32:x
    ///     %b0:p1:i32:y
    ///     %b0:p2:i32:z
    ///   ...
    /// ```
    ///
    /// With the following arguments :
    ///
    /// ```ignore
    /// signature = FunctionSignature { ret: ir::INT, params: vec![ir::INT, ir::INT, ir::INT] }
    /// bid_init = 0
    /// name_of_params = ["x", "y", "z"]
    /// context = // omitted
    /// ```
    ///
    /// The resulting IR after this function should be roughly follows :
    ///
    /// ```text
    /// fun i32 @foo (i32, i32, i32) {
    ///   init:
    ///     bid: b0
    ///     allocations:
    ///       %l0:i32:x
    ///       %l1:i32:y
    ///       %l2:i32:z
    ///
    ///   block b0:
    ///     %b0:p0:i32:x
    ///     %b0:p1:i32:y
    ///     %b0:p2:i32:z
    ///     %b0:i0:unit = store %b0:p0:i32 %l0:i32*
    ///     %b0:i1:unit = store %b0:p1:i32 %l1:i32*
    ///     %b0:i2:unit = store %b0:p2:i32 %l2:i32*
    ///   ...
    /// ```
    ///
    /// In particular, note that it is added to the local allocation list and store them to the
    /// initial phinodes.
    ///
    /// Note that the resulting IR is **a** solution. If you can think of a better way to
    /// translate parameters, feel free to do so.
    ///
    /// [foo]: https://github.com/kaist-cp/kecc-public/blob/main/examples/c/foo.c
    fn translate_parameter_decl(
        &mut self,
        signature: &ir::FunctionSignature,
        bid_init: ir::BlockId,
        name_of_params: &[String],
        context: &mut Context,
    ) -> Result<(), IrgenErrorMessage> {
    // // todo!()
    // // 매개변수 개수 확인
    // if signature.params.len() != name_of_params.len() {
    //     return Err(IrgenErrorMessage::Misc {
    //         message: "Mismatched parameter count".to_string(),
    //     });
    // }

    // // 매개변수마다 처리
    // for (i, param_name) in name_of_params.iter().enumerate() {
    //     let param_type = &signature.params[i];

    //     // 1. `alloc`을 통해 로컬 변수 확보
    //     let alloc_name = format!("%l{}:{}", i, param_name);
    //     let alloc_reg = self.insert_alloc(Named::new(Some(alloc_name.clone()), param_type.clone()));

    //     // 2. `phi` 노드 추가 (함수 시작 시 전달되는 값)
    //     let phi_name = format!("%b{}:p{}:{}", bid_init.0, i, param_name);
    //     let phi_value = ir::Operand::register(ir::RegisterId::arg(bid_init, i), param_type.clone());
    //     self.phinodes_init.push(Named::new(Some(phi_name), param_type.clone()));

    //     // 3. `store` 명령어 추가 (매개변수를 alloc한 메모리에 저장)
    //     let store_instr = ir::Instruction::Store {
    //         ptr: ir::Operand::register(alloc_reg, param_type.clone()),
    //         value: phi_value.clone(),
    //     };
    //     let unused_result= context.insert_instruction(store_instr)?;

    //     // 4. Context에 변수 추가 (이후 참조 가능하도록)
    //     self.insert_symbol_table_entry(param_name.clone(), ir::Operand::register(alloc_reg, param_type.clone()))?;
    // }
    // Ok(())

    if signature.params.len() != name_of_params.len() {
        panic!("length of 'parameters' and 'name_of_params' must be same")
    }

    for (i, (dtype, var)) in izip!(&signature.params, name_of_params).enumerate() {
        let value = Some(ir::Operand::register(
            ir::RegisterId::arg(bid_init, i), 
            dtype.clone()
        ));
        let _unused = self.translate_alloc(var.clone(), dtype.clone(), value, context)?;
    }
    Ok(())
    }
}

#[inline]
fn name_of_declarator(declarator: &Declarator) -> String {
    let declarator_kind = &declarator.kind;
    match &declarator_kind.node {
        DeclaratorKind::Abstract => panic!("DeclaratorKind::Abstract is unsupported"),
        DeclaratorKind::Identifier(identifier) => identifier.node.name.clone(),
        DeclaratorKind::Declarator(declarator) => name_of_declarator(&declarator.node),
    }
}

#[inline]
fn name_of_params_from_function_declarator(declarator: &Declarator) -> Option<Vec<String>> {
    let declarator_kind = &declarator.kind;
    match &declarator_kind.node {
        DeclaratorKind::Abstract => panic!("DeclaratorKind::Abstract is unsupported"),
        DeclaratorKind::Identifier(_) => {
            name_of_params_from_derived_declarators(&declarator.derived)
        }
        DeclaratorKind::Declarator(next_declarator) => {
            name_of_params_from_function_declarator(&next_declarator.node)
                .or_else(|| name_of_params_from_derived_declarators(&declarator.derived))
        }
    }
}

#[inline]
fn name_of_params_from_derived_declarators(
    derived_decls: &[Node<DerivedDeclarator>],
) -> Option<Vec<String>> {
    for derived_decl in derived_decls {
        match &derived_decl.node {
            DerivedDeclarator::Function(func_decl) => {
                let name_of_params = func_decl
                    .node
                    .parameters
                    .iter()
                    .map(|p| name_of_parameter_declaration(&p.node))
                    .collect::<Option<Vec<_>>>()
                    .unwrap_or_default();
                return Some(name_of_params);
            }
            DerivedDeclarator::KRFunction(_kr_func_decl) => {
                // K&R function is allowed only when it has no parameter
                return Some(Vec::new());
            }
            _ => (),
        };
    }

    None
}

#[inline]
fn name_of_parameter_declaration(parameter_declaration: &ParameterDeclaration) -> Option<String> {
    let declarator = parameter_declaration.declarator.as_ref()?;
    Some(name_of_declarator(&declarator.node))
}

#[inline]
fn is_valid_initializer(
    initializer: &Initializer,
    dtype: &ir::Dtype,
    structs: &HashMap<String, Option<ir::Dtype>>,
) -> bool {
    match initializer {
        Initializer::Expression(expr) => match dtype {
            ir::Dtype::Int { .. } | ir::Dtype::Float { .. } | ir::Dtype::Pointer { .. } => {
                match &expr.node {
                    Expression::Constant(_) => true,
                    Expression::UnaryOperator(unary) => matches!(
                        &unary.node.operator.node,
                        UnaryOperator::Minus | UnaryOperator::Plus
                    ),
                    _ => false,
                }
            }
            _ => false,
        },
        Initializer::List(items) => match dtype {
            ir::Dtype::Array { inner, .. } => items
                .iter()
                .all(|i| is_valid_initializer(&i.node.initializer.node, inner, structs)),
            ir::Dtype::Struct { name, .. } => {
                let name = name.as_ref().expect("struct should have its name");
                let struct_type = structs
                    .get(name)
                    .expect("struct type matched with `name` must exist")
                    .as_ref()
                    .expect("`struct_type` must have its definition");
                let fields = struct_type
                    .get_struct_fields()
                    .expect("`struct_type` must be struct type")
                    .as_ref()
                    .expect("`fields` must be `Some`");

                izip!(fields, items).all(|(f, i)| {
                    is_valid_initializer(&i.node.initializer.node, f.deref(), structs)
                })
            }
            _ => false,
        },
    }
}

#[inline]
fn is_invalid_structure(dtype: &ir::Dtype, structs: &HashMap<String, Option<ir::Dtype>>) -> bool {
    // When `dtype` is `Dtype::Struct`, `structs` has real definition of `dtype`
    if let ir::Dtype::Struct { name, fields, .. } = dtype {
        assert!(name.is_some() && fields.is_none());
        let name = name.as_ref().unwrap();
        structs.get(name).is_none_or(Option::is_none)
    } else {
        false
    }
}
