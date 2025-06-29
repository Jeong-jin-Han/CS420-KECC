        .globl	init
        .section	.text
        .type	init, @function
.init_L10:
        li	a4,1
        addw	a6,a6,a4
        j	.init_L2
init:
        li	a6,0
        j	.init_L2
.init_L7:
        slt	a7,a4,a1
        bne	a7,zero, .init_L8
        j	.init_L10
.init_L8:
        mv	a7,a6
        li	a5,20
        mul	a7,a7,a5
        add	a5,a2,a7
        li	a7,0
        add	a7,a5,a7
        mv	a5,a4
        li	t4,4
        mul	a5,a5,t4
        add	a5,a7,a5
        mulw	a7,a6,a4
        sw	a7,0(a5)
        li	a7,1
        addw	a4,a4,a7
        j	.init_L7
.init_L2:
        slt	a4,a6,a0
        bne	a4,zero, .init_L3
        j	.init_L5
.init_L3:
        li	a4,0
        j	.init_L7
.init_L5:
        ret
        .globl	main
        .section	.text
        .type	main, @function
main:
        addi	sp,sp,-392
        sd	s0,384(sp)
        addi	s0,sp,392
        sd	ra,-392(s0)
        addi	t0,s0,-188
        li	a1,0
        add	a2,t0,a1
        li	a0,4
        li	a1,5
        call	init
        ld	t0,-192(s0)
        sd	t0,-384(s0)
        ld	t0,-184(s0)
        sd	t0,-376(s0)
        ld	t0,-176(s0)
        sd	t0,-368(s0)
        ld	t0,-168(s0)
        sd	t0,-360(s0)
        ld	t0,-160(s0)
        sd	t0,-352(s0)
        ld	t0,-152(s0)
        sd	t0,-344(s0)
        ld	t0,-144(s0)
        sd	t0,-336(s0)
        ld	t0,-136(s0)
        sd	t0,-328(s0)
        ld	t0,-128(s0)
        sd	t0,-320(s0)
        ld	t0,-120(s0)
        sd	t0,-312(s0)
        ld	t0,-112(s0)
        sd	t0,-304(s0)
        ld	t0,-104(s0)
        sd	t0,-296(s0)
        ld	t0,-384(s0)
        sd	t0,-288(s0)
        ld	t0,-376(s0)
        sd	t0,-280(s0)
        ld	t0,-368(s0)
        sd	t0,-272(s0)
        ld	t0,-360(s0)
        sd	t0,-264(s0)
        ld	t0,-352(s0)
        sd	t0,-256(s0)
        ld	t0,-344(s0)
        sd	t0,-248(s0)
        ld	t0,-336(s0)
        sd	t0,-240(s0)
        ld	t0,-328(s0)
        sd	t0,-232(s0)
        ld	t0,-320(s0)
        sd	t0,-224(s0)
        ld	t0,-312(s0)
        sd	t0,-216(s0)
        ld	t0,-304(s0)
        sd	t0,-208(s0)
        ld	t0,-296(s0)
        sd	t0,-200(s0)
        addi	a4,s0,-284
        li	t0,0
        add	a1,a4,t0
        li	t0,2
        li	a4,20
        mul	t0,t0,a4
        add	a4,a1,t0
        li	t0,0
        add	t0,a4,t0
        li	a1,3
        li	a4,4
        mul	a4,a1,a4
        add	t0,t0,a4
        lw	t0,0(t0)
        li	a4,6
        xor	t0,t0,a4
        seqz	a0,t0
        ld	ra,-392(s0)
        ld	s0,384(sp)
        addi	sp,sp,392
        ret
