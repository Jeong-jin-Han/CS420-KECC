        .globl	add
        .section	.text
        .type	add, @function
add:
        addw	a0,a0,a1
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-16
        sd	s0,8(sp)
        addi	s0,sp,16
        sd	ra,-16(s0)
        li	a0,1
        li	a1,2
        call	add
        ld	ra,-16(s0)
        ld	s0,8(sp)
        addi	sp,sp,16
        ret