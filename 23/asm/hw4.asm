.data
digit:      .word 1, 2, 3, 4, 5, 6, -1
sum:    .word 0
print: .asciiz "Sum of odd numbers: "

.text
main:
    la $t0, digit
    
    loop:
        lw $t1, 0($t0)
        
        # -1이면 종료
        beq $t1, -1, exit
        
        # 홀수인지 확인
        div $t2, $t1, 2
        mfhi $t2
        beq $t2, 0, not_odd

        # sum 더하기
        lw $t3, sum
        add $t3, $t3, $t1
        sw $t3, sum
        
    not_odd:
        addi $t0, $t0, 4
        j loop

    exit:
        # 결과 표시
        li $v0, 4
        la $a0, print
        syscall

        # odd 합 표시
        lw $t4, sum
        move $a0, $t4
        li $v0, 1
        syscall

        # 종료
        li $v0, 10
        syscall

