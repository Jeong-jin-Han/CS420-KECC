        .globl	add
        .section	.text
        .type	add, @function
add:
        addi	sp,sp,-20
        sd	s0,12(sp)
        addi	s0,sp,20
        sw	a0,-12(s0)
        sw	a1,-16(s0)
        sw	a2,-20(s0)
        lw	t2,-12(s0)
        lw	t3,-16(s0)
        addw	t3,t2,t3
        lw	t2,-20(s0)
        addw	a0,t3,t2
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
.add_L1:
        li	a0,0
        ld	s0,12(sp)
        addi	sp,sp,20
        ret
        .globl	make_point
        .section	.text
        .type	make_point, @function
.make_point_L1:
        li	t4,0
        ld	t4,0(t4)
        sd	t4,0(s2)
        ld	t4,8(t4)
        sd	t4,8(s2)
        ld	t4,16(t4)
        sd	t4,16(s2)
        ld	s1,-96(s0)
        ld	s2,-88(s0)
        ld	ra,-80(s0)
        ld	s0,88(sp)
        addi	sp,sp,96
        ret
make_point:
        addi	sp,sp,-96
        sd	s0,88(sp)
        addi	s0,sp,96
        sd	ra,-80(s0)
        sd	s1,-96(s0)
        sd	s2,-88(s0)
        mv	s2,a0
        sw	a1,-12(s0)
        sw	a2,-16(s0)
        addi	a2,s0,-48
        lw	t4,-12(s0)
        slliw	t4,t4,24
        sraiw	t4,t4,24
        sb	t4,0(a2)
        addi	a2,s0,-47
        li	t4,1
        slliw	t4,t4,24
        sraiw	t4,t4,24
        sb	t4,0(a2)
        addi	a2,s0,-46
        li	t4,2
        slliw	t4,t4,24
        sraiw	t4,t4,24
        sb	t4,0(a2)
        addi	t4,s0,-44
        lw	a2,-16(s0)
        sw	a2,0(t4)
        addi	s1,s0,-40
        lw	a0,-12(s0)
        lw	a1,-16(s0)
        li	a2,0
        call	add
        sw	a0,0(s1)
        addi	a2,s0,-36
        li	t4,1
        sw	t4,0(a2)
        addi	t4,s0,-32
        li	a2,2
        sw	a2,0(t4)
        ld	t4,-48(s0)
        sd	t4,-72(s0)
        ld	t4,-40(s0)
        sd	t4,-64(s0)
        ld	t4,-32(s0)
        sd	t4,-56(s0)
        ld	t4,-72(s0)
        sd	t4,0(s2)
        ld	t4,-64(s0)
        sd	t4,8(s2)
        ld	t4,-56(s0)
        sd	t4,16(s2)
        ld	s1,-96(s0)
        ld	s2,-88(s0)
        ld	ra,-80(s0)
        ld	s0,88(sp)
        addi	sp,sp,96
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-112
        sd	s0,104(sp)
        addi	s0,sp,112
        sd	ra,-104(s0)
        sd	s3,-112(s0)
        addi	a0,s0,-92
        li	a1,1
        li	a2,2
        la	s3,make_point
        jalr	s3
        ld	a6,-92(s0)
        sd	a6,-72(s0)
        ld	a6,-84(s0)
        sd	a6,-64(s0)
        ld	a6,-76(s0)
        sd	a6,-56(s0)
        ld	a6,-72(s0)
        sd	a6,-48(s0)
        ld	a6,-64(s0)
        sd	a6,-40(s0)
        ld	a6,-56(s0)
        sd	a6,-32(s0)
        addi	a6,s0,-48
        lb	s3,0(a6)
        addi	a6,s0,-44
        lw	a6,0(a6)
        addw	s3,s3,a6
        addi	a6,s0,-40
        lw	a6,0(a6)
        addw	a0,s3,a6
        ld	s3,-112(s0)
        ld	ra,-104(s0)
        ld	s0,104(sp)
        addi	sp,sp,112
        ret
.main_L1:
        li	a0,0
        ld	s3,-112(s0)
        ld	ra,-104(s0)
        ld	s0,104(sp)
        addi	sp,sp,112
        ret