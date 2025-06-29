        .globl	make_point
        .section	.text
        .type	make_point, @function
.make_point_L1:
        li	a0,0
        ld	s0,24(sp)
        addi	sp,sp,32
        ret
make_point:
        addi	sp,sp,-32
        sd	s0,24(sp)
        addi	s0,sp,32
        sd	a0,-32(s0)
        ld	a5,-32(s0)
        sd	a5,-16(s0)
        sw	a1,-20(s0)
        addi	a0,s0,-16
        li	a5,10
        sw	a5,0(a0)
        addi	a0,s0,-12
        lw	a5,-20(s0)
        sw	a5,0(a0)
        addi	a5,s0,-12
        lw	a0,0(a5)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-48
        sd	s0,40(sp)
        addi	s0,sp,48
        sd	ra,-40(s0)
        sd	s6,-48(s0)
        addi	a2,s0,-16
        li	s6,1
        sw	s6,0(a2)
        addi	s6,s0,-12
        li	a2,2
        sw	a2,0(s6)
        ld	a2,-16(s0)
        sd	a2,-32(s0)
        ld	a0,-32(s0)
        li	a1,42
        la	s6,make_point
        jalr	s6
        sw	a0,-20(s0)
        lw	a0,-20(s0)
        ld	s6,-48(s0)
        ld	ra,-40(s0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret
.main_L1:
        li	a0,0
        ld	s6,-48(s0)
        ld	ra,-40(s0)
        ld	s0,40(sp)
        addi	sp,sp,48
        ret