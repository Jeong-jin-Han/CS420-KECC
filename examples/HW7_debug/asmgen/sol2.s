main:
        addi	sp,sp,-16
        sd	s0,8(sp)
        addi	s0,sp,16
        sd	ra,-16(s0)
        li	a0,1
        li	a1,2
        li	a2,3
        call	add
        ld	ra,-16(s0)
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
.main_L1:
        li	a0,0
        ld	ra,-16(s0)
        ld	s0,8(sp)
        addi	sp,sp,16
        ret
        .globl	add
        .section	.text
        .type	add, @function
.add_L1:
        li	a0,0
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
add:
        addi	sp,sp,-20
        sd	s0,12(sp)
        addi	s0,sp,20
        sw	a0,-12(s0)
        sw	a1,-16(s0)
        sw	a2,-20(s0)
        lw	a1,-12(s0)
        lw	t4,-16(s0)
        addw	a1,a1,t4
        lw	t4,-20(s0)
        addw	a0,a1,t4
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
