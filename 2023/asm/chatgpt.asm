.data
odd_sum:    .word 0
digit:      .word 1, 2, 3, 4, 5, 6, -1
newline:    .asciiz "\n"
odd_sum_msg: .asciiz "Sum of odd numbers: "

.text
.globl main

main:
    # Initialize odd_sum to 0
    la $t0, odd_sum
    sw $zero, 0($t0)
    
read_loop:
    # Read an integer from memory labeled 'digit'
    la $t0, digit
    lw $t1, 0($t0)
    
    # Check if the integer is negative
    beq $t1, -1, display_result
    
    # Check if the integer is odd
    andi $t2, $t1, 1
    beqz $t2, skip_even
    
    # Add the odd number to the sum
    lw $t3, odd_sum
    add $t3, $t3, $t1
    sw $t3, odd_sum
    
skip_even:
    # Continue reading more integers
    addi $t0, $t0, 4
    j read_loop

display_result:
    # Display the result
    li $v0, 4
    la $a0, odd_sum_msg
    syscall

    # Display the sum of odd numbers
    lw $t4, odd_sum
    move $a0, $t4
    li $v0, 1
    syscall

    # Display a newline
    li $v0, 4
    la $a0, newline
    syscall

    # Exit the program
    li $v0, 10
    syscall
