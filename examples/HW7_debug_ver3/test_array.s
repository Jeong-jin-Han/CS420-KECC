Good Game
Welcome, 20220730 (hjj22@kaist.ac.kr). Log out
Input
test_array.ir (submitted at 2025-06-18 07:45:50)
Return code
1
Log
===== SETUP =====

===== CHECK =====
[2025-06-18 07:45:51,008: WARNING/ForkPoolWorker-128] Demoting to runner...
        .globl	main
        .section	.text
        .type	main, @function
.main_L7:
        lw	t6,-56(s0)
        lw	a5,-44(s0)
        slt	a5,t6,a5
        bne	a5,zero, .main_L8
        j	.main_L10
.main_L5:
        j	.main_L6
.main_L2:
        lw	a5,-52(s0)
        lw	t6,-44(s0)
        slt	a5,a5,t6
        bne	a5,zero, .main_L3
        j	.main_L5
.main_L4:
        lw	a5,-52(s0)
        li	t6,1
        addw	a5,a5,t6
        sw	a5,-52(s0)
        j	.main_L2
.main_L6:
        li	a5,0
        sw	a5,-56(s0)
        j	.main_L7
.main_L9:
        lw	t6,-56(s0)
        li	a5,1
        addw	a5,t6,a5
        sw	a5,-56(s0)
        j	.main_L7
main:
        addi	sp,sp,-56
        sd	s0,48(sp)
        addi	s0,sp,56
        li	a5,5
        sw	a5,-44(s0)
        li	a5,0
        sw	a5,-48(s0)
        j	.main_L1
.main_L1:
        li	a5,0
        sw	a5,-52(s0)
        j	.main_L2
.main_L3:
        addi	t6,s0,-40
        lw	a5,-52(s0)
        li	t3,4
        mul	a5,a5,t3
        add	t6,t6,a5
        lw	a5,-52(s0)
        sw	a5,0(t6)
        j	.main_L4
.main_L10:
        lw	t6,-48(s0)
        li	a5,10
        xor	a5,t6,a5
        seqz	a5,a5
        mv	a0,a5
        ld	s0,48(sp)
        addi	sp,sp,56
        ret
.main_L8:
        lw	t6,-48(s0)
        addi	a7,s0,-40
        lw	t3,-56(s0)
        li	a5,4
        mul	a5,t3,a5
        add	a5,a7,a5
        lw	a5,0(a5)
        addw	a5,t6,a5
        sw	a5,-48(s0)
        j	.main_L9
.main_L11:
        li	a0,0
        ld	s0,48(sp)
        addi	sp,sp,56
        ret
