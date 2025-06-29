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
        .globl	f2
        .section	.text
        .type	f2, @function
f2:
        addi	sp,sp,-72
        sd	s0,0(sp)
        addi	s0,sp,72
        addi	t0,sp,8
        sd	t0,24(sp)
        addi	t0,sp,16
        sd	t0,32(sp)
        ld	t0,24(sp)
        li	t2,4614256447914709615
        fmv.d.x	ft1,t2
        fsd	ft1,0(t0)
        li	t2,4607182418800017408
        fmv.d.x	ft0,t2
        fneg.d	ft0,ft0
        fsd	ft0,40(sp)
        ld	t0,32(sp)
        fld	ft1,40(sp)
        fsd	ft1,0(t0)
        ld	t0,24(sp)
        fld	ft0,0(t0)
        fsd	ft0,48(sp)
        ld	t0,32(sp)
        fld	ft0,0(t0)
        fsd	ft0,56(sp)
        fld	ft1,48(sp)
        fld	ft2,56(sp)
        fmul.d	ft0,ft1,ft2
        fsd	ft0,64(sp)
        fld	fa0,64(sp)
        fsd	fa0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,72
        ret
.f2_L1:
        fsd	fa0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,72
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-64
        sd	s0,0(sp)
        sd	ra,8(sp)
        sd	s1,16(sp)
        addi	s0,sp,64
        addi	s1,sp,32
        call	f1
        addi	s1,sp,40
        call	f2
        flw	ft1,24(sp)
        fcvt.d.s	ft2,ft1
        fsd	ft2,40(sp)
        fld	ft1,40(sp)
        fld	ft2,32(sp)
        fadd.d	ft0,ft1,ft2
        fsd	ft0,48(sp)
        fld	ft1,48(sp)
        fcvt.w.d	t2,ft1,rtz
        sw	t2,56(sp)
        lw	a0,56(sp)
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,64
        ret
.main_L1:
        li	a0,0
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,64
        ret
