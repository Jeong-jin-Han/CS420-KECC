        .globl	func_0
        .section	.text
        .type	func_0, @function
func_0:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_0_L8
        j	.func_0_L7
.func_0_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_0_L20
        j	.func_0_L19
.func_0_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_0_L32
        j	.func_0_L31
.func_0_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_0_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_0_L11
        j	.func_0_L10
.func_0_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_0_L14
        j	.func_0_L13
.func_0_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_0_L2
        j	.func_0_L1
.func_0_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_0_L9
.func_0_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_0_L9
.func_0_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_0_L5
        j	.func_0_L4
.func_0_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_0_L12
.func_0_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_0_L12
.func_0_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_0_L6
.func_0_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_0_L15
.func_0_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_0_L15
.func_0_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_0_L6
.func_0_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_0_L23
        j	.func_0_L22
.func_0_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_0_L26
        j	.func_0_L25
.func_0_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_0_L3
.func_0_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_0_L21
.func_0_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_0_L21
.func_0_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_0_L17
        j	.func_0_L16
.func_0_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_0_L24
.func_0_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_0_L24
.func_0_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_0_L18
.func_0_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_0_L27
.func_0_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_0_L27
.func_0_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_0_L18
.func_0_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_0_L35
        j	.func_0_L34
.func_0_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_0_L38
        j	.func_0_L37
.func_0_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_0_L3
.func_0_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_0_L33
.func_0_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_0_L33
.func_0_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_0_L29
        j	.func_0_L28
.func_0_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_0_L36
.func_0_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_0_L36
.func_0_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_0_L30
.func_0_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_0_L39
.func_0_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_0_L39
.func_0_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_0_L30
        .globl	func_1
        .section	.text
        .type	func_1, @function
func_1:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_1_L8
        j	.func_1_L7
.func_1_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_1_L20
        j	.func_1_L19
.func_1_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_1_L32
        j	.func_1_L31
.func_1_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_1_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_1_L11
        j	.func_1_L10
.func_1_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_1_L14
        j	.func_1_L13
.func_1_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_1_L2
        j	.func_1_L1
.func_1_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_1_L9
.func_1_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_1_L9
.func_1_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_1_L5
        j	.func_1_L4
.func_1_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_1_L12
.func_1_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_1_L12
.func_1_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_1_L6
.func_1_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_1_L15
.func_1_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_1_L15
.func_1_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_1_L6
.func_1_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_1_L23
        j	.func_1_L22
.func_1_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_1_L26
        j	.func_1_L25
.func_1_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_1_L3
.func_1_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_1_L21
.func_1_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_1_L21
.func_1_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_1_L17
        j	.func_1_L16
.func_1_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_1_L24
.func_1_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_1_L24
.func_1_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_1_L18
.func_1_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_1_L27
.func_1_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_1_L27
.func_1_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_1_L18
.func_1_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_1_L35
        j	.func_1_L34
.func_1_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_1_L38
        j	.func_1_L37
.func_1_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_1_L3
.func_1_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_1_L33
.func_1_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_1_L33
.func_1_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_1_L29
        j	.func_1_L28
.func_1_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_1_L36
.func_1_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_1_L36
.func_1_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_1_L30
.func_1_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_1_L39
.func_1_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_1_L39
.func_1_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_1_L30
        .globl	func_10
        .section	.text
        .type	func_10, @function
func_10:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_10_L8
        j	.func_10_L7
.func_10_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_10_L20
        j	.func_10_L19
.func_10_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_10_L32
        j	.func_10_L31
.func_10_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_10_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_10_L11
        j	.func_10_L10
.func_10_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_10_L14
        j	.func_10_L13
.func_10_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_10_L2
        j	.func_10_L1
.func_10_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_10_L9
.func_10_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_10_L9
.func_10_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_10_L5
        j	.func_10_L4
.func_10_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_10_L12
.func_10_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_10_L12
.func_10_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_10_L6
.func_10_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_10_L15
.func_10_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_10_L15
.func_10_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_10_L6
.func_10_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_10_L23
        j	.func_10_L22
.func_10_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_10_L26
        j	.func_10_L25
.func_10_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_10_L3
.func_10_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_10_L21
.func_10_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_10_L21
.func_10_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_10_L17
        j	.func_10_L16
.func_10_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_10_L24
.func_10_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_10_L24
.func_10_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_10_L18
.func_10_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_10_L27
.func_10_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_10_L27
.func_10_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_10_L18
.func_10_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_10_L35
        j	.func_10_L34
.func_10_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_10_L38
        j	.func_10_L37
.func_10_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_10_L3
.func_10_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_10_L33
.func_10_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_10_L33
.func_10_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_10_L29
        j	.func_10_L28
.func_10_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_10_L36
.func_10_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_10_L36
.func_10_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_10_L30
.func_10_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_10_L39
.func_10_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_10_L39
.func_10_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_10_L30
        .globl	func_11
        .section	.text
        .type	func_11, @function
func_11:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_11_L8
        j	.func_11_L7
.func_11_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_11_L20
        j	.func_11_L19
.func_11_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_11_L32
        j	.func_11_L31
.func_11_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_11_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_11_L11
        j	.func_11_L10
.func_11_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_11_L14
        j	.func_11_L13
.func_11_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_11_L2
        j	.func_11_L1
.func_11_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_11_L9
.func_11_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_11_L9
.func_11_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_11_L5
        j	.func_11_L4
.func_11_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_11_L12
.func_11_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_11_L12
.func_11_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_11_L6
.func_11_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_11_L15
.func_11_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_11_L15
.func_11_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_11_L6
.func_11_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_11_L23
        j	.func_11_L22
.func_11_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_11_L26
        j	.func_11_L25
.func_11_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_11_L3
.func_11_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_11_L21
.func_11_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_11_L21
.func_11_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_11_L17
        j	.func_11_L16
.func_11_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_11_L24
.func_11_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_11_L24
.func_11_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_11_L18
.func_11_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_11_L27
.func_11_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_11_L27
.func_11_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_11_L18
.func_11_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_11_L35
        j	.func_11_L34
.func_11_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_11_L38
        j	.func_11_L37
.func_11_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_11_L3
.func_11_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_11_L33
.func_11_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_11_L33
.func_11_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_11_L29
        j	.func_11_L28
.func_11_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_11_L36
.func_11_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_11_L36
.func_11_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_11_L30
.func_11_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_11_L39
.func_11_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_11_L39
.func_11_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_11_L30
        .globl	func_12
        .section	.text
        .type	func_12, @function
func_12:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_12_L8
        j	.func_12_L7
.func_12_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_12_L20
        j	.func_12_L19
.func_12_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_12_L32
        j	.func_12_L31
.func_12_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_12_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_12_L11
        j	.func_12_L10
.func_12_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_12_L14
        j	.func_12_L13
.func_12_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_12_L2
        j	.func_12_L1
.func_12_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_12_L9
.func_12_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_12_L9
.func_12_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_12_L5
        j	.func_12_L4
.func_12_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_12_L12
.func_12_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_12_L12
.func_12_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_12_L6
.func_12_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_12_L15
.func_12_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_12_L15
.func_12_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_12_L6
.func_12_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_12_L23
        j	.func_12_L22
.func_12_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_12_L26
        j	.func_12_L25
.func_12_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_12_L3
.func_12_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_12_L21
.func_12_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_12_L21
.func_12_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_12_L17
        j	.func_12_L16
.func_12_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_12_L24
.func_12_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_12_L24
.func_12_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_12_L18
.func_12_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_12_L27
.func_12_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_12_L27
.func_12_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_12_L18
.func_12_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_12_L35
        j	.func_12_L34
.func_12_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_12_L38
        j	.func_12_L37
.func_12_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_12_L3
.func_12_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_12_L33
.func_12_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_12_L33
.func_12_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_12_L29
        j	.func_12_L28
.func_12_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_12_L36
.func_12_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_12_L36
.func_12_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_12_L30
.func_12_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_12_L39
.func_12_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_12_L39
.func_12_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_12_L30
        .globl	func_13
        .section	.text
        .type	func_13, @function
func_13:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_13_L8
        j	.func_13_L7
.func_13_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_13_L20
        j	.func_13_L19
.func_13_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_13_L32
        j	.func_13_L31
.func_13_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_13_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_13_L11
        j	.func_13_L10
.func_13_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_13_L14
        j	.func_13_L13
.func_13_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_13_L2
        j	.func_13_L1
.func_13_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_13_L9
.func_13_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_13_L9
.func_13_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_13_L5
        j	.func_13_L4
.func_13_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_13_L12
.func_13_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_13_L12
.func_13_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_13_L6
.func_13_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_13_L15
.func_13_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_13_L15
.func_13_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_13_L6
.func_13_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_13_L23
        j	.func_13_L22
.func_13_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_13_L26
        j	.func_13_L25
.func_13_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_13_L3
.func_13_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_13_L21
.func_13_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_13_L21
.func_13_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_13_L17
        j	.func_13_L16
.func_13_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_13_L24
.func_13_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_13_L24
.func_13_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_13_L18
.func_13_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_13_L27
.func_13_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_13_L27
.func_13_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_13_L18
.func_13_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_13_L35
        j	.func_13_L34
.func_13_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_13_L38
        j	.func_13_L37
.func_13_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_13_L3
.func_13_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_13_L33
.func_13_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_13_L33
.func_13_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_13_L29
        j	.func_13_L28
.func_13_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_13_L36
.func_13_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_13_L36
.func_13_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_13_L30
.func_13_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_13_L39
.func_13_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_13_L39
.func_13_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_13_L30
        .globl	func_14
        .section	.text
        .type	func_14, @function
func_14:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_14_L8
        j	.func_14_L7
.func_14_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_14_L20
        j	.func_14_L19
.func_14_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_14_L32
        j	.func_14_L31
.func_14_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_14_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_14_L11
        j	.func_14_L10
.func_14_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_14_L14
        j	.func_14_L13
.func_14_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_14_L2
        j	.func_14_L1
.func_14_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_14_L9
.func_14_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_14_L9
.func_14_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_14_L5
        j	.func_14_L4
.func_14_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_14_L12
.func_14_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_14_L12
.func_14_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_14_L6
.func_14_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_14_L15
.func_14_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_14_L15
.func_14_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_14_L6
.func_14_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_14_L23
        j	.func_14_L22
.func_14_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_14_L26
        j	.func_14_L25
.func_14_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_14_L3
.func_14_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_14_L21
.func_14_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_14_L21
.func_14_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_14_L17
        j	.func_14_L16
.func_14_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_14_L24
.func_14_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_14_L24
.func_14_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_14_L18
.func_14_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_14_L27
.func_14_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_14_L27
.func_14_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_14_L18
.func_14_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_14_L35
        j	.func_14_L34
.func_14_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_14_L38
        j	.func_14_L37
.func_14_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_14_L3
.func_14_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_14_L33
.func_14_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_14_L33
.func_14_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_14_L29
        j	.func_14_L28
.func_14_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_14_L36
.func_14_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_14_L36
.func_14_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_14_L30
.func_14_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_14_L39
.func_14_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_14_L39
.func_14_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_14_L30
        .globl	func_15
        .section	.text
        .type	func_15, @function
func_15:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_15_L8
        j	.func_15_L7
.func_15_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_15_L20
        j	.func_15_L19
.func_15_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_15_L32
        j	.func_15_L31
.func_15_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_15_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_15_L11
        j	.func_15_L10
.func_15_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_15_L14
        j	.func_15_L13
.func_15_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_15_L2
        j	.func_15_L1
.func_15_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_15_L9
.func_15_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_15_L9
.func_15_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_15_L5
        j	.func_15_L4
.func_15_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_15_L12
.func_15_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_15_L12
.func_15_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_15_L6
.func_15_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_15_L15
.func_15_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_15_L15
.func_15_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_15_L6
.func_15_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_15_L23
        j	.func_15_L22
.func_15_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_15_L26
        j	.func_15_L25
.func_15_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_15_L3
.func_15_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_15_L21
.func_15_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_15_L21
.func_15_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_15_L17
        j	.func_15_L16
.func_15_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_15_L24
.func_15_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_15_L24
.func_15_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_15_L18
.func_15_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_15_L27
.func_15_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_15_L27
.func_15_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_15_L18
.func_15_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_15_L35
        j	.func_15_L34
.func_15_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_15_L38
        j	.func_15_L37
.func_15_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_15_L3
.func_15_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_15_L33
.func_15_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_15_L33
.func_15_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_15_L29
        j	.func_15_L28
.func_15_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_15_L36
.func_15_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_15_L36
.func_15_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_15_L30
.func_15_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_15_L39
.func_15_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_15_L39
.func_15_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_15_L30
        .globl	func_16
        .section	.text
        .type	func_16, @function
func_16:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_16_L8
        j	.func_16_L7
.func_16_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_16_L20
        j	.func_16_L19
.func_16_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_16_L32
        j	.func_16_L31
.func_16_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_16_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_16_L11
        j	.func_16_L10
.func_16_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_16_L14
        j	.func_16_L13
.func_16_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_16_L2
        j	.func_16_L1
.func_16_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_16_L9
.func_16_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_16_L9
.func_16_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_16_L5
        j	.func_16_L4
.func_16_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_16_L12
.func_16_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_16_L12
.func_16_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_16_L6
.func_16_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_16_L15
.func_16_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_16_L15
.func_16_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_16_L6
.func_16_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_16_L23
        j	.func_16_L22
.func_16_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_16_L26
        j	.func_16_L25
.func_16_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_16_L3
.func_16_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_16_L21
.func_16_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_16_L21
.func_16_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_16_L17
        j	.func_16_L16
.func_16_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_16_L24
.func_16_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_16_L24
.func_16_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_16_L18
.func_16_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_16_L27
.func_16_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_16_L27
.func_16_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_16_L18
.func_16_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_16_L35
        j	.func_16_L34
.func_16_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_16_L38
        j	.func_16_L37
.func_16_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_16_L3
.func_16_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_16_L33
.func_16_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_16_L33
.func_16_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_16_L29
        j	.func_16_L28
.func_16_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_16_L36
.func_16_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_16_L36
.func_16_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_16_L30
.func_16_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_16_L39
.func_16_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_16_L39
.func_16_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_16_L30
        .globl	func_17
        .section	.text
        .type	func_17, @function
func_17:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_17_L8
        j	.func_17_L7
.func_17_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_17_L20
        j	.func_17_L19
.func_17_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_17_L32
        j	.func_17_L31
.func_17_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_17_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_17_L11
        j	.func_17_L10
.func_17_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_17_L14
        j	.func_17_L13
.func_17_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_17_L2
        j	.func_17_L1
.func_17_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_17_L9
.func_17_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_17_L9
.func_17_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_17_L5
        j	.func_17_L4
.func_17_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_17_L12
.func_17_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_17_L12
.func_17_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_17_L6
.func_17_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_17_L15
.func_17_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_17_L15
.func_17_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_17_L6
.func_17_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_17_L23
        j	.func_17_L22
.func_17_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_17_L26
        j	.func_17_L25
.func_17_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_17_L3
.func_17_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_17_L21
.func_17_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_17_L21
.func_17_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_17_L17
        j	.func_17_L16
.func_17_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_17_L24
.func_17_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_17_L24
.func_17_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_17_L18
.func_17_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_17_L27
.func_17_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_17_L27
.func_17_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_17_L18
.func_17_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_17_L35
        j	.func_17_L34
.func_17_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_17_L38
        j	.func_17_L37
.func_17_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_17_L3
.func_17_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_17_L33
.func_17_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_17_L33
.func_17_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_17_L29
        j	.func_17_L28
.func_17_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_17_L36
.func_17_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_17_L36
.func_17_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_17_L30
.func_17_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_17_L39
.func_17_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_17_L39
.func_17_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_17_L30
        .globl	func_18
        .section	.text
        .type	func_18, @function
func_18:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_18_L8
        j	.func_18_L7
.func_18_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_18_L20
        j	.func_18_L19
.func_18_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_18_L32
        j	.func_18_L31
.func_18_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_18_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_18_L11
        j	.func_18_L10
.func_18_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_18_L14
        j	.func_18_L13
.func_18_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_18_L2
        j	.func_18_L1
.func_18_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_18_L9
.func_18_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_18_L9
.func_18_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_18_L5
        j	.func_18_L4
.func_18_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_18_L12
.func_18_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_18_L12
.func_18_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_18_L6
.func_18_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_18_L15
.func_18_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_18_L15
.func_18_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_18_L6
.func_18_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_18_L23
        j	.func_18_L22
.func_18_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_18_L26
        j	.func_18_L25
.func_18_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_18_L3
.func_18_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_18_L21
.func_18_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_18_L21
.func_18_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_18_L17
        j	.func_18_L16
.func_18_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_18_L24
.func_18_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_18_L24
.func_18_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_18_L18
.func_18_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_18_L27
.func_18_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_18_L27
.func_18_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_18_L18
.func_18_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_18_L35
        j	.func_18_L34
.func_18_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_18_L38
        j	.func_18_L37
.func_18_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_18_L3
.func_18_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_18_L33
.func_18_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_18_L33
.func_18_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_18_L29
        j	.func_18_L28
.func_18_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_18_L36
.func_18_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_18_L36
.func_18_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_18_L30
.func_18_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_18_L39
.func_18_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_18_L39
.func_18_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_18_L30
        .globl	func_19
        .section	.text
        .type	func_19, @function
func_19:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_19_L8
        j	.func_19_L7
.func_19_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_19_L20
        j	.func_19_L19
.func_19_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_19_L32
        j	.func_19_L31
.func_19_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_19_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_19_L11
        j	.func_19_L10
.func_19_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_19_L14
        j	.func_19_L13
.func_19_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_19_L2
        j	.func_19_L1
.func_19_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_19_L9
.func_19_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_19_L9
.func_19_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_19_L5
        j	.func_19_L4
.func_19_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_19_L12
.func_19_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_19_L12
.func_19_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_19_L6
.func_19_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_19_L15
.func_19_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_19_L15
.func_19_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_19_L6
.func_19_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_19_L23
        j	.func_19_L22
.func_19_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_19_L26
        j	.func_19_L25
.func_19_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_19_L3
.func_19_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_19_L21
.func_19_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_19_L21
.func_19_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_19_L17
        j	.func_19_L16
.func_19_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_19_L24
.func_19_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_19_L24
.func_19_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_19_L18
.func_19_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_19_L27
.func_19_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_19_L27
.func_19_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_19_L18
.func_19_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_19_L35
        j	.func_19_L34
.func_19_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_19_L38
        j	.func_19_L37
.func_19_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_19_L3
.func_19_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_19_L33
.func_19_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_19_L33
.func_19_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_19_L29
        j	.func_19_L28
.func_19_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_19_L36
.func_19_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_19_L36
.func_19_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_19_L30
.func_19_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_19_L39
.func_19_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_19_L39
.func_19_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_19_L30
        .globl	func_2
        .section	.text
        .type	func_2, @function
func_2:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_2_L8
        j	.func_2_L7
.func_2_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_2_L20
        j	.func_2_L19
.func_2_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_2_L32
        j	.func_2_L31
.func_2_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_2_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_2_L11
        j	.func_2_L10
.func_2_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_2_L14
        j	.func_2_L13
.func_2_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_2_L2
        j	.func_2_L1
.func_2_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_2_L9
.func_2_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_2_L9
.func_2_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_2_L5
        j	.func_2_L4
.func_2_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_2_L12
.func_2_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_2_L12
.func_2_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_2_L6
.func_2_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_2_L15
.func_2_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_2_L15
.func_2_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_2_L6
.func_2_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_2_L23
        j	.func_2_L22
.func_2_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_2_L26
        j	.func_2_L25
.func_2_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_2_L3
.func_2_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_2_L21
.func_2_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_2_L21
.func_2_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_2_L17
        j	.func_2_L16
.func_2_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_2_L24
.func_2_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_2_L24
.func_2_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_2_L18
.func_2_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_2_L27
.func_2_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_2_L27
.func_2_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_2_L18
.func_2_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_2_L35
        j	.func_2_L34
.func_2_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_2_L38
        j	.func_2_L37
.func_2_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_2_L3
.func_2_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_2_L33
.func_2_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_2_L33
.func_2_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_2_L29
        j	.func_2_L28
.func_2_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_2_L36
.func_2_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_2_L36
.func_2_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_2_L30
.func_2_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_2_L39
.func_2_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_2_L39
.func_2_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_2_L30
        .globl	func_20
        .section	.text
        .type	func_20, @function
func_20:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_20_L8
        j	.func_20_L7
.func_20_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_20_L20
        j	.func_20_L19
.func_20_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_20_L32
        j	.func_20_L31
.func_20_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_20_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_20_L11
        j	.func_20_L10
.func_20_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_20_L14
        j	.func_20_L13
.func_20_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_20_L2
        j	.func_20_L1
.func_20_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_20_L9
.func_20_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_20_L9
.func_20_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_20_L5
        j	.func_20_L4
.func_20_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_20_L12
.func_20_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_20_L12
.func_20_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_20_L6
.func_20_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_20_L15
.func_20_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_20_L15
.func_20_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_20_L6
.func_20_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_20_L23
        j	.func_20_L22
.func_20_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_20_L26
        j	.func_20_L25
.func_20_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_20_L3
.func_20_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_20_L21
.func_20_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_20_L21
.func_20_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_20_L17
        j	.func_20_L16
.func_20_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_20_L24
.func_20_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_20_L24
.func_20_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_20_L18
.func_20_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_20_L27
.func_20_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_20_L27
.func_20_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_20_L18
.func_20_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_20_L35
        j	.func_20_L34
.func_20_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_20_L38
        j	.func_20_L37
.func_20_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_20_L3
.func_20_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_20_L33
.func_20_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_20_L33
.func_20_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_20_L29
        j	.func_20_L28
.func_20_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_20_L36
.func_20_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_20_L36
.func_20_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_20_L30
.func_20_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_20_L39
.func_20_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_20_L39
.func_20_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_20_L30
        .globl	func_21
        .section	.text
        .type	func_21, @function
func_21:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_21_L8
        j	.func_21_L7
.func_21_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_21_L20
        j	.func_21_L19
.func_21_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_21_L32
        j	.func_21_L31
.func_21_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_21_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_21_L11
        j	.func_21_L10
.func_21_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_21_L14
        j	.func_21_L13
.func_21_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_21_L2
        j	.func_21_L1
.func_21_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_21_L9
.func_21_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_21_L9
.func_21_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_21_L5
        j	.func_21_L4
.func_21_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_21_L12
.func_21_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_21_L12
.func_21_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_21_L6
.func_21_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_21_L15
.func_21_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_21_L15
.func_21_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_21_L6
.func_21_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_21_L23
        j	.func_21_L22
.func_21_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_21_L26
        j	.func_21_L25
.func_21_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_21_L3
.func_21_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_21_L21
.func_21_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_21_L21
.func_21_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_21_L17
        j	.func_21_L16
.func_21_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_21_L24
.func_21_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_21_L24
.func_21_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_21_L18
.func_21_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_21_L27
.func_21_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_21_L27
.func_21_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_21_L18
.func_21_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_21_L35
        j	.func_21_L34
.func_21_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_21_L38
        j	.func_21_L37
.func_21_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_21_L3
.func_21_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_21_L33
.func_21_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_21_L33
.func_21_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_21_L29
        j	.func_21_L28
.func_21_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_21_L36
.func_21_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_21_L36
.func_21_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_21_L30
.func_21_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_21_L39
.func_21_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_21_L39
.func_21_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_21_L30
        .globl	func_22
        .section	.text
        .type	func_22, @function
func_22:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_22_L8
        j	.func_22_L7
.func_22_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_22_L20
        j	.func_22_L19
.func_22_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_22_L32
        j	.func_22_L31
.func_22_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_22_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_22_L11
        j	.func_22_L10
.func_22_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_22_L14
        j	.func_22_L13
.func_22_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_22_L2
        j	.func_22_L1
.func_22_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_22_L9
.func_22_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_22_L9
.func_22_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_22_L5
        j	.func_22_L4
.func_22_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_22_L12
.func_22_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_22_L12
.func_22_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_22_L6
.func_22_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_22_L15
.func_22_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_22_L15
.func_22_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_22_L6
.func_22_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_22_L23
        j	.func_22_L22
.func_22_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_22_L26
        j	.func_22_L25
.func_22_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_22_L3
.func_22_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_22_L21
.func_22_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_22_L21
.func_22_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_22_L17
        j	.func_22_L16
.func_22_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_22_L24
.func_22_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_22_L24
.func_22_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_22_L18
.func_22_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_22_L27
.func_22_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_22_L27
.func_22_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_22_L18
.func_22_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_22_L35
        j	.func_22_L34
.func_22_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_22_L38
        j	.func_22_L37
.func_22_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_22_L3
.func_22_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_22_L33
.func_22_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_22_L33
.func_22_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_22_L29
        j	.func_22_L28
.func_22_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_22_L36
.func_22_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_22_L36
.func_22_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_22_L30
.func_22_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_22_L39
.func_22_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_22_L39
.func_22_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_22_L30
        .globl	func_23
        .section	.text
        .type	func_23, @function
func_23:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_23_L8
        j	.func_23_L7
.func_23_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_23_L20
        j	.func_23_L19
.func_23_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_23_L32
        j	.func_23_L31
.func_23_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_23_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_23_L11
        j	.func_23_L10
.func_23_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_23_L14
        j	.func_23_L13
.func_23_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_23_L2
        j	.func_23_L1
.func_23_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_23_L9
.func_23_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_23_L9
.func_23_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_23_L5
        j	.func_23_L4
.func_23_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_23_L12
.func_23_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_23_L12
.func_23_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_23_L6
.func_23_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_23_L15
.func_23_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_23_L15
.func_23_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_23_L6
.func_23_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_23_L23
        j	.func_23_L22
.func_23_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_23_L26
        j	.func_23_L25
.func_23_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_23_L3
.func_23_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_23_L21
.func_23_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_23_L21
.func_23_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_23_L17
        j	.func_23_L16
.func_23_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_23_L24
.func_23_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_23_L24
.func_23_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_23_L18
.func_23_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_23_L27
.func_23_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_23_L27
.func_23_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_23_L18
.func_23_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_23_L35
        j	.func_23_L34
.func_23_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_23_L38
        j	.func_23_L37
.func_23_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_23_L3
.func_23_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_23_L33
.func_23_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_23_L33
.func_23_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_23_L29
        j	.func_23_L28
.func_23_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_23_L36
.func_23_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_23_L36
.func_23_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_23_L30
.func_23_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_23_L39
.func_23_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_23_L39
.func_23_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_23_L30
        .globl	func_24
        .section	.text
        .type	func_24, @function
func_24:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_24_L8
        j	.func_24_L7
.func_24_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_24_L20
        j	.func_24_L19
.func_24_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_24_L32
        j	.func_24_L31
.func_24_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_24_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_24_L11
        j	.func_24_L10
.func_24_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_24_L14
        j	.func_24_L13
.func_24_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_24_L2
        j	.func_24_L1
.func_24_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_24_L9
.func_24_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_24_L9
.func_24_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_24_L5
        j	.func_24_L4
.func_24_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_24_L12
.func_24_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_24_L12
.func_24_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_24_L6
.func_24_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_24_L15
.func_24_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_24_L15
.func_24_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_24_L6
.func_24_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_24_L23
        j	.func_24_L22
.func_24_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_24_L26
        j	.func_24_L25
.func_24_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_24_L3
.func_24_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_24_L21
.func_24_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_24_L21
.func_24_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_24_L17
        j	.func_24_L16
.func_24_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_24_L24
.func_24_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_24_L24
.func_24_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_24_L18
.func_24_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_24_L27
.func_24_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_24_L27
.func_24_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_24_L18
.func_24_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_24_L35
        j	.func_24_L34
.func_24_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_24_L38
        j	.func_24_L37
.func_24_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_24_L3
.func_24_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_24_L33
.func_24_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_24_L33
.func_24_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_24_L29
        j	.func_24_L28
.func_24_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_24_L36
.func_24_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_24_L36
.func_24_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_24_L30
.func_24_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_24_L39
.func_24_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_24_L39
.func_24_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_24_L30
        .globl	func_25
        .section	.text
        .type	func_25, @function
func_25:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_25_L8
        j	.func_25_L7
.func_25_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_25_L20
        j	.func_25_L19
.func_25_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_25_L32
        j	.func_25_L31
.func_25_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_25_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_25_L11
        j	.func_25_L10
.func_25_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_25_L14
        j	.func_25_L13
.func_25_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_25_L2
        j	.func_25_L1
.func_25_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_25_L9
.func_25_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_25_L9
.func_25_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_25_L5
        j	.func_25_L4
.func_25_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_25_L12
.func_25_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_25_L12
.func_25_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_25_L6
.func_25_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_25_L15
.func_25_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_25_L15
.func_25_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_25_L6
.func_25_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_25_L23
        j	.func_25_L22
.func_25_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_25_L26
        j	.func_25_L25
.func_25_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_25_L3
.func_25_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_25_L21
.func_25_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_25_L21
.func_25_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_25_L17
        j	.func_25_L16
.func_25_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_25_L24
.func_25_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_25_L24
.func_25_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_25_L18
.func_25_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_25_L27
.func_25_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_25_L27
.func_25_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_25_L18
.func_25_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_25_L35
        j	.func_25_L34
.func_25_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_25_L38
        j	.func_25_L37
.func_25_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_25_L3
.func_25_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_25_L33
.func_25_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_25_L33
.func_25_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_25_L29
        j	.func_25_L28
.func_25_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_25_L36
.func_25_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_25_L36
.func_25_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_25_L30
.func_25_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_25_L39
.func_25_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_25_L39
.func_25_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_25_L30
        .globl	func_26
        .section	.text
        .type	func_26, @function
func_26:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_26_L8
        j	.func_26_L7
.func_26_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_26_L20
        j	.func_26_L19
.func_26_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_26_L32
        j	.func_26_L31
.func_26_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_26_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_26_L11
        j	.func_26_L10
.func_26_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_26_L14
        j	.func_26_L13
.func_26_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_26_L2
        j	.func_26_L1
.func_26_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_26_L9
.func_26_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_26_L9
.func_26_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_26_L5
        j	.func_26_L4
.func_26_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_26_L12
.func_26_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_26_L12
.func_26_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_26_L6
.func_26_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_26_L15
.func_26_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_26_L15
.func_26_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_26_L6
.func_26_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_26_L23
        j	.func_26_L22
.func_26_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_26_L26
        j	.func_26_L25
.func_26_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_26_L3
.func_26_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_26_L21
.func_26_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_26_L21
.func_26_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_26_L17
        j	.func_26_L16
.func_26_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_26_L24
.func_26_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_26_L24
.func_26_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_26_L18
.func_26_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_26_L27
.func_26_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_26_L27
.func_26_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_26_L18
.func_26_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_26_L35
        j	.func_26_L34
.func_26_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_26_L38
        j	.func_26_L37
.func_26_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_26_L3
.func_26_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_26_L33
.func_26_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_26_L33
.func_26_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_26_L29
        j	.func_26_L28
.func_26_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_26_L36
.func_26_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_26_L36
.func_26_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_26_L30
.func_26_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_26_L39
.func_26_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_26_L39
.func_26_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_26_L30
        .globl	func_27
        .section	.text
        .type	func_27, @function
func_27:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_27_L8
        j	.func_27_L7
.func_27_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_27_L20
        j	.func_27_L19
.func_27_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_27_L32
        j	.func_27_L31
.func_27_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_27_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_27_L11
        j	.func_27_L10
.func_27_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_27_L14
        j	.func_27_L13
.func_27_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_27_L2
        j	.func_27_L1
.func_27_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_27_L9
.func_27_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_27_L9
.func_27_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_27_L5
        j	.func_27_L4
.func_27_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_27_L12
.func_27_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_27_L12
.func_27_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_27_L6
.func_27_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_27_L15
.func_27_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_27_L15
.func_27_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_27_L6
.func_27_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_27_L23
        j	.func_27_L22
.func_27_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_27_L26
        j	.func_27_L25
.func_27_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_27_L3
.func_27_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_27_L21
.func_27_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_27_L21
.func_27_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_27_L17
        j	.func_27_L16
.func_27_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_27_L24
.func_27_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_27_L24
.func_27_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_27_L18
.func_27_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_27_L27
.func_27_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_27_L27
.func_27_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_27_L18
.func_27_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_27_L35
        j	.func_27_L34
.func_27_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_27_L38
        j	.func_27_L37
.func_27_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_27_L3
.func_27_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_27_L33
.func_27_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_27_L33
.func_27_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_27_L29
        j	.func_27_L28
.func_27_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_27_L36
.func_27_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_27_L36
.func_27_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_27_L30
.func_27_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_27_L39
.func_27_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_27_L39
.func_27_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_27_L30
        .globl	func_28
        .section	.text
        .type	func_28, @function
func_28:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_28_L8
        j	.func_28_L7
.func_28_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_28_L20
        j	.func_28_L19
.func_28_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_28_L32
        j	.func_28_L31
.func_28_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_28_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_28_L11
        j	.func_28_L10
.func_28_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_28_L14
        j	.func_28_L13
.func_28_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_28_L2
        j	.func_28_L1
.func_28_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_28_L9
.func_28_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_28_L9
.func_28_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_28_L5
        j	.func_28_L4
.func_28_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_28_L12
.func_28_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_28_L12
.func_28_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_28_L6
.func_28_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_28_L15
.func_28_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_28_L15
.func_28_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_28_L6
.func_28_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_28_L23
        j	.func_28_L22
.func_28_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_28_L26
        j	.func_28_L25
.func_28_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_28_L3
.func_28_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_28_L21
.func_28_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_28_L21
.func_28_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_28_L17
        j	.func_28_L16
.func_28_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_28_L24
.func_28_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_28_L24
.func_28_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_28_L18
.func_28_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_28_L27
.func_28_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_28_L27
.func_28_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_28_L18
.func_28_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_28_L35
        j	.func_28_L34
.func_28_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_28_L38
        j	.func_28_L37
.func_28_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_28_L3
.func_28_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_28_L33
.func_28_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_28_L33
.func_28_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_28_L29
        j	.func_28_L28
.func_28_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_28_L36
.func_28_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_28_L36
.func_28_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_28_L30
.func_28_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_28_L39
.func_28_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_28_L39
.func_28_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_28_L30
        .globl	func_29
        .section	.text
        .type	func_29, @function
func_29:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_29_L8
        j	.func_29_L7
.func_29_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_29_L20
        j	.func_29_L19
.func_29_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_29_L32
        j	.func_29_L31
.func_29_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_29_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_29_L11
        j	.func_29_L10
.func_29_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_29_L14
        j	.func_29_L13
.func_29_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_29_L2
        j	.func_29_L1
.func_29_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_29_L9
.func_29_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_29_L9
.func_29_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_29_L5
        j	.func_29_L4
.func_29_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_29_L12
.func_29_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_29_L12
.func_29_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_29_L6
.func_29_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_29_L15
.func_29_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_29_L15
.func_29_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_29_L6
.func_29_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_29_L23
        j	.func_29_L22
.func_29_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_29_L26
        j	.func_29_L25
.func_29_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_29_L3
.func_29_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_29_L21
.func_29_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_29_L21
.func_29_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_29_L17
        j	.func_29_L16
.func_29_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_29_L24
.func_29_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_29_L24
.func_29_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_29_L18
.func_29_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_29_L27
.func_29_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_29_L27
.func_29_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_29_L18
.func_29_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_29_L35
        j	.func_29_L34
.func_29_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_29_L38
        j	.func_29_L37
.func_29_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_29_L3
.func_29_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_29_L33
.func_29_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_29_L33
.func_29_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_29_L29
        j	.func_29_L28
.func_29_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_29_L36
.func_29_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_29_L36
.func_29_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_29_L30
.func_29_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_29_L39
.func_29_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_29_L39
.func_29_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_29_L30
        .globl	func_3
        .section	.text
        .type	func_3, @function
func_3:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_3_L8
        j	.func_3_L7
.func_3_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_3_L20
        j	.func_3_L19
.func_3_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_3_L32
        j	.func_3_L31
.func_3_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_3_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_3_L11
        j	.func_3_L10
.func_3_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_3_L14
        j	.func_3_L13
.func_3_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_3_L2
        j	.func_3_L1
.func_3_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_3_L9
.func_3_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_3_L9
.func_3_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_3_L5
        j	.func_3_L4
.func_3_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_3_L12
.func_3_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_3_L12
.func_3_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_3_L6
.func_3_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_3_L15
.func_3_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_3_L15
.func_3_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_3_L6
.func_3_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_3_L23
        j	.func_3_L22
.func_3_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_3_L26
        j	.func_3_L25
.func_3_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_3_L3
.func_3_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_3_L21
.func_3_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_3_L21
.func_3_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_3_L17
        j	.func_3_L16
.func_3_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_3_L24
.func_3_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_3_L24
.func_3_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_3_L18
.func_3_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_3_L27
.func_3_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_3_L27
.func_3_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_3_L18
.func_3_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_3_L35
        j	.func_3_L34
.func_3_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_3_L38
        j	.func_3_L37
.func_3_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_3_L3
.func_3_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_3_L33
.func_3_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_3_L33
.func_3_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_3_L29
        j	.func_3_L28
.func_3_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_3_L36
.func_3_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_3_L36
.func_3_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_3_L30
.func_3_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_3_L39
.func_3_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_3_L39
.func_3_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_3_L30
        .globl	func_30
        .section	.text
        .type	func_30, @function
func_30:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_30_L8
        j	.func_30_L7
.func_30_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_30_L20
        j	.func_30_L19
.func_30_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_30_L32
        j	.func_30_L31
.func_30_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_30_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_30_L11
        j	.func_30_L10
.func_30_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_30_L14
        j	.func_30_L13
.func_30_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_30_L2
        j	.func_30_L1
.func_30_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_30_L9
.func_30_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_30_L9
.func_30_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_30_L5
        j	.func_30_L4
.func_30_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_30_L12
.func_30_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_30_L12
.func_30_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_30_L6
.func_30_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_30_L15
.func_30_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_30_L15
.func_30_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_30_L6
.func_30_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_30_L23
        j	.func_30_L22
.func_30_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_30_L26
        j	.func_30_L25
.func_30_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_30_L3
.func_30_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_30_L21
.func_30_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_30_L21
.func_30_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_30_L17
        j	.func_30_L16
.func_30_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_30_L24
.func_30_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_30_L24
.func_30_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_30_L18
.func_30_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_30_L27
.func_30_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_30_L27
.func_30_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_30_L18
.func_30_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_30_L35
        j	.func_30_L34
.func_30_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_30_L38
        j	.func_30_L37
.func_30_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_30_L3
.func_30_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_30_L33
.func_30_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_30_L33
.func_30_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_30_L29
        j	.func_30_L28
.func_30_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_30_L36
.func_30_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_30_L36
.func_30_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_30_L30
.func_30_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_30_L39
.func_30_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_30_L39
.func_30_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_30_L30
        .globl	func_31
        .section	.text
        .type	func_31, @function
func_31:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_31_L8
        j	.func_31_L7
.func_31_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_31_L20
        j	.func_31_L19
.func_31_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_31_L32
        j	.func_31_L31
.func_31_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_31_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_31_L11
        j	.func_31_L10
.func_31_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_31_L14
        j	.func_31_L13
.func_31_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_31_L2
        j	.func_31_L1
.func_31_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_31_L9
.func_31_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_31_L9
.func_31_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_31_L5
        j	.func_31_L4
.func_31_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_31_L12
.func_31_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_31_L12
.func_31_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_31_L6
.func_31_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_31_L15
.func_31_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_31_L15
.func_31_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_31_L6
.func_31_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_31_L23
        j	.func_31_L22
.func_31_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_31_L26
        j	.func_31_L25
.func_31_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_31_L3
.func_31_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_31_L21
.func_31_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_31_L21
.func_31_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_31_L17
        j	.func_31_L16
.func_31_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_31_L24
.func_31_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_31_L24
.func_31_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_31_L18
.func_31_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_31_L27
.func_31_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_31_L27
.func_31_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_31_L18
.func_31_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_31_L35
        j	.func_31_L34
.func_31_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_31_L38
        j	.func_31_L37
.func_31_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_31_L3
.func_31_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_31_L33
.func_31_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_31_L33
.func_31_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_31_L29
        j	.func_31_L28
.func_31_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_31_L36
.func_31_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_31_L36
.func_31_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_31_L30
.func_31_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_31_L39
.func_31_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_31_L39
.func_31_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_31_L30
        .globl	func_32
        .section	.text
        .type	func_32, @function
func_32:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_32_L8
        j	.func_32_L7
.func_32_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_32_L20
        j	.func_32_L19
.func_32_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_32_L32
        j	.func_32_L31
.func_32_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_32_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_32_L11
        j	.func_32_L10
.func_32_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_32_L14
        j	.func_32_L13
.func_32_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_32_L2
        j	.func_32_L1
.func_32_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_32_L9
.func_32_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_32_L9
.func_32_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_32_L5
        j	.func_32_L4
.func_32_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_32_L12
.func_32_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_32_L12
.func_32_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_32_L6
.func_32_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_32_L15
.func_32_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_32_L15
.func_32_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_32_L6
.func_32_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_32_L23
        j	.func_32_L22
.func_32_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_32_L26
        j	.func_32_L25
.func_32_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_32_L3
.func_32_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_32_L21
.func_32_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_32_L21
.func_32_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_32_L17
        j	.func_32_L16
.func_32_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_32_L24
.func_32_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_32_L24
.func_32_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_32_L18
.func_32_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_32_L27
.func_32_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_32_L27
.func_32_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_32_L18
.func_32_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_32_L35
        j	.func_32_L34
.func_32_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_32_L38
        j	.func_32_L37
.func_32_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_32_L3
.func_32_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_32_L33
.func_32_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_32_L33
.func_32_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_32_L29
        j	.func_32_L28
.func_32_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_32_L36
.func_32_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_32_L36
.func_32_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_32_L30
.func_32_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_32_L39
.func_32_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_32_L39
.func_32_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_32_L30
        .globl	func_33
        .section	.text
        .type	func_33, @function
func_33:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_33_L8
        j	.func_33_L7
.func_33_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_33_L20
        j	.func_33_L19
.func_33_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_33_L32
        j	.func_33_L31
.func_33_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_33_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_33_L11
        j	.func_33_L10
.func_33_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_33_L14
        j	.func_33_L13
.func_33_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_33_L2
        j	.func_33_L1
.func_33_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_33_L9
.func_33_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_33_L9
.func_33_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_33_L5
        j	.func_33_L4
.func_33_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_33_L12
.func_33_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_33_L12
.func_33_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_33_L6
.func_33_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_33_L15
.func_33_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_33_L15
.func_33_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_33_L6
.func_33_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_33_L23
        j	.func_33_L22
.func_33_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_33_L26
        j	.func_33_L25
.func_33_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_33_L3
.func_33_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_33_L21
.func_33_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_33_L21
.func_33_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_33_L17
        j	.func_33_L16
.func_33_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_33_L24
.func_33_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_33_L24
.func_33_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_33_L18
.func_33_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_33_L27
.func_33_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_33_L27
.func_33_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_33_L18
.func_33_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_33_L35
        j	.func_33_L34
.func_33_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_33_L38
        j	.func_33_L37
.func_33_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_33_L3
.func_33_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_33_L33
.func_33_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_33_L33
.func_33_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_33_L29
        j	.func_33_L28
.func_33_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_33_L36
.func_33_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_33_L36
.func_33_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_33_L30
.func_33_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_33_L39
.func_33_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_33_L39
.func_33_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_33_L30
        .globl	func_34
        .section	.text
        .type	func_34, @function
func_34:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_34_L8
        j	.func_34_L7
.func_34_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_34_L20
        j	.func_34_L19
.func_34_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_34_L32
        j	.func_34_L31
.func_34_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_34_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_34_L11
        j	.func_34_L10
.func_34_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_34_L14
        j	.func_34_L13
.func_34_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_34_L2
        j	.func_34_L1
.func_34_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_34_L9
.func_34_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_34_L9
.func_34_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_34_L5
        j	.func_34_L4
.func_34_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_34_L12
.func_34_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_34_L12
.func_34_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_34_L6
.func_34_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_34_L15
.func_34_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_34_L15
.func_34_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_34_L6
.func_34_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_34_L23
        j	.func_34_L22
.func_34_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_34_L26
        j	.func_34_L25
.func_34_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_34_L3
.func_34_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_34_L21
.func_34_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_34_L21
.func_34_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_34_L17
        j	.func_34_L16
.func_34_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_34_L24
.func_34_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_34_L24
.func_34_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_34_L18
.func_34_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_34_L27
.func_34_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_34_L27
.func_34_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_34_L18
.func_34_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_34_L35
        j	.func_34_L34
.func_34_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_34_L38
        j	.func_34_L37
.func_34_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_34_L3
.func_34_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_34_L33
.func_34_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_34_L33
.func_34_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_34_L29
        j	.func_34_L28
.func_34_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_34_L36
.func_34_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_34_L36
.func_34_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_34_L30
.func_34_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_34_L39
.func_34_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_34_L39
.func_34_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_34_L30
        .globl	func_35
        .section	.text
        .type	func_35, @function
func_35:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_35_L8
        j	.func_35_L7
.func_35_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_35_L20
        j	.func_35_L19
.func_35_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_35_L32
        j	.func_35_L31
.func_35_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_35_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_35_L11
        j	.func_35_L10
.func_35_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_35_L14
        j	.func_35_L13
.func_35_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_35_L2
        j	.func_35_L1
.func_35_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_35_L9
.func_35_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_35_L9
.func_35_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_35_L5
        j	.func_35_L4
.func_35_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_35_L12
.func_35_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_35_L12
.func_35_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_35_L6
.func_35_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_35_L15
.func_35_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_35_L15
.func_35_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_35_L6
.func_35_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_35_L23
        j	.func_35_L22
.func_35_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_35_L26
        j	.func_35_L25
.func_35_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_35_L3
.func_35_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_35_L21
.func_35_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_35_L21
.func_35_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_35_L17
        j	.func_35_L16
.func_35_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_35_L24
.func_35_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_35_L24
.func_35_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_35_L18
.func_35_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_35_L27
.func_35_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_35_L27
.func_35_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_35_L18
.func_35_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_35_L35
        j	.func_35_L34
.func_35_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_35_L38
        j	.func_35_L37
.func_35_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_35_L3
.func_35_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_35_L33
.func_35_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_35_L33
.func_35_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_35_L29
        j	.func_35_L28
.func_35_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_35_L36
.func_35_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_35_L36
.func_35_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_35_L30
.func_35_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_35_L39
.func_35_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_35_L39
.func_35_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_35_L30
        .globl	func_36
        .section	.text
        .type	func_36, @function
func_36:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_36_L8
        j	.func_36_L7
.func_36_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_36_L20
        j	.func_36_L19
.func_36_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_36_L32
        j	.func_36_L31
.func_36_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_36_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_36_L11
        j	.func_36_L10
.func_36_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_36_L14
        j	.func_36_L13
.func_36_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_36_L2
        j	.func_36_L1
.func_36_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_36_L9
.func_36_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_36_L9
.func_36_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_36_L5
        j	.func_36_L4
.func_36_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_36_L12
.func_36_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_36_L12
.func_36_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_36_L6
.func_36_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_36_L15
.func_36_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_36_L15
.func_36_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_36_L6
.func_36_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_36_L23
        j	.func_36_L22
.func_36_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_36_L26
        j	.func_36_L25
.func_36_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_36_L3
.func_36_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_36_L21
.func_36_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_36_L21
.func_36_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_36_L17
        j	.func_36_L16
.func_36_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_36_L24
.func_36_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_36_L24
.func_36_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_36_L18
.func_36_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_36_L27
.func_36_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_36_L27
.func_36_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_36_L18
.func_36_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_36_L35
        j	.func_36_L34
.func_36_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_36_L38
        j	.func_36_L37
.func_36_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_36_L3
.func_36_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_36_L33
.func_36_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_36_L33
.func_36_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_36_L29
        j	.func_36_L28
.func_36_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_36_L36
.func_36_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_36_L36
.func_36_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_36_L30
.func_36_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_36_L39
.func_36_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_36_L39
.func_36_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_36_L30
        .globl	func_37
        .section	.text
        .type	func_37, @function
func_37:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_37_L8
        j	.func_37_L7
.func_37_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_37_L20
        j	.func_37_L19
.func_37_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_37_L32
        j	.func_37_L31
.func_37_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_37_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_37_L11
        j	.func_37_L10
.func_37_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_37_L14
        j	.func_37_L13
.func_37_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_37_L2
        j	.func_37_L1
.func_37_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_37_L9
.func_37_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_37_L9
.func_37_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_37_L5
        j	.func_37_L4
.func_37_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_37_L12
.func_37_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_37_L12
.func_37_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_37_L6
.func_37_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_37_L15
.func_37_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_37_L15
.func_37_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_37_L6
.func_37_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_37_L23
        j	.func_37_L22
.func_37_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_37_L26
        j	.func_37_L25
.func_37_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_37_L3
.func_37_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_37_L21
.func_37_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_37_L21
.func_37_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_37_L17
        j	.func_37_L16
.func_37_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_37_L24
.func_37_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_37_L24
.func_37_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_37_L18
.func_37_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_37_L27
.func_37_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_37_L27
.func_37_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_37_L18
.func_37_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_37_L35
        j	.func_37_L34
.func_37_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_37_L38
        j	.func_37_L37
.func_37_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_37_L3
.func_37_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_37_L33
.func_37_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_37_L33
.func_37_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_37_L29
        j	.func_37_L28
.func_37_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_37_L36
.func_37_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_37_L36
.func_37_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_37_L30
.func_37_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_37_L39
.func_37_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_37_L39
.func_37_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_37_L30
        .globl	func_38
        .section	.text
        .type	func_38, @function
func_38:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_38_L8
        j	.func_38_L7
.func_38_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_38_L20
        j	.func_38_L19
.func_38_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_38_L32
        j	.func_38_L31
.func_38_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_38_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_38_L11
        j	.func_38_L10
.func_38_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_38_L14
        j	.func_38_L13
.func_38_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_38_L2
        j	.func_38_L1
.func_38_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_38_L9
.func_38_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_38_L9
.func_38_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_38_L5
        j	.func_38_L4
.func_38_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_38_L12
.func_38_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_38_L12
.func_38_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_38_L6
.func_38_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_38_L15
.func_38_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_38_L15
.func_38_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_38_L6
.func_38_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_38_L23
        j	.func_38_L22
.func_38_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_38_L26
        j	.func_38_L25
.func_38_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_38_L3
.func_38_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_38_L21
.func_38_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_38_L21
.func_38_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_38_L17
        j	.func_38_L16
.func_38_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_38_L24
.func_38_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_38_L24
.func_38_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_38_L18
.func_38_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_38_L27
.func_38_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_38_L27
.func_38_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_38_L18
.func_38_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_38_L35
        j	.func_38_L34
.func_38_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_38_L38
        j	.func_38_L37
.func_38_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_38_L3
.func_38_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_38_L33
.func_38_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_38_L33
.func_38_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_38_L29
        j	.func_38_L28
.func_38_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_38_L36
.func_38_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_38_L36
.func_38_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_38_L30
.func_38_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_38_L39
.func_38_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_38_L39
.func_38_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_38_L30
        .globl	func_39
        .section	.text
        .type	func_39, @function
func_39:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_39_L8
        j	.func_39_L7
.func_39_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_39_L20
        j	.func_39_L19
.func_39_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_39_L32
        j	.func_39_L31
.func_39_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_39_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_39_L11
        j	.func_39_L10
.func_39_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_39_L14
        j	.func_39_L13
.func_39_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_39_L2
        j	.func_39_L1
.func_39_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_39_L9
.func_39_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_39_L9
.func_39_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_39_L5
        j	.func_39_L4
.func_39_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_39_L12
.func_39_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_39_L12
.func_39_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_39_L6
.func_39_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_39_L15
.func_39_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_39_L15
.func_39_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_39_L6
.func_39_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_39_L23
        j	.func_39_L22
.func_39_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_39_L26
        j	.func_39_L25
.func_39_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_39_L3
.func_39_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_39_L21
.func_39_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_39_L21
.func_39_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_39_L17
        j	.func_39_L16
.func_39_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_39_L24
.func_39_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_39_L24
.func_39_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_39_L18
.func_39_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_39_L27
.func_39_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_39_L27
.func_39_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_39_L18
.func_39_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_39_L35
        j	.func_39_L34
.func_39_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_39_L38
        j	.func_39_L37
.func_39_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_39_L3
.func_39_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_39_L33
.func_39_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_39_L33
.func_39_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_39_L29
        j	.func_39_L28
.func_39_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_39_L36
.func_39_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_39_L36
.func_39_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_39_L30
.func_39_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_39_L39
.func_39_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_39_L39
.func_39_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_39_L30
        .globl	func_4
        .section	.text
        .type	func_4, @function
func_4:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_4_L8
        j	.func_4_L7
.func_4_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_4_L20
        j	.func_4_L19
.func_4_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_4_L32
        j	.func_4_L31
.func_4_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_4_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_4_L11
        j	.func_4_L10
.func_4_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_4_L14
        j	.func_4_L13
.func_4_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_4_L2
        j	.func_4_L1
.func_4_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_4_L9
.func_4_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_4_L9
.func_4_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_4_L5
        j	.func_4_L4
.func_4_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_4_L12
.func_4_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_4_L12
.func_4_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_4_L6
.func_4_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_4_L15
.func_4_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_4_L15
.func_4_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_4_L6
.func_4_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_4_L23
        j	.func_4_L22
.func_4_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_4_L26
        j	.func_4_L25
.func_4_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_4_L3
.func_4_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_4_L21
.func_4_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_4_L21
.func_4_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_4_L17
        j	.func_4_L16
.func_4_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_4_L24
.func_4_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_4_L24
.func_4_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_4_L18
.func_4_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_4_L27
.func_4_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_4_L27
.func_4_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_4_L18
.func_4_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_4_L35
        j	.func_4_L34
.func_4_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_4_L38
        j	.func_4_L37
.func_4_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_4_L3
.func_4_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_4_L33
.func_4_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_4_L33
.func_4_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_4_L29
        j	.func_4_L28
.func_4_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_4_L36
.func_4_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_4_L36
.func_4_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_4_L30
.func_4_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_4_L39
.func_4_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_4_L39
.func_4_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_4_L30
        .globl	func_40
        .section	.text
        .type	func_40, @function
func_40:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_40_L8
        j	.func_40_L7
.func_40_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_40_L20
        j	.func_40_L19
.func_40_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_40_L32
        j	.func_40_L31
.func_40_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_40_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_40_L11
        j	.func_40_L10
.func_40_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_40_L14
        j	.func_40_L13
.func_40_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_40_L2
        j	.func_40_L1
.func_40_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_40_L9
.func_40_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_40_L9
.func_40_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_40_L5
        j	.func_40_L4
.func_40_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_40_L12
.func_40_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_40_L12
.func_40_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_40_L6
.func_40_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_40_L15
.func_40_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_40_L15
.func_40_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_40_L6
.func_40_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_40_L23
        j	.func_40_L22
.func_40_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_40_L26
        j	.func_40_L25
.func_40_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_40_L3
.func_40_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_40_L21
.func_40_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_40_L21
.func_40_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_40_L17
        j	.func_40_L16
.func_40_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_40_L24
.func_40_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_40_L24
.func_40_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_40_L18
.func_40_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_40_L27
.func_40_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_40_L27
.func_40_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_40_L18
.func_40_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_40_L35
        j	.func_40_L34
.func_40_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_40_L38
        j	.func_40_L37
.func_40_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_40_L3
.func_40_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_40_L33
.func_40_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_40_L33
.func_40_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_40_L29
        j	.func_40_L28
.func_40_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_40_L36
.func_40_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_40_L36
.func_40_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_40_L30
.func_40_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_40_L39
.func_40_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_40_L39
.func_40_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_40_L30
        .globl	func_41
        .section	.text
        .type	func_41, @function
func_41:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_41_L8
        j	.func_41_L7
.func_41_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_41_L20
        j	.func_41_L19
.func_41_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_41_L32
        j	.func_41_L31
.func_41_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_41_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_41_L11
        j	.func_41_L10
.func_41_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_41_L14
        j	.func_41_L13
.func_41_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_41_L2
        j	.func_41_L1
.func_41_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_41_L9
.func_41_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_41_L9
.func_41_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_41_L5
        j	.func_41_L4
.func_41_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_41_L12
.func_41_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_41_L12
.func_41_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_41_L6
.func_41_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_41_L15
.func_41_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_41_L15
.func_41_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_41_L6
.func_41_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_41_L23
        j	.func_41_L22
.func_41_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_41_L26
        j	.func_41_L25
.func_41_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_41_L3
.func_41_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_41_L21
.func_41_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_41_L21
.func_41_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_41_L17
        j	.func_41_L16
.func_41_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_41_L24
.func_41_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_41_L24
.func_41_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_41_L18
.func_41_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_41_L27
.func_41_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_41_L27
.func_41_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_41_L18
.func_41_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_41_L35
        j	.func_41_L34
.func_41_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_41_L38
        j	.func_41_L37
.func_41_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_41_L3
.func_41_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_41_L33
.func_41_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_41_L33
.func_41_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_41_L29
        j	.func_41_L28
.func_41_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_41_L36
.func_41_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_41_L36
.func_41_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_41_L30
.func_41_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_41_L39
.func_41_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_41_L39
.func_41_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_41_L30
        .globl	func_42
        .section	.text
        .type	func_42, @function
func_42:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_42_L8
        j	.func_42_L7
.func_42_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_42_L20
        j	.func_42_L19
.func_42_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_42_L32
        j	.func_42_L31
.func_42_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_42_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_42_L11
        j	.func_42_L10
.func_42_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_42_L14
        j	.func_42_L13
.func_42_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_42_L2
        j	.func_42_L1
.func_42_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_42_L9
.func_42_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_42_L9
.func_42_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_42_L5
        j	.func_42_L4
.func_42_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_42_L12
.func_42_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_42_L12
.func_42_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_42_L6
.func_42_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_42_L15
.func_42_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_42_L15
.func_42_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_42_L6
.func_42_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_42_L23
        j	.func_42_L22
.func_42_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_42_L26
        j	.func_42_L25
.func_42_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_42_L3
.func_42_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_42_L21
.func_42_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_42_L21
.func_42_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_42_L17
        j	.func_42_L16
.func_42_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_42_L24
.func_42_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_42_L24
.func_42_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_42_L18
.func_42_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_42_L27
.func_42_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_42_L27
.func_42_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_42_L18
.func_42_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_42_L35
        j	.func_42_L34
.func_42_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_42_L38
        j	.func_42_L37
.func_42_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_42_L3
.func_42_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_42_L33
.func_42_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_42_L33
.func_42_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_42_L29
        j	.func_42_L28
.func_42_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_42_L36
.func_42_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_42_L36
.func_42_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_42_L30
.func_42_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_42_L39
.func_42_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_42_L39
.func_42_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_42_L30
        .globl	func_43
        .section	.text
        .type	func_43, @function
func_43:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_43_L8
        j	.func_43_L7
.func_43_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_43_L20
        j	.func_43_L19
.func_43_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_43_L32
        j	.func_43_L31
.func_43_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_43_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_43_L11
        j	.func_43_L10
.func_43_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_43_L14
        j	.func_43_L13
.func_43_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_43_L2
        j	.func_43_L1
.func_43_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_43_L9
.func_43_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_43_L9
.func_43_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_43_L5
        j	.func_43_L4
.func_43_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_43_L12
.func_43_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_43_L12
.func_43_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_43_L6
.func_43_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_43_L15
.func_43_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_43_L15
.func_43_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_43_L6
.func_43_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_43_L23
        j	.func_43_L22
.func_43_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_43_L26
        j	.func_43_L25
.func_43_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_43_L3
.func_43_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_43_L21
.func_43_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_43_L21
.func_43_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_43_L17
        j	.func_43_L16
.func_43_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_43_L24
.func_43_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_43_L24
.func_43_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_43_L18
.func_43_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_43_L27
.func_43_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_43_L27
.func_43_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_43_L18
.func_43_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_43_L35
        j	.func_43_L34
.func_43_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_43_L38
        j	.func_43_L37
.func_43_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_43_L3
.func_43_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_43_L33
.func_43_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_43_L33
.func_43_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_43_L29
        j	.func_43_L28
.func_43_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_43_L36
.func_43_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_43_L36
.func_43_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_43_L30
.func_43_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_43_L39
.func_43_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_43_L39
.func_43_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_43_L30
        .globl	func_44
        .section	.text
        .type	func_44, @function
func_44:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_44_L8
        j	.func_44_L7
.func_44_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_44_L20
        j	.func_44_L19
.func_44_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_44_L32
        j	.func_44_L31
.func_44_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_44_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_44_L11
        j	.func_44_L10
.func_44_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_44_L14
        j	.func_44_L13
.func_44_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_44_L2
        j	.func_44_L1
.func_44_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_44_L9
.func_44_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_44_L9
.func_44_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_44_L5
        j	.func_44_L4
.func_44_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_44_L12
.func_44_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_44_L12
.func_44_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_44_L6
.func_44_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_44_L15
.func_44_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_44_L15
.func_44_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_44_L6
.func_44_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_44_L23
        j	.func_44_L22
.func_44_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_44_L26
        j	.func_44_L25
.func_44_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_44_L3
.func_44_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_44_L21
.func_44_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_44_L21
.func_44_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_44_L17
        j	.func_44_L16
.func_44_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_44_L24
.func_44_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_44_L24
.func_44_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_44_L18
.func_44_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_44_L27
.func_44_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_44_L27
.func_44_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_44_L18
.func_44_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_44_L35
        j	.func_44_L34
.func_44_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_44_L38
        j	.func_44_L37
.func_44_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_44_L3
.func_44_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_44_L33
.func_44_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_44_L33
.func_44_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_44_L29
        j	.func_44_L28
.func_44_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_44_L36
.func_44_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_44_L36
.func_44_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_44_L30
.func_44_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_44_L39
.func_44_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_44_L39
.func_44_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_44_L30
        .globl	func_45
        .section	.text
        .type	func_45, @function
func_45:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_45_L8
        j	.func_45_L7
.func_45_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_45_L20
        j	.func_45_L19
.func_45_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_45_L32
        j	.func_45_L31
.func_45_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_45_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_45_L11
        j	.func_45_L10
.func_45_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_45_L14
        j	.func_45_L13
.func_45_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_45_L2
        j	.func_45_L1
.func_45_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_45_L9
.func_45_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_45_L9
.func_45_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_45_L5
        j	.func_45_L4
.func_45_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_45_L12
.func_45_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_45_L12
.func_45_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_45_L6
.func_45_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_45_L15
.func_45_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_45_L15
.func_45_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_45_L6
.func_45_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_45_L23
        j	.func_45_L22
.func_45_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_45_L26
        j	.func_45_L25
.func_45_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_45_L3
.func_45_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_45_L21
.func_45_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_45_L21
.func_45_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_45_L17
        j	.func_45_L16
.func_45_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_45_L24
.func_45_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_45_L24
.func_45_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_45_L18
.func_45_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_45_L27
.func_45_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_45_L27
.func_45_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_45_L18
.func_45_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_45_L35
        j	.func_45_L34
.func_45_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_45_L38
        j	.func_45_L37
.func_45_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_45_L3
.func_45_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_45_L33
.func_45_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_45_L33
.func_45_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_45_L29
        j	.func_45_L28
.func_45_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_45_L36
.func_45_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_45_L36
.func_45_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_45_L30
.func_45_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_45_L39
.func_45_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_45_L39
.func_45_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_45_L30
        .globl	func_46
        .section	.text
        .type	func_46, @function
func_46:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_46_L8
        j	.func_46_L7
.func_46_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_46_L20
        j	.func_46_L19
.func_46_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_46_L32
        j	.func_46_L31
.func_46_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_46_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_46_L11
        j	.func_46_L10
.func_46_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_46_L14
        j	.func_46_L13
.func_46_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_46_L2
        j	.func_46_L1
.func_46_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_46_L9
.func_46_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_46_L9
.func_46_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_46_L5
        j	.func_46_L4
.func_46_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_46_L12
.func_46_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_46_L12
.func_46_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_46_L6
.func_46_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_46_L15
.func_46_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_46_L15
.func_46_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_46_L6
.func_46_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_46_L23
        j	.func_46_L22
.func_46_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_46_L26
        j	.func_46_L25
.func_46_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_46_L3
.func_46_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_46_L21
.func_46_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_46_L21
.func_46_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_46_L17
        j	.func_46_L16
.func_46_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_46_L24
.func_46_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_46_L24
.func_46_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_46_L18
.func_46_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_46_L27
.func_46_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_46_L27
.func_46_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_46_L18
.func_46_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_46_L35
        j	.func_46_L34
.func_46_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_46_L38
        j	.func_46_L37
.func_46_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_46_L3
.func_46_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_46_L33
.func_46_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_46_L33
.func_46_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_46_L29
        j	.func_46_L28
.func_46_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_46_L36
.func_46_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_46_L36
.func_46_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_46_L30
.func_46_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_46_L39
.func_46_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_46_L39
.func_46_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_46_L30
        .globl	func_47
        .section	.text
        .type	func_47, @function
func_47:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_47_L8
        j	.func_47_L7
.func_47_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_47_L20
        j	.func_47_L19
.func_47_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_47_L32
        j	.func_47_L31
.func_47_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_47_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_47_L11
        j	.func_47_L10
.func_47_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_47_L14
        j	.func_47_L13
.func_47_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_47_L2
        j	.func_47_L1
.func_47_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_47_L9
.func_47_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_47_L9
.func_47_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_47_L5
        j	.func_47_L4
.func_47_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_47_L12
.func_47_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_47_L12
.func_47_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_47_L6
.func_47_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_47_L15
.func_47_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_47_L15
.func_47_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_47_L6
.func_47_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_47_L23
        j	.func_47_L22
.func_47_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_47_L26
        j	.func_47_L25
.func_47_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_47_L3
.func_47_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_47_L21
.func_47_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_47_L21
.func_47_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_47_L17
        j	.func_47_L16
.func_47_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_47_L24
.func_47_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_47_L24
.func_47_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_47_L18
.func_47_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_47_L27
.func_47_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_47_L27
.func_47_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_47_L18
.func_47_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_47_L35
        j	.func_47_L34
.func_47_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_47_L38
        j	.func_47_L37
.func_47_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_47_L3
.func_47_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_47_L33
.func_47_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_47_L33
.func_47_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_47_L29
        j	.func_47_L28
.func_47_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_47_L36
.func_47_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_47_L36
.func_47_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_47_L30
.func_47_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_47_L39
.func_47_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_47_L39
.func_47_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_47_L30
        .globl	func_48
        .section	.text
        .type	func_48, @function
func_48:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_48_L8
        j	.func_48_L7
.func_48_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_48_L20
        j	.func_48_L19
.func_48_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_48_L32
        j	.func_48_L31
.func_48_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_48_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_48_L11
        j	.func_48_L10
.func_48_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_48_L14
        j	.func_48_L13
.func_48_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_48_L2
        j	.func_48_L1
.func_48_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_48_L9
.func_48_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_48_L9
.func_48_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_48_L5
        j	.func_48_L4
.func_48_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_48_L12
.func_48_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_48_L12
.func_48_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_48_L6
.func_48_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_48_L15
.func_48_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_48_L15
.func_48_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_48_L6
.func_48_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_48_L23
        j	.func_48_L22
.func_48_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_48_L26
        j	.func_48_L25
.func_48_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_48_L3
.func_48_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_48_L21
.func_48_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_48_L21
.func_48_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_48_L17
        j	.func_48_L16
.func_48_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_48_L24
.func_48_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_48_L24
.func_48_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_48_L18
.func_48_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_48_L27
.func_48_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_48_L27
.func_48_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_48_L18
.func_48_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_48_L35
        j	.func_48_L34
.func_48_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_48_L38
        j	.func_48_L37
.func_48_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_48_L3
.func_48_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_48_L33
.func_48_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_48_L33
.func_48_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_48_L29
        j	.func_48_L28
.func_48_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_48_L36
.func_48_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_48_L36
.func_48_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_48_L30
.func_48_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_48_L39
.func_48_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_48_L39
.func_48_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_48_L30
        .globl	func_49
        .section	.text
        .type	func_49, @function
func_49:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_49_L8
        j	.func_49_L7
.func_49_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_49_L20
        j	.func_49_L19
.func_49_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_49_L32
        j	.func_49_L31
.func_49_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_49_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_49_L11
        j	.func_49_L10
.func_49_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_49_L14
        j	.func_49_L13
.func_49_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_49_L2
        j	.func_49_L1
.func_49_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_49_L9
.func_49_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_49_L9
.func_49_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_49_L5
        j	.func_49_L4
.func_49_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_49_L12
.func_49_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_49_L12
.func_49_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_49_L6
.func_49_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_49_L15
.func_49_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_49_L15
.func_49_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_49_L6
.func_49_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_49_L23
        j	.func_49_L22
.func_49_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_49_L26
        j	.func_49_L25
.func_49_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_49_L3
.func_49_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_49_L21
.func_49_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_49_L21
.func_49_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_49_L17
        j	.func_49_L16
.func_49_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_49_L24
.func_49_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_49_L24
.func_49_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_49_L18
.func_49_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_49_L27
.func_49_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_49_L27
.func_49_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_49_L18
.func_49_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_49_L35
        j	.func_49_L34
.func_49_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_49_L38
        j	.func_49_L37
.func_49_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_49_L3
.func_49_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_49_L33
.func_49_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_49_L33
.func_49_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_49_L29
        j	.func_49_L28
.func_49_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_49_L36
.func_49_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_49_L36
.func_49_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_49_L30
.func_49_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_49_L39
.func_49_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_49_L39
.func_49_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_49_L30
        .globl	func_5
        .section	.text
        .type	func_5, @function
func_5:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_5_L8
        j	.func_5_L7
.func_5_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_5_L20
        j	.func_5_L19
.func_5_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_5_L32
        j	.func_5_L31
.func_5_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_5_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_5_L11
        j	.func_5_L10
.func_5_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_5_L14
        j	.func_5_L13
.func_5_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_5_L2
        j	.func_5_L1
.func_5_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_5_L9
.func_5_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_5_L9
.func_5_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_5_L5
        j	.func_5_L4
.func_5_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_5_L12
.func_5_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_5_L12
.func_5_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_5_L6
.func_5_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_5_L15
.func_5_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_5_L15
.func_5_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_5_L6
.func_5_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_5_L23
        j	.func_5_L22
.func_5_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_5_L26
        j	.func_5_L25
.func_5_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_5_L3
.func_5_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_5_L21
.func_5_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_5_L21
.func_5_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_5_L17
        j	.func_5_L16
.func_5_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_5_L24
.func_5_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_5_L24
.func_5_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_5_L18
.func_5_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_5_L27
.func_5_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_5_L27
.func_5_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_5_L18
.func_5_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_5_L35
        j	.func_5_L34
.func_5_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_5_L38
        j	.func_5_L37
.func_5_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_5_L3
.func_5_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_5_L33
.func_5_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_5_L33
.func_5_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_5_L29
        j	.func_5_L28
.func_5_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_5_L36
.func_5_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_5_L36
.func_5_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_5_L30
.func_5_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_5_L39
.func_5_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_5_L39
.func_5_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_5_L30
        .globl	func_50
        .section	.text
        .type	func_50, @function
func_50:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_50_L8
        j	.func_50_L7
.func_50_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_50_L20
        j	.func_50_L19
.func_50_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_50_L32
        j	.func_50_L31
.func_50_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_50_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_50_L11
        j	.func_50_L10
.func_50_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_50_L14
        j	.func_50_L13
.func_50_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_50_L2
        j	.func_50_L1
.func_50_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_50_L9
.func_50_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_50_L9
.func_50_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_50_L5
        j	.func_50_L4
.func_50_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_50_L12
.func_50_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_50_L12
.func_50_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_50_L6
.func_50_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_50_L15
.func_50_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_50_L15
.func_50_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_50_L6
.func_50_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_50_L23
        j	.func_50_L22
.func_50_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_50_L26
        j	.func_50_L25
.func_50_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_50_L3
.func_50_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_50_L21
.func_50_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_50_L21
.func_50_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_50_L17
        j	.func_50_L16
.func_50_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_50_L24
.func_50_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_50_L24
.func_50_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_50_L18
.func_50_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_50_L27
.func_50_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_50_L27
.func_50_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_50_L18
.func_50_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_50_L35
        j	.func_50_L34
.func_50_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_50_L38
        j	.func_50_L37
.func_50_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_50_L3
.func_50_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_50_L33
.func_50_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_50_L33
.func_50_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_50_L29
        j	.func_50_L28
.func_50_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_50_L36
.func_50_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_50_L36
.func_50_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_50_L30
.func_50_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_50_L39
.func_50_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_50_L39
.func_50_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_50_L30
        .globl	func_51
        .section	.text
        .type	func_51, @function
func_51:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_51_L8
        j	.func_51_L7
.func_51_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_51_L20
        j	.func_51_L19
.func_51_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_51_L32
        j	.func_51_L31
.func_51_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_51_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_51_L11
        j	.func_51_L10
.func_51_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_51_L14
        j	.func_51_L13
.func_51_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_51_L2
        j	.func_51_L1
.func_51_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_51_L9
.func_51_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_51_L9
.func_51_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_51_L5
        j	.func_51_L4
.func_51_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_51_L12
.func_51_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_51_L12
.func_51_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_51_L6
.func_51_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_51_L15
.func_51_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_51_L15
.func_51_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_51_L6
.func_51_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_51_L23
        j	.func_51_L22
.func_51_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_51_L26
        j	.func_51_L25
.func_51_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_51_L3
.func_51_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_51_L21
.func_51_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_51_L21
.func_51_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_51_L17
        j	.func_51_L16
.func_51_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_51_L24
.func_51_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_51_L24
.func_51_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_51_L18
.func_51_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_51_L27
.func_51_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_51_L27
.func_51_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_51_L18
.func_51_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_51_L35
        j	.func_51_L34
.func_51_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_51_L38
        j	.func_51_L37
.func_51_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_51_L3
.func_51_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_51_L33
.func_51_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_51_L33
.func_51_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_51_L29
        j	.func_51_L28
.func_51_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_51_L36
.func_51_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_51_L36
.func_51_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_51_L30
.func_51_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_51_L39
.func_51_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_51_L39
.func_51_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_51_L30
        .globl	func_52
        .section	.text
        .type	func_52, @function
func_52:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_52_L8
        j	.func_52_L7
.func_52_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_52_L20
        j	.func_52_L19
.func_52_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_52_L32
        j	.func_52_L31
.func_52_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,1
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_52_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_52_L11
        j	.func_52_L10
.func_52_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_52_L14
        j	.func_52_L13
.func_52_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_52_L2
        j	.func_52_L1
.func_52_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_52_L9
.func_52_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_52_L9
.func_52_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_52_L5
        j	.func_52_L4
.func_52_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_52_L12
.func_52_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_52_L12
.func_52_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_52_L6
.func_52_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_52_L15
.func_52_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_52_L15
.func_52_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_52_L6
.func_52_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_52_L23
        j	.func_52_L22
.func_52_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_52_L26
        j	.func_52_L25
.func_52_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_52_L3
.func_52_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_52_L21
.func_52_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_52_L21
.func_52_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_52_L17
        j	.func_52_L16
.func_52_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_52_L24
.func_52_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_52_L24
.func_52_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_52_L18
.func_52_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_52_L27
.func_52_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_52_L27
.func_52_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_52_L18
.func_52_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_52_L35
        j	.func_52_L34
.func_52_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_52_L38
        j	.func_52_L37
.func_52_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_52_L3
.func_52_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_52_L33
.func_52_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_52_L33
.func_52_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_52_L29
        j	.func_52_L28
.func_52_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_52_L36
.func_52_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_52_L36
.func_52_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_52_L30
.func_52_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_52_L39
.func_52_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_52_L39
.func_52_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_52_L30
        .globl	func_53
        .section	.text
        .type	func_53, @function
func_53:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_53_L8
        j	.func_53_L7
.func_53_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_53_L20
        j	.func_53_L19
.func_53_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_53_L32
        j	.func_53_L31
.func_53_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_53_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_53_L11
        j	.func_53_L10
.func_53_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_53_L14
        j	.func_53_L13
.func_53_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_53_L2
        j	.func_53_L1
.func_53_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_53_L9
.func_53_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_53_L9
.func_53_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_53_L5
        j	.func_53_L4
.func_53_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_53_L12
.func_53_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_53_L12
.func_53_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_53_L6
.func_53_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_53_L15
.func_53_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_53_L15
.func_53_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_53_L6
.func_53_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_53_L23
        j	.func_53_L22
.func_53_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_53_L26
        j	.func_53_L25
.func_53_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_53_L3
.func_53_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_53_L21
.func_53_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_53_L21
.func_53_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_53_L17
        j	.func_53_L16
.func_53_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_53_L24
.func_53_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_53_L24
.func_53_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_53_L18
.func_53_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_53_L27
.func_53_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_53_L27
.func_53_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_53_L18
.func_53_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_53_L35
        j	.func_53_L34
.func_53_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_53_L38
        j	.func_53_L37
.func_53_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_53_L3
.func_53_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_53_L33
.func_53_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_53_L33
.func_53_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_53_L29
        j	.func_53_L28
.func_53_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_53_L36
.func_53_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_53_L36
.func_53_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_53_L30
.func_53_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_53_L39
.func_53_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_53_L39
.func_53_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_53_L30
        .globl	func_54
        .section	.text
        .type	func_54, @function
func_54:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_54_L8
        j	.func_54_L7
.func_54_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_54_L20
        j	.func_54_L19
.func_54_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_54_L32
        j	.func_54_L31
.func_54_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_54_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_54_L11
        j	.func_54_L10
.func_54_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_54_L14
        j	.func_54_L13
.func_54_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_54_L2
        j	.func_54_L1
.func_54_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_54_L9
.func_54_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_54_L9
.func_54_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_54_L5
        j	.func_54_L4
.func_54_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_54_L12
.func_54_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_54_L12
.func_54_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_54_L6
.func_54_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_54_L15
.func_54_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_54_L15
.func_54_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_54_L6
.func_54_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_54_L23
        j	.func_54_L22
.func_54_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_54_L26
        j	.func_54_L25
.func_54_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_54_L3
.func_54_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_54_L21
.func_54_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_54_L21
.func_54_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_54_L17
        j	.func_54_L16
.func_54_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_54_L24
.func_54_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_54_L24
.func_54_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_54_L18
.func_54_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_54_L27
.func_54_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_54_L27
.func_54_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_54_L18
.func_54_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_54_L35
        j	.func_54_L34
.func_54_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_54_L38
        j	.func_54_L37
.func_54_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_54_L3
.func_54_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_54_L33
.func_54_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_54_L33
.func_54_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_54_L29
        j	.func_54_L28
.func_54_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_54_L36
.func_54_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_54_L36
.func_54_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_54_L30
.func_54_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_54_L39
.func_54_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_54_L39
.func_54_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_54_L30
        .globl	func_55
        .section	.text
        .type	func_55, @function
func_55:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,40
        sd	t0,232(sp)
        addi	t0,sp,44
        sd	t0,240(sp)
        addi	t0,sp,48
        sd	t0,248(sp)
        addi	t0,sp,52
        sd	t0,256(sp)
        addi	t0,sp,56
        sd	t0,264(sp)
        addi	t0,sp,60
        sd	t0,272(sp)
        addi	t0,sp,64
        sd	t0,280(sp)
        addi	t0,sp,68
        sd	t0,288(sp)
        addi	t0,sp,72
        sd	t0,296(sp)
        addi	t0,sp,76
        sd	t0,304(sp)
        addi	t0,sp,80
        sd	t0,312(sp)
        addi	t0,sp,84
        sd	t0,320(sp)
        addi	t0,sp,88
        sd	t0,328(sp)
        addi	t0,sp,92
        sd	t0,336(sp)
        addi	t0,sp,96
        sd	t0,344(sp)
        addi	t0,sp,100
        sd	t0,352(sp)
        addi	t0,sp,104
        sd	t0,360(sp)
        addi	t0,sp,108
        sd	t0,368(sp)
        addi	t0,sp,112
        sd	t0,376(sp)
        addi	t0,sp,116
        sd	t0,384(sp)
        addi	t0,sp,120
        sd	t0,392(sp)
        addi	t0,sp,124
        sd	t0,400(sp)
        addi	t0,sp,128
        sd	t0,408(sp)
        addi	t0,sp,132
        sd	t0,416(sp)
        addi	t0,sp,136
        sd	t0,424(sp)
        addi	t0,sp,140
        sd	t0,432(sp)
        addi	t0,sp,144
        sd	t0,440(sp)
        addi	t0,sp,148
        sd	t0,448(sp)
        addi	t0,sp,152
        sd	t0,456(sp)
        addi	t0,sp,156
        sd	t0,464(sp)
        addi	t0,sp,160
        sd	t0,472(sp)
        addi	t0,sp,164
        sd	t0,480(sp)
        ld	t0,168(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,176(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,184(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,192(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,200(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,208(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,216(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,224(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,232(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,240(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,248(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,256(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,264(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,272(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,280(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,288(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,296(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,304(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,312(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,320(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,328(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,336(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,344(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,352(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,360(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,368(sp)
        li	t1,0
        sw	t1,0(t0)
        ld	t0,376(sp)
        li	t1,1
        sw	t1,0(t0)
        ld	t0,168(sp)
        lw	t0,0(t0)
        sw	t0,488(sp)
        lw	t1,488(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,496(sp)
        lbu	t0,496(sp)
        beq	t0,zero, .func_55_L8
        j	.func_55_L7
.func_55_L1:
        ld	t0,240(sp)
        lw	t0,0(t0)
        sw	t0,504(sp)
        lw	t1,504(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,512(sp)
        lbu	t0,512(sp)
        beq	t0,zero, .func_55_L20
        j	.func_55_L19
.func_55_L2:
        ld	t0,312(sp)
        lw	t0,0(t0)
        sw	t0,520(sp)
        lw	t1,520(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,528(sp)
        lbu	t0,528(sp)
        beq	t0,zero, .func_55_L32
        j	.func_55_L31
.func_55_L3:
        ld	t0,480(sp)
        lw	t0,0(t0)
        sw	t0,536(sp)
        lw	t1,536(sp)
        li	t2,0
        xor	t0,t1,t2
        seqz	t0,t0
        sb	t0,544(sp)
        lbu	t1,544(sp)
        mv	t2,t1
        sw	t2,552(sp)
        lw	a0,552(sp)
        sw	a0,-8(s1)
        ld	s0,0(sp)
        addi	sp,sp,920
        ret
.func_55_L4:
        ld	t0,192(sp)
        lw	t0,0(t0)
        sw	t0,556(sp)
        lw	t1,556(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,560(sp)
        lbu	t0,560(sp)
        beq	t0,zero, .func_55_L11
        j	.func_55_L10
.func_55_L5:
        ld	t0,216(sp)
        lw	t0,0(t0)
        sw	t0,568(sp)
        lw	t1,568(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,576(sp)
        lbu	t0,576(sp)
        beq	t0,zero, .func_55_L14
        j	.func_55_L13
.func_55_L6:
        ld	t0,408(sp)
        lw	t0,0(t0)
        sw	t0,584(sp)
        lw	t1,584(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,592(sp)
        lbu	t0,592(sp)
        beq	t0,zero, .func_55_L2
        j	.func_55_L1
.func_55_L7:
        ld	t0,176(sp)
        lw	t0,0(t0)
        sw	t0,600(sp)
        ld	t0,384(sp)
        lw	t1,600(sp)
        sw	t1,0(t0)
        j	.func_55_L9
.func_55_L8:
        ld	t0,184(sp)
        lw	t0,0(t0)
        sw	t0,608(sp)
        ld	t0,384(sp)
        lw	t1,608(sp)
        sw	t1,0(t0)
        j	.func_55_L9
.func_55_L9:
        ld	t0,384(sp)
        lw	t0,0(t0)
        sw	t0,616(sp)
        lw	t1,616(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,624(sp)
        lbu	t0,624(sp)
        beq	t0,zero, .func_55_L5
        j	.func_55_L4
.func_55_L10:
        ld	t0,200(sp)
        lw	t0,0(t0)
        sw	t0,632(sp)
        ld	t0,392(sp)
        lw	t1,632(sp)
        sw	t1,0(t0)
        j	.func_55_L12
.func_55_L11:
        ld	t0,208(sp)
        lw	t0,0(t0)
        sw	t0,640(sp)
        ld	t0,392(sp)
        lw	t1,640(sp)
        sw	t1,0(t0)
        j	.func_55_L12
.func_55_L12:
        ld	t0,392(sp)
        lw	t0,0(t0)
        sw	t0,648(sp)
        ld	t0,408(sp)
        lw	t1,648(sp)
        sw	t1,0(t0)
        j	.func_55_L6
.func_55_L13:
        ld	t0,224(sp)
        lw	t0,0(t0)
        sw	t0,656(sp)
        ld	t0,400(sp)
        lw	t1,656(sp)
        sw	t1,0(t0)
        j	.func_55_L15
.func_55_L14:
        ld	t0,232(sp)
        lw	t0,0(t0)
        sw	t0,664(sp)
        ld	t0,400(sp)
        lw	t1,664(sp)
        sw	t1,0(t0)
        j	.func_55_L15
.func_55_L15:
        ld	t0,400(sp)
        lw	t0,0(t0)
        sw	t0,672(sp)
        ld	t0,408(sp)
        lw	t1,672(sp)
        sw	t1,0(t0)
        j	.func_55_L6
.func_55_L16:
        ld	t0,264(sp)
        lw	t0,0(t0)
        sw	t0,680(sp)
        lw	t1,680(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,688(sp)
        lbu	t0,688(sp)
        beq	t0,zero, .func_55_L23
        j	.func_55_L22
.func_55_L17:
        ld	t0,288(sp)
        lw	t0,0(t0)
        sw	t0,696(sp)
        lw	t1,696(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,704(sp)
        lbu	t0,704(sp)
        beq	t0,zero, .func_55_L26
        j	.func_55_L25
.func_55_L18:
        ld	t0,440(sp)
        lw	t0,0(t0)
        sw	t0,712(sp)
        ld	t0,480(sp)
        lw	t1,712(sp)
        sw	t1,0(t0)
        j	.func_55_L3
.func_55_L19:
        ld	t0,248(sp)
        lw	t0,0(t0)
        sw	t0,720(sp)
        ld	t0,416(sp)
        lw	t1,720(sp)
        sw	t1,0(t0)
        j	.func_55_L21
.func_55_L20:
        ld	t0,256(sp)
        lw	t0,0(t0)
        sw	t0,728(sp)
        ld	t0,416(sp)
        lw	t1,728(sp)
        sw	t1,0(t0)
        j	.func_55_L21
.func_55_L21:
        ld	t0,416(sp)
        lw	t0,0(t0)
        sw	t0,736(sp)
        lw	t1,736(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,744(sp)
        lbu	t0,744(sp)
        beq	t0,zero, .func_55_L17
        j	.func_55_L16
.func_55_L22:
        ld	t0,272(sp)
        lw	t0,0(t0)
        sw	t0,752(sp)
        ld	t0,424(sp)
        lw	t1,752(sp)
        sw	t1,0(t0)
        j	.func_55_L24
.func_55_L23:
        ld	t0,280(sp)
        lw	t0,0(t0)
        sw	t0,760(sp)
        ld	t0,424(sp)
        lw	t1,760(sp)
        sw	t1,0(t0)
        j	.func_55_L24
.func_55_L24:
        ld	t0,424(sp)
        lw	t0,0(t0)
        sw	t0,768(sp)
        ld	t0,440(sp)
        lw	t1,768(sp)
        sw	t1,0(t0)
        j	.func_55_L18
.func_55_L25:
        ld	t0,296(sp)
        lw	t0,0(t0)
        sw	t0,776(sp)
        ld	t0,432(sp)
        lw	t1,776(sp)
        sw	t1,0(t0)
        j	.func_55_L27
.func_55_L26:
        ld	t0,304(sp)
        lw	t0,0(t0)
        sw	t0,784(sp)
        ld	t0,432(sp)
        lw	t1,784(sp)
        sw	t1,0(t0)
        j	.func_55_L27
.func_55_L27:
        ld	t0,432(sp)
        lw	t0,0(t0)
        sw	t0,792(sp)
        ld	t0,440(sp)
        lw	t1,792(sp)
        sw	t1,0(t0)
        j	.func_55_L18
.func_55_L28:
        ld	t0,336(sp)
        lw	t0,0(t0)
        sw	t0,800(sp)
        lw	t1,800(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,808(sp)
        lbu	t0,808(sp)
        beq	t0,zero, .func_55_L35
        j	.func_55_L34
.func_55_L29:
        ld	t0,360(sp)
        lw	t0,0(t0)
        sw	t0,816(sp)
        lw	t1,816(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,824(sp)
        lbu	t0,824(sp)
        beq	t0,zero, .func_55_L38
        j	.func_55_L37
.func_55_L30:
        ld	t0,472(sp)
        lw	t0,0(t0)
        sw	t0,832(sp)
        ld	t0,480(sp)
        lw	t1,832(sp)
        sw	t1,0(t0)
        j	.func_55_L3
.func_55_L31:
        ld	t0,320(sp)
        lw	t0,0(t0)
        sw	t0,840(sp)
        ld	t0,448(sp)
        lw	t1,840(sp)
        sw	t1,0(t0)
        j	.func_55_L33
.func_55_L32:
        ld	t0,328(sp)
        lw	t0,0(t0)
        sw	t0,848(sp)
        ld	t0,448(sp)
        lw	t1,848(sp)
        sw	t1,0(t0)
        j	.func_55_L33
.func_55_L33:
        ld	t0,448(sp)
        lw	t0,0(t0)
        sw	t0,856(sp)
        lw	t1,856(sp)
        li	t2,0
        xor	t0,t1,t2
        snez	t0,t0
        sb	t0,864(sp)
        lbu	t0,864(sp)
        beq	t0,zero, .func_55_L29
        j	.func_55_L28
.func_55_L34:
        ld	t0,344(sp)
        lw	t0,0(t0)
        sw	t0,872(sp)
        ld	t0,456(sp)
        lw	t1,872(sp)
        sw	t1,0(t0)
        j	.func_55_L36
.func_55_L35:
        ld	t0,352(sp)
        lw	t0,0(t0)
        sw	t0,880(sp)
        ld	t0,456(sp)
        lw	t1,880(sp)
        sw	t1,0(t0)
        j	.func_55_L36
.func_55_L36:
        ld	t0,456(sp)
        lw	t0,0(t0)
        sw	t0,888(sp)
        ld	t0,472(sp)
        lw	t1,888(sp)
        sw	t1,0(t0)
        j	.func_55_L30
.func_55_L37:
        ld	t0,368(sp)
        lw	t0,0(t0)
        sw	t0,896(sp)
        ld	t0,464(sp)
        lw	t1,896(sp)
        sw	t1,0(t0)
        j	.func_55_L39
.func_55_L38:
        ld	t0,376(sp)
        lw	t0,0(t0)
        sw	t0,904(sp)
        ld	t0,464(sp)
        lw	t1,904(sp)
        sw	t1,0(t0)
        j	.func_55_L39
.func_55_L39:
        ld	t0,464(sp)
        lw	t0,0(t0)
        sw	t0,912(sp)
        ld	t0,472(sp)
        lw	t1,912(sp)
        sw	t1,0(t0)
        j	.func_55_L30
        .globl	func_56
        .section	.text
        .type	func_56, @function
func_56:
        addi	sp,sp,-920
        sd	s0,0(sp)
        addi	s0,sp,920
        addi	t0,sp,8
        sd	t0,168(sp)
        addi	t0,sp,12
        sd	t0,176(sp)
        addi	t0,sp,16
        sd	t0,184(sp)
        addi	t0,sp,20
        sd	t0,192(sp)
        addi	t0,sp,24
        sd	t0,200(sp)
        addi	t0,sp,28
        sd	t0,208(sp)
        addi	t0,sp,32
        sd	t0,216(sp)
        addi	t0,sp,36
        sd	t0,224(sp)
        addi	t0,sp,