        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-64
        sd	s0,56(sp)
        addi	s0,sp,64
        sd	ra,-56(s0)
        sd	s1,-64(s0)
        addi	t3,s0,-16
        li	a2,1
        sw	a2,0(t3)
        addi	a2,s0,-12
        li	t3,2
        sw	t3,0(a2)
        ld	t3,-16(s0)
        sd	t3,-48(s0)
        ld	t3,-48(s0)
        sd	t3,-32(s0)
        ld	a0,-48(s0)
        li	a1,42
        la	s1,make_point
        jalr	s1
        sw	a0,-20(s0)
        lw	a0,-20(s0)
        ld	s1,-64(s0)
        ld	ra,-56(s0)
        ld	s0,56(sp)
        addi	sp,sp,64
        ret
        .globl	make_point
        .section	.text
        .type	make_point, @function
make_point:
        addi	sp,sp,-32
        sd	s0,24(sp)
        addi	s0,sp,32
        sd	a0,-32(s0)
        ld	t1,-32(s0)
        sd	t1,-16(s0)
        sw	a1,-20(s0)
        addi	t1,s0,-16
        li	a0,10
        sw	a0,0(t1)
        addi	t1,s0,-12
        lw	a0,-20(s0)
        sw	a0,0(t1)
        addi	t1,s0,-12
        lw	a0,0(t1)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret