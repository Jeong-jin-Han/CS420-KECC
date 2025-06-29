        .globl	fibonacci
        .section	.text
        .type	fibonacci, @function
fibonacci:
        addi	sp,sp,-48
        sd	s0,0(sp)
        addi	s0,sp,48
        addi	t0,sp,8
        sd	t0,16(sp)
        sw	a0,24(sp)
        lw	t1,24(sp)
        lw	t2,24(sp)
        addw	t0,t1,t2
        sw	t0,32(sp)
        lw	t1,32(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,40(sp)
        lbu	t0,40(sp)
        beq	t0,zero, .fibonacci_L3
        j	.fibonacci_L2
.fibonacci_L2:
        lw	a0,24(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,48
        ret
.fibonacci_L3:
        li	a0,0
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,48
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-8
        sd	s0,0(sp)
        addi	s0,sp,8
        li	a0,1
        ld	s0,0(sp)
        addi	sp,sp,8
        ret
