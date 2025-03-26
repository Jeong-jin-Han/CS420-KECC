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
use std::iter::zip;
use std::num;
use std::ops::Deref;
use std::thread::current;

use ir::{Dtype, JumpArg, Operand};
use itertools::{izip, merge};
use lang_c::ast::*;
use lang_c::driver::Parse;
use lang_c::span::Node;
use rand::seq::index;
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
        dtype: Dtype,
        protorype_dtype: Dtype,
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
    typedefs: HashMap<String, Dtype>,
    /// Structs defined in the C file,
    // TODO: explain how to use this.
    structs: HashMap<String, Option<Dtype>>,
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
            Dtype::try_from_ast_declaration_specifiers(&source.specifiers).map_err(|e| {
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

        let base_dtype = if let Dtype::Struct { name, fields, .. } = &base_dtype {
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
        // println!("add_function_definition | {:?}", name_of_params.clone());

        let (base_dtype, is_typedef) = Dtype::try_from_ast_declaration_specifiers(specifiers)
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
        // println!("add_function_definition | decl {:#?}", self.decls.clone());

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
        // println!("\nadd_function_definition {:?}\n", global_scope);

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
            // structs: &mut self.structs, // ME

            // Initial symbol table has scope for global variable already
            symbol_table: vec![global_scope],
        };
        let mut context = Context::new(irgen.bid_init);
        // println!("\nadd_function_definition | context bid {}\n", context.bid);

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
        let value = if ret == Dtype::unit() {
            ir::Operand::constant(ir::Constant::unit())
        } else if ret == Dtype::INT {
            // If "main" function, default return value is `0` when return type is `int`
            if name == "main" {
                // ir::Operand::constant(ir::Constant::int(0, ret))
                ir::Operand::constant(ir::Constant::int(0, ret))
            } else {
                ir::Operand::constant(ir::Constant::undef(ret))
            }
        } else {
            ir::Operand::constant(ir::Constant::undef(ret))
        };

        // Last Block of the function
        irgen.insert_block(context, ir::BlockExit::Return { value });

        // Exit variable scope created above
        irgen.exit_scope();

        let func_def = ir::FunctionDefinition {
            allocations: irgen.allocations.clone(),
            blocks: irgen.blocks,
            bid_init: irgen.bid_init,
        };

        // println!("add_function_definition | alloations {:?}", irgen.allocations.clone());

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
    // return_value: Option<ir::Operand>, // me
}

impl Context {
    /// Create a new context with block number bid
    fn new(bid: ir::BlockId) -> Self {
        // println!("Context | bid {}", bid);
        Self {
            bid,
            instrs: Vec::new(),
            // return_value: None, // me
        }
    }

    // Adds `instr` to the current context.
    fn insert_instruction(
        &mut self,
        instr: ir::Instruction,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        println!("insert_instruction | \n{} \n", instr.clone());

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
    return_type: Dtype,
    /// initial block id for the function, typically 0.
    bid_init: ir::BlockId,
    /// arguments represented as initial phinodes. Order must be the same of that given in the C
    /// function.
    phinodes_init: Vec<Named<Dtype>>,
    /// local allocations.
    allocations: Vec<Named<Dtype>>,
    /// Map from block id to basic blocks
    blocks: BTreeMap<ir::BlockId, ir::Block>,
    /// current block id. `blocks` must have an entry for all ids less then this
    bid_counter: usize,
    /// current temporary id. Used to create temporary names in the IR for e.g,
    tempid_counter: usize,
    /// Usable definitions
    typedefs: &'i HashMap<String, Dtype>,
    /// Usable structs
    // TODO: Add examples on how to use properly use this field.
    structs: &'i HashMap<String, Option<Dtype>>,
    // structs: &'i mut HashMap<String, Option<Dtype>>, // ME
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
    fn insert_alloc(&mut self, alloc: Named<Dtype>) -> ir::RegisterId {
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
        // println!("insert_block | context_bid {}", context.bid);
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
        // println!("-----translate_stmt--------\ncontext bid {} | stmt{:?}\n", context.bid, stmt);
        // println!("-----translate_stmt--------\ncontext bid {}\n", context.bid);

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
                        arg: ir::JumpArg::new(bid_end, Vec::new()),
                    },
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
                        arg: ir::JumpArg::new(bid_end, Vec::new()),
                    },
                );
                Ok(())
            }
            // return x + 1;
            Statement::Return(expr) => {
                let value = match expr {
                    Some(expr) => self
                        .translate_expr_rvalue(&expr.node, context)
                        .map_err(|e| IrgenError::new(expr.write_string(), e))?,
                    None => ir::Operand::constant(ir::Constant::unit()),
                };

                // Implicit type casting
                let value = self
                    .translate_typecast(value, self.return_type.clone(), context)
                    .map_err(|e| IrgenError::new(expr.write_string(), e))?;

                let bid_end = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_end)),
                    ir::BlockExit::Return { value },
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
                // println!("translate_stmt | For | stmt {:?}", stmt);

                let for_stmt = &for_stmt.node;

                // Jumps to the for-loop initializer block
                let bid_init = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_init)),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_init, Vec::new()),
                    },
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
                    },
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
                        arg: ir::JumpArg::new(bid_step, Vec::new()),
                    },
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
                        arg: ir::JumpArg::new(bid_cond, Vec::new()),
                    },
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
                    },
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
                        arg: ir::JumpArg::new(bid_cond, Vec::new()),
                    },
                );

                // Exit variable scope created above
                self.exit_scope();

                Ok(())
            }
            Statement::DoWhile(do_while_stmt) => {
                let while_stmt = &do_while_stmt.node;

                // Jump to starting blok of do-while loop
                let bid_body = self.alloc_bid();
                self.insert_block(
                    mem::replace(context, Context::new(bid_body)),
                    ir::BlockExit::Jump {
                        arg: ir::JumpArg::new(bid_body, Vec::new()),
                    },
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
                        arg: ir::JumpArg::new(bid_cond, Vec::new()),
                    },
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
                // println!("translate_stmt | Switch | stmt {:?}", stmt);

                let value = self
                    .translate_expr_rvalue(&switch_stmt.node.expression.node, context)
                    .map_err(|e| IrgenError::new(switch_stmt.node.expression.write_string(), e))?;

                let bid_end = self.alloc_bid();
                let (cases, bid_default) =
                    self.translate_switch_body(&switch_stmt.node.statement.node, bid_end, bid_continue, bid_break)?;

                self.insert_block(
                    mem::replace(context, Context::new(bid_end)),
                    ir::BlockExit::Switch {
                        value,
                        default: ir::JumpArg::new(bid_default, Vec::new()),
                        cases,
                    },
                );

                Ok(())
            }
            Statement::Continue => {
                let bid_continue = bid_continue.ok_or_else(|| {
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
                        arg: ir::JumpArg::new(bid_continue, Vec::new()),
                    },
                );

                Ok(())
            }
            Statement::Break => {
                // println!("translate_stmt | break | stmt {:?}", stmt);
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
                        arg: ir::JumpArg::new(bid_break, Vec::new()),
                    },
                );
                Ok(())
            }
            Statement::Labeled(label_stmt) => Err(IrgenError::new(
                label_stmt.node.label.write_string(),
                IrgenErrorMessage::Misc {
                    message: "label statement not within a switch".to_string(),
                },
            )),
            _ => todo!(),
        }
    }

    fn translate_decl(
        &mut self,
        decl: &Declaration,
        context: &mut Context,
    ) -> Result<(), IrgenErrorMessage> {
        // println!("--------translate_decl-----\n {:?}\n", decl);
        let (base_dtype, is_typedef) = Dtype::try_from_ast_declaration_specifiers(&decl.specifiers)
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

            let dtype = <Dtype as Clone>::clone(&dtype); // ME
            let dtype = dtype
                .resolve_typedefs(self.typedefs)
                .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

            let name = name_of_declarator(declarator);

            // println!("translate_decl | name {}", name.clone());

            match &dtype {
                Dtype::Unit { .. } => todo!(),
                // TODO: when applying initiallizer, type checking is necessary
                Dtype::Int { .. } | Dtype::Float { .. } | Dtype::Pointer { .. } => {
                    // Check whether Initializer is exist
                    let value = if let Some(initializer) = &init_decl.node.initializer {
                        Some(self.translate_initializer(&initializer.node, None, context)?)
                    } else {
                        None
                    };

                    let _unused = self.translate_alloc(name, dtype.clone(), value, context)?;
                    // println!("translate_decl\ncontenxt bid {} | translate_alloc {}\n", context.bid, _unused);
                }
                Dtype::Array { inner, size } => {
                    let ptr = self.translate_alloc(name, dtype.clone(), None, context)?;
                    if let Some(initializer) = &init_decl.node.initializer {
                        let mut value =
                            self.translate_initializer(&initializer.node, Some(ptr), context)?;
                    };
                }
                Dtype::Function { .. } => todo!(),
                Dtype::Typedef { .. } => panic!("typedef should be replaced by real dtype"),
                Dtype::Struct { .. } => {
                    // println!(
                    //     "translate_decl | struct | name {} type {}",
                    //     name.clone(),
                    //     dtype.clone()
                    // );
                    // let _unsed = self.structs.insert(name.clone(), Some(dtype.clone()));
                    let ptr = self.translate_alloc(name, dtype.clone(), None, context)?;
                    let mut value = ir::Operand::constant(ir::Constant::int(0, Dtype::BOOL));
                    if let Some(initializer) = &init_decl.node.initializer {
                        // println!("translate_decl | intializer {:?}", initializer.node);
                        value = self.translate_initializer(
                            &initializer.node,
                            Some(ptr.clone()),
                            context,
                        )?;
                    };
                    // println!("translate_decl | value {} dtype {}", value, value.dtype());
                    // match &value.dtype() {
                    //     &Dtype::Struct {..} => {
                    //         let store_instr = ir::Instruction::Store { ptr: ptr.clone(), value: value.clone() };
                    //         context.insert_instruction(store_instr);
                    //     }
                    //     _ => {}
                    // }
                    if let &Dtype::Struct { .. } = &value.dtype() {
                        let store_instr = ir::Instruction::Store {
                            ptr: ptr.clone(),
                            value: value.clone(),
                        };
                        context.insert_instruction(store_instr);
                    }

                    // let mut new_structs = self.structs.clone();

                    // let _unused = new_structs.insert(name, Some(dtype));
                    // // mem::replace(self.structs,  (new_structs.clone()));
                    // self.structs = & new_structs.clone();
                    // todo!()
                }
                Dtype::Struct {
                    name,
                    fields,
                    is_const,
                    size_align_offsets,
                } => {
                    todo!()
                }
                _ => todo!(),
            }
        }

        Ok(())
    }

    fn translate_switch_body(
        &mut self,
        stmt: &Statement,
        bid_end: ir::BlockId,

        bid_continue: Option<ir::BlockId>, // ME
        bid_break: Option<ir::BlockId>, // ME
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
                    self.translate_switch_body_inner(&stmt.node, &mut cases, &mut default, bid_end, bid_continue, bid_break)?
                }
                _ => panic!("is unsupported"),
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
        bid_end: ir::BlockId,

        bid_continue: Option<ir::BlockId>, // ME
        bid_break: Option<ir::BlockId>, // ME
    ) -> Result<(), IrgenError> {
        // stmt = case 1; {A1; break}
        let label_stmt = if let Statement::Labeled(label_stmt) = stmt {
            &label_stmt.node
        } else {
            panic!(
                r"'BlockItem::Statement' in the 'Statement::Compound' of the 'switch' \
            is unsupported except 'Satement::Labeled"
            )
        };

        let bid = self.alloc_bid();
        let case = self.translate_switch_body_label_statement(label_stmt, bid, bid_end, bid_continue, bid_break)?;

        if let Some(case) = case {
            if !case.is_integer_constant() {
                return Err(IrgenError::new(
                    label_stmt.label.write_string(),
                    IrgenErrorMessage::Misc {
                        message: "expression is inot an integer cnstant expression".to_string(),
                    },
                ));
            }

            // TODO: consider the case that same 'value' but different 'width'
            if cases.iter().any(|(c, _)| &case == c) {
                return Err(IrgenError::new(
                    label_stmt.label.write_string(),
                    IrgenErrorMessage::Misc {
                        message: "duplicate case value".to_string(),
                    },
                ));
            }
            cases.push((case, ir::JumpArg::new(bid, Vec::new())));
        } else if default.is_some() {
            return Err(IrgenError::new(
                label_stmt.label.write_string(),
                IrgenErrorMessage::Misc {
                    message: "previous default already exists".to_string(),
                },
            ));
        }

        Ok(())
    }
    fn translate_switch_body_label_statement(
        &mut self,
        label_stmt: &LabeledStatement,
        bid: ir::BlockId,
        bid_end: ir::BlockId,

        bid_continue: Option<ir::BlockId>, // ME
        bid_break: Option<ir::BlockId>, // ME
    ) -> Result<Option<ir::Constant>, IrgenError> {
        // Get case value from constant expression
        let case = match &label_stmt.label.node {
            Label::Identifier(_) => panic!("'Label::Identifier' is unsupported"),
            Label::Case(expr) => {
                // case 1: {...}
                let constant = ir::Constant::try_from(&expr.node).map_err(|_| {
                    IrgenError::new(
                        expr.write_string(),
                        IrgenErrorMessage::Misc {
                            message: "case label does not reduce to an integer constant"
                                .to_string(),
                        },
                    )
                })?;

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
                    // println!("translate_switch_body_label_statement | stmt {:?}", stmt);
                    match &stmt.node {
                        Statement::Break => {}
                        _ => {
                            // self.translate_stmt(&stmt.node, &mut context, None, None)?;
                            self.translate_stmt(&stmt.node, &mut context, bid_continue, bid_break)?; //ME

                        }
                    }
                }
                _ => panic!("is unsupported"),
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
        self.insert_block(
            context,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );

        self.exit_scope();

        Ok(case)
    }

    fn translate_for_initializer(
        &mut self,
        initializer: &ForInitializer,
        context: &mut Context,
    ) -> Result<(), IrgenErrorMessage> {
        // println!(
        //     "-----translate_for_initializer--------\ncontext bid {}\n",
        //     context.bid
        // );

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
            ForInitializer::Empty => {
                todo!()
            }
            _ => todo!(),
        }
        // todo!();
        Ok(())
    }

    /// Translate allocation to IR instructions
    fn translate_alloc(
        &mut self,
        var: String,
        dtype: Dtype,
        value: Option<ir::Operand>,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // Insert allocation
        let id = self.insert_alloc(Named::new(Some(var.clone()), dtype.clone()));

        // Create pointer
        let pointer_type = Dtype::pointer(dtype.clone());
        // let rid = ir::RegisterId::local(id); // ME
        let ptr = ir::Operand::register(id, pointer_type);
        self.insert_symbol_table_entry(var.clone(), ptr.clone())?;
        // println!("------translate_alloc-----");
        // println!("inset_symbol_table_entry");
        // println!("var: {}, ptr: {}\n", var.clone(), ptr.clone());

        // Initialize allocated register if "value" is not 'None'
        if let Some(value) = value {
            // Implicit type cast
            // println!("translate_alloc | translate_typecast | {}", value.clone());
            let value = self.translate_typecast(value, dtype, context)?;
            return context.insert_instruction(ir::Instruction::Store { ptr, value });
        }

        // println!("translate_alloc | ptr {}", ptr.clone());
        // Return alloc register if there is no store instruction
        Ok(ptr)
    }

    fn translate_typecast(
        &mut self,
        value: ir::Operand,
        dtype: Dtype,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let value_dtype = value.dtype();
        println!("translate_typecast | value {} dtype {}", value_dtype, dtype);
        // ✅ 변환이 필요 없는 경우 그대로 반환
        if value_dtype == dtype {
            return Ok(value);
        }

        match (&value_dtype, &dtype) {
            // ✅ 정수 -> 정수 변환
            (&Dtype::Int { .. }, &Dtype::Int { .. }) => {
                // println!("int int case");
                context.insert_instruction(ir::Instruction::TypeCast {
                    value,
                    target_dtype: dtype,
                })
            }
            // 실수 <-> 실수 변환
            (&Dtype::Float { .. }, &Dtype::Float { .. }) => {
                // println!("float float case");
                context.insert_instruction(ir::Instruction::TypeCast {
                    value,
                    target_dtype: dtype,
                })
            }
            // ✅ 정수 <-> 실수 변환
            (&Dtype::Int { .. }, &Dtype::Float { .. })
            | (&Dtype::Float { .. }, &Dtype::Int { .. }) => {
                context.insert_instruction(ir::Instruction::TypeCast {
                    value,
                    target_dtype: dtype,
                })
            }

            // ✅ 포인터 <-> 정수 변환
            (&Dtype::Pointer { .. }, &Dtype::Int { .. }) => {
                // println!("translate_typecast | pointer | value {}", value);
                let value =
                    context.insert_instruction(ir::Instruction::Load { ptr: value.clone() })?;
                // println!("translate_typecast | pointer | value {}", value);
                context.insert_instruction(ir::Instruction::TypeCast {
                    value,
                    target_dtype: dtype,
                })
            }
            (&Dtype::Int { .. }, &Dtype::Pointer { .. }) => {
                // context.insert_instruction(ir::Instruction::TypeCast { value, target_dtype: dtype })
                Ok(value.clone())
            }

            // ✅ 포인터 <-> 포인터 변환
            (&Dtype::Pointer { .. }, &Dtype::Pointer { .. }) => {
                if let Some(ptr_inner) = value_dtype.get_pointer_inner() {
                    context.insert_instruction(ir::Instruction::Load { ptr: value })
                } else {
                    context.insert_instruction(ir::Instruction::TypeCast {
                        value,
                        target_dtype: dtype,
                    })
                }
            }

            // ✅ 배열 → 포인터 변환 (예: int a[5] → int*)
            (Dtype::Array { inner, .. }, &Dtype::Pointer { .. }) => {
                // println!("translate_typecast | Array to Pointer: {:?}", value_dtype);
                self.convert_array_to_pointer(value, value_dtype, context)
            }

            // ❌ 변환이 불가능한 경우
            _ => Err(IrgenErrorMessage::Misc {
                message: format!("Invalid type cast from {:?} to {:?}", value_dtype, dtype),
            }),
        }
    }

    fn translate_typecast_to_bool(
        &mut self,
        condition: ir::Operand,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let dtype = condition.dtype(); // condition의 타입 가져오기

        match condition {
            // 이미 BOOL 타입이면 변환할 필요 없음
            ir::Operand::Register {
                rid,
                dtype: Dtype::BOOL,
            } => Ok(ir::Operand::Register {
                rid,
                dtype: Dtype::BOOL,
            }),

            // 정수형이나 포인터이면 dtype만 BOOL로 변경
            ir::Operand::Register { rid, .. } => Ok(ir::Operand::Register {
                rid,
                dtype: Dtype::BOOL,
            }),

            // Constant 값이면 즉시 변환 (0이면 false, 나머지는 true)
            ir::Operand::Constant(ir::Constant::Int { value, .. }) => {
                let bool_value = if value == 0 { 0 } else { 1 };
                Ok(ir::Operand::Constant(ir::Constant::Int {
                    value: bool_value,
                    width: 1, // BOOL(u1)
                    is_signed: false,
                }))
            }

            // Float 값이면 0.0인지 확인해서 변환
            ir::Operand::Constant(ir::Constant::Float { value, .. }) => {
                let bool_value = if value.0 == 0.0 { 0 } else { 1 };
                Ok(ir::Operand::Constant(ir::Constant::Int {
                    value: bool_value,
                    width: 1,
                    is_signed: false,
                }))
            }

            // 변환 불가능한 타입이면 에러 반환
            _ => Err(IrgenErrorMessage::Misc {
                message: format!("Cannot convert {:?} to bool", dtype),
            }),
        }
    }

    /// Translate Initializer to IR instruction
    fn translate_initializer(
        &mut self,
        initializer: &Initializer,
        ptr: Option<ir::Operand>,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        /*
        array5.c 에서 list에 대한 initializer가 필요함.
        */

        let initializer = flatten_initializer_list(initializer);

        match initializer {
            Initializer::Expression(expr) => self.translate_expr_rvalue(&expr.node, context),
            Initializer::List(listitems) => {
                // TODO
                // println!("translate_initializer | List | {:#?}", listitems);
                // println!("translate_initializer | symbol_table {:?}", self.symbol_table.clone());
                let ptr = ptr.unwrap();
                let ptr_type = ptr.dtype();
                let ptr_inner_type = ptr_type
                    .get_pointer_inner()
                    .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;

                // listitems two kinds -> array or struct
                match ptr_inner_type {
                    Dtype::Array { .. } => {
                        // println!("translate_initializer | array");

                        let element_type = ptr_inner_type.get_array_inner().ok_or_else(|| {
                            panic!("'Operand' from 'symbol_table' must be pointer type")
                        })?;

                        let pointer =
                            self.convert_array_to_pointer(ptr, element_type.clone(), context)?;

                        let mut result = ir::Operand::constant(ir::Constant::int(1, Dtype::BOOL)); // for debug 
                        for (i, list) in listitems.iter().enumerate() {
                            let index_64 = ir::Operand::Constant(ir::Constant::Int {
                                value: i as u128, // 배열 크기 적용
                                width: 64,
                                is_signed: true,
                            });
                            result = self.translate_list_initializer(
                                list,
                                Some(pointer.clone()),
                                index_64,
                                context,
                            )?;
                            // println!("translate_initializer | array | {} {:?}", result, result);
                        }
                        Ok(result)
                    }
                    Dtype::Struct {
                        name,
                        fields,
                        is_const,
                        size_align_offsets,
                    } => {
                        // println!(
                        //     "translate_initialize | struct | ptr operand | {:?}",
                        //     ptr.clone()
                        // );
                        // println!("translate_initialize | struct | fields | {:?}", fields);
                        // println!("translate_initialize | struct | {:?}", self.structs);
                        let struct_name = name.clone().unwrap();
                        let struct_type = self
                            .structs
                            .get(&struct_name.clone())
                            .unwrap()
                            .clone()
                            .unwrap();

                        let default = struct_type.get_struct_fields().unwrap().clone().unwrap();

                        let mut field_names: Vec<(String, String, Dtype)> = Vec::new();

                        for f in default.iter() {
                            if let Some(name) = f.name() {
                                // let struct_type = Dtype::structure(Some(struct_name.clone()), None);
                                field_names.push((
                                    name.clone(),
                                    struct_name.clone(),
                                    struct_type.clone(),
                                ));
                            } else {
                                let dtype_f = f.clone().into_inner();
                                let inner_struct_name = dtype_f
                                    .get_struct_name()
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: "Unnamed field has no struct name".to_string(),
                                    })?
                                    .clone()
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: "Struct name is None".to_string(),
                                    })?;

                                // println!(
                                //     "translate_initializer | inner_struct_name {}",
                                //     inner_struct_name.clone()
                                // );

                                let struct_type = self
                                    .structs
                                    .get(&inner_struct_name)
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: format!(
                                            "Struct '{}' not found",
                                            inner_struct_name
                                        ),
                                    })?
                                    .clone()
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: "Struct is None".to_string(),
                                    })?;

                                let inner_fields = struct_type
                                    .get_struct_fields()
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: format!(
                                            "No fields for struct '{}'",
                                            inner_struct_name
                                        ),
                                    })?
                                    .clone()
                                    .ok_or_else(|| IrgenErrorMessage::Misc {
                                        message: format!(
                                            "Struct fields are None for '{}'",
                                            inner_struct_name
                                        ),
                                    })?;

                                // println!(
                                //     "translate_initialize | inner struct | default {:?}",
                                //     inner_fields
                                // );
                                // let inner_struct_type = Dtype::structure(Some(struct_name.clone()), None);
                                for e in inner_fields.iter() {
                                    let field_name =
                                        e.name().ok_or_else(|| IrgenErrorMessage::Misc {
                                            message: "Inner field has no name".to_string(),
                                        })?;
                                    field_names.push((
                                        field_name.clone(),
                                        inner_struct_name.clone(),
                                        struct_type.clone(),
                                    ));
                                }
                            }
                        }

                        let mut result = ir::Operand::constant(ir::Constant::int(1, Dtype::BOOL)); // for debug 
                        let mut pointer = ptr.clone();

                        let mut current_struct_name = struct_name.clone();
                        let mut current_struct_type = struct_type.clone();
                        let origin_name = struct_name.clone();

                        for ((field_name, field_struct_name, struct_type), list) in
                            zip(field_names, listitems)
                        {
                            // 타입이 바뀌었는지 확인
                            if current_struct_name != field_struct_name
                                && current_struct_name == origin_name
                            {
                                // println!(
                                //     "translate_initializer | current_struct_name {} struct_name {} origin_name {}",
                                //     current_struct_name,
                                //     field_struct_name,
                                //     origin_name.clone()
                                // );

                                // 새로운 기준 struct로 GEP
                                let (offset, dtype) = current_struct_type
                                    .get_offset_struct_field(&field_name, self.structs)
                                    .unwrap();
                                let index = ir::Operand::Constant(ir::Constant::Int {
                                    value: offset as u128,
                                    width: 64,
                                    is_signed: true,
                                });

                                let struct_type_1 =
                                    Dtype::structure(Some(field_struct_name.clone()), None);
                                pointer =
                                    context.insert_instruction(ir::Instruction::GetElementPtr {
                                        ptr: pointer.clone(),
                                        offset: index.clone(),
                                        dtype: Dtype::Pointer {
                                            inner: Box::new(struct_type_1.clone()),
                                            is_const: false,
                                        },
                                    })?;
                                current_struct_name = field_struct_name.clone(); // 기준 struct 갱신
                                current_struct_type = struct_type.clone();
                                // continue; // 다시 offset은 새 기준에서 계산되어야 하므로 다음 루프부터 적용
                            } else {
                                // println!(
                                //     "translate_initializer | current_struct_name {} struct_name {} origin_name {}",
                                //     current_struct_name,
                                //     field_struct_name,
                                //     origin_name.clone()
                                // );
                                pointer = ptr.clone();
                                current_struct_name = origin_name.clone();
                            }

                            let current_struct_type = self
                                .structs
                                .get(&current_struct_name)
                                .ok_or_else(|| IrgenErrorMessage::Misc {
                                    message: format!("Struct '{}' not found", current_struct_name),
                                })?
                                .clone()
                                .ok_or_else(|| IrgenErrorMessage::Misc {
                                    message: "Struct is None".to_string(),
                                })?;

                            // 이제 현재 기준 struct에 대해 offset 계산
                            let (offset, dtype) = current_struct_type
                                .get_offset_struct_field(&field_name, self.structs)
                                .ok_or_else(|| IrgenErrorMessage::Misc {
                                    message: format!(
                                        "Field '{}' not found in struct '{}'",
                                        field_name, current_struct_name
                                    ),
                                })?;

                            let index = ir::Operand::Constant(ir::Constant::Int {
                                value: offset as u128,
                                width: 64,
                                is_signed: true,
                            });

                            // println!(
                            //     "translate_initializer | struct | listitem | dtype {}",
                            //     dtype.clone()
                            // );
                            result = self.translate_list_initializer_struct(
                                list,
                                Some(pointer.clone()),
                                dtype.clone(),
                                index,
                                context,
                            )?;

                            // println!("translate_initializer | struct |  {} {:?}", result, result);
                        }
                        Ok(result)
                        // todo!()
                    }
                    _ => {
                        todo!()
                    }
                }
            }
        }
    }

    fn translate_list_initializer(
        &mut self,
        list: &Node<InitializerListItem>,
        ptr: Option<ir::Operand>,
        index_64: ir::Operand,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let tmp1 = &list.node.designation;
        let tmp2 = &list.node.initializer.node;
        let pointer = ptr.unwrap();

        let mut pointer_type = pointer.dtype();

        // ✅ 배열 크기 가져오기
        // let mut elt_size = 4; // 기본 int 크기 (4바이트)
        let ptr_inner_type = pointer_type
            .get_pointer_inner()
            .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;
        let elt_size = (ptr_inner_type.get_int_width().unwrap() / 8) as u128;

        let offset = context.insert_instruction(ir::Instruction::BinOp {
            op: BinaryOperator::Multiply,
            lhs: index_64,
            rhs: ir::Operand::Constant(ir::Constant::Int {
                value: elt_size, // 배열 크기 적용
                width: 64,
                is_signed: true,
            }),
            dtype: Dtype::Int {
                width: 64,
                is_signed: true,
                is_const: false,
            },
        })?;

        let gep_instr = ir::Instruction::GetElementPtr {
            ptr: pointer.clone(),
            offset,
            dtype: pointer_type.clone(),
        };
        let store_ptr = context.insert_instruction(gep_instr)?;
        let mut value = self.translate_initializer(tmp2, Some(store_ptr.clone()), context)?;
        // // 여기서 value type cast 하기

        // value = self.translate_typecast(value, ptr_inner_type.clone(), context)?;

        let store_instr = ir::Instruction::Store {
            ptr: store_ptr,
            value,
        };
        context.insert_instruction(store_instr)
        // todo!()
    }

    fn translate_list_initializer_struct(
        &mut self,
        list: &Node<InitializerListItem>,
        ptr: Option<ir::Operand>, // 정확한 pointer를 주어야 한다.
        dtype: Dtype,
        index: ir::Operand,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let tmp1 = &list.node.designation;
        let tmp2 = &list.node.initializer.node;
        // println!(
        //     "translate_list_initializer_struct | -> | translate_initializer | initializer {:?}",
        //     tmp2
        // );
        let pointer = ptr.unwrap();

        let mut pointer_type = pointer.dtype();

        let ptr_inner_type = pointer_type
            .get_pointer_inner()
            .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;

        let ptr_inner_type = ptr_inner_type.clone();
        pointer_type = Dtype::Pointer {
            inner: Box::new(dtype.clone()),
            is_const: false,
        };

        // wrong pointer 를 준다.
        let gep_instr = ir::Instruction::GetElementPtr {
            ptr: pointer.clone(),
            offset: index,
            dtype: pointer_type.clone(),
        };
        // println!(
        //     "translate_list_initialzier_struct | pointer {} dtype {}",
        //     pointer.clone(),
        //     dtype.clone()
        // );
        let store_ptr = context.insert_instruction(gep_instr)?;
        // println!("translate_list_initializer_struct | ");
        let mut value = self.translate_initializer(tmp2, Some(store_ptr.clone()), context)?;
        // 여기서 value type cast 하기
        match &dtype {
            &Dtype::Int { .. } | &Dtype::Float { .. } => {
                value = self.translate_typecast(value, dtype.clone(), context)?;
            }
            _ => {}
        }
        let value_dtype = value.dtype();
        // match &value_dtype {
        //     &Dtype::Unit {..} => {
        //         return Ok(value);
        //     }
        //     _ => {}
        // }
        if let &Dtype::Unit { .. } = &value_dtype {
            return Ok(value);
        }
        let store_instr = ir::Instruction::Store {
            ptr: store_ptr,
            value,
        };
        context.insert_instruction(store_instr)
        // Ok(value)
        // todo!()
    }

    fn lookup_symbol_table(
        &mut self,
        identifier: &String,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        /*
        조건
        높은 layer부터 순차적으로 이름이 존재하는지 확이

        높은 layer에 해당 key가 없으면 낮음 layer까지 순차적으로 이동하기

        self.symbol_table을 사용하기
        &Vec<HashMap<String, Operand>>
        */
        for layer in self.symbol_table.iter().rev() {
            if let Some(operand) = layer.get(identifier) {
                return Ok(operand.clone());
            }
        }

        Err(IrgenErrorMessage::Misc {
            message: format!("Undefined variable: {}", identifier),
        })
    }

    fn convert_array_to_pointer(
        &mut self,
        ptr: ir::Operand,
        element_type: Dtype, // ✅ 배열 원소의 타입을 직접 받음
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let zero_index = ir::Operand::Constant(ir::Constant::Int {
            value: 0,
            width: 32, // ✅ 32비트 정수 인덱스 사용
            is_signed: true,
        });

        // ✅ `getelementptr`을 사용하여 배열의 첫 번째 요소 포인터 반환
        let converted_ptr = context.insert_instruction(ir::Instruction::GetElementPtr {
            ptr,
            offset: zero_index,
            dtype: Dtype::Pointer {
                inner: Box::new(element_type), // ✅ Array<T> → Pointer<T> 변환
                is_const: false,
            },
        })?;

        // println!("convert_array_to_pointer | converted: {:?}", converted_ptr);
        Ok(converted_ptr)
    }

    fn type_of_expr(&mut self, expr: &Expression) -> Result<Dtype, IrgenErrorMessage> {
        /*
        self.symbol table
        */
        match expr {
            Expression::UnaryOperator(unary) => self.type_of_expr(&unary.node.operand.node),
            Expression::Identifier(identifier) => {
                let operand = self.lookup_symbol_table(&identifier.node.name)?;
                let mut dtype = operand.dtype();
                if let Some(inner_dtype) = dtype.get_pointer_inner() {
                    dtype = inner_dtype.clone();
                }

                Ok(dtype)
                // todo!()
            }
            Expression::BinaryOperator(binary) => {
                let tmp1 = &binary.node.operator.node;
                let tmp2 = &binary.node.lhs.node;
                let tmp3 = &binary.node.rhs.node;
                let lhs_type = self.type_of_expr(tmp2)?;
                let rhs_type = self.type_of_expr(tmp3)?;
                let merge_dtype = self.merge_dtype(lhs_type, rhs_type);
                Ok(merge_dtype)
                // todo!()
            }
            _ => {
                todo!()
            }
        }
        // todo!()
    }
    fn translate_expr_rvalue(
        &mut self,
        expr: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match expr {
            Expression::Identifier(identifier) => {
                // let tmp = &identifier.node.name;
                let ptr = self.lookup_symbol_table(&identifier.node.name)?;
                // println!("translate_expr_rvalue | lookup_symbol_table | bid {}| len {}\n{:#?}\n",context.bid, self.symbol_table.len(),self.symbol_table);

                let dtype_of_ptr = ptr.dtype();
                let ptr_inner_type = dtype_of_ptr
                    .get_pointer_inner()
                    .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;

                // When 'ptr' pointer from identifier of which inner type represents
                // 'function' or 'array', 'return', 'ptr' without 'Load' instructions
                if ptr_inner_type.get_function_inner().is_some() {
                    return Ok(ptr);
                }

                /*
                ptr_inner_type <- 더 이상 ptr이 없도록 while loop 돌리고 싶은데...
                */
                // let mut ptr_inner_type =ptr_inner_type.clone();
                // while let Some(ptr_inner) = ptr_inner_type.get_pointer_inner() {
                //     ptr_inner_type = ptr_inner.clone();
                // }

                // let's say two declarations are 'int a' and 'int b[10], 'a' and 'b' represent
                // int* and '[10 x i32]' respectively. When 'a' is used as an r-value, it's an
                // integer value from 'int*' by 'Load' instruction. On the other hand, when 'b' is
                // used as an r-value, it's interpreted as an integer pointer that will be indexed.
                if let Some(array_inner) = ptr_inner_type.get_array_inner() {
                    // println!("translate_expr_rvalue | bid {} | ptr {} | array_inner", context.bid, ptr.clone());

                    // We convert array into pointer if, e.g. 'b' is used as an r-value
                    // println!(
                    //     "translate_expr_rvalue | ptr {} {:?} | array_inner {}",
                    //     ptr,
                    //     ptr,
                    //     array_inner.clone()
                    // );
                    return self.convert_array_to_pointer(ptr, array_inner.clone(), context);
                }

                // println!("translate_expr_rvalue | bid {} | ptr {}", context.bid, ptr.clone());
                // println!("translate_expr_rvalue | ptr {} {:?}", ptr, ptr);
                context.insert_instruction(ir::Instruction::Load { ptr })
            }
            Expression::Constant(constant) => {
                let constant = ir::Constant::try_from(&constant.node)
                    .expect("'constant' must be interpreted to 'ir::Constant' value");
                Ok(ir::Operand::constant(constant))
            }
            Expression::StringLiteral(_string_llt) => todo!(),
            Expression::Member(member) => {
                let tmp = &member.node.operator.node;
                let tmp1 = &member.node.expression.node;
                let tmp2 = &member.node.identifier.node.name;
                self.translate_expr_rvalue_member(tmp, tmp1, tmp2, context)
            }
            Expression::Call(call) => {
                println!("translate_expr_rvalue | call {:?}", call);
                self.translate_func_call(&call.node, context)
            }
            Expression::SizeOfTy(type_name) => {
                // let tmp = &type_name.node.0.node; // TypeName
                let dtype = Dtype::try_from(&type_name.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                println!("translate_expr_rvalue | sizeofty | dtype {}", dtype);

                let (size_of, _) = dtype
                    .size_align_of(self.structs) // ME
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(ir::Constant::int(
                    size_of as u128,
                    Dtype::Int {
                        width: 64,
                        is_signed: false,
                        is_const: false,
                    },
                )))
            }
            Expression::SizeOfVal(sizeval) => {
                /* sizeofval : should not evaluate the expr */
                // Err(IrgenErrorMessage::Misc {
                //     message: "Unsupported expression type: sizeval".to_string(),
                // })
                let expr = &sizeval.node.0.node;
                // let operand = self.translate_expr_lvalue(expr, context)?; // lvalue에서 type 얻기 // 여기서 block이 제대로 생성되지 않는 문제가 발생함.

                let mut dtype = self.type_of_expr(expr)?;
                // fn type_of_expr(expr:&Expression) -> Dtype {}

                if let Some(inner_dtype) = dtype.get_pointer_inner() {
                    dtype = inner_dtype.clone();
                }

                let size = sizeofval_manual(&dtype);
                // println!("translate_expr_rvalue | sizeofval {}", size);
                let dtype = Dtype::Int {
                    width: 64,
                    is_signed: false,
                    is_const: true,
                };

                let const_size = ir::Operand::constant(ir::Constant::int(size, dtype));

                Ok(const_size)
                // todo!()
            }
            Expression::AlignOf(alignof) => {
                let tmp = &alignof.node.0.node;
                let dtype = Dtype::try_from(&alignof.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let (_, align_of) = dtype
                    .size_align_of(self.structs)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(ir::Constant::int(
                    align_of as u128,
                    Dtype::Int {
                        width: 64,
                        is_signed: false,
                        is_const: false,
                    },
                )))
            }
            Expression::UnaryOperator(unary) => {
                println!("translate_expr_rvalue | unary op ");
                self.translate_unary_op(&unary.node, context)
            }
            Expression::Cast(cast) => {
                let target_dtype = Dtype::try_from(&cast.node.type_name.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let target_dtype = target_dtype
                    .resolve_typedefs(self.typedefs)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                let operand = self.translate_expr_rvalue(&cast.node.expression.node, context)?;

                self.translate_typecast(operand, target_dtype, context)
            }
            Expression::BinaryOperator(binary) => self.translate_binary_op(
                binary.node.operator.node.clone(),
                &binary.node.lhs.node,
                &binary.node.rhs.node,
                context,
            ),
            Expression::Conditional(conditional) => {
                self.translate_conditional(&conditional.node, context)
            }
            Expression::Comma(exprs) => self.translate_comma(exprs, context),
            _ => todo!(),
        }
    }

    fn translate_expr_rvalue_member(
        &mut self,
        tmp: &MemberOperator,
        tmp1: &Expression,
        tmp2: &str,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        /*

        direct, indirec 따로따로!!
        이중 포인터인 경우도 있을 수 있음
         ->
         .
        의 차이
        */
        let operand1 = self.translate_expr_lvalue(tmp1, context)?;
        match tmp {
            MemberOperator::Direct => {
                let ptr_dtype = operand1.dtype();
                let dtype = ptr_dtype
                    .get_pointer_inner()
                    .ok_or_else(|| IrgenErrorMessage::Misc {
                        message: format!("Expected ptr type but type {:?}", ptr_dtype.clone()),
                    })?
                    .clone();
                self.translate_expr_rvalue_member_helepr(operand1, dtype, tmp2, context)
            }
            MemberOperator::Indirect => {
                let ptr_dtype1 = operand1.dtype();
                let ptr_dtype2 = ptr_dtype1
                    .get_pointer_inner()
                    .ok_or_else(|| IrgenErrorMessage::Misc {
                        message: format!("Expected ptr type but type {:?}", ptr_dtype1.clone()),
                    })?
                    .clone();
                let dtype = ptr_dtype2
                    .get_pointer_inner()
                    .ok_or_else(|| IrgenErrorMessage::Misc {
                        message: format!("Expected ptr type but type {:?}", ptr_dtype2.clone()),
                    })?
                    .clone();
                let operand1 = context.insert_instruction(ir::Instruction::Load {
                    ptr: operand1.clone(),
                })?;
                self.translate_expr_rvalue_member_helepr(operand1, dtype, tmp2, context)
                // todo!()
            }
        }
    }

    fn translate_expr_rvalue_member_helepr(
        &mut self,
        operand1: ir::Operand,
        dtype: Dtype,
        tmp2: &str,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // let mut operand1 = self.translate_expr_lvalue(tmp1, context)?;

        // let operand2 = self.lookup_symbol_table(tmp2)?;
        // let operand1_type = operand1.dtype();

        // let dtype = operand1_type.get_pointer_inner().unwrap();

        // let dtype =  operand1_type
        //     .get_pointer_inner()
        //     .ok_or_else(|| IrgenErrorMessage::Misc {
        //         message: format!("Expected pointer type but got {:?}", operand1_type),
        //     })?;

        let struct_name = dtype
            .get_struct_name()
            .ok_or_else(|| IrgenErrorMessage::Misc {
                message: format!("[1] Expected struct type but got {:?}", dtype),
            })?
            .clone()
            .ok_or_else(|| IrgenErrorMessage::Misc {
                message: format!("[2] Expected struct type but got {:?}", dtype),
            })?;

        let struct_type = self
            .structs
            .get(&struct_name.clone())
            .ok_or_else(|| IrgenErrorMessage::Misc {
                message: ("[1] Expected struct type error").to_string(),
            })?
            .clone()
            .ok_or_else(|| IrgenErrorMessage::Misc {
                message: ("[2] Expected struct type error)").to_string(),
            })?;

        let (offset2, dtype2) = dtype
            .get_offset_struct_field(tmp2, self.structs)
            .ok_or_else(|| IrgenErrorMessage::Misc {
                message: format!("Expected struct type but got {:?}", dtype),
            })?;

        // println!("translate_expr_lvalue | dtype2 {}", dtype2);
        let mut offset_operand =
            ir::Operand::constant(ir::Constant::int(offset2 as u128, Dtype::INT));

        // println!("translate_expr_lvalue | Member |", dtype2.clone());
        let mut dtype2 = dtype2.clone();

        let mut instrs = Vec::new();
        let mut temp_operands = Vec::new();

        match &dtype2 {
            Dtype::Array { inner, size } => {
                let pointer_dtype2 = Dtype::Pointer {
                    inner: inner.clone(),
                    is_const: false,
                };
                let offset_operand2 = ir::Operand::constant(ir::Constant::int(0, Dtype::INT));
                let gep_instr = ir::Instruction::GetElementPtr {
                    ptr: operand1.clone(),
                    offset: offset_operand2.clone(),
                    dtype: pointer_dtype2.clone(),
                };
                // operand1 = context.insert_instruction(gep_instr)?;
                instrs.push(gep_instr.clone());
                temp_operands.push((offset_operand2.clone(), pointer_dtype2.clone()));
                offset_operand =
                    ir::Operand::constant(ir::Constant::int(offset2 as u128, Dtype::LONG));
            }
            _ => {
                // println!("translate_expr_rvalue_member | type {}", dtype2.clone());
            }
        }
        // println!(
        //     "translate_expr_rvalue_member | operand inner type {}",
        //     dtype.clone()
        // );
        // match &dtype {
        //     Dtype::Struct {..} => {
        //         offset_operand = ir::Operand::constant(ir::Constant::int(offset2 as u128, Dtype::LONG));
        //     }
        //     _ => {}
        // }
        if let Dtype::Struct { .. } = &dtype {
            offset_operand = ir::Operand::constant(ir::Constant::int(offset2 as u128, Dtype::LONG));
        }

        let mut pointer_dtype2 = Dtype::Pointer {
            inner: Box::new(dtype2.clone()),
            is_const: false,
        };

        let gep_instr = ir::Instruction::GetElementPtr {
            ptr: operand1.clone(),
            offset: offset_operand,
            dtype: pointer_dtype2,
        };
        let mut result = context.insert_instruction(gep_instr)?;

        // if temp_operands.len() > 0 {
        if !temp_operands.is_empty() {
            let (offset_operand2, pointer_dtype2) = temp_operands.pop().unwrap();
            let gep_instr = ir::Instruction::GetElementPtr {
                ptr: result.clone(),
                offset: offset_operand2.clone(),
                dtype: pointer_dtype2,
            };
            result = context.insert_instruction(gep_instr)?;
        }
        Ok(result)
    }

    fn merge_dtype(&mut self, mut ty1: Dtype, mut ty2: Dtype) -> Dtype {
        // 1. 배열은 포인터로 변환
        if let Some(inner) = ty1.get_array_inner() {
            ty1 = Dtype::Pointer {
                inner: Box::new(inner.clone()),
                is_const: false,
            };
        }
        if let Some(inner) = ty2.get_array_inner() {
            ty2 = Dtype::Pointer {
                inner: Box::new(inner.clone()),
                is_const: false,
            };
        }

        // // 2. 같은 타입이면 그대로 반환 // i8, i8 - i32
        // if ty1 == ty2 {
        //     return ty1;
        // }

        match (&ty1, &ty2) {
            // 3. 정수 + 정수
            (Dtype::Int { .. }, Dtype::Int { .. }) => promote_int_int(&ty1, &ty2),

            // 4. 정수 + 실수
            (Dtype::Int { .. }, Dtype::Float { .. }) | (Dtype::Float { .. }, Dtype::Int { .. }) => {
                let width = std::cmp::max(
                    ty1.get_float_width().unwrap_or(32),
                    ty2.get_float_width().unwrap_or(32),
                );
                Dtype::Float {
                    width,
                    is_const: ty1.is_const() || ty2.is_const(),
                }
            }

            // 5. 실수 + 실수
            (Dtype::Float { .. }, Dtype::Float { .. }) => {
                let width = std::cmp::max(
                    ty1.get_float_width().unwrap(),
                    ty2.get_float_width().unwrap(),
                );
                Dtype::Float {
                    width,
                    is_const: ty1.is_const() || ty2.is_const(),
                }
            }

            // 6. 포인터 + 정수
            (Dtype::Pointer { .. }, Dtype::Int { .. }) => ty2.clone(),
            (Dtype::Int { .. }, Dtype::Pointer { .. }) => {
                // println!("-----| merge_dtype | pointer + int cases");
                // let result = if ty1.get_pointer_inner().is_some() {
                //     println!("ty1 {}", ty1);
                //     ty1.clone()
                // } else {
                //     println!("ty2 {}", ty2);
                //     ty2.clone()
                // };
                // println!("-----| merge_dtype | result {}", result);
                // result
                ty1.clone()
            }

            // 7. 포인터 + 포인터 → 에러
            (Dtype::Pointer { .. }, Dtype::Pointer { .. }) => {
                panic!("Cannot merge two pointer types: {} and {}", ty1, ty2);
            }

            // 8. 구조체, 함수 등 불가능한 조합
            _ => {
                panic!("Cannot merge types: {} and {}", ty1, ty2);
            }
        }
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
            self.translate_expr_rvalue(&conditional_expr.else_expression.node, &mut context_else)?;

        // self.translate_expr_lvalue(&conditional_expr.else_expression.node, &mut context_else)?;
        println!(
            "translate_conditional | ty1 {}, ty2 {}",
            val_then.dtype(),
            val_else.dtype()
        );
        let merged_dtype = self.merge_dtype(val_then.dtype(), val_else.dtype());
        println!(
            "translate_conditional | merged_dtype {} val_tehn {} val_else {}",
            merged_dtype,
            val_then.dtype(),
            val_else.dtype()
        );
        let val_then =
            self.translate_typecast(val_then, merged_dtype.clone(), &mut context_then)?;
        let val_else =
            self.translate_typecast(val_else, merged_dtype.clone(), &mut context_else)?;

        // Allocates at the satck.
        let var = self.alloc_tempid();
        // let ptr = self.translate_alloc(var, merged_dtype)?; // ME
        let ptr = self.translate_alloc(var, merged_dtype, None, context)?; // ME 

        // Finishes the then branch
        let _unused = context_then.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_then,
        });
        self.insert_block(
            context_then,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );

        // Finishes the else branch
        let _unused = context_else.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_else,
        });
        self.insert_block(
            context_else,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );

        // println!("translate_conditional");
        context.insert_instruction(ir::Instruction::Load { ptr })
    }

    /// Translate comma expression to IR instructions
    fn translate_comma(
        &mut self,
        exprs: &[Node<Expression>],
        context: &mut Context,
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
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // Extract function signature of callee
        let callee = self.translate_expr_rvalue(&call.callee.node, context)?;
        let function_pointer_type = callee.dtype();
        let function = function_pointer_type.get_pointer_inner().ok_or_else(|| {
            IrgenErrorMessage::NeedFunctionOrFunctionPointer {
                callee: callee.clone(),
            }
        })?;
        let (return_type, parameters) = function.get_function_inner().ok_or_else(|| {
            IrgenErrorMessage::NeedFunctionOrFunctionPointer {
                callee: callee.clone(),
            }
        })?;

        let args = call
            .arguments
            .iter()
            .map(|a| self.translate_expr_rvalue(&a.node, context))
            .collect::<Result<Vec<_>, _>>()?;

        // Implicit type casting
        if args.len() != parameters.len() {
            return Err(IrgenErrorMessage::Misc {
                message: format!(
                    "too few arguments to function '{}'",
                    call.callee.write_string()
                ), // ME
            });
        }

        println!("translate_func_call | typecast");
        let args = izip!(args, parameters)
            .map(|(a, p)| self.translate_typecast(a, p.clone(), context))
            .collect::<Result<Vec<_>, _>>()?;

        let return_type = return_type.clone().set_const(false);
        context.insert_instruction(ir::Instruction::Call {
            callee,
            args,
            return_type,
        })
    }

    fn translate_logical_op(
        &mut self,
        op: BinaryOperator,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        match op {
            BinaryOperator::LogicalAnd => self.translate_logical_op_and(lhs, rhs, context),
            BinaryOperator::LogicalOr => self.translate_logical_op_or(lhs, rhs, context),
            _ => todo!(),
        }
    }

    fn translate_logical_op_or(
        &mut self,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        println!("translate_logical_op_or");
        let bid_then = self.alloc_bid();
        let bid_else = self.alloc_bid();
        let bid_end = self.alloc_bid();

        self.translate_condition(
            lhs,
            mem::replace(context, Context::new(bid_end)),
            bid_then,
            bid_else,
        );

        // Allocates at the satck.
        let var = self.alloc_tempid();
        // let ptr = self.translate_alloc(var, merged_dtype)?; // ME
        let ptr = self.translate_alloc(var, Dtype::BOOL, None, context)?; // ME 

        let mut context_then = Context::new(bid_then);
        let val_then = ir::Operand::constant(ir::Constant::int(1, Dtype::BOOL));

        let mut context_else = Context::new(bid_else);
        let mut val_else = self.translate_expr_rvalue(rhs, &mut context_else)?;
        let num0_dtype = val_else.dtype();
        println!("translate_logical_op_or |num0_dtype {}", num0_dtype);

        let dtype = Dtype::BOOL;
        match num0_dtype {
            Dtype::BOOL => {}
            _ => {
                let num0 = ir::Operand::Constant(ir::Constant::int(0, num0_dtype));
                let instr = ir::Instruction::BinOp {
                    op: BinaryOperator::NotEquals,
                    lhs: val_else.clone(),
                    rhs: num0.clone(),
                    dtype,
                };
                val_else = context_else.insert_instruction(instr)?;
            }
        }

        let _unused = context_then.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_then.clone(),
        });
        self.insert_block(
            context_then,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );

        // Finishes the else branch
        let _unused = context_else.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_else.clone(),
        })?;
        self.insert_block(
            context_else,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );
        // println!(
        //     "translate_logical_op_or {} val_then {} val_else {}",
        //     ptr.clone(),
        //     val_then.clone(),
        //     val_else.clone()
        // );
        let store_instr = ir::Instruction::Load { ptr: ptr.clone() };
        context.insert_instruction(store_instr)
        // Ok(ptr.clone())
    }

    fn translate_logical_op_and(
        &mut self,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let dtype = Dtype::BOOL;
        // let var = format!("t{}", self.tempid_counter);
        // self.tempid_counter += 1;
        // let _unused = self.translate_alloc(var, dtype, None, context)?;
        // let mut lhs = self.translate_expr_rvalue(lhs, context)?;

        let bid_then = self.alloc_bid();
        let bid_else = self.alloc_bid();
        let bid_end = self.alloc_bid();

        // println!(
        //     "translate_logical_op_and | bid {} {} {}",
        //     bid_then, bid_else, bid_end
        // );

        // println!(
        //     "translate_logical_op_and | translate_condition | lhs {:?}",
        //     lhs
        // );
        self.translate_condition(
            lhs,
            mem::replace(context, Context::new(bid_end)),
            bid_then,
            bid_else,
        );

        // Translate the then branch.
        let mut context_then = Context::new(bid_then);
        let val_then = self.translate_expr_rvalue(rhs, &mut context_then)?;

        // Translate the else branch.
        let mut context_else = Context::new(bid_else);

        // Allocates at the satck.
        let var = self.alloc_tempid();
        // let ptr = self.translate_alloc(var, merged_dtype)?; // ME
        let ptr = self.translate_alloc(var, Dtype::BOOL, None, context)?; // ME 

        let val_else = ir::Operand::constant(ir::Constant::int(0, Dtype::BOOL));

        // println!("translate_logical_op_and | val_else {}", val_else.dtype());

        let mut val_then = val_then;

        let dtype = Dtype::BOOL;

        let num0_dtype = val_then.dtype();
        match num0_dtype {
            Dtype::BOOL => {}
            _ => {
                let num0 = ir::Operand::Constant(ir::Constant::int(0, num0_dtype));
                let instr = ir::Instruction::BinOp {
                    op: BinaryOperator::NotEquals,
                    lhs: val_then.clone(),
                    rhs: num0.clone(),
                    dtype,
                };
                val_then = context_then.insert_instruction(instr)?;
            }
        }

        // Finishes the then branch
        let _unused = context_then.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_then.clone(),
        });
        self.insert_block(
            context_then,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );

        // Finishes the else branch
        let _unused = context_else.insert_instruction(ir::Instruction::Store {
            ptr: ptr.clone(),
            value: val_else.clone(),
        })?;
        self.insert_block(
            context_else,
            ir::BlockExit::Jump {
                arg: ir::JumpArg::new(bid_end, Vec::new()),
            },
        );
        // println!(
        //     "translate_logical_op_and {} val_then {} val_else {}",
        //     ptr.clone(),
        //     val_then.clone(),
        //     val_else.clone()
        // );

        let store_instr = ir::Instruction::Load { ptr: ptr.clone() };
        context.insert_instruction(store_instr)
    }

    fn translate_binary_op(
        // ME
        &mut self,
        op: BinaryOperator,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // ✅ Index 연산이면 translate_index_op 호출!
        match &op {
            &BinaryOperator::Index => {
                return self.translate_index_op(lhs, rhs, context);
            }
            &BinaryOperator::Assign => {
                /*
                lhs : *int
                rhs : int

                store int -> *int
                */
                return self.translate_assign_op(lhs, rhs, context);
            }
            &BinaryOperator::AssignPlus => {
                // make a new expression?? <- bad idea
                return self.translate_assignplus_op(lhs, rhs, context);
            }
            &BinaryOperator::LogicalAnd | &BinaryOperator::LogicalOr => {
                return self.translate_logical_op(op, lhs, rhs, context);
            }
            &BinaryOperator::AssignMinus => {
                return self.translate_assignminus_op(lhs, rhs, context);
            }
            _ => {}
        }

        // println!("translate_binary_op");
        // let debug = format!(
        //     "op {:?} lhs {:?} rhs {:?} \n",
        //     op.clone(),
        //     lhs.clone(),
        //     rhs.clone()
        // );

        let mut lhs = self.translate_expr_rvalue(lhs, context)?;
        let mut rhs = self.translate_expr_rvalue(rhs, context)?;

        // 🔥 포인터가 있는 경우 Load 수행 추가
        if let Dtype::Pointer { inner, .. } = lhs.dtype() {
            lhs = context.insert_instruction(ir::Instruction::Load { ptr: lhs })?;
        }
        if let Dtype::Pointer { inner, .. } = rhs.dtype() {
            rhs = context.insert_instruction(ir::Instruction::Load { ptr: rhs })?;
        }

        // println!("translate_binary_op | opernad | lhs {} rhs {}", lhs, rhs);

        let dtype = self.merge_dtype(lhs.dtype(), rhs.dtype());

        println!(
            "translate_binary_op | type |lhs {} rhs {} | merge {}",
            lhs.dtype(),
            rhs.dtype(),
            dtype
        );

        let dtype = match &op {
            &BinaryOperator::BitwiseOr | &BinaryOperator::BitwiseAnd => Dtype::Int {
                width: 32,
                is_signed: true,
                is_const: false,
            },
            _ => dtype.clone(),
        };

        let lhs = self.translate_typecast(lhs, dtype.clone(), context)?;
        let rhs = self.translate_typecast(rhs, dtype.clone(), context)?;

        let dtype = match &op {
            &BinaryOperator::Equals
            | &BinaryOperator::Less
            | &BinaryOperator::Greater
            | &BinaryOperator::NotEquals => Dtype::BOOL,
            // &BinaryOperator::Equals => {
            //     Dtype::BOOL
            // }
            _ => dtype.clone(),
        };

        context.insert_instruction(ir::Instruction::BinOp {
            op,
            lhs,
            rhs,
            dtype,
        })
    }

    fn translate_unary_op(
        // ME
        &mut self,
        unary: &UnaryOperatorExpression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // println!("translate_unary_op | unary {:?}", unary);
        let op = unary.operator.node.clone();
        match op {
            UnaryOperator::PostIncrement => {
                let operand_ptr = self.translate_expr_lvalue(&unary.operand.node, context)?;
                let operand = context.insert_instruction(ir::Instruction::Load {
                    ptr: operand_ptr.clone(),
                })?;
                // println!("translate_unary_op | {:?}\nopernad{} {:?}", unary.clone(), operand, operand);
                let operand_type = operand.dtype();
                let mut dtype = Dtype::Int {
                    width: 64,
                    is_signed: true,
                    is_const: false,
                };
                let mut const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                let mut result = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                if let Some(inner) = operand_type.get_pointer_inner() {
                    if let Some(size) = inner.get_int_width() {
                        let size = size / 8; // 8bit = 1 byte
                        let mut size_num =
                            ir::Operand::constant(ir::Constant::int(size as u128, dtype.clone()));
                        const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                        let instr = ir::Instruction::BinOp {
                            op: BinaryOperator::Multiply,
                            lhs: const_num.clone(),
                            rhs: size_num,
                            dtype: dtype.clone(),
                        };
                        const_num = context.insert_instruction(instr)?;
                        let instr = ir::Instruction::GetElementPtr {
                            ptr: operand.clone(),
                            offset: const_num.clone(),
                            dtype: operand_type.clone(),
                        };
                        result = context.insert_instruction(instr)?;
                    }
                } else {
                    // println!("pass");
                    println!("translate_unary_op | operand_type {}", operand_type.clone());
                    dtype = operand_type;
                    const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                    let instr = ir::Instruction::BinOp {
                        op: BinaryOperator::Plus,
                        lhs: operand.clone(),
                        rhs: const_num,
                        dtype: dtype.clone(),
                    };
                    result = context.insert_instruction(instr)?;
                }

                // let num_1 = ir::Operand::constant(ir::Constant::int(1,dtype.clone()));

                let _unused = context.insert_instruction(ir::Instruction::Store {
                    ptr: operand_ptr.clone(),
                    value: result,
                })?;
                // Ok(operand_ptr)
                Ok(operand) // not yet incremented
            }
            UnaryOperator::Minus => {
                let operand = self.translate_expr_rvalue(&unary.operand.node, context)?;
                let instr = ir::Instruction::UnaryOp {
                    op: (unary.operator.node).clone(),
                    operand: operand.clone(),
                    dtype: operand.dtype(),
                };
                context.insert_instruction(instr)
            }
            UnaryOperator::Address => {
                // need to fix
                let operand = self.translate_expr_lvalue(&unary.operand.node, context)?;
                println!("translate_unary_op | Address | operand {}", operand);
                Ok(operand)
            }
            UnaryOperator::Complement => {
                let operand = self.translate_expr_rvalue(&unary.operand.node, context)?;
                let dtype = operand.dtype();
                // let rhs = ir::Operand::Constant(Dtype::int())
                let width = dtype.get_int_width().unwrap(); // 예: 32
                let const_val = signed_to_u128(-1, width);
                let rhs = ir::Operand::constant(ir::Constant::int(const_val, dtype.clone()));
                let instr = ir::Instruction::BinOp {
                    op: BinaryOperator::BitwiseXor,
                    lhs: operand,
                    rhs,
                    dtype,
                };
                context.insert_instruction(instr)
            }
            UnaryOperator::Negate => {
                // ! 1 -> 0 // 1 != 0
                // ! 0 -> 1

                let operand = self.translate_expr_rvalue(&unary.operand.node, context)?;
                let dtype = operand.dtype();
                // let dtype = Dtype::BOOL;

                let num0 = ir::Operand::Constant(ir::Constant::int(0, dtype.clone()));
                let num1 = ir::Operand::Constant(ir::Constant::int(1, Dtype::BOOL));
                let cmp_instr = ir::Instruction::BinOp {
                    op: BinaryOperator::NotEquals,
                    lhs: operand.clone(),
                    rhs: num0.clone(),
                    dtype: Dtype::BOOL,
                };
                let cmp_operand = context.insert_instruction(cmp_instr)?;

                let xor_instr = ir::Instruction::BinOp {
                    op: BinaryOperator::BitwiseXor,
                    lhs: cmp_operand.clone(),
                    rhs: num1.clone(),
                    dtype: Dtype::BOOL,
                };
                context.insert_instruction(xor_instr)
                // todo!()
            }
            UnaryOperator::PreIncrement => {
                let operand_ptr = self.translate_expr_lvalue(&unary.operand.node, context)?;
                let operand = context.insert_instruction(ir::Instruction::Load {
                    ptr: operand_ptr.clone(),
                })?;
                // println!("translate_unary_op | {:?}\nopernad{} {:?}", unary.clone(), operand, operand);
                let operand_type = operand.dtype();
                let mut dtype = Dtype::Int {
                    width: 64,
                    is_signed: true,
                    is_const: false,
                };
                let mut const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                let mut result = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                if let Some(inner) = operand_type.get_pointer_inner() {
                    if let Some(size) = inner.get_int_width() {
                        let size = size / 8; // 8bit = 1 byte
                        let mut size_num =
                            ir::Operand::constant(ir::Constant::int(size as u128, dtype.clone()));
                        const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                        let instr = ir::Instruction::BinOp {
                            op: BinaryOperator::Multiply,
                            lhs: const_num.clone(),
                            rhs: size_num,
                            dtype: dtype.clone(),
                        };
                        const_num = context.insert_instruction(instr)?;
                        let instr = ir::Instruction::GetElementPtr {
                            ptr: operand.clone(),
                            offset: const_num.clone(),
                            dtype: operand_type.clone(),
                        };
                        result = context.insert_instruction(instr)?;
                    }
                } else {
                    // println!("pass");

                    dtype = operand_type;
                    const_num = ir::Operand::constant(ir::Constant::int(1, dtype.clone()));
                    let instr = ir::Instruction::BinOp {
                        op: BinaryOperator::Plus,
                        lhs: operand.clone(),
                        rhs: const_num,
                        dtype: dtype.clone(),
                    };
                    result = context.insert_instruction(instr)?;
                }

                // let num_1 = ir::Operand::constant(ir::Constant::int(1,dtype.clone()));

                let _unused = context.insert_instruction(ir::Instruction::Store {
                    ptr: operand_ptr.clone(),
                    value: result.clone(),
                })?;
                // Ok(operand_ptr)
                Ok(result) // incremented
            }
            UnaryOperator::Indirection => {
                let operand = self.translate_expr_rvalue(&unary.operand.node, context)?;
                println!("translate_unary_op | Indirection | operand {}", operand);
                Ok(operand)
                // todo!() // !!! unreachible
            }
            _ => {
                // context.insert_instruction(
                //     ir::Instruction::UnaryOp { op, operand, dtype }
                // )
                todo!()
            }
        }
    }

    fn translate_index_op(
        &mut self,
        lhs: &Expression,
        rhs: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // println!("translate_index_op ");
        // println!("array lhs | {:?} \n\narray rhs | {:?}\n", lhs, rhs);

        // ✅ LHS를 rvalue로 변환 (단일 배열이면 int*로 변환됨)
        let mut lhs = self.translate_expr_rvalue(lhs, context)?;
        let mut lhs_type = lhs.dtype();
        let lhs_old_type = lhs.dtype();
        // println!(
        //     "translate_index_op | lhs {} {:?} lhs_type {}",
        //     lhs.clone(),
        //     lhs.clone(),
        //     lhs_type.clone()
        // );

        // ✅ RHS를 rvalue로 변환
        let rhs = self.translate_expr_rvalue(rhs, context)?;
        let rhs_type = rhs.dtype();
        // println!("translate_index_op ");
        // println!(
        //     "lhs_type {} rhs_type {} \n",
        //     lhs_type.clone(),
        //     rhs_type.clone()
        // );

        // ✅ 인덱스 변환 (i32 → i64) - GEP 연산을 위해 확장 필요
        let index_64 = context.insert_instruction(ir::Instruction::TypeCast {
            value: rhs.clone(),
            target_dtype: Dtype::LONG,
        })?;

        // ✅ 배열 크기 가져오기
        let mut elt_size = 4; // 기본 int 크기 (4바이트)
        let lhs_ptr_inner_type = lhs_type
            .get_pointer_inner()
            .ok_or_else(|| panic!("'Operand' from 'symbol_table' must be pointer type"))?;

        // ✅ 배열의 크기를 가져와 곱하기 (i32의 크기는 4)
        if let Dtype::Array { inner, size } = lhs_ptr_inner_type {
            elt_size = (size * 4) as u128;
        }

        // ✅ 오프셋 계산 (index * element_size)
        let offset = context.insert_instruction(ir::Instruction::BinOp {
            op: BinaryOperator::Multiply,
            lhs: index_64,
            rhs: ir::Operand::Constant(ir::Constant::Int {
                value: elt_size, // 배열 크기 적용
                width: 64,
                is_signed: true,
            }),
            dtype: Dtype::LONG,
        })?;

        // println!("translate_index_op | element_ptr");
        let mut element_ptr = context.insert_instruction(ir::Instruction::GetElementPtr {
            ptr: lhs.clone(),
            offset,
            dtype: lhs_type.clone(),
        })?;

        if let Dtype::Array { inner, size } = lhs_ptr_inner_type {
            // println!("translate_index_op | conver_array_to_pointer");

            lhs = self.convert_array_to_pointer(element_ptr, *inner.clone(), context)?;
            lhs_type = lhs.dtype();
            element_ptr = lhs
        }

        println!("translate_index_op | element_ptr {}", element_ptr);
        Ok(element_ptr)
    }

    fn translate_assign_op(
        &mut self,
        lhs: &Expression, // 원래 LHS (pointer)
        rhs: &Expression, // 원래 RHS (value)
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        println!("translate_assign_op");
        let lhs = self.translate_expr_lvalue(lhs, context)?; // rvalue -> lvalue
        let mut rhs = self.translate_expr_rvalue(rhs, context)?;

        // ✅ lhs는 반드시 포인터여야 함
        let lhs_inner_type = match lhs.dtype() {
            Dtype::Pointer { inner, .. } => *inner.clone(),
            _ => {
                return Err(IrgenErrorMessage::Misc {
                    message: format!(
                        "translate_assign_op | Expected pointer type for lhs, but got {:?}",
                        lhs.dtype()
                    ),
                });
            }
        };

        rhs = self.translate_typecast(rhs, lhs_inner_type.clone(), context)?;

        if rhs.dtype() != lhs_inner_type {
            return Err(IrgenErrorMessage::Misc {
                message: format!(
                    "translate_assign_op | Type mismatch: trying to store {:?} into {:?}",
                    rhs.dtype(),
                    lhs_inner_type
                ),
            });
        }

        // ✅ STORE 연산 수행
        let store_inst = ir::Instruction::Store {
            ptr: lhs,
            value: rhs.clone(),
        };
        context.insert_instruction(store_inst);
        Ok(rhs) // fix here
    }

    fn translate_assignplus_op(
        &mut self,
        lhs: &Expression, // 원래 LHS (value)
        rhs: &Expression, // 원래 RHS (value)
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let lhs_ptr = self.translate_expr_lvalue(lhs, context)?;
        let lhs_ptr_dtype = lhs_ptr.dtype();
        let lhs_ptr_dtype_inner = lhs_ptr_dtype.get_pointer_inner().unwrap().clone();

        // 3️⃣ LHS 값을 Load하여 현재 값을 가져오기
        let mut lhs_value = context.insert_instruction(ir::Instruction::Load {
            ptr: lhs_ptr.clone(),
        })?;
        // println!("translate_assignplus_op | lhs_value {}", lhs_value);

        let rhs = self.translate_expr_lvalue(rhs, context)?;

        // // 2️⃣ RHS를 rvalue로 변환하여 값 얻기
        let rhs_dtype = rhs.dtype();
        let mut rhs = rhs.clone();
        match &rhs_dtype {
            /* important!! */
            &Dtype::Pointer { .. } => {
                // println!("translate_assignplus_op | rhs {}", rhs);
                rhs = context.insert_instruction(ir::Instruction::Load { ptr: rhs.clone() })?;
            }
            _ => {}
        }
        let rhs_dtype = rhs.dtype();
        // println!("translate_assignplus_op | rhs_dtype {}", rhs_dtype);

        let merge_dtype = self.merge_dtype(lhs_ptr_dtype_inner.clone(), rhs_dtype.clone());

        println!(
            "translate_assignplus_op | merge_dtype {}, lhs_ptr_dtype_inner {}, rhs_dtype {}",
            merge_dtype.clone(),
            lhs_ptr_dtype_inner.clone(),
            rhs_dtype.clone()
        );
        if merge_dtype == lhs_ptr_dtype_inner {
            // println!("merge_dtype == lhs_ptr_dtype_inner");
            rhs = self.translate_typecast(rhs, lhs_ptr_dtype_inner.clone(), context)?;
        } else {
            lhs_value = self.translate_typecast(lhs_value, rhs_dtype, context)?;
        }

        // lhs type or rhs type??

        // 4️⃣ `lhs_value + rhs` 수행
        let mut result = context.insert_instruction(ir::Instruction::BinOp {
            op: BinaryOperator::Plus,
            lhs: lhs_value.clone(),
            rhs,
            dtype: lhs_value.dtype().clone(),
        })?;

        result = self.translate_typecast(result, lhs_ptr_dtype_inner.clone(), context)?;

        // 5️⃣ 결과값을 LHS 위치에 Store
        let store_inst = ir::Instruction::Store {
            ptr: lhs_ptr,
            value: result.clone(),
        };
        context.insert_instruction(store_inst);
        Ok(result) // fix here
    }

    fn translate_assignminus_op(
        &mut self,
        lhs: &Expression, // 원래 LHS (value)
        rhs: &Expression, // 원래 RHS (value)
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        let lhs_ptr = self.translate_expr_lvalue(lhs, context)?;
        let lhs_ptr_dtype = lhs_ptr.dtype();
        let lhs_ptr_dtype_inner = lhs_ptr_dtype.get_pointer_inner().unwrap().clone();

        // 3️⃣ LHS 값을 Load하여 현재 값을 가져오기
        let mut lhs_value = context.insert_instruction(ir::Instruction::Load {
            ptr: lhs_ptr.clone(),
        })?;
        // println!("translate_assignplus_op | lhs_value {}", lhs_value);

        let rhs = self.translate_expr_lvalue(rhs, context)?;

        // // 2️⃣ RHS를 rvalue로 변환하여 값 얻기
        let rhs_dtype = rhs.dtype();
        let mut rhs = rhs.clone();
        match &rhs_dtype {
            /* important!! */
            &Dtype::Pointer { .. } => {
                // println!("translate_assignplus_op | rhs {}", rhs);
                rhs = context.insert_instruction(ir::Instruction::Load { ptr: rhs.clone() })?;
            }
            _ => {}
        }
        let rhs_dtype = rhs.dtype();
        // println!("translate_assignplus_op | rhs_dtype {}", rhs_dtype);

        let merge_dtype = self.merge_dtype(lhs_ptr_dtype_inner.clone(), rhs_dtype.clone());

        println!(
            "translate_assignminus_op | merge_dtype {}, lhs_ptr_dtype_inner {}, rhs_dtype {}",
            merge_dtype.clone(),
            lhs_ptr_dtype_inner.clone(),
            rhs_dtype.clone()
        );
        if merge_dtype == lhs_ptr_dtype_inner {
            // println!("merge_dtype == lhs_ptr_dtype_inner");
            rhs = self.translate_typecast(rhs, lhs_ptr_dtype_inner.clone(), context)?;
        } else {
            lhs_value = self.translate_typecast(lhs_value, rhs_dtype, context)?;
        }

        // lhs type or rhs type??

        // 4️⃣ `lhs_value + rhs` 수행
        let mut result = context.insert_instruction(ir::Instruction::BinOp {
            op: BinaryOperator::Minus,
            lhs: lhs_value.clone(),
            rhs,
            dtype: lhs_value.dtype().clone(),
        })?;

        result = self.translate_typecast(result, lhs_ptr_dtype_inner.clone(), context)?;

        // 5️⃣ 결과값을 LHS 위치에 Store
        let store_inst = ir::Instruction::Store {
            ptr: lhs_ptr,
            value: result.clone(),
        };
        context.insert_instruction(store_inst);
        Ok(result)
    }

    fn translate_expr_lvalue(
        &mut self,
        expr: &Expression,
        context: &mut Context,
    ) -> Result<ir::Operand, IrgenErrorMessage> {
        // println!("trnalsate_expr_lvalue | expr {:?}", expr);
        match expr {
            Expression::Identifier(identifier) => self.lookup_symbol_table(&identifier.node.name),
            Expression::UnaryOperator(unary) => match &unary.node.operator.node {
                UnaryOperator::Indirection => {
                    let operand = self.translate_expr_rvalue(&unary.node.operand.node, context)?;

                    println!("translate_expr_lvalue | Indirection | operand {}", operand);
                    Ok(operand)
                }
                // _ => self.translate_unary_op(&unary.node, context), // fix here
                _ => Err(IrgenErrorMessage::Misc {
                    message: "This error occurred at 'IrgenFunc::translate_expr_lvalue".to_string(),
                }),
            },
            Expression::BinaryOperator(binary) => {
                match binary.node.operator.node {
                    BinaryOperator::Index => self.translate_index_op(
                        &binary.node.lhs.node,
                        &binary.node.rhs.node,
                        context,
                    ),
                    BinaryOperator::Plus => {
                        let op = binary.node.operator.node.clone();
                        let lhs = &binary.node.lhs.node;
                        let rhs = &binary.node.rhs.node;

                        let mut lhs = self.translate_expr_rvalue(lhs, context)?;
                        let mut rhs = self.translate_expr_rvalue(rhs, context)?;

                        // 🔥 포인터가 있는 경우 Load 수행 추가
                        if let Dtype::Pointer { inner, .. } = lhs.dtype() {
                            lhs = context.insert_instruction(ir::Instruction::Load { ptr: lhs })?;
                        }
                        if let Dtype::Pointer { inner, .. } = rhs.dtype() {
                            rhs = context.insert_instruction(ir::Instruction::Load { ptr: rhs })?;
                        }

                        let dtype = self.merge_dtype(lhs.dtype(), rhs.dtype());
                        println!(
                            "translate_expr_lvalue | binary_op | lhs {} rhs {} merge {}",
                            lhs, rhs, dtype
                        );

                        let lhs = self.translate_typecast(lhs, dtype.clone(), context)?;
                        let rhs = self.translate_typecast(rhs, dtype.clone(), context)?;

                        context.insert_instruction(ir::Instruction::BinOp {
                            op,
                            lhs,
                            rhs,
                            dtype,
                        })
                    }
                    _ => {
                        // println!("translate_expr_lvalue binary_op");
                        Err(IrgenErrorMessage::Misc {
                            message:
                                r"binary operator expression cannot be used as l-value except \ 
                            index operator expression"
                                    .to_string(),
                        })
                    }
                }
            }
            Expression::Constant(constant) => {
                let constant = ir::Constant::try_from(&constant.node)
                    .expect("'constant' must be interpreted to 'ir::Constant' value");
                Ok(ir::Operand::constant(constant))
            }
            Expression::Member(member) => {
                let tmp = &member.node.operator.node;
                let tmp1 = &member.node.expression.node;
                let tmp2 = &member.node.identifier.node.name;
                self.translate_expr_rvalue_member(tmp, tmp1, tmp2, context)
            }
            Expression::Call(call) => {
                println!("translate_expr_lvalue | call {:?}", call);
                // self.translate_func_call(&call.node, context) // fix here
                let callee = self.translate_expr_rvalue(&call.node.callee.node, context)?;
                let function_pointer_type = callee.dtype();
                let function = function_pointer_type.get_pointer_inner().ok_or_else(|| {
                    IrgenErrorMessage::NeedFunctionOrFunctionPointer {
                        callee: callee.clone(),
                    }
                })?;
                let (return_type, parameters) = function.get_function_inner().ok_or_else(|| {
                    IrgenErrorMessage::NeedFunctionOrFunctionPointer {
                        callee: callee.clone(),
                    }
                })?;

                let args = call
                    .node
                    .arguments
                    .iter()
                    .map(|a| self.translate_expr_rvalue(&a.node, context))
                    .collect::<Result<Vec<_>, _>>()?;

                // Implicit type casting
                if args.len() != parameters.len() {
                    return Err(IrgenErrorMessage::Misc {
                        message: format!(
                            "too few arguments to function '{}'",
                            call.node.callee.write_string()
                        ), // ME
                    });
                }

                let args = izip!(args, parameters)
                    .map(|(a, p)| self.translate_typecast(a, p.clone(), context))
                    .collect::<Result<Vec<_>, _>>()?;

                let return_type = return_type.clone().set_const(false);
                let result = context.insert_instruction(ir::Instruction::Call {
                    callee: callee.clone(),
                    args,
                    return_type,
                })?;

                let result_type = result.dtype();
                let struct_name = result_type.get_struct_name().unwrap().clone().unwrap();
                let ptr =
                    self.translate_alloc(struct_name.clone(), result_type.clone(), None, context)?;

                let store_instr = ir::Instruction::Store {
                    ptr: ptr.clone(),
                    value: result.clone(),
                };
                context.insert_instruction(store_instr);

                // println!(
                //     "translate_expr_lvalue | callee {} | result {}",
                //     callee.clone(),
                //     result.clone()
                // );

                Ok(ptr)
                // todo!()
            }
            Expression::SizeOfTy(type_name) => {
                let dtype = Dtype::try_from(&type_name.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // println!("translate_expr_lvalue | sizeofty | dtype {}", dtype);

                let (size_of, _) = dtype
                    .size_align_of(self.structs) // ME
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(ir::Constant::int(
                    size_of as u128,
                    Dtype::Int {
                        width: 64,
                        is_signed: false,
                        is_const: false,
                    },
                )))
            }
            Expression::AlignOf(alignof) => {
                let tmp = &alignof.node.0.node;
                let dtype = Dtype::try_from(&alignof.node.0.node)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;
                let (_, align_of) = dtype
                    .size_align_of(self.structs)
                    .map_err(|e| IrgenErrorMessage::InvalidDtype { dtype_error: e })?;

                // TODO: 'is_signed' must be 'false' in the future (unsigned)
                Ok(ir::Operand::constant(ir::Constant::int(
                    align_of as u128,
                    Dtype::Int {
                        width: 64,
                        is_signed: false,
                        is_const: false,
                    },
                )))
            }
            Expression::StringLiteral(_string_llt) => todo!(),
            Expression::Conditional(_)
            | Expression::Call(_)
            | Expression::Comma(_)
            | Expression::SizeOfTy(_)
            | Expression::SizeOfVal(_)
            | Expression::AlignOf(_)
            | Expression::Cast(_) => Err(IrgenErrorMessage::Misc {
                message: "This error occurred at 'IrgenFunc::translate_expr_lvalue'".to_string(),
            }),
            _ => todo!(),
        }
    }

    /// Translate Condition Expression of for-loop to IR block
    fn translate_opt_condition(
        &mut self,
        condition: &Option<Box<Node<Expression>>>,
        context: Context,
        bid_then: ir::BlockId,
        bid_else: ir::BlockId,
    ) -> Result<(), IrgenErrorMessage> {
        if let Some(condition) = condition {
            self.translate_condition(&condition.node, context, bid_then, bid_else)
        } else {
            self.insert_block(
                context,
                ir::BlockExit::Jump {
                    arg: ir::JumpArg::new(bid_then, Vec::new()),
                },
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
        let mut condition = self.translate_expr_rvalue(condition, &mut context)?;

        let condition_dtype = condition.dtype();
        let mut cond_dtype = condition_dtype.clone();
        // println!("translate_condition | condition_type {}", condition_dtype);

        // match &condition_dtype {
        //     &Dtype::Pointer { .. } => {
        //         let instr = ir::Instruction::Load { ptr: condition.clone() };
        //         condition = context.insert_instruction(instr)?;
        //         println!("translate_condition | unwrap error???");
        //         cond_dtype = condition_dtype.get_pointer_inner().unwrap().clone();
        //         println!("translate_condition | unwrap error??? | yes");
        //     }
        //     _ => {}
        // }
        if let &Dtype::Pointer { .. } = &condition_dtype {
            let instr = ir::Instruction::Load {
                ptr: condition.clone(),
            };
            condition = context.insert_instruction(instr)?;
            // println!("translate_condition | unwrap error???");
            cond_dtype = condition_dtype.get_pointer_inner().unwrap().clone();
            // println!("translate_condition | unwrap error??? | yes");
        }

        match &cond_dtype {
            &Dtype::BOOL => {}
            _ => {
                let rhs = ir::Operand::Constant(ir::Constant::int(0, cond_dtype.clone()));
                let instr = ir::Instruction::BinOp {
                    op: BinaryOperator::NotEquals,
                    lhs: condition.clone(),
                    rhs,
                    dtype: cond_dtype.clone(),
                };
                condition = context.insert_instruction(instr)?;
            }
        }

        // Implicit type casting
        let condition = self.translate_typecast_to_bool(condition, &mut context)?;

        self.insert_block(
            context,
            ir::BlockExit::ConditionalJump {
                condition,
                arg_then: ir::JumpArg::new(bid_then, Vec::new()),
                arg_else: ir::JumpArg::new(bid_else, Vec::new()),
            },
        );

        Ok(())
    }

    // /// Translate Condition Expression of (do-)while-loop and if statement to IR block
    // fn translate_condition_for_conditional(
    //     &mut self,
    //     condition: &Expression,
    //     mut context: Context,
    //     bid_then: ir::BlockId,
    //     bid_else: ir::BlockId,
    // ) -> Result<(), IrgenErrorMessage> {
    //     let mut condition = self.translate_expr_rvalue(condition, &mut context)?;

    //     let mut condition_dtype = condition.dtype();
    //     match &condition_dtype {
    //         &Dtype::Pointer { .. } => {
    //             let instr = ir::Instruction::Load { ptr: condition.clone() };
    //             condition = context.insert_instruction(instr)?;
    //         }
    //         _ => {}
    //     }
    //     condition_dtype = condition.dtype();
    //     let rhs = ir::Operand::Constant(ir::Constant::int(0, condition_dtype.clone()));
    //     let instr = ir::Instruction::BinOp { op: BinaryOperator::NotEquals, lhs: condition.clone(), rhs, dtype: condition_dtype };
    //     let condition = context.insert_instruction(instr)?;

    //     // Implicit type casting
    //     let condition = self.translate_typecast_to_bool(condition, &mut context)?;

    //     self.insert_block(
    //         context,
    //         ir::BlockExit::ConditionalJump {
    //             condition,
    //             arg_then: ir::JumpArg::new(bid_then, Vec::new()),
    //             arg_else: ir::JumpArg::new(bid_else, Vec::new())
    //         }
    //     );

    //     Ok(())
    // }

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
        // todo!()
        // println!("translate_parameter_decl | context_bid {}", context.bid);
        if signature.params.len() != name_of_params.len() {
            panic!("length of 'parameters' and 'name_of_params' must be same")
        }

        for (i, (dtype, var)) in izip!(&signature.params, name_of_params).enumerate() {
            let value = Some(ir::Operand::register(
                ir::RegisterId::arg(bid_init, i),
                dtype.clone(),
            ));
            // let tmp = self.phinodes_init.clone();
            // self.phinodes_init.push();
            let new_elt = Named::new(Some(var.to_string()), dtype.clone());
            self.phinodes_init.push(new_elt);
            let _unused =
                self.translate_alloc(var.clone(), dtype.clone(), value.clone(), context)?;
            // println!("translae_param\ncontext bid {} translate_alloc {}", context.bid, _unused);
            // println!(
            //     "translate_parameter_decl | Allocated: value {}, dtype {}",
            //     value.unwrap(), dtype
            // );
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
    dtype: &Dtype,
    structs: &HashMap<String, Option<Dtype>>,
) -> bool {
    match initializer {
        Initializer::Expression(expr) => match dtype {
            Dtype::Int { .. } | Dtype::Float { .. } | Dtype::Pointer { .. } => match &expr.node {
                Expression::Constant(_) => true,
                Expression::UnaryOperator(unary) => matches!(
                    &unary.node.operator.node,
                    UnaryOperator::Minus | UnaryOperator::Plus
                ),
                _ => false,
            },
            _ => false,
        },
        Initializer::List(items) => match dtype {
            Dtype::Array { inner, .. } => items
                .iter()
                .all(|i| is_valid_initializer(&i.node.initializer.node, inner, structs)),
            Dtype::Struct { name, .. } => {
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
fn is_invalid_structure(dtype: &Dtype, structs: &HashMap<String, Option<Dtype>>) -> bool {
    // When `dtype` is `Dtype::Struct`, `structs` has real definition of `dtype`
    if let Dtype::Struct { name, fields, .. } = dtype {
        assert!(name.is_some() && fields.is_none());
        let name = name.as_ref().unwrap();
        structs.get(name).is_none_or(Option::is_none)
    } else {
        false
    }
}

// merge_dtype helper ftn
fn promote_int_int(ty1: &Dtype, ty2: &Dtype) -> Dtype {
    // println!("-------| promote_int_int | ty1 {}, ty2 {}", ty1, ty2);
    let (mut w1, mut s1) = (ty1.get_int_width().unwrap(), ty1.is_int_signed());
    let (mut w2, mut s2) = (ty2.get_int_width().unwrap(), ty2.is_int_signed());

    if w1 == 32 && w2 == 32 && ((s1 && !s2) || (!s1 && s2)) {
        let result = Dtype::Int {
            width: 32,
            is_signed: false, // u32 선택
            is_const: ty1.is_const() || ty2.is_const(),
        };
        // println!("-------| promote_int_int | result {}", result);
        return result;
    }

    // 먼저 정수 승격 (i8, u8 등 → int or unsigned int)
    if w1 < 32 {
        w1 = 32;
    }
    if w2 < 32 {
        w2 = 32;
    }

    // ⚠️ 특별 케이스: signed와 unsigned 둘 다 32비트인 경우 → C 규칙상 int 유지
    if w1 == 32 && w2 == 32 && ((s1 && !s2) || (!s1 && s2)) {
        let result = Dtype::Int {
            width: 32,
            is_signed: true, // i32 선택
            is_const: ty1.is_const() || ty2.is_const(),
        };
        // println!("-------| promote_int_int | result {}", result);
        return result;
    }

    // 기본 승격 로직
    // let result =
    match (s1, s2) {
        (true, true) | (false, false) => Dtype::Int {
            width: std::cmp::max(w1, w2),
            is_signed: s1,
            is_const: ty1.is_const() || ty2.is_const(),
        },
        (true, false) | (false, true) => {
            if w1 > w2 {
                Dtype::Int {
                    width: w1,
                    is_signed: s1,
                    is_const: ty1.is_const() || ty2.is_const(),
                }
            } else {
                Dtype::Int {
                    width: w2,
                    is_signed: s2,
                    is_const: ty1.is_const() || ty2.is_const(),
                }
            }
        }
    }
    // println!("-------| promote_int_int | result {}", result);
    // result
}

fn signed_to_u128(value: i128, width: usize) -> u128 {
    let mask = match width {
        8 => u8::MAX as u128,
        16 => u16::MAX as u128,
        32 => u32::MAX as u128,
        64 => u64::MAX as u128,
        128 => u128::MAX,
        _ => panic!(
            "unsupported width for signed to unsigned conversion: {}",
            width
        ),
    };
    (value as u128) & mask
}

fn sizeofval_manual(dtype: &Dtype) -> u128 {
    // println!("sizeofval_manual");
    match dtype {
        Dtype::Int { width, .. } | Dtype::Float { width, .. } => (width.div_ceil(8)) as u128,
        Dtype::Pointer { .. } => 8,
        Dtype::Array { inner, size, .. } => {
            let inner_size = sizeofval_manual(inner);
            // println!("sizeofval_manual | inner_size {}", inner_size);
            (inner_size * (*size as u128))
        }
        Dtype::Unit { .. } => 0,
        Dtype::Struct { .. } => {
            panic!("struct not supported in sizeofval_manual (yet)")
        }
        Dtype::Function { .. } => 0,
        Dtype::Typedef { .. } => panic!("typedef should be resolved before sizeof"),
    }
}

fn flatten_initializer_list(init: &Initializer) -> &Initializer {
    match init {
        Initializer::List(items) if items.len() == 1 => {
            let inner = &items[0].node.initializer.node;
            match inner {
                Initializer::List(_) => flatten_initializer_list(inner), // 재귀적으로 풀어냄
                _ => init, // 더 이상 중첩이 아니면 그대로 반환
            }
        }
        _ => init,
    }
}
