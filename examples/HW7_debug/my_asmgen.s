        .globl	add
        .section	.text
        .type	add, @function
add:
        addi	sp,sp,-24
        sd	s0,0(sp)
        addi	s0,sp,24
        sw	a0,8(sp)
        sw	a1,12(sp)
        lw	t1,8(sp)
        lw	t2,12(sp)
        addw	t0,t1,t2
        sw	t0,16(sp)
        lw	a0,16(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,24
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-32
        sd	s0,0(sp)
        sd	ra,8(sp)
        sd	s1,16(sp)
        addi	s0,sp,32
        addi	s1,sp,32
        li	t0,1
        mv	a0,t0
        li	t0,2
        mv	a1,t0
        call	add
        lw	a0,24(sp)
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,32
        ret
