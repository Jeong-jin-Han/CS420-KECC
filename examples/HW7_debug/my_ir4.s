        .globl	fibonacci
        .section	.text
        .type	fibonacci, @function
fibonacci:
        addi	sp,sp,-32
        sd	s0,0(sp)
        sd	s11,8(sp)
        addi	s0,sp,32
        sw	a0,16(sp)
        lw	t1,16(sp)
        lw	t2,16(sp)
        addw	t0,t1,t2
        mv	s11,t0
        mv	t1,s11
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,24(sp)
        lbu	t0,24(sp)
        beq	t0,zero, .fibonacci_L3
        j	.fibonacci_L2
.fibonacci_L2:
        lw	a0,16(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        ld	s11,8(sp)
        addi	sp,sp,32
        ret
.fibonacci_L3:
        li	a0,0
        sw	a0,-8(s1)
        ld	s0,0(sp)
        ld	s11,8(sp)
        addi	sp,sp,32
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
