model solution 과 비교하면서 직접 테스트 해보기 

지금 현재로서는 kecc-reference binary파일이 없기 때문에 이렇게 해야함

kecc interp (expected): 1, qemu: 1
[testing asmgen for "examples/ir0/switch-in-loop.ir"]
IR file successfully saved at: /home/hanjeongjin/Workspace_ubuntu/cs420_ubuntu/kecc-private/examples/HW7_debug/my.s
kecc interp (expected): 9, qemu: 1

thread 'test_examples_asmgen_small' panicked at src/tests.rs:490:5:
assertion `left == right` failed
  left: 9
 right: 1