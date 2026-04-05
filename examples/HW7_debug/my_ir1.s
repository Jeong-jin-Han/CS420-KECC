        .globl	fibonacci
        .section	.text
        .type	fibonacci, @function
fibonacci:
        addi	sp,sp,-88
        sd	s0,0(sp)
        sd	s10,8(sp)
        sd	s11,16(sp)
        sd	s9,24(sp)
        addi	s0,sp,88
        addi	t0,sp,32
        sd	t0,40(sp)
        sw	a0,48(sp)
        ld	t0,40(sp)
        lw	t1,48(sp)
        sw	t1,0(t0)
        ld	t0,40(sp)
        lw	t0,0(t0)
        sw	t0,56(sp)
        ld	t0,40(sp)
        lw	t0,0(t0)
        sw	t0,64(sp)
        lw	t1,56(sp)
        lw	t2,64(sp)
        addw	t0,t1,t2
        mv	s11,t0
        mv	t1,s11
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,72(sp)
        lbu	t0,72(sp)
        beq	t0,zero, .fibonacci_L3
        j	.fibonacci_L2
.fibonacci_L2:
        ld	t0,40(sp)
        lw	t0,0(t0)
        sw	t0,80(sp)
        lw	a0,80(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        ld	s10,8(sp)
        ld	s11,16(sp)
        ld	s9,24(sp)
        addi	sp,sp,88
        ret
.fibonacci_L3:
        li	a0,0
        sw	a0,-8(s1)
        ld	s0,0(sp)
        ld	s10,8(sp)
        ld	s11,16(sp)
        ld	s9,24(sp)
        addi	sp,sp,88
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
