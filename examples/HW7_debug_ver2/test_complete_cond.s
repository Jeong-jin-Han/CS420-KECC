Good Game
Welcome, 20220730 (hjj22@kaist.ac.kr). Log out
Input
test_complete_cond.ir (submitted at 2025-06-17 14:27:58)
Return code
1
Log
===== SETUP =====

===== CHECK =====
[2025-06-17 14:27:58,958: WARNING/ForkPoolWorker-128] Demoting to runner...
        .globl	func_0
        .section	.text
        .type	func_0, @function
.func_0_L1:
        lw	t3,-24(s0)
        li	a3,0
        xor	a3,t3,a3
        snez	a3,a3
        bne	a3,zero, .func_0_L7
        j	.func_0_L8
.func_0_L2:
        lw	a3,-36(s0)
        li	t3,0
        xor	a3,a3,t3
        snez	a3,a3
        bne	a3,zero, .func_0_L10
        j	.func_0_L11
.func_0_L3:
        lw	a3,-60(s0)
        li	t3,0
        xor	a3,a3,t3
        seqz	a0,a3
        ld	s0,52(sp)
        addi	sp,sp,60
        ret
.func_0_L5:
        lw	a3,-20(s0)
        sw	a3,-48(s0)
        j	.func_0_L6
func_0:
        addi	sp,sp,-60
        sd	s0,52(sp)
        addi	s0,sp,60
        li	a3,0
        sw	a3,-12(s0)
        li	a3,42
        sw	a3,-16(s0)
        li	a3,7
        sw	a3,-20(s0)
        li	a3,0
        sw	a3,-24(s0)
        li	a3,0
        sw	a3,-28(s0)
        li	a3,3
        sw	a3,-32(s0)
        li	a3,1
        sw	a3,-36(s0)
        li	a3,99
        sw	a3,-40(s0)
        li	a3,0
        sw	a3,-44(s0)
        lw	a3,-12(s0)
        li	t3,0
        xor	a3,a3,t3
        snez	a3,a3
        bne	a3,zero, .func_0_L4
        j	.func_0_L5
.func_0_L7:
        lw	a3,-28(s0)
        sw	a3,-52(s0)
        j	.func_0_L9
.func_0_L8:
        lw	a3,-32(s0)
        sw	a3,-52(s0)
        j	.func_0_L9
.func_0_L9:
        lw	t3,-52(s0)
        li	a3,3
        xor	a3,t3,a3
        seqz	a3,a3
        sw	a3,-60(s0)
        j	.func_0_L3
.func_0_L10:
        lw	a3,-40(s0)
        sw	a3,-56(s0)
        j	.func_0_L12
.func_0_L11:
        lw	a3,-44(s0)
        sw	a3,-56(s0)
        j	.func_0_L12
.func_0_L13:
        li	a0,0
        ld	s0,52(sp)
        addi	sp,sp,60
        ret
.func_0_L6:
        lw	a3,-48(s0)
        li	t3,7
        xor	a3,a3,t3
        seqz	a3,a3
        bne	a3,zero, .func_0_L1
        j	.func_0_L2
.func_0_L12:
        lw	a3,-56(s0)
        li	t3,99
        xor	a3,a3,t3
        seqz	a3,a3
        sw	a3,-60(s0)
        j	.func_0_L3
.func_0_L4:
        lw	a3,-16(s0)
        sw	a3,-48(s0)
        j	.func_0_L6
        .globl	func_1
        .section	.text
        .type	func_1, @function
.func_1_L7:
        lw	t0,-28(s0)
        sw	t0,-52(s0)
        j	.func_1_L9
.func_1_L2:
        lw	t0,-36(s0)
        li	a3,0
        xor	t0,t0,a3
        snez	t0,t0
        bne	t0,zero, .func_1_L10
        j	.func_1_L11
.func_1_L3:
        lw	t0,-60(s0)
        li	a3,1
        xor	t0,t0,a3
        seqz	t0,t0
        mv	a0,t0
        ld	s0,52(sp)
        addi	sp,sp,60
        ret
.func_1_L9:
        lw	t0,-52(s0)
        li	a3,4
        xor	t0,t0,a3
        seqz	t0,t0
        sw	t0,-60(s0)
        j	.func_1_L3
.func_1_L11:
        lw	t0,-44(s0)
        sw	t0,-56(s0)
        j	.func_1_L12
.func_1_L4:
        lw	t0,-16(s0)
        sw	t0,-48(s0)
        j	.func_1_L6
func_1:
        addi	sp,sp,-60
        sd	s0,52(sp)
        addi	s0,sp,60
        li	t0,1
        sw	t0,-12(s0)
        li	t0,0
        sw	t0,-16(s0)
        li	t0,0
        sw	t0,-20(s0)
        li	t0,1
        sw	t0,-24(s0)
        li	t0,4
        sw	t0,-28(s0)
        li	t0,4
        sw	t0,-32(s0)
        li	t0,0
        sw	t0,-36(s0)
        li	t0,0
        sw	t0,-40(s0)
        li	t0,5
        sw	t0,-44(s0)
        lw	a3,-12(s0)
        li	t0,0
        xor	t0,a3,t0
        snez	t0,t0
        bne	t0,zero, .func_1_L4
        j	.func_1_L5
.func_1_L5:
        lw	t0,-20(s0)
        sw	t0,-48(s0)
        j	.func_1_L6
.func_1_L12:
        lw	t0,-56(s0)
        li	a3,5
        xor	t0,t0,a3
        seqz	t0,t0
        sw	t0,-60(s0)
        j	.func_1_L3
.func_1_L8:
        lw	t0,-32(s0)
        sw	t0,-52(s0)
        j	.func_1_L9
.func_1_L1:
        lw	a3,-24(s0)
        li	t0,0
        xor	t0,a3,t0
        snez	t0,t0
        bne	t0,zero, .func_1_L7
        j	.func_1_L8
.func_1_L10:
        lw	t0,-40(s0)
        sw	t0,-56(s0)
        j	.func_1_L12
.func_1_L6:
        lw	t0,-48(s0)
        li	a3,0
        xor	t0,t0,a3
        seqz	t0,t0
        bne	t0,zero, .func_1_L1
        j	.func_1_L2
.func_1_L13:
        li	a0,0
        ld	s0,52(sp)
        addi	sp,sp,60
        ret
        .globl	main
        .section	.text
        .type	main, @function
.main_L4:
        li	a0,0
        ld	ra,-24(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
.main_L2:
        li	a0,0
        sb	a0,-9(s0)
        j	.main_L3
.main_L3:
        lbu	a0,-9(s0)
        li	t3,1
        xor	a0,a0,t3
        seqz	a0,a0
        ld	ra,-24(s0)
        ld	s0,16(sp)
        addi	sp,sp,24
        ret
main:
        addi	sp,sp,-24
        sd	s0,16(sp)
        addi	s0,sp,24
        sd	ra,-24(s0)
        call	func_0
        mv	t3,a0
        li	t1,0
        xor	t3,t3,t1
        snez	t3,t3
        bne	t3,zero, .main_L1
        j	.main_L2
.main_L1:
        call	func_1
        li	t3,0
        xor	a0,a0,t3
        snez	a0,a0
        sb	a0,-9(s0)
        j	.main_L3
