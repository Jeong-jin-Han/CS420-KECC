        .globl	f1
        .section	.text
        .type	f1, @function
f1:
        addi	sp,sp,-64
        sd	s0,0(sp)
        addi	s0,sp,64
        addi	t0,sp,8
        sd	t0,16(sp)
        addi	t0,sp,12
        sd	t0,24(sp)
        ld	t0,16(sp)
        li	t2,1069547520
        fmv.w.x	ft1,t2
        fsw	ft1,0(t0)
        li	t2,1075000115
        fmv.w.x	ft0,t2
        fneg.s	ft0,ft0
        fsw	ft0,32(sp)
        ld	t0,24(sp)
        flw	ft1,32(sp)
        fsw	ft1,0(t0)
        ld	t0,16(sp)
        flw	ft0,0(t0)
        fsw	ft0,40(sp)
        ld	t0,24(sp)
        flw	ft0,0(t0)
        fsw	ft0,48(sp)
        flw	ft1,40(sp)
        flw	ft2,48(sp)
        fadd.s	ft0,ft1,ft2
        fsw	ft0,56(sp)
        flw	fa0,56(sp)
        fsw	fa0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,64
        ret
.f1_L1:
        fsw	fa0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,64
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-40
        sd	s0,0(sp)
        sd	ra,8(sp)
        sd	s1,16(sp)
        addi	s0,sp,40
        addi	s1,sp,32
        call	f1
        flw	ft1,24(sp)
        fcvt.w.s	t2,ft1,rtz
        sw	t2,32(sp)
        lw	a0,32(sp)
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,40
        ret
.main_L1:
        li	a0,0
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,40
        ret
