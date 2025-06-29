       .globl	main
        .section	.text
        .type	main, @function
.main_L1:
        li	a0,0
        ld	ra,-104(s0)
        ld	s0,96(sp)
        addi	sp,sp,104
        ret
main:
        addi	sp,sp,-104
        sd	s0,96(sp)
        addi	s0,sp,104
        sd	ra,-104(s0)
        addi	t2,s0,-32
        li	a2,1
        sd	a2,0(t2)
        addi	a2,s0,-24
        li	t2,2
        sd	t2,0(a2)
        ld	t2,-32(s0)
        sd	t2,-64(s0)
        ld	t2,-24(s0)
        sd	t2,-56(s0)
        addi	a0,s0,-96
        ld	a1,-64(s0)
        ld	a2,-56(s0)
        call	foo
        sd	a0,-80(s0)
        sd	a1,-72(s0)
        ld	t2,-80(s0)
        sd	t2,-48(s0)
        ld	t2,-72(s0)
        sd	t2,-40(s0)
        addi	t2,s0,-48
        ld	a2,0(t2)
        li	t2,10
        xor	t2,a2,t2
        seqz	a0,t2
        ld	ra,-104(s0)
        ld	s0,96(sp)
        addi	sp,sp,104
        ret
        .globl	foo
        .section	.text
        .type	foo, @function
.foo_L1:
        li	t1,0
        ld	a0,0(t1)
        ld	a1,8(t1)
        ld	s0,56(sp)
        addi	sp,sp,64
        ret
foo:
        addi	sp,sp,-64
        sd	s0,56(sp)
        addi	s0,sp,64
        sd	a1,-48(s0)
        sd	a2,-40(s0)
        ld	t1,-48(s0)
        sd	t1,-32(s0)
        ld	t1,-40(s0)
        sd	t1,-24(s0)
        addi	a4,s0,-32
        li	t1,10
        sd	t1,0(a4)
        ld	t1,-32(s0)
        sd	t1,-64(s0)
        ld	t1,-24(s0)
        sd	t1,-56(s0)
        ld	a0,-64(s0)
        ld	a1,-56(s0)
        ld	s0,56(sp)
        addi	sp,sp,64
        ret