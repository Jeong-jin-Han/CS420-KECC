        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        sd	ra,-24(s0)
        call	foo
        mv	t1,a0
        sw	t1,-12(s0)
        call	bar
        sw	a0,-16(s0)
        lw	a6,-12(s0)
        lw	a4,-16(s0)
        addw	a0,a6,a4
        ld	ra,-24(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
.main_L1:
        li	a0,0
        ld	ra,-24(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
        .globl	foo
        .section	.text
        .type	foo, @function
foo:
        addi	sp,sp,-40
        sd	s0,32(sp)
        addi	s0,sp,40
        sd	ra,-32(s0)
        sd	s4,-40(s0)
        li	a0,2
        la	a5,square
        sd	a5,-16(s0)
        ld	a5,-16(s0)
        sd	a5,-24(s0)
        ld	s4,-24(s0)
        jalr	s4
        ld	s4,-40(s0)
        ld	ra,-32(s0)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
.foo_L1:
        li	a0,0
        ld	s4,-40(s0)
        ld	ra,-32(s0)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
        .globl	square
        .section	.text
        .type	square, @function
square:
        addi	sp,sp,-12
        sd	s0,4(sp)
        addi	s0,sp,12
        sw	a0,-12(s0)
        lw	a4,-12(s0)
        lw	t2,-12(s0)
        mulw	a0,a4,t2
        ld	s0,4(sp)
        addi	sp,sp,12
        ret
.square_L1:
        li	a0,0
        ld	s0,4(sp)
        addi	sp,sp,12
        ret
        .globl	bar
        .section	.text
        .type	bar, @function
bar:
        addi	sp,sp,-40
        sd	s0,32(sp)
        addi	s0,sp,40
        sd	ra,-32(s0)
        sd	s2,-40(s0)
        li	a0,3
        la	s2,square
        sd	s2,-16(s0)
        ld	s2,-16(s0)
        sd	s2,-24(s0)
        ld	s2,-24(s0)
        jalr	s2
        ld	s2,-40(s0)
        ld	ra,-32(s0)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
.bar_L1:
        li	a0,0
        ld	s2,-40(s0)
        ld	ra,-32(s0)
        ld	s0,32(sp)
        addi	sp,sp,40
        ret
