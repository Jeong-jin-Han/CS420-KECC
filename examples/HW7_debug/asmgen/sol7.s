        .globl	make_point
        .section	.text
        .type	make_point, @function
make_point:
        addi	sp,sp,-32
        sd	s0,24(sp)
        addi	s0,sp,32
        sw	a1,-12(s0)
        sw	a2,-16(s0)
        addi	t2,s0,-24
        lw	a3,-12(s0)
        sw	a3,0(t2)
        addi	t2,s0,-20
        lw	a3,-16(s0)
        sw	a3,0(t2)
        ld	a3,-24(s0)
        sd	a3,-32(s0)
        ld	a0,-32(s0)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret
.make_point_L1:
        li	a3,0
        ld	a0,0(a3)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret
        .globl	main
        .section	.text
        .type	main, @function
.main_L1:
        lw	ra,-20(s0)
        li	a4,1
        addw	ra,ra,a4
        sw	ra,-20(s0)
        j	.main_L3
.main_L3:
        li	a0,0
        ld	s5,-56(s0)
        ld	ra,-48(s0)
        ld	s0,48(sp)
        addi	sp,sp,56
        ret
.main_L4:
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
        li	ra,0
        sw	ra,-20(s0)
        li	a4,1
        li	ra,0
        xor	ra,a4,ra
        snez	ra,ra
        bne	ra,zero, .main_L1
        j	.main_L2
.main_L2:
        addi	a0,s0,-40
        li	a1,1
        li	a2,2
        la	s5,make_point
        jalr	s5
        sd	a0,-32(s0)
        ld	ra,-32(s0)
        sd	ra,-16(s0)
        j	.main_L3
