        .globl	fibonacci
        .section	.text
        .type	fibonacci, @function
fibonacci:
        addi	sp,sp,-72
        sd	s0,0(sp)
        addi	s0,sp,72
        addi	t0,sp,8
        sd	t0,16(sp)
        sw	a0,24(sp)
        ld	t0,16(sp)
        lw	t1,24(sp)
        sw	t1,0(t0)
        ld	t0,16(sp)
        lw	t0,0(t0)
        sw	t0,32(sp)
        ld	t0,16(sp)
        lw	t0,0(t0)
        sw	t0,40(sp)
        lw	t1,32(sp)
        lw	t2,40(sp)
        addw	t0,t1,t2
        sw	t0,48(sp)
        lw	t1,48(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,56(sp)
        lbu	t0,56(sp)
        beq	t0,zero, .fibonacci_L3
        j	.fibonacci_L2
.fibonacci_L2:
        ld	t0,16(sp)
        lw	t0,0(t0)
        sw	t0,64(sp)
        lw	a0,64(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,72
        ret
.fibonacci_L3:
        li	a0,0
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,72
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
