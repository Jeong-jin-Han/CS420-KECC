        .globl	make_point
        .section	.text
        .type	make_point, @function
make_point:
        addi	sp,sp,-40
        sd	s0,32(sp)
        addi	s0,sp,40
        sd	a1,-32(s0)
        ld	a6,-32(s0)
        sd	a6,-16(s0)
        sw	a2,-20(s0)
        addi	a6,s0,-16
        li	a5,10
        sw	a5,0(a6)
        addi	a6,s0,-12
        lw	a5,-20(s0)
        sw	a5,0(a6)
        ld	a6,-16(s0)
        sd	a6,-40(s0)
        ld	a0,-40(s0)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
.make_point_L1:
        li	a6,0
        ld	a0,0(a6)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
        .globl	main
        .section	.text
        .type	main, @function
.main_L1:
        li	a0,0
        ld	s5,-56(s0)
        ld	ra,-48(s0)
        ld	s0,48(sp)
        addi	sp,sp,56
        ret
main:
        addi	sp,sp,-56
        sd	s0,48(sp)
        addi	s0,sp,56
        sd	ra,-48(s0)
        sd	s5,-56(s0)
        addi	a4,s0,-16
        li	a1,1
        sw	a1,0(a4)
        addi	a4,s0,-12
        li	a1,2
        sw	a1,0(a4)
        ld	a1,-16(s0)
        sd	a1,-24(s0)
        addi	a0,s0,-40
        ld	a1,-24(s0)
        li	a2,42
        la	s5,make_point
        jalr	s5
        sd	a0,-32(s0)
        ld	a1,-32(s0)
        sd	a1,-16(s0)
        addi	a1,s0,-16
        lw	a4,0(a1)
        addi	a1,s0,-12
        lw	a1,0(a1)
        addw	a0,a4,a1
        ld	s5,-56(s0)
        ld	ra,-48(s0)
        ld	s0,48(sp)
        addi	sp,sp,56
        ret
