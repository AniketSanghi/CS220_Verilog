
	.data
array:	.space 48
msg:	.asciiz "Enter value of n: "
msg2:	.asciiz "Enter your n array values\n"
msg3:	.asciiz "Enter value of k: "
endmsg:	.asciiz "The answer is: "
opmsg:	.asciiz "Element was not found\n"
opmsg1: .asciiz "Found element at index "

	.text
	.globl main


binary_search:	slt $t6, $a1, $a0
		bne $0, $t6, loop4
		add $t9, $a0, $a1
		srl $t9, $t9, 1
		addi $t5, $t9, 0
		sll $t9, $t9, 2
		add $t9, $a2, $t9
		lw $t8, 0($t9)
		slt $t7, $t8, $a3
		bne $0, $t7, loop1
		bne $t8, $a3, loop2
		jr loop3		
loop1:	addi $a0, $t8, 1
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	jal binary_search
	add $v0, $v0, $0
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	jr $ra
loop2:	addi $a1, $t8, 1
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	jal binary_search
	add $v0, $v0, $0
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	jr $ra
loop3:	add $v0, $0, $t5 
	jr $ra
loop4:	addi $v0, $0, -1
	jr $ra







main:	li $v0, 4
	la $a0, msg
	syscall
	li $v0, 5
	syscall
	addi $t0, $v0, 0		# n
	li $v0, 4
	la $a0, msg2
	syscall
	
	add $t1, $t0, $0		# i = n
	la $t2, array
loop:	li $v0, 5
	syscall
	sw $v0, 0($t2)
	addi $t1, $t1, -1
	addi $t2, $t2, 4
	bne $t1, $0, loop

	li $v0, 4
	la $a0, msg3
	syscall
	li $v0, 5
	syscall
	add $t1, $0, $v0		# k 
	
	la $t2, array	

	addi $sp, $sp, -4
	sw $ra, 0($sp)
	addi $a0, $0, 0
	addi $a1, $t0, -1
	addi $a2, $t2, 0
	addi $a3, $t1, 0
	jal binary_search
	lw $ra, 0($sp)
	addi $sp, $sp, 4
        addi $t4, $0, -1
	beq $t4, $v0, branch1
        add $t1, $0, $v0
	li $v0, 4
	la $a0, opmsg1
	syscall
	li $v0, 1
	addi $a0, $t1, 0
	syscall
	jr $ra

branch1: li $v0, 4
	 la $a0, opmsg
	 syscall
	 jr $ra	
	


	
		
