.data
digit:      .word 1, 2, 3, 4, 5, 6, -1
odd_sum:    .word 0
newline:    .asciiz "\n"
odd_sum_msg: .asciiz "홀수의 합: "

.text
.globl main

main:
    # digit 레이블에서 정수 읽기
    la $t0, digit
    
    # 루프 시작
    loop:
        # 정수 읽기
        lw $t1, 0($t0)
        
        # 정수가 -1이면 루프 종료
        beq $t1, -1, display_result
        
        # 정수가 홀수인지 확인
        andi $t2, $t1, 1
        beqz $t2, skip_even
        
        # 홀수를 합에 더하기
        lw $t3, odd_sum
        add $t3, $t3, $t1
        sw $t3, odd_sum
        
    skip_even:
        # 다음 정수로 이동
        addi $t0, $t0, 4
        j loop

    display_result:
        # 결과 표시
        li $v0, 4
        la $a0, odd_sum_msg
        syscall

        # 홀수의 합 표시
        lw $t4, odd_sum
        move $a0, $t4
        li $v0, 1
        syscall

        # 줄 바꿈 표시
        li $v0, 4
        la $a0, newline
        syscall

        # 프로그램 종료
        li $v0, 10
        syscall
