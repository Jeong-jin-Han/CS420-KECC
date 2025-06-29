Good Game
Welcome, 20220730 (hjj22@kaist.ac.kr). Log out
Input
test_float2.ir (submitted at 2025-06-17 21:24:13)
Return code
1
Log
===== SETUP =====

===== CHECK =====
[2025-06-17 21:24:14,040: WARNING/ForkPoolWorker-128] Demoting to runner...
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        sd	ra,-16(s0)
        call	f1
        fmv.s	ft8,fa0
        fsd	ft8,-24(s0)
        call	f2
        fld	fa2,-24(s0)
        fcvt.d.s	fa2,fa2
        fadd.d	fa2,fa2,fa0
        fcvt.w.d	a0,fa2,rtz
        ld	ra,-16(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
.main_L1:
        li	a0,0
        ld	ra,-16(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
        .globl	f1
        .section	.text
        .type	f1, @function
f1:
        addi	sp,sp,-16
        sd	s0,8(sp)
        addi	s0,sp,16
        li	a5,1069547520
        fmv.w.x	ft5,a5
        fsw	ft5,-12(s0)
        li	a5,1075000115
        fmv.w.x	ft5,a5
        fneg.s	ft5,ft5
        fsw	ft5,-16(s0)
        flw	ft5,-12(s0)
        flw	ft6,-16(s0)
        fadd.s	fa0,ft5,ft6
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
.f1_L1:
        fmv.w.x	fa0,zero
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
        .globl	f2
        .section	.text
        .type	f2, @function
.f2_L1:
        fmv.d.x	fa0,zero
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
f2:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        li	a2,4614256447914709615
        fmv.d.x	fa4,a2
        fsd	fa4,-16(s0)
        li	a2,4607182418800017408
        fmv.d.x	fa4,a2
        fneg.d	fa4,fa4
        fsd	fa4,-24(s0)
        fld	fa4,-16(s0)
        fld	fa5,-24(s0)
        fmul.d	fa0,fa4,fa5
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
