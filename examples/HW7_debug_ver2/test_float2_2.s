Good Game
Welcome, 20220730 (hjj22@kaist.ac.kr). Log out
Input
test_float2_2.ir (submitted at 2025-06-17 22:47:54)
Return code
1
Log
===== SETUP =====

===== CHECK =====
[2025-06-17 22:47:54,592: WARNING/ForkPoolWorker-128] Demoting to runner...
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-16
        sd	s0,8(sp)
        addi	s0,sp,16
        sd	ra,-16(s0)
        call	f1
        fcvt.w.s	a0,fa0,rtz
        ld	ra,-16(s0)
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
.main_L1:
        li	a0,0
        ld	ra,-16(s0)
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
        .globl	f1
        .section	.text
        .type	f1, @function
.f1_L1:
        fmv.w.x	fa0,zero
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
f1:
        addi	sp,sp,-16
        sd	s0,8(sp)
        addi	s0,sp,16
        li	t6,1069547520
        fmv.w.x	ft4,t6
        fsw	ft4,-12(s0)
        li	t6,1075000115
        fmv.w.x	ft4,t6
        fneg.s	ft4,ft4
        fsw	ft4,-16(s0)
        flw	fa4,-12(s0)
        flw	ft4,-16(s0)
        fadd.s	fa0,fa4,ft4
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
