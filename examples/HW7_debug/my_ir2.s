        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-344
        sd	s0,0(sp)
        sd	s10,8(sp)
        sd	s11,16(sp)
        sd	s2,24(sp)
        sd	s3,32(sp)
        sd	s4,40(sp)
        sd	s5,48(sp)
        sd	s6,56(sp)
        sd	s7,64(sp)
        sd	s8,72(sp)
        sd	s9,80(sp)
        addi	s0,sp,344
        addi	t0,sp,88
        sd	t0,120(sp)
        addi	t0,sp,92
        sd	t0,128(sp)
        addi	t0,sp,100
        sd	t0,136(sp)
        addi	t0,sp,108
        sd	t0,144(sp)
        addi	t0,sp,112
        sd	t0,152(sp)
        addi	t0,sp,116
        sd	t0,160(sp)
        li	t1,0
        mv	t2,t1
        mv	s8,t2
        mv	t1,s8
        li	t2,1
        add	t0,t1,t2
        sd	t0,168(sp)
        ld	t1,168(sp)
        mv	t2,t1
        mv	s6,t2
        mv	t1,s6
        mv	t2,t1
        mv	s9,t2
        mv	t1,s9
        li	t2,1
        add	t0,t1,t2
        mv	s7,t0
        mv	t1,s7
        mv	t2,t1
        sw	t2,176(sp)
        ld	t0,128(sp)
        li	t1,0
        add	t0,t0,t1
        mv	s4,t0
        mv	t0,s4
        li	t1,1
        sw	t1,0(t0)
        ld	t0,128(sp)
        li	t1,4
        add	t0,t0,t1
        mv	s2,t0
        li	t1,2
        mv	t2,t1
        sb	t2,184(sp)
        mv	t0,s2
        lb	t1,184(sp)
        sb	t1,0(t0)
        ld	t0,128(sp)
        li	t1,4
        add	t0,t0,t1
        mv	s10,t0
        mv	t0,s10
        lb	t0,0(t0)
        sb	t0,192(sp)
        lb	t1,192(sp)
        mv	t2,t1
        mv	s5,t2
        lw	t1,176(sp)
        mv	t2,s5
        addw	t0,t1,t2
        sw	t0,200(sp)
        ld	t0,128(sp)
        addi	t1,sp,208
        ld	t2,0(t0)
        sd	t2,0(t1)
        ld	t0,128(sp)
        li	t1,4
        add	t0,t0,t1
        mv	s3,t0
        mv	t0,s3
        lb	t0,0(t0)
        sb	t0,216(sp)
        lb	t1,216(sp)
        mv	t2,t1
        mv	s11,t2
        lw	t1,200(sp)
        mv	t2,s11
        addw	t0,t1,t2
        sw	t0,224(sp)
        j	.main_L0_to_L_2_fake
.main_L2:
        mv	t1,s3
        li	t2,10
        slt	t0,t1,t2
        sb	t0,232(sp)
        lbu	t0,232(sp)
        beq	t0,zero, .main_L2_to_L_5_fake
        j	.main_L3
.main_L3:
        mv	t1,s3
        li	t2,2
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,240(sp)
        lbu	t0,240(sp)
        beq	t0,zero, .main_L10
        j	.main_L9
.main_L5:
        mv	t1,s2
        li	t2,1
        xor	t0,t1,t2
        beq	t0,zero, .main_L14
        j	.main_L5_to_L_13_fake
.main_L7:
        mv	t1,s2
        mv	t2,s3
        addw	t0,t1,t2
        mv	s4,t0
        mv	t1,s3
        li	t2,1
        addw	t0,t1,t2
        mv	s5,t0
        j	.main_L7_to_L_2_fake
.main_L9:
        li	t1,0
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,248(sp)
        j	.main_L9_to_L_11_fake
.main_L10:
        j	.main_L10_to_L_11_fake
.main_L11:
        lbu	t0,256(sp)
        beq	t0,zero, .main_L7
        j	.main_L11_to_L_5_fake
.main_L13:
        mv	a0,s2
        ld	s0,0(sp)
        ld	s10,8(sp)
        ld	s11,16(sp)
        ld	s2,24(sp)
        ld	s3,32(sp)
        ld	s4,40(sp)
        ld	s5,48(sp)
        ld	s6,56(sp)
        ld	s7,64(sp)
        ld	s8,72(sp)
        ld	s9,80(sp)
        addi	sp,sp,344
        ret
.main_L14:
        j	.main_L14_to_L_13_fake
.main_L0_to_L_2_fake:
        lw	t3,224(sp)
        sw	t3,257(sp)
        li	t3,0
        sw	t3,261(sp)
        li	t3,0
        sb	t3,265(sp)
        lw	t3,257(sp)
        sw	t3,268(sp)
        lw	t3,261(sp)
        sw	t3,272(sp)
        lb	t3,265(sp)
        sb	t3,276(sp)
        j	.main_L2
.main_L2_to_L_5_fake:
        lbu	t3,276(sp)
        sb	t3,280(sp)
        lb	t3,280(sp)
        sb	t3,281(sp)
        j	.main_L5
.main_L5_to_L_13_fake:
        lw	t3,268(sp)
        sw	t3,288(sp)
        lw	t3,288(sp)
        sw	t3,292(sp)
        j	.main_L13
.main_L7_to_L_2_fake:
        mv	t3,s4
        sw	t3,296(sp)
        mv	t3,s5
        sw	t3,300(sp)
        lbu	t3,256(sp)
        sb	t3,304(sp)
        lw	t3,296(sp)
        sw	t3,268(sp)
        lw	t3,300(sp)
        sw	t3,272(sp)
        lb	t3,304(sp)
        sb	t3,276(sp)
        j	.main_L2
.main_L9_to_L_11_fake:
        lbu	t3,248(sp)
        sb	t3,312(sp)
        lb	t3,312(sp)
        sb	t3,256(sp)
        j	.main_L11
.main_L10_to_L_11_fake:
        li	t3,0
        sb	t3,320(sp)
        lb	t3,320(sp)
        sb	t3,256(sp)
        j	.main_L11
.main_L11_to_L_5_fake:
        lbu	t3,256(sp)
        sb	t3,328(sp)
        lb	t3,328(sp)
        sb	t3,281(sp)
        j	.main_L5
.main_L14_to_L_13_fake:
        li	t3,0
        sw	t3,336(sp)
        lw	t3,336(sp)
        sw	t3,292(sp)
        j	.main_L13
