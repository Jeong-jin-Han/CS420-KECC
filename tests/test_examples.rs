use std::ffi::OsStr;
use std::path::Path;

use kecc::*;

/*
./scripts/make-submissions.sh
*/

fn test_dir<F>(path: &Path, ext: &OsStr, f: F)
where
    F: Fn(&Path),
{
    let dir = path.read_dir().expect("read_dir call failed");
    for entry in dir.filter_map(Result::ok) {
        let path = entry.path();

        if !(path.is_file() && path.extension() == Some(ext)) {
            println!("test_dir | path {:?}", path);
            continue;
        }

        f(&path);
    }
}

fn test_opt_between_dirs<O: Optimize<ir::TranslationUnit>>(from: &Path, to: &Path, opt: &mut O) {
    let from_dir = from.read_dir().expect("read_dir call failed");

    for entry in from_dir.filter_map(Result::ok) {
        let from_file_path = entry.path();

        if !(from_file_path.is_file() && from_file_path.extension() == Some(OsStr::new("ir"))) {
            continue;
        }

        let file_name = from_file_path
            .strip_prefix(from)
            .expect("`from_file_path` must have file name");
        let to_file_path = to.join(file_name);

        assert!(from_file_path.is_file());
        assert!(to_file_path.exists());
        assert!(to_file_path.is_file());

        println!("[testing {from_file_path:?} to {to_file_path:?}]");
        test_opt(&from_file_path, &to_file_path, opt);
    }
}

const HELLO_MAIN: &str = "hello_main";

const IRGEN_SMALL_TEST_IGNORE_LIST: [&str; 12] = [
    "examples/c/array.c",
    "examples/c/array2.c",
    "examples/c/array3.c",
    "examples/c/array4.c",
    "examples/c/array5.c",
    "examples/c/float.c",
    "examples/c/sizeof2.c",
    "examples/c/struct.c",
    "examples/c/struct2.c",
    "examples/c/struct3.c",
    "examples/c/struct4.c",
    "examples/c/temp2.c",
];

const ASMGEN_TEST_DIR_LIST: [&str; 5] = [
    "examples/ir0",
    "examples/ir1",
    "examples/ir2",
    "examples/ir3",
    "examples/ir4",
];

const ASMGEN_SMALL_TEST_IGNORE_LIST: [&str; 12] = [
    "array.ir",
    "array2.ir",
    "array3.ir",
    "array4.ir",
    "array5.ir",
    "float.ir",
    "sizeof2.ir",
    "struct.ir",
    "struct2.ir",
    "struct3.ir",
    "struct4.ir",
    "temp2.ir",
];

#[test]
fn test_examples_write_c() {
    println!("[testing write_c for \"examples/c/{HELLO_MAIN}.c\"]");
    test_write_c(Path::new(&format!("examples/c/{HELLO_MAIN}.c")));

    println!("[testing write_c for \"examples/HW1_fuzz_c/me_test_polished.c\"]");
    test_write_c(Path::new(&format!(
        "examples/HW1_fuzz_c/me_test_polished.c"
    )));
    // println!("[testing write_c for \"examples/me_fuzz_c/test_polished.c\"]");
    // test_write_c(Path::new(&format!("examples/me_fuzz_c/test_polished.c")));

    test_dir(Path::new("examples/c"), OsStr::new("c"), |path| {
        if !path.to_str().unwrap().contains(HELLO_MAIN) {
            println!("[testing write_c for {path:?}]");
            test_write_c(path)
        }
    });
}

#[test]
fn test_examples_irgen_small() {
    // println!("[testing irgen for \"examples/c/{HELLO_MAIN}.c\"]");
    // test_irgen(Path::new(&format!("examples/c/{HELLO_MAIN}.c")));

    // let test_files = vec![
    //     "hello_main.c",
    //     "alignof.c",
    //     "array.c",
    //     "array2.c",
    //     "array3.c",
    //     "array4.c",
    //     "array5.c",
    //     "bar.c",
    //     "bitwise.c",
    //     "cmp.c",
    //     "comma.c",
    //     "complement.c",
    //     "cond.c",
    //     "complete_cond.c", // success
    //     "cond_and_loop.c", // success
    //     "cond.c",
    //     "fib2.c",
    //     "fib3.c", // success
    //     "fib4.c", // success
    //     "fib5.c", // success
    //     "fibonacci.c",
    //     "float.c", // success
    //     "float2.c",
    //     "foo.c",
    //     "foo2.c",
    //     "foo3.c",
    //     "foo4.c",
    //     "for_continue_break.c",
    //     "gcd.c",             // success
    //     "integer_literal.c", // success
    //     "integer_literal2.c",
    //     "logical_op.c",
    //     "lost_copy.c",
    //     "minus_constant.c",
    //     "negate.c",
    //     "pointer.c",
    //     "return_void.c",
    //     "shift.c",
    //     "simple_cond.c",
    //     "simple_for.c",
    //     "simple_if.c",
    //     "simple.c",
    //     "sizeof.c",
    //     "sizeof2.c",
    //     "sizeof3.c", // success
    //     "sizeof4.c",
    //     "struct.c",
    //     "struct2.c",
    //     "struct3.c",
    //     "struct4.c",
    //     "swap.c",
    //     "switch-in-loop.c", // success
    //     "temp.c",
    //     "temp2.c",
    //     "test.c",
    //     "typecast.c",
    //     "typedef.c", // success
    //     "unary.c",   // success
    //     "while_continue_break.c",
    // ];

    // let test_files = ["complete_cond.c", "bitwise.c"];

    // for file in test_files {
    //     println!("[testing irgen for \"examples_new/c/{file}\"]");
    //     test_irgen(Path::new(&format!("examples_new/c/{file}")));
    // }

    let test_files = vec![
        // "logical.c",
        // "struct_0.c", // pass
        // "test_polished_me.c", //pass
        // "test_polished_me2.c", //pass
        // "test_polished_me3.c",
        // "test_polished_me4.c",
        // "test_polished_me5.c", // pass
        // "test.c",
        // "test_polished_me6.c", // fail
        // "test_polished_me7.c", // fail
        "test_polished_me8.c", // fail
                               // "test2.c",
    ];

    for file in test_files {
        println!("[testing irgen for \"examples/HW2_fuzz_c/{file}\"]");
        test_irgen(Path::new(&format!("examples/HW2_fuzz_c/{file}")));
    }

    // test_dir(Path::new("examples/c"), OsStr::new("c"), |path| {
    //     let path_str = &path.to_str().expect("`path` must be transformed to `&str`");

    //     if !IRGEN_SMALL_TEST_IGNORE_LIST.contains(path_str) && !path_str.contains(HELLO_MAIN) {
    //         println!("[testing irgen for {path:?}]");
    //         test_irgen(path);
    //     }
    // });

    // test_dir(Path::new("examples/c"), OsStr::new("c"), |path| {
    //     println!("[testing irgen for {path:?}]");
    //     test_irgen(path);
    // });
}

#[test]
fn test_examples_irgen_large() {
    test_dir(Path::new("examples/c"), OsStr::new("c"), |path| {
        let path_str = &path.to_str().expect("`path` must be transformed to `&str`");
        if IRGEN_SMALL_TEST_IGNORE_LIST.contains(path_str) && !path_str.contains(HELLO_MAIN) {
            println!("[testing irgen for {path:?}]");
            test_irgen(path);
        }
    });
}

#[test]
fn test_examples_irparse() {
    test_dir(Path::new("examples/c"), OsStr::new("c"), test_irparse);
}

#[test]
fn test_examples_simplify_cfg() {
    test_opt(
        &Path::new("examples/simplify_cfg/const_prop.input.ir"),
        &Path::new("examples/simplify_cfg/const_prop.output.ir"),
        &mut FunctionPass::<SimplifyCfgConstProp>::default(),
    ); //pass

    test_opt(
        &Path::new("examples/simplify_cfg/reach.input.ir"),
        &Path::new("examples/simplify_cfg/reach.output.ir"),
        &mut FunctionPass::<SimplifyCfgReach>::default(),
    ); //pass

    test_opt(
        &Path::new("examples/simplify_cfg/merge.input.ir"),
        &Path::new("examples/simplify_cfg/merge.output.ir"),
        &mut FunctionPass::<SimplifyCfgMerge>::default(),
    ); //pass

    test_opt(
        &Path::new("examples/simplify_cfg/empty.input.ir"),
        &Path::new("examples/simplify_cfg/empty.output.ir"),
        &mut FunctionPass::<SimplifyCfgEmpty>::default(),
    ); //pass

    test_opt_between_dirs(
        Path::new("examples/ir0"),
        Path::new("examples/ir1"),
        &mut SimplifyCfg::default(),
    );
}

#[test]
fn test_examples_mem2reg() {
    // test_opt(
    //     &Path::new("examples/mem2reg/test.input.ir"),
    //     &Path::new("examples/mem2reg/test.output.ir"),
    //     &mut Mem2reg::default(),
    // );

    // test_opt(
    //     &Path::new("examples/mem2reg/mem2reg.input.ir"),
    //     &Path::new("examples/mem2reg/mem2reg.output.ir"),
    //     &mut Mem2reg::default(),
    // );

    // let test_files = vec![
    //     "alignof.ir",
    //     "array.ir",
    //     "array2.ir",
    //     "array3.ir",
    //     "array4.ir",
    //     "array5.ir",
    //     "bar.ir",
    //     "switch-in-loop.ir",
    //     "lost_copy.ir",
    //     "temp2.ir",
    //     "cond_and_loop.ir",
    // ];
    // for file in test_files {
    //     test_opt(
    //         &Path::new(&format!("examples/ir1/{file}")),
    //         &Path::new(&format!("examples/ir2/{file}")),
    //         &mut Mem2reg::default(),
    //     );
    // }

    test_opt_between_dirs(
        Path::new("examples/ir1"),
        Path::new("examples/ir2"),
        &mut Mem2reg::default(),
    );
}

#[test]
fn test_examples_deadcode() {
    // test_opt(
    //     &Path::new("examples/deadcode/deadcode.input.ir"),
    //     &Path::new("examples/deadcode/deadcode.output.ir"),
    //     &mut Deadcode::default(),
    // );

    // let test_files = vec![
    //     // "switch-in-loop.ir",
    //     // "lost_copy.ir",
    //     "temp2.ir",
    //     // "foo2.ir",
    //     // "pointer.ir", // fail
    // ];

    // let test_files = vec![
    //     "hello_main.ir",
    //     "alignof.ir",
    //     "array.ir",
    //     "array2.ir",
    //     "array3.ir",
    //     "array4.ir",
    //     "array5.ir", // fail
    //     "bar.ir",
    //     "bitwise.ir", // fail
    //     "cmp.ir",     // fail
    //     "comma.ir",
    //     "complement.ir", // fail
    //     "cond.ir",
    //     "cond_and_loop.ir",
    //     "cond.ir",
    //     "fib2.ir",
    //     "fib3.ir",
    //     "fib4.ir",
    //     "fib5.ir",
    //     "fibonacci.ir",
    //     "float.ir",
    //     "float2.ir",
    //     "foo.ir", // fail
    //     "foo2.ir",
    //     "foo3.ir",
    //     "foo4.ir",
    //     "for_continue_break.ir",
    //     "gcd.ir",
    //     "integer_literal.ir",
    //     "integer_literal2.ir",
    //     "logical_op.ir",
    //     "lost_copy.ir",
    //     "minus_constant.ir",
    //     "negate.ir",
    //     // "pointer.ir", // fail
    //     "return_void.ir",
    //     "shift.ir",
    //     "simple_cond.ir",
    //     "simple_for.ir",
    //     "simple_if.ir",
    //     "simple.ir",
    //     "sizeof.ir",
    //     "sizeof2.ir",
    //     "sizeof3.ir",
    //     "sizeof4.ir",
    //     "struct.ir",
    //     "struct2.ir",
    //     "struct3.ir", // fail
    //     "struct4.ir",
    //     "swap.ir",
    //     "switch-in-loop.ir",
    //     "temp.ir",
    //     "temp2.ir",
    //     "test.ir",
    //     "typecast.ir",
    //     "typedef.ir",
    //     "unary.ir",
    //     "while_continue_break.ir",
    // ];

    // for file in test_files {
    //     println!("file: {:?}", file);
    //     test_opt(
    //         &Path::new(&format!("examples/ir2/{file}")),
    //         &Path::new(&format!("examples/ir3/{file}")),
    //         &mut Deadcode::default(),
    //     );
    // }

    test_opt_between_dirs(
        Path::new("examples/ir2"),
        Path::new("examples/ir3"),
        &mut Deadcode::default(),
    );
}

#[test]
fn test_examples_gvn() {
    // test_opt(
    //     &Path::new("examples/gvn/me/ex6.input.ir"),
    //     &Path::new("examples/gvn/me/ex1.output.ir"),
    //     &mut Gvn::default(),
    // );

    // test_opt(
    //     &Path::new("examples/gvn/gvn.input.ir"),
    //     &Path::new("examples/gvn/gvn.output.ir"),
    //     &mut Gvn::default(),
    // );

    // let test_files = vec![
    //     "hello_main.ir",
    //     "alignof.ir",
    //     "array.ir",
    //     "array2.ir",
    //     "array3.ir",
    //     "array4.ir",
    //     "array5.ir", // fail
    //     "bar.ir",
    //     "bitwise.ir", // fail
    //     "cmp.ir",     // fail
    //     "comma.ir",
    //     // "complement.ir", // fail
    //     "cond.ir",
    //     "cond_and_loop.ir",
    //     "cond.ir",
    //     "fib2.ir",
    //     "fib3.ir",
    //     "fib4.ir",
    //     "fib5.ir",
    //     "fibonacci.ir",
    //     "float.ir",
    //     "float2.ir",
    //     "foo.ir", // fail
    //     "foo2.ir",
    //     "foo3.ir",
    //     "foo4.ir",
    //     "for_continue_break.ir",
    //     "gcd.ir",
    //     "integer_literal.ir",
    //     "integer_literal2.ir",
    //     "logical_op.ir",
    //     "lost_copy.ir",
    //     "minus_constant.ir",
    //     "negate.ir",
    //     "pointer.ir", // fail
    //     "return_void.ir",
    //     "shift.ir",
    //     "simple_cond.ir",
    //     "simple_for.ir",
    //     "simple_if.ir",
    //     "simple.ir",
    //     "sizeof.ir",
    //     "sizeof2.ir",
    //     "sizeof3.ir",
    //     "sizeof4.ir",
    //     "struct.ir",
    //     "struct2.ir",
    //     "struct3.ir", // fail
    //     "struct4.ir",
    //     "swap.ir",
    //     "switch-in-loop.ir",
    //     "temp.ir",
    //     "temp2.ir",
    //     "test.ir",
    //     "typecast.ir",
    //     "typedef.ir",
    //     "unary.ir",
    //     "while_continue_break.ir",
    // ];

    // let test_files = vec![
    //     // "bitwise.ir",    // success
    //     // "cmp.ir",        // success
    //     // "complement.ir", // success
    //     // "foo.ir",        // success
    //     // "struct3.ir",    // success
    //     // "pointer.ir",    // success
    //     "complete_cond.ir", // fail
    // ];

    // for file in test_files {
    //     println!("file: {file}");
    //     test_opt(
    //         &Path::new(&format!("examples/ir3/{file}")),
    //         &Path::new(&format!("examples/ir4/{file}")),
    //         &mut Gvn::default(),
    //     );
    // }

    test_opt_between_dirs(
        Path::new("examples/ir3"),
        Path::new("examples/ir4"),
        &mut Gvn::default(),
    );
}

#[test]
fn test_examples_optimize() {
    test_opt_between_dirs(
        Path::new("examples/ir0"),
        Path::new("examples/opt"),
        &mut O1::default(),
    )
}

#[test]
fn test_examples_asmgen_small() {
    // let test_files = vec![
    //     "test.ir", // pass
    //               // "test6.ir", // {"add": 3, "make_point": 11, "main": 12} ->  {"make_point": 9, "main": 12, "add": 3}
    //               // "test9.ir",
    //               // "struct3_me.ir",
    //               // "test3.ir", //  {"make_point": 4, "main": 5}
    //               // "test10.ir", //  {"bar": 3, "square": 2, "main": 3, "foo": 3}
    //               // "test8.ir", // {"make_point": 5, "main": 6} ->  {"make_point": 5, "main": 7} ??
    //               // "test11.ir", //  {"make_point": 4, "main": 6}
    //               // "test4.ir",
    // ];

    // for file in test_files {
    //     test_asmgen(Path::new(&format!("examples/HW7_debug/asmgen/{file}")));
    // }

    /*
    pointer.ir의 경우
    phinode에서 ptr로 받아오는 경우가 존재함
    arg도 ptr로 받아오는 경우가 존재함
    이 부분을 수정해야 한다.
    */

    let test_files = vec![
        "ir0/bar.ir",                  // pass
        "ir0/bitwise.ir",              // pass
        "ir0/cmp.ir",                  // fail
        "ir0/comma.ir",                // pass
        "ir0/complement.ir",           // pass
        "ir0/complete_cond.ir",        // fail
        "ir0/cond_and_loop.ir",        // fail
        "ir0/cond.ir",                 // pass
        "ir0/fib2.ir",                 // pass -> fail
        "ir0/fib3.ir",                 // pass
        "ir0/fib4.ir",                 // pass
        "ir0/fib5.ir",                 // pass
        "ir0/fibonacci.ir",            // pass
        "ir0/float2.ir",               // fail
        "ir0/foo.ir",                  // pass
        "ir0/foo2.ir",                 // pass
        "ir0/foo3.ir",                 // pass
        "ir0/foo4.ir",                 // fail
        "ir0/for_continue_break.ir",   // pass
        "ir0/gcd.ir",                  // fail
        "ir0/integer_literal.ir",      // pass
        "ir0/integer_literal2.ir",     // pass
        "ir0/logical_op.ir",           // pass
        "ir0/lost_copy.ir",            // pass
        "ir0/minus_constant.ir",       // fail  (simple?)
        "ir0/negate.ir",               // pass -> fail
        "ir0/pointer.ir",              // fail
        "ir0/return_void.ir",          // fail
        "ir0/shift.ir",                // fail
        "ir0/simple_cond.ir",          // pass
        "ir0/simple_for.ir",           // pass
        "ir0/simple_if.ir",            // pass
        "ir0/simple.ir",               // pass
        "ir0/sizeof.ir",               // pass
        "ir0/sizeof3.ir",              // pass
        "ir0/sizeof4.ir",              // pass
        "ir0/swap.ir",                 // fail
        "ir0/switch-in-loop.ir",       // fail(not yet)
        "ir0/switch.ir",               // fail(not yet)
        "ir0/temp.ir",                 // pass
        "ir0/test.ir",                 // pass
        "ir0/typecast.ir",             // fail
        "ir0/typedef.ir",              // pass
        "ir0/unary.ir",                // passs
        "ir0/while_continue_break.ir", // pass
    ];

    // /* fail 만 모은 것  */
    // let test_files = vec![
    //     "ir0/negate.ir", // pass
    //     "ir0/cmp.ir",    // pass
    //     "ir0/fib2.ir",   // pass
    //     // "ir0/complete_cond.ir",  // fail
    //     "ir0/cond_and_loop.ir", // fail -> pass
    //     // "ir0/float2.ir",          // fail, float
    //     "ir0/foo4.ir", // fail, jump -> pass -> fail??
    //     "ir0/gcd.ir",  // fail -> pass
    //     // "ir0/minus_constant.ir", // fail, float
    //     // "ir0/pointer.ir",        // fail, phinode, pointer
    //     "ir0/return_void.ir", // pass
    //     "ir0/shift.ir",       // fail -> pass
    //     // "ir0/swap.ir",           // fail
    //     "ir0/switch-in-loop.ir", // fail, blockexit -> pass
    //     "ir0/switch.ir",         // fail, blockexit -> pass
    //     "ir0/typecast.ir",       // fail -> pass
    //     "ir0/alignof.ir",        // pass
    // ];

    // let test_files = vec!["ir0/foo4.ir"];

    // let test_files = vec![
    //     // "ir0/complete_cond.ir", // fail // addi only 12bit -> pass
    //     // "HW7_debug_ver2/test_complete_cond.ir", // pass
    //     "ir0/float2.ir", // fail, float
    //                      // "HW7_debug_ver2/test_float2_2.ir",
    //                      // "HW7_debug_ver2/test_float2.ir",
    //                      // "ir0/minus_constant.ir", // fail, float -> pass
    //                      // "ir0/pointer.ir", // fail, phinode, pointer -> pass
    //                      // "ir0/swap.ir", // fail, mul 구현 -> pass
    // ];

    let test_files = vec![
        "ir1/bar.ir",                  // pass
        "ir1/bitwise.ir",              // pass
        "ir1/cmp.ir",                  // fail
        "ir1/comma.ir",                // pass
        "ir1/complement.ir",           // pass
        "ir1/complete_cond.ir",        // fail
        "ir1/cond_and_loop.ir",        // fail
        "ir1/cond.ir",                 // pass
        "ir1/fib2.ir",                 // pass -> fail
        "ir1/fib3.ir",                 // pass
        "ir1/fib4.ir",                 // pass
        "ir1/fib5.ir",                 // pass
        "ir1/fibonacci.ir",            // pass
        "ir1/float2.ir",               // fail
        "ir1/foo.ir",                  // pass
        "ir1/foo2.ir",                 // pass
        "ir1/foo3.ir",                 // pass
        "ir1/foo4.ir",                 // fail
        "ir1/for_continue_break.ir",   // pass
        "ir1/gcd.ir",                  // fail
        "ir1/integer_literal.ir",      // pass
        "ir1/integer_literal2.ir",     // pass
        "ir1/logical_op.ir",           // pass
        "ir1/lost_copy.ir",            // pass
        "ir1/minus_constant.ir",       // fail  (simple?)
        "ir1/negate.ir",               // pass -> fail
        "ir1/pointer.ir",              // fail
        "ir1/return_void.ir",          // fail
        "ir1/shift.ir",                // fail
        "ir1/simple_cond.ir",          // pass
        "ir1/simple_for.ir",           // pass
        "ir1/simple_if.ir",            // pass
        "ir1/simple.ir",               // pass
        "ir1/sizeof.ir",               // pass
        "ir1/sizeof3.ir",              // pass
        "ir1/sizeof4.ir",              // pass
        "ir1/swap.ir",                 // fail
        "ir1/switch-in-loop.ir",       // fail(not yet)
        "ir1/switch.ir",               // fail(not yet)
        "ir1/temp.ir",                 // pass
        "ir1/test.ir",                 // pass
        "ir1/typecast.ir",             // fail
        "ir1/typedef.ir",              // pass
        "ir1/unary.ir",                // passs
        "ir1/while_continue_break.ir", // pass
    ];

    // let test_files = vec![
    //     "ir2/bar.ir",                  // pass
    //     "ir2/bitwise.ir",              // pass
    //     "ir2/cmp.ir",                  // fail -> pass
    //     "ir2/comma.ir",                // pass
    //     "ir2/complement.ir",           // pass
    //     "ir2/complete_cond.ir",        // fail
    //     "ir2/cond_and_loop.ir",        // fail
    //     "ir2/cond.ir",                 // pass
    //     "ir2/fib2.ir",                 // pass -> fail
    //     "ir2/fib3.ir",                 // pass
    //     "ir2/fib4.ir",                 // pass
    //     "ir2/fib5.ir",                 // pass
    //     "ir2/fibonacci.ir",            // pass
    //     "ir2/float2.ir",               // fail
    //     "ir2/foo.ir",                  // pass
    //     "ir2/foo2.ir",                 // pass
    //     "ir2/foo3.ir",                 // pass
    //     "ir2/foo4.ir",                 // fail
    //     "ir2/for_continue_break.ir",   // pass
    //     "ir2/gcd.ir",                  // fail
    //     "ir2/integer_literal.ir",      // pass
    //     "ir2/integer_literal2.ir",     // pass
    //     "ir2/logical_op.ir",           // pass
    //     "ir2/lost_copy.ir",            // pass
    //     "ir2/minus_constant.ir",       // fail  (simple?)
    //     "ir2/negate.ir",               // pass -> fail
    //     "ir2/pointer.ir",              // fail
    //     "ir2/return_void.ir",          // fail
    //     "ir2/shift.ir",                // fail
    //     "ir2/simple_cond.ir",          // pass
    //     "ir2/simple_for.ir",           // pass
    //     "ir2/simple_if.ir",            // pass
    //     "ir2/simple.ir",               // pass
    //     "ir2/sizeof.ir",               // pass
    //     "ir2/sizeof3.ir",              // pass
    //     "ir2/sizeof4.ir",              // pass
    //     "ir2/swap.ir",                 // fail
    //     "ir2/switch-in-loop.ir",       // fail -> pass
    //     "ir2/switch.ir",               // fail(not yet)
    //     "ir2/temp.ir",                 // pass
    //     "ir2/test.ir",                 // pass
    //     "ir2/typecast.ir",             // fail
    //     "ir2/typedef.ir",              // pass
    //     "ir2/unary.ir",                // passs
    //     "ir2/while_continue_break.ir", // fail
    // ];

    // let test_files = vec![
    //     "ir3/bar.ir",                  // pass
    //     "ir3/bitwise.ir",              // pass
    //     "ir3/cmp.ir",                  // fail -> pass
    //     "ir3/comma.ir",                // pass
    //     "ir3/complement.ir",           // pass
    //     "ir3/complete_cond.ir",        // fail
    //     "ir3/cond_and_loop.ir",        // fail
    //     "ir3/cond.ir",                 // pass
    //     "ir3/fib2.ir",                 // pass -> fail
    //     "ir3/fib3.ir",                 // pass
    //     "ir3/fib4.ir",                 // pass
    //     "ir3/fib5.ir",                 // pass
    //     "ir3/fibonacci.ir",            // pass
    //     "ir3/float2.ir",               // fail
    //     "ir3/foo.ir",                  // pass
    //     "ir3/foo2.ir",                 // pass
    //     "ir3/foo3.ir",                 // pass
    //     "ir3/foo4.ir",                 // fail
    //     "ir3/for_continue_break.ir",   // pass
    //     "ir3/gcd.ir",                  // fail
    //     "ir3/integer_literal.ir",      // pass
    //     "ir3/integer_literal2.ir",     // pass
    //     "ir3/logical_op.ir",           // pass
    //     "ir3/lost_copy.ir",            // pass
    //     "ir3/minus_constant.ir",       // fail  (simple?)
    //     "ir3/negate.ir",               // pass -> fail
    //     "ir3/pointer.ir",              // fail
    //     "ir3/return_void.ir",          // fail
    //     "ir3/shift.ir",                // fail
    //     "ir3/simple_cond.ir",          // pass
    //     "ir3/simple_for.ir",           // pass
    //     "ir3/simple_if.ir",            // pass
    //     "ir3/simple.ir",               // pass
    //     "ir3/sizeof.ir",               // pass
    //     "ir3/sizeof3.ir",              // pass
    //     "ir3/sizeof4.ir",              // pass
    //     "ir3/swap.ir",                 // fail
    //     "ir3/switch-in-loop.ir",       // fail -> pass
    //     "ir3/switch.ir",               // fail(not yet)
    //     "ir3/temp.ir",                 // pass
    //     "ir3/test.ir",                 // pass
    //     "ir3/typecast.ir",             // fail
    //     "ir3/typedef.ir",              // pass
    //     "ir3/unary.ir",                // passs
    //     "ir3/while_continue_break.ir", // fail
    // ];

    // let test_files = vec![
    //     // "ir0/array.ir", // pass
    //     // "HW7_debug_ver3/test_array.ir", // pass
    //     // "ir0/array2.ir", // pass
    //     // "ir0/array3.ir", // pass
    //     // "ir0/array4.ir", // pass
    //     // "ir0/array5.ir", // pass
    //     // "ir0/float.ir", // pass
    //     // "ir0/sizeof2.ir", // pass
    //     // "ir0/struct.ir",  // pass
    //     // "ir0/struct2.ir", // pass
    //     // "ir0/struct3.ir", // fail
    //     "HW7_debug_ver3/test_struct3.ir",
    //     // "ir0/struct4.ir", // fail
    //     // "ir0/temp2.ir", // struct // pass
    // ];

    // let test_files = vec!["ir0/foo4.ir"];

    // for file in test_files {
    // println!("file: {file}");
    // test_asmgen(Path::new(&format!("examples/{file}")));
    // }

    // // hello_main 만 하는 것
    // for dir in ASMGEN_TEST_DIR_LIST.iter() {
    //     test_dir(Path::new(dir), OsStr::new("ir"), |path| {
    //         if path.to_str().unwrap().contains(HELLO_MAIN) {
    //             println!("[testing asmgen for {path:?}]");
    //             test_asmgen(path);
    //         }
    //     });
    // }

    for dir in ASMGEN_TEST_DIR_LIST.iter() {
        test_dir(Path::new(dir), OsStr::new("ir"), |path| {
            let file_name = &path
                .file_name()
                .expect("`path` must have a file name")
                .to_str()
                .expect("must be transformable to `&str`");
            if !ASMGEN_SMALL_TEST_IGNORE_LIST.contains(file_name) && !file_name.contains(HELLO_MAIN)
            {
                println!("[testing asmgen for {path:?}]");
                test_asmgen(path);
            }
        });
    }
}

#[test]
fn test_examples_asmgen_large() {
    for dir in ASMGEN_TEST_DIR_LIST.iter() {
        test_dir(Path::new(dir), OsStr::new("ir"), |path| {
            let file_name = &path
                .file_name()
                .expect("`path` must have a file name")
                .to_str()
                .expect("must be transformable to `&str`");
            if ASMGEN_SMALL_TEST_IGNORE_LIST.contains(file_name) && !file_name.contains(HELLO_MAIN)
            {
                println!("[testing asmgen for {path:?}]");
                test_asmgen(path);
            }
        });
    }
}

#[test]
fn test_examples_end_to_end() {
    test_dir(Path::new("examples/c"), OsStr::new("c"), |path| {
        println!("[testing end-to-end for {path:?}]");
        test_end_to_end(path);
    });
}
