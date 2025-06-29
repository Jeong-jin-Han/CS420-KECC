        .globl	main
        .section	.text
        .type	main, @function
.main_L1:
        li	a0,0
        ld	s8,-48(s0)
        ld	ra,-40(s0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret
main:
        addi	sp,sp,-48
        sd	s0,40(sp)
        addi	s0,sp,48
        sd	ra,-40(s0)
        sd	s8,-48(s0)
        addi	a0,s0,-32
        li	a1,1
        li	a2,2
        la	s8,make_point
        jalr	s8
        sd	a0,-24(s0)
        ld	a2,-24(s0)
        sd	a2,-16(s0)
        addi	a2,s0,-16
        lw	a2,0(a2)
        addi	a6,s0,-12
        lw	a6,0(a6)
        addw	a0,a2,a6
        ld	s8,-48(s0)
        ld	ra,-40(s0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret
        .globl	make_point
        .section	.text
        .type	make_point, @function
make_point:
        addi	sp,sp,-32
        sd	s0,24(sp)
        addi	s0,sp,32
        sw	a1,-12(s0)
        sw	a2,-16(s0)
        addi	t0,s0,-24
        lw	t6,-12(s0)
        sw	t6,0(t0)
        addi	t0,s0,-20
        lw	t6,-16(s0)
        sw	t6,0(t0)
        ld	t6,-24(s0)
        sd	t6,-32(s0)
        ld	a0,-32(s0)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret
.make_point_L1:
        li	s2,0
        ld	a0,0(s2)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret