        .globl	gcd
        .section	.text
        .type	gcd, @function
gcd:
        addi	sp,sp,-264
        sd	s0,0(sp)
        addi	s0,sp,264
        addi	t0,sp,8
        sd	t0,24(sp)
        addi	t0,sp,12
        sd	t0,32(sp)
        addi	t0,sp,16
        sd	t0,40(sp)
        addi	t0,sp,20
        sd	t0,48(sp)
        sw	a0,56(sp)
        sw	a1,60(sp)
        ld	t0,24(sp)
        lw	t1,56(sp)
        sw	t1,0(t0)
        ld	t0,32(sp)
        lw	t1,60(sp)
        sw	t1,0(t0)
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,64(sp)
        lw	t1,64(sp)
        li	t2,0
        slt	t0,t2,t1
        sb	t0,72(sp)
        lbu	t0,72(sp)
        beq	t0,zero, .gcd_L2
        j	.gcd_L1
.gcd_L1:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,80(sp)
        ld	t0,40(sp)
        lw	t1,80(sp)
        sw	t1,0(t0)
        j	.gcd_L3
.gcd_L2:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,88(sp)
        lw	t0,88(sp)
        negw	t0,t0
        sw	t0,96(sp)
        ld	t0,40(sp)
        lw	t1,96(sp)
        sw	t1,0(t0)
        j	.gcd_L3
.gcd_L3:
        ld	t0,40(sp)
        lw	t0,0(t0)
        sw	t0,104(sp)
        ld	t0,24(sp)
        lw	t1,104(sp)
        sw	t1,0(t0)
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,112(sp)
        lw	t1,112(sp)
        li	t2,0
        slt	t0,t2,t1
        sb	t0,120(sp)
        lbu	t0,120(sp)
        beq	t0,zero, .gcd_L5
        j	.gcd_L4
.gcd_L4:
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,128(sp)
        ld	t0,48(sp)
        lw	t1,128(sp)
        sw	t1,0(t0)
        j	.gcd_L6
.gcd_L5:
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,136(sp)
        lw	t0,136(sp)
        negw	t0,t0
        sw	t0,144(sp)
        ld	t0,48(sp)
        lw	t1,144(sp)
        sw	t1,0(t0)
        j	.gcd_L6
.gcd_L6:
        ld	t0,48(sp)
        lw	t0,0(t0)
        sw	t0,152(sp)
        ld	t0,32(sp)
        lw	t1,152(sp)
        sw	t1,0(t0)
        j	.gcd_L7
.gcd_L7:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,160(sp)
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,168(sp)
        lw	t1,160(sp)
        lw	t2,168(sp)
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,176(sp)
        lbu	t0,176(sp)
        beq	t0,zero, .gcd_L9
        j	.gcd_L8
.gcd_L8:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,184(sp)
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,192(sp)
        lw	t1,184(sp)
        lw	t2,192(sp)
        slt	t0,t2,t1
        sb	t0,200(sp)
        lbu	t0,200(sp)
        beq	t0,zero, .gcd_L11
        j	.gcd_L10
.gcd_L9:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,208(sp)
        lw	a0,208(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,264
        ret
.gcd_L10:
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,216(sp)
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,224(sp)
        lw	t1,216(sp)
        lw	t2,224(sp)
        subw	t0,t1,t2
        sw	t0,232(sp)
        ld	t0,24(sp)
        lw	t1,232(sp)
        sw	t1,0(t0)
        j	.gcd_L12
.gcd_L11:
        ld	t0,32(sp)
        lw	t0,0(t0)
        sw	t0,240(sp)
        ld	t0,24(sp)
        lw	t0,0(t0)
        sw	t0,248(sp)
        lw	t1,240(sp)
        lw	t2,248(sp)
        subw	t0,t1,t2
        sw	t0,256(sp)
        ld	t0,32(sp)
        lw	t1,256(sp)
        sw	t1,0(t0)
        j	.gcd_L12
.gcd_L12:
        j	.gcd_L7
.gcd_L13:
        li	a0,0
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,264
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-48
        sd	s0,0(sp)
        sd	ra,8(sp)
        sd	s1,16(sp)
        addi	s0,sp,48
        addi	s1,sp,32
        li	t0,18
        mv	a0,t0
        li	t0,21
        mv	a1,t0
        call	gcd
        sw	a0,24(sp)
        lw	t1,24(sp)
        li	t2,3
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,32(sp)
        lbu	t1,32(sp)
        mv	t2,t1
        sw	t2,40(sp)
        lw	a0,40(sp)
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,48
        ret
.main_L1:
        li	a0,0
        ld	s1,16(sp)
        ld	ra,8(sp)
        ld	s0,0(sp)
        addi	sp,sp,48
        ret
