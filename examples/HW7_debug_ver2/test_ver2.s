        .globl	add
        .section	.text
        .type	add, @function
add:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        lw	t2,-12(s0)
        lw	t5,-16(s0)
        addw	a0,t2,t5
        sw	a0,-20(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-32
        sd	s0,24(sp)
        addi	s0,sp,32
        sd	ra,-32(s0)
        li	ra,1
        sw	ra,-12(s0)
        li	ra,2
        sw	ra,-16(s0)
        addi	a0,s0,-12
        addi	a1,s0,-16
        call	add
        sw	a0,-20(s0)
        ld	ra,-32(s0)
        ld	s0,24(sp)
        addi	sp,sp,32
        ret