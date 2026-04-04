use std::any::type_name;
use std::f64::consts::E;
use std::io::{Result, Write};
use std::ops::Deref;

use itertools::enumerate;
use lang_c::ast::*;
use lang_c::span::Node;

use crate::write_base::*;

impl<T: WriteLine> WriteLine for Node<T> {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        self.node.write_line(indent, write)
    }
}

impl<T: WriteString> WriteString for Node<T> {
    fn write_string(&self) -> String {
        self.node.write_string()
    }
}

impl WriteLine for TranslationUnit {
    /// VERY BIG HINT: You should start by understanding the [`writeln!`](https://doc.rust-lang.org/std/macro.writeln.html) macro.
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        // this is my first test comment
        // todo!()
        for ext_decl in &self.0 {
            ext_decl.write_line(indent, write)?;
            writeln!(write)?; // \n 문자 추가하기
        }
        Ok(())
    }
}

// enum FunctionDefinition
impl WriteLine for ExternalDeclaration {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        match self {
            Self::Declaration(decl) => {
                write!(write, "{}", decl.write_string());
            }
            Self::StaticAssert(_) => panic!(),
            Self::FunctionDefinition(fdef) => fdef.write_line(indent, write)?,
        }
        Ok(())
    }
}

impl WriteLine for FunctionDefinition {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        // for declspc in &self.specifiers {
        //     // declspc.write_line(indent, write)?;
        //     write!(write, "{}", declspc.write_string());
        //     // println!("FunctionDef {}", declspc.write_string());
        // }
        let declspcs_str = &self
            .specifiers
            .iter()
            .map(|declspc| declspc.write_string())
            .collect::<Vec<_>>()
            .join(" ");
        write!(write, "{}", declspcs_str);
        write!(write, " ");
        self.declarator.write_line(indent, write)?;
        // println!("FunctionDefinition: decl {} | pointer_count {}", self.declarator.write_string(), pointer_count);
        for decl in &self.declarations {
            // decl.write_line(indent, write)?;
            write!(write, "{}", decl.write_string());
        }
        self.statement.write_line(indent, write)?;
        // write!(write, "{}", self.statement.write_string());
        Ok(())
    }
}

impl WriteString for DeclarationSpecifier {
    fn write_string(&self) -> String {
        match self {
            Self::StorageClass(stclassspec) => stclassspec.write_string(),
            Self::TypeSpecifier(typespec) => {
                // println!("DeclarationSpecifier {}", typespec.write_string());
                typespec.write_string()
            }
            Self::TypeQualifier(typequal) => typequal.write_string(),
            Self::Function(funcspec) => {
                todo!()
            }
            Self::Alignment(alignspec) => {
                todo!()
            }
            Self::Extension(extensions) => {
                todo!()
            }
            _ => todo!(),
        }
    }
}

impl WriteString for StorageClassSpecifier {
    fn write_string(&self) -> String {
        match self {
            Self::Typedef => String::from("typedef"),
            Self::Extern => String::from("extern"),
            Self::Static => String::from("static"),
            Self::ThreadLocal => String::from("_Thread_local"),
            Self::Auto => String::from("auto"),
            Self::Register => String::from("register"),
            _ => todo!(),
        }
    }
}

impl WriteLine for Declarator {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        write!(write, "{}", self.write_string());
        Ok(())
    }
}

fn helper_ptr_count(i: usize, vec: &Vec<Node<DerivedDeclarator>>) -> usize {
    // println!("helper_ptr_count {} {}", i, vec.len());
    if i < vec.len() {
        match &vec[i].node {
            DerivedDeclarator::Pointer(_) => helper_ptr_count(i + 1, vec),
            _ => i - 1,
        }
    } else {
        vec.len() - 1
    }
}

impl WriteString for Declarator {
    fn write_string(&self) -> String {
        let mut result = String::new();

        if !self.derived.is_empty() {
            // match &self.derived[0].node {
            //     DerivedDeclarator::Pointer(ptrquals) => {
            //         let ptr_count = helper_ptr_count(0, &self.derived);
            //         println!("ptr_count {}", ptr_count + 1);
            //         result.push_str(&"*".repeat(ptr_count + 1));
            //         for ptrqual in ptrquals {
            //             result.push_str(&ptrqual.write_string());
            //         }
            //     }
            //     _ => {}
            // }

            if let DerivedDeclarator::Pointer(ptrquals) = &self.derived[0].node {
                let ptr_count = helper_ptr_count(0, &self.derived);
                // println!("ptr_count {}", ptr_count + 1);
                result.push_str(&"*".repeat(ptr_count + 1));
                for ptrqual in ptrquals {
                    result.push_str(&ptrqual.write_string());
                }
            }
        }

        // ✅ 1. 식별자 출력
        if let DeclaratorKind::Identifier(ident) = &self.kind.node {
            result.push_str(&ident.write_string());
            // println!("Declarator {}", ident.write_string());
        } else if let DeclaratorKind::Declarator(decl) = &self.kind.node {
            result.push('(');
            result.push_str(&decl.write_string());
            result.push(')');
        }

        for deriveddecl in &self.derived {
            result.push_str(&deriveddecl.write_string());
        }
        // }

        // ✅ 4. 확장자 처리
        for exten in &self.extensions {
            result.push_str(&exten.write_string());
        }

        // println!("Declarator {}", result);
        result
    }
}

impl WriteString for DerivedDeclarator {
    fn write_string(&self) -> String {
        match self {
            // ✅ K&R 스타일 함수 선언
            DerivedDeclarator::KRFunction(idents) => {
                let idents_str = idents
                    .iter()
                    .map(|ident| ident.write_string())
                    .collect::<Vec<_>>()
                    .join(", ");
                format!("({})", idents_str)
            }
            // ✅ 표준 C 스타일 함수 선언
            DerivedDeclarator::Function(funcdecl) => {
                // result.push('(');
                // result.push_str(&funcdecl.write_string());
                // result.push_str( ") ");
                format!("({})", funcdecl.write_string())
            }
            // ✅ 포인터 (`*`)
            DerivedDeclarator::Pointer(ptrquals) => {
                // result.push_str("*");
                // for ptrqual in ptrquals {
                //     result.push_str(&ptrqual.write_string());
                // }
                { String::new() }
            }
            DerivedDeclarator::Array(arraydecl) => arraydecl.write_string(),
            _ => todo!(),
        }
        // result
    }
}

impl WriteString for ArrayDeclarator {
    fn write_string(&self) -> String {
        let mut result = String::new();

        // ✅ 1. 배열 타입 한정자 (예: `const`, `volatile`)
        let qualifiers_str = self
            .qualifiers
            .iter()
            .map(|qualifier| qualifier.write_string())
            .collect::<Vec<_>>()
            .join(" ");

        if !qualifiers_str.is_empty() {
            result.push_str(&format!("{} ", qualifiers_str));
        }

        // let tmp = &self.size;
        // ✅ 2. 배열 크기 (예: `[10]`)
        result.push('[');
        result.push_str(&self.size.write_string());
        // println!("ArrayDeclarator arraysize {}", self.size.write_string());
        result.push(']');

        result
    }
}

impl WriteString for ArraySize {
    fn write_string(&self) -> String {
        match self {
            Self::Unknown => String::new(),             // `[]` → 빈 문자열 반환
            Self::VariableUnknown => String::from("*"), // `[*]`
            Self::VariableExpression(expr) => expr.write_string(), // `[10]`
            Self::StaticExpression(expr) => format!("static {}", expr.write_string()), // `[static 10]`
        }
    }
}

impl WriteString for PointerQualifier {
    fn write_string(&self) -> String {
        match self {
            Self::TypeQualifier(typequal) => typequal.write_string(),
            _ => todo!(),
        }
    }
}

impl WriteLine for ArraySize {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        match self {
            Self::VariableExpression(expr) => {
                write!(write, "{}", expr.write_string());
                // expr.write_line(indent, write)?;
            }
            _ => todo!(),
        }
        todo!()
    }
}

impl WriteString for FunctionDeclarator {
    fn write_string(&self) -> String {
        let mut result = String::new();

        // ✅ 1. 파라미터 목록 변환
        if !self.parameters.is_empty() {
            let paras_str = self
                .parameters
                .iter()
                .map(|parameter| parameter.write_string()) // ✅ 각 파라미터를 문자열로 변환
                .collect::<Vec<_>>() // ✅ Vec<String>으로 변환
                .join(", "); // ✅ `, `로 연결

            result.push_str(&paras_str);
        }

        // ✅ 2. 가변 인자 (`...`) 처리
        if let Ellipsis::Some = self.ellipsis {
            if !self.parameters.is_empty() {
                result.push_str(", ");
            }
            result.push_str("...");
        }

        result
    }
}

impl WriteString for ParameterDeclaration {
    fn write_string(&self) -> String {
        let mut result = String::new();

        // ✅ 1. Specifiers (예: int, const 등)
        let specifiers_str = self
            .specifiers
            .iter()
            .map(|specifier| specifier.write_string())
            .collect::<Vec<_>>()
            .join(" ");
        result.push_str(&specifiers_str);

        // ✅ 2. Declarator 처리
        if let Some(decl) = &self.declarator {
            // ✅ 변수 이름 출력
            let decl_str = decl.write_string();
            result.push_str(&format!(" {}", decl_str));
        }

        // ✅ 3. 확장자 처리 (있을 경우 추가)
        for extension in &self.extensions {
            result.push_str(&extension.write_string());
        }

        result.trim().to_string() // ✅ 불필요한 공백 제거 후 반환
    }
}

impl WriteString for Extension {
    fn write_string(&self) -> String {
        String::new()
    }
}

impl WriteString for Identifier {
    fn write_string(&self) -> String {
        // println!("Identifier {}", self.name.clone());
        self.name.clone()
    }
}

impl WriteString for Declaration {
    fn write_string(&self) -> String {
        let mut result = String::new();

        // ✅ 1. 선언자(specifiers) 처리
        let specifiers_str = self
            .specifiers
            .iter()
            .map(|specifier| specifier.write_string())
            .collect::<Vec<_>>()
            .join(" ");

        if !specifiers_str.is_empty() {
            result.push_str(&specifiers_str);
            // let tmp = &self.declarators[0].node.declarator.node.derived;
            result.push(' '); // specifiers 뒤에 공백 추가
        }

        // ✅ 2. 선언된 변수들(declarators) 처리
        let declarators_str = self
            .declarators
            .iter()
            .map(|decl| decl.write_string())
            .collect::<Vec<_>>()
            .join(", "); // 여러 선언자 구분을 위해 ", " 추가

        if !declarators_str.is_empty() {
            result.push_str(&declarators_str);
        }
        result.push(';');
        result
    }
}

impl WriteString for InitDeclarator {
    fn write_string(&self) -> String {
        let mut result = self.declarator.write_string();

        if let Some(init) = &self.initializer {
            result.push_str(" = "); // ✅ 등호(=) 추가
            result.push_str(&init.write_string()); // ✅ 초기화 값 추가
            // result.push(';');
        }

        result
    }
}

impl WriteLine for Statement {
    fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
        write!(write, "{}", self.write_string());
        Ok(())
    }
}

impl WriteString for Statement {
    fn write_string(&self) -> String {
        match self {
            Self::Labeled(stmt) => {
                // ✅ 라벨 처리 (예: `label: statement;`)
                format!(
                    "{}: {}",
                    stmt.node.label.write_string(),
                    stmt.node.statement.write_string()
                )
                // todo!()
            }
            Self::Compound(items) => {
                // ✅ `{}` 블록 처리
                let body = items
                    .iter()
                    .map(|item| item.write_string())
                    .collect::<Vec<_>>()
                    .join("\n");

                format!("{{\n{}\n}}", body)
            }
            Self::Expression(expr) => {
                if let Some(inner_expr) = expr.as_ref() {
                    // ✅ 표현식 처리 (예: `x + y;`)
                    format!("{};", inner_expr.write_string())
                } else {
                    String::new()
                }
            }
            Self::If(ifstat) => ifstat.write_string(),
            Self::Switch(switch) => switch.write_string(),
            Self::While(wh) => wh.write_string(),
            Self::DoWhile(dowh) => dowh.write_string(),
            Self::For(forstat) => {
                forstat.write_string() // ✅ `for` 문 처리
            }
            Self::Goto(iden) => {
                todo!()
            }
            Self::Continue => String::from("continue;"),
            Self::Break => String::from("break;"),
            Self::Return(expr) => {
                if let Some(inner_expr) = expr.as_ref() {
                    // ✅ `return` 문 처리
                    format!("return {};", inner_expr.write_string())
                } else {
                    String::from("return;")
                }
            }
            _ => todo!(),
        }
    }
}

impl WriteString for LabeledStatement {
    fn write_string(&self) -> String {
        let label = self.label.write_string();
        let stat = self.statement.write_string();
        format!("{} {}", label, stat)
    }
}

impl WriteString for Label {
    fn write_string(&self) -> String {
        match self {
            Self::Identifier(ident) => {
                let mut ident_str = ident.write_string();
                // println!("Label {}", ident_str.clone());
                let _ = ident_str.pop();
                ident_str
            }
            Self::Case(expr) => {
                format!("case ({})", expr.write_string())
            }
            Self::CaseRange(caserag) => {
                todo!()
            }
            Self::Default => String::from("default"),
        }
    }
}

impl WriteString for SwitchStatement {
    fn write_string(&self) -> String {
        let expr = self.expression.write_string();
        let stat = self.statement.write_string();
        // println!("{}{}", expr, stat);
        format!("switch ({}) {}", expr, stat)
    }
}

impl WriteString for WhileStatement {
    fn write_string(&self) -> String {
        let wh_expr = self.expression.write_string();
        let wh_st = self.statement.write_string();
        // println!("{} {}", wh_expr, wh_st);
        format!("while {} {}", wh_expr, wh_st)
    }
}

impl WriteString for DoWhileStatement {
    fn write_string(&self) -> String {
        let dowh_st = self.statement.write_string();
        let dowh_expr = self.expression.write_string();
        // println!("{} {}", dowh_st, dowh_expr);
        format!("do {} while {};", dowh_st, dowh_expr)
    }
}

impl WriteString for IfStatement {
    fn write_string(&self) -> String {
        let condition_str = self.condition.write_string(); // ✅ 조건 변환
        let then_str = self.then_statement.write_string(); // ✅ then 블록 변환

        let mut result = String::new();

        // ✅ `if` 블록 추가
        result.push_str(&format!("if ({}) ", condition_str));
        result.push_str(&format!("{}\n", then_str)); // 개행 추가

        // ✅ `else` 블록이 존재하는 경우 추가
        if let Some(else_stmt) = &self.else_statement {
            let else_str = else_stmt.write_string();
            result.push_str("else ");
            result.push_str(&format!("{}\n", else_str)); // 개행 추가
        }

        result
    }
}

impl WriteString for BlockItem {
    fn write_string(&self) -> String {
        match self {
            Self::Statement(stat) => stat.write_string(), // ✅ 문장(Statement) 변환
            Self::Declaration(decl) => decl.write_string(), // ✅ 선언(Declaration) 변환
            _ => todo!(),
        }
    }
}

impl WriteString for Expression {
    fn write_string(&self) -> String {
        match self {
            Self::Identifier(identifier) => {
                identifier.write_string()
                //.write_line(indent, write)?;
            }
            Self::Constant(cons) => {
                // cons.write_line(indent, write)?;
                cons.write_string()
            }
            Self::StringLiteral(strinliter) => {
                todo!()
            }
            Self::GenericSelection(genericselec) => {
                todo!()
            }
            Self::Member(memexpr) => memexpr.write_string(),
            Self::Call(callexpr) => {
                callexpr.write_string()
                // .write_line(indent, write)?;
            }
            Self::CompoundLiteral(compoundliter) => {
                todo!()
            }
            Self::SizeOfTy(sizety) => sizety.write_string(),
            Self::SizeOfVal(sizeval) => sizeval.write_string(),

            Self::AlignOf(alignof) => {
                alignof.write_string()
                // .write_line(indent, write)?;
            }
            Self::UnaryOperator(unaryopexp) => {
                unaryopexp.write_string()
                //.write_line(indent, write)?;
            }
            Self::Cast(castexpr) => castexpr.write_string(),
            Self::BinaryOperator(binaryopexp) => {
                // binaryopexp.write_line(indent, write)?;
                binaryopexp.write_string()
            }
            Self::Conditional(condexpr) => condexpr.write_string(),
            Self::Comma(comma) => {
                let mut result = String::from("(");
                let tmp = comma
                    .iter()
                    .map(|item| item.write_string())
                    .collect::<Vec<_>>()
                    .join(", ");
                result.push_str(&tmp);
                result.push(')');
                result
            }
            Self::VaArg(vaargexpr) => {
                todo!()
            }
            Self::Statement(stat) => stat.write_string(),
            _ => todo!(),
        }
    }
}

impl WriteString for MemberExpression {
    fn write_string(&self) -> String {
        // let operator_str = self.operator.write_string();
        let expr_str = self.expression.write_string();
        let ident = self.identifier.write_string();
        match self.operator.node {
            MemberOperator::Direct => {
                format!("{}.{}", expr_str, ident)
            }
            MemberOperator::Indirect => {
                format!("{}->{}", expr_str, ident)
            }
        }
    }
}

impl WriteString for SizeOfTy {
    fn write_string(&self) -> String {
        format!("sizeof({})", self.0.write_string())
    }
}

impl WriteString for SizeOfVal {
    fn write_string(&self) -> String {
        format!("sizeof({})", self.0.write_string())
    }
}

impl WriteString for CastExpression {
    fn write_string(&self) -> String {
        let ty = self.type_name.write_string();
        let expr = self.expression.write_string();
        format!("({}) {}", ty, expr)
    }
}

impl WriteString for ConditionalExpression {
    fn write_string(&self) -> String {
        let cond_str = self.condition.write_string();
        let then_str = self.then_expression.write_string();
        let else_str = self.else_expression.write_string();

        format!("({} ? {} : {})", cond_str, then_str, else_str)
    }
}

impl WriteString for CallExpression {
    fn write_string(&self) -> String {
        let callee_str = self.callee.write_string();
        let args_str = self
            .arguments
            .iter()
            .map(|arg| arg.write_string())
            .collect::<Vec<_>>() // Vec<String>
            .join(", "); // ✅ 인자를 `, `로 구분하여 연결

        format!("{}({})", callee_str, args_str)
    }
}

impl WriteString for UnaryOperatorExpression {
    fn write_string(&self) -> String {
        match self.operator.node {
            // ✅ 후위 연산자 (operand++)
            UnaryOperator::PostIncrement | UnaryOperator::PostDecrement => {
                format!(
                    "({}{})",
                    self.operand.write_string(),
                    self.operator.write_string()
                )
            }
            // ✅ 전위 연산자 (++operand, -operand, *operand)
            _ => format!(
                "{}({})",
                self.operator.write_string(),
                self.operand.write_string()
            ),
        }
    }
}

impl WriteString for UnaryOperator {
    fn write_string(&self) -> String {
        match self {
            UnaryOperator::PostIncrement => "++".to_string(),
            UnaryOperator::PostDecrement => "--".to_string(),
            UnaryOperator::PreIncrement => "++".to_string(),
            UnaryOperator::PreDecrement => "--".to_string(),
            UnaryOperator::Address => "&".to_string(),
            UnaryOperator::Indirection => "*".to_string(),
            UnaryOperator::Plus => "+".to_string(),
            UnaryOperator::Minus => "-".to_string(),
            UnaryOperator::Complement => "~".to_string(),
            UnaryOperator::Negate => "!".to_string(),
        }
    }
}

impl WriteString for ForStatement {
    fn write_string(&self) -> String {
        let init_str = self.initializer.node.write_string();
        let cond_str = self
            .condition
            .as_ref()
            .map_or(String::new(), |cond| cond.write_string());
        let step_str = self
            .step
            .as_ref()
            .map_or(String::new(), |step| step.write_string());
        let body_str = self.statement.write_string();

        // init_str 에 의미 ; 을 포함하고 있음

        match &self.initializer.node {
            ForInitializer::Declaration(_) => {
                format!("for ({} {}; {}) {}", init_str, cond_str, step_str, body_str)
            }
            ForInitializer::Expression(_) => format!(
                "for ({}; {}; {}) {}",
                init_str, cond_str, step_str, body_str
            ),
            _ => todo!(),
        }
    }
}

impl WriteString for ForInitializer {
    fn write_string(&self) -> String {
        match self {
            Self::Declaration(decl) => decl.write_string(), // ✅ 선언(예: `int i = 0`)
            Self::Expression(expr) => expr.write_string(),
            _ => todo!(),
        }
    }
}

impl WriteString for Constant {
    // fn write_line(&self, indent: usize, write: &mut dyn Write) -> Result<()> {
    fn write_string(&self) -> String {
        match self {
            Self::Integer(integer) => {
                // write!(write, "{}", integer.write_string())?;
                integer.write_string()
            }
            Self::Float(float) => float.write_string(),
            Self::Character(char) => {
                todo!()
            }
            _ => todo!(),
        }
    }
}

impl WriteString for Float {
    fn write_string(&self) -> String {
        let mut result = String::new();

        // Convert base if necessary (assuming FloatBase has a `to_string()` method)
        match self.base {
            FloatBase::Decimal => {} // Decimal base doesn't need prefix
            FloatBase::Hexadecimal => result.push_str("0x"), // Example case for hex floats
        }

        // Append the number
        result.push_str(&self.number);

        // Append suffix if needed
        match &self.suffix.format {
            FloatFormat::Float => result.push('f'),      // `4.5f`
            FloatFormat::Double => {}                    // No suffix for double
            FloatFormat::LongDouble => result.push('l'), // `4.5l`
            FloatFormat::TS18661Format(t) => result.push_str(&t.write_string()), // `df`, `dd`, `dl`, `fN`, `fNx`, etc.
        }

        if self.suffix.imaginary {
            result.push('i'); // Indicate imaginary number
        }

        result
    }
}

impl WriteString for TS18661FloatType {
    fn write_string(&self) -> String {
        todo!()
    }
}

impl WriteString for BinaryOperatorExpression {
    fn write_string(&self) -> String {
        match self.operator.node {
            BinaryOperator::Index => {
                format!(
                    "{}[{}]",
                    self.lhs.node.write_string(),
                    self.rhs.node.write_string()
                )
            }
            _ => {
                let lhs = self.lhs.node.write_string();
                let rhs = self.rhs.node.write_string();
                let operator = match self.operator.node {
                    BinaryOperator::Multiply => "*",
                    BinaryOperator::Divide => "/",
                    BinaryOperator::Modulo => "%",
                    BinaryOperator::Plus => "+",
                    BinaryOperator::Minus => "-",
                    BinaryOperator::ShiftLeft => "<<",
                    BinaryOperator::ShiftRight => ">>",
                    BinaryOperator::Less => "<",
                    BinaryOperator::Greater => ">",
                    BinaryOperator::LessOrEqual => "<=",
                    BinaryOperator::GreaterOrEqual => ">=",
                    BinaryOperator::Equals => "==",
                    BinaryOperator::NotEquals => "!=",
                    BinaryOperator::BitwiseAnd => "&",
                    BinaryOperator::BitwiseXor => "^",
                    BinaryOperator::BitwiseOr => "|",
                    BinaryOperator::LogicalAnd => "&&",
                    BinaryOperator::LogicalOr => "||",
                    BinaryOperator::Assign => "=",
                    BinaryOperator::AssignMultiply => "*=",
                    BinaryOperator::AssignDivide => "/=",
                    BinaryOperator::AssignModulo => "%=",
                    BinaryOperator::AssignPlus => "+=",
                    BinaryOperator::AssignMinus => "-=",
                    BinaryOperator::AssignShiftLeft => "<<=",
                    BinaryOperator::AssignShiftRight => ">>=",
                    BinaryOperator::AssignBitwiseAnd => "&=",
                    BinaryOperator::AssignBitwiseXor => "^=",
                    BinaryOperator::AssignBitwiseOr => "|=",
                    _ => unreachable!(),
                };

                format!("({} {} {})", lhs, operator, rhs)
            }
        }
    }
}

impl WriteString for AlignOf {
    fn write_string(&self) -> String {
        let tmp = &self.0;
        format!("_Alignof({})", self.0.write_string())
    }
}

impl WriteString for TypeName {
    fn write_string(&self) -> String {
        let specifiers_str = self
            .specifiers
            .iter()
            .map(|specifier| specifier.write_string()) // ✅ 각 specifier를 문자열로 변환
            .collect::<Vec<_>>()
            .join(" "); // ✅ specifiers를 공백으로 연결

        let declarator_str = if let Some(decl) = &self.declarator {
            format!(" {}", decl.write_string()) // ✅ declarator가 존재하면 붙이기
        } else {
            String::new()
        };

        format!("{}{}", specifiers_str, declarator_str) // ✅ 전체 타입 문자열 반환
    }
}

impl WriteString for SpecifierQualifier {
    fn write_string(&self) -> String {
        match self {
            Self::TypeSpecifier(typespec) => typespec.write_string(),
            Self::TypeQualifier(typequal) => typequal.write_string(),
            _ => todo!(),
        }
    }
}

impl WriteString for TypeQualifier {
    fn write_string(&self) -> String {
        match self {
            Self::Const => String::from("const"),
            _ => todo!(),
        }
    }
}

impl WriteString for Integer {
    fn write_string(&self) -> String {
        // self.base
        // self.number
        // self.suffix

        let mut result = String::new();
        // 🔹 1. Base 변환 (10진수, 8진수, 16진수, 2진수)
        match self.base {
            IntegerBase::Decimal => result.push_str(&self.number),
            IntegerBase::Octal => result.push_str(&format!("0{}", self.number)),
            IntegerBase::Hexadecimal => result.push_str(&format!("0x{}", self.number)),
            IntegerBase::Binary => result.push_str(&format!("0b{}", self.number)),
        }

        // 🔹 2. Suffix 변환 (`u`, `l`, `ll`, `i` 등)
        if self.suffix.unsigned {
            result.push('u');
        }
        match self.suffix.size {
            IntegerSize::Long => result.push('l'),
            IntegerSize::LongLong => result.push_str("ll"),
            _ => {}
        }
        if self.suffix.imaginary {
            result.push('i');
        }

        result
    }
}

impl WriteString for TypeSpecifier {
    fn write_string(&self) -> String {
        match self {
            Self::Void => String::from("void"),
            Self::Char => String::from("char"),
            Self::Short => String::from("short"),
            Self::Int => String::from("int"),

            Self::Long => String::from("long"),
            Self::Float => String::from("float"),
            Self::Double => String::from("double"),
            Self::Signed => String::from("signed"),
            Self::Unsigned => String::from("unsigned"),

            Self::Bool => String::from("bool"),
            Self::Complex => String::from("complex"),
            Self::Atomic(ty) => {
                todo!()
            }
            Self::Struct(structy) => structy.write_string(),
            Self::Enum(enty) => {
                todo!()
            }
            Self::TypedefName(ident) => ident.write_string(),
            Self::TypeOf(tyof) => {
                todo!()
            }
            _ => todo!(),
        }
    }
}

impl WriteString for StructType {
    fn write_string(&self) -> String {
        let mut result = String::new();
        let kind_str = match self.kind.node {
            StructKind::Struct => String::from("struct"),
            StructKind::Union => String::from("union"),
        };

        result.push_str(&kind_str);
        result.push(' ');
        if let Some(ident) = &self.identifier {
            let ident_str = ident.write_string();
            result.push_str(&ident_str);
        };

        if let Some(decls) = &self.declarations {
            result.push_str(" {\n");
            let decls_str = decls
                .iter()
                .map(|strucdecl| strucdecl.write_string())
                .collect::<Vec<_>>()
                .join("\n");
            result.push_str(&decls_str);
            result.push_str("\n}");
        }

        result
    }
}

impl WriteString for StructDeclaration {
    fn write_string(&self) -> String {
        let mut result = String::new();
        match self {
            Self::Field(strucfield) => {
                let specifiers_str = strucfield
                    .node
                    .specifiers
                    .iter()
                    .map(|specqaul| specqaul.write_string())
                    .collect::<Vec<_>>()
                    .join(" ");
                result.push_str(&specifiers_str);
                result.push(' ');
                let declarators_str = strucfield
                    .node
                    .declarators
                    .iter()
                    .map(|strucdecl| strucdecl.write_string())
                    .collect::<Vec<_>>()
                    .join(", ");
                result.push_str(&declarators_str);
                result.push(';');
                result
            }
            Self::StaticAssert(statass) => {
                todo!()
            }
        }
    }
}

impl WriteString for StructDeclarator {
    fn write_string(&self) -> String {
        let mut result = String::new();
        if let Some(decl) = &self.declarator {
            result.push_str(&decl.write_string());
        }
        if let Some(expr) = &self.bit_width {
            result.push_str(&expr.write_string());
        }
        // println!("StructDeclarator {}", result.clone());
        result
    }
}

impl WriteString for Initializer {
    fn write_string(&self) -> String {
        match self {
            Self::Expression(expr) => expr.write_string(),
            Self::List(list) => {
                let items_str = list
                    .iter()
                    .map(|item| item.node.initializer.write_string()) // ✅ 각 원소를 문자열 변환
                    .collect::<Vec<_>>()
                    .join(", "); // ✅ 콤마(,)로 구분

                format!("{{ {} }}", items_str) // ✅ `{}`로 감싸서 반환
            }
            _ => todo!(),
        }
    }
}
