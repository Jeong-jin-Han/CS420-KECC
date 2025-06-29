Good Game
Welcome, 20220730 (hjj22@kaist.ac.kr). Log out
Input
foo4.ir (submitted at 2025-06-17 06:32:49)
Return code
1
Log
===== SETUP =====

===== CHECK =====
[2025-06-17 06:32:49,314: WARNING/ForkPoolWorker-128] Demoting to runner...
        .globl	foo2
        .section	.text
        .type	foo2, @function
foo2:
        la	a0,foo
        ret
.foo2_L1:
        li	a0,0
        ret
        .globl	foo
        .section	.text
        .type	foo, @function
.foo_L1:
        li	a0,0
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
foo:
        addi	sp,sp,-20
        sd	s0,12(sp)
        addi	s0,sp,20
        sw	a0,-12(s0)
        sw	a1,-16(s0)
        sw	a2,-20(s0)
        lw	t0,-12(s0)
        lw	t5,-16(s0)
        addw	t0,t0,t5
        lw	t5,-20(s0)
        addw	a0,t0,t5
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        sd	ra,-16(s0)
        sd	s5,-24(s0)
        call	foo3
        mv	s5,a0
        jalr	s5
        mv	s5,a0
        li	a0,2
        li	a1,2
        li	a2,2
        jalr	s5
        li	s5,6
        xor	s5,a0,s5
        seqz	s5,s5
        mv	a0,s5
        ld	s5,-24(s0)
        ld	ra,-16(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
.main_L1:
        li	a0,0
        ld	s5,-24(s0)
        ld	ra,-16(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
        .globl	foo3
        .section	.text
        .type	foo3, @function
foo3:
        la	a0,foo2
        ret
.foo3_L1:
        li	a0,0
        ret
