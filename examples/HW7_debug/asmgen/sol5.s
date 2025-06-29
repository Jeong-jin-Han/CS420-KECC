        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-112
        sd	s0,104(sp)
        addi	s0,sp,112
        sd	ra,-104(s0)
        sd	s7,-112(s0)
        addi	a0,s0,-92
        li	a1,1
        li	a2,2
        la	s7,make_point
        jalr	s7
        ld	a7,-92(s0)
        sd	a7,-72(s0)
        ld	a7,-84(s0)
        sd	a7,-64(s0)
        ld	a7,-76(s0)
        sd	a7,-56(s0)
        ld	a7,-72(s0)
        sd	a7,-48(s0)
        ld	a7,-64(s0)
        sd	a7,-40(s0)
        ld	a7,-56(s0)
        sd	a7,-32(s0)
        addi	a7,s0,-48
        lb	a1,0(a7)
        addi	a7,s0,-44
        lw	a7,0(a7)
        addw	a7,a1,a7
        addi	a1,s0,-40
        lw	a1,0(a1)
        addw	a0,a7,a1
        ld	s7,-112(s0)
        ld	ra,-104(s0)
        ld	s0,104(sp)
        addi	sp,sp,112
        ret
.main_L1:
        li	a0,0
        ld	s7,-112(s0)
        ld	ra,-104(s0)
        ld	s0,104(sp)
        addi	sp,sp,112
        ret
        .globl	make_point
        .section	.text
        .type	make_point, @function
make_point:
        addi	sp,sp,-72
        sd	s0,64(sp)
        addi	s0,sp,72
        sw	a1,-12(s0)
        sw	a2,-16(s0)
        addi	a4,s0,-48
        lw	t1,-12(s0)
        slliw	t1,t1,24
        sraiw	t1,t1,24
        sb	t1,0(a4)
        addi	a4,s0,-47
        li	t1,1
        slliw	t1,t1,24
        sraiw	t1,t1,24
        sb	t1,0(a4)
        addi	t1,s0,-46
        li	a4,2
        slliw	a4,a4,24
        sraiw	a4,a4,24
        sb	a4,0(t1)
        addi	a4,s0,-44
        lw	t1,-16(s0)
        sw	t1,0(a4)
        addi	a4,s0,-40
        li	t1,0
        sw	t1,0(a4)
        addi	a4,s0,-36
        li	t1,1
        sw	t1,0(a4)
        addi	t1,s0,-32
        li	a4,2
        sw	a4,0(t1)
        ld	a4,-48(s0)
        sd	a4,-72(s0)
        ld	a4,-40(s0)
        sd	a4,-64(s0)
        ld	a4,-32(s0)
        sd	a4,-56(s0)
        ld	a4,-72(s0)
        sd	a4,0(a0)
        ld	a4,-64(s0)
        sd	a4,8(a0)
        ld	a4,-56(s0)
        sd	a4,16(a0)
        ld	s0,64(sp)
        addi	sp,sp,72
        ret
.make_point_L1:
        li	s8,0
        ld	s8,0(s8)
        sd	s8,0(a0)
        ld	s8,8(s8)
        sd	s8,8(a0)
        ld	s8,16(s8)
        sd	s8,16(a0)
        ld	s0,64(sp)
        addi	sp,sp,72
        ret