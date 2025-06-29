        .globl	main
        .section	.text
        .type	main, @function
.main_L1:
        li	a0,0
        ld	s11,-80(s0)
        ld	ra,-72(s0)
        ld	s0,72(sp)
        addi	sp,sp,80
        ret
main:
        addi	sp,sp,-80
        sd	s0,72(sp)
        addi	s0,sp,80
        sd	ra,-72(s0)
        sd	s11,-80(s0)
        addi	a0,s0,-60
        li	a1,1
        li	a2,2
        la	s11,make_point
        jalr	s11
        sd	a0,-48(s0)
        sd	a1,-40(s0)
        ld	s11,-48(s0)
        sd	s11,-32(s0)
        ld	s11,-40(s0)
        sd	s11,-24(s0)
        addi	s11,s0,-32
        lb	a3,0(s11)
        addi	s11,s0,-28
        lw	s11,0(s11)
        addw	a0,a3,s11
        ld	s11,-80(s0)
        ld	ra,-72(s0)
        ld	s0,72(sp)
        addi	sp,sp,80
        ret
        .globl	make_point
        .section	.text
        .type	make_point, @function
.make_point_L1:
        li	a0,0
        ld	a0,0(a0)
        ld	a1,8(a0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret
make_point:
        addi	sp,sp,-48
        sd	s0,40(sp)
        addi	s0,sp,48
        sw	a1,-12(s0)
        sw	a2,-16(s0)
        addi	t0,s0,-32
        lw	a0,-12(s0)
        slliw	a0,a0,24
        sraiw	a0,a0,24
        sb	a0,0(t0)
        addi	t0,s0,-28
        lw	a0,-16(s0)
        sw	a0,0(t0)
        addi	a0,s0,-24
        li	t0,0
        sw	t0,0(a0)
        ld	a0,-32(s0)
        sd	a0,-48(s0)
        ld	a0,-24(s0)
        sd	a0,-40(s0)
        ld	a0,-48(s0)
        ld	a1,-40(s0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret
