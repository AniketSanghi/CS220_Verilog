
	.data
msg: .asciiz "Enter n\n"
msg2: .asciiz "Enter n values: \n"


	.text
	.globl main
main: li $v0, 4
      la $a0, msg
      syscall
      li $v0,5
      syscall
      addi $a0,$v0,0
      addi $t0,$0,0
      addi $t1,$a0,0
      mtc1 $0,$f12
      li $v0, 4
      la $a0, msg2
      syscall 

loop_begin: beq $t0,$t1,loop_end
	    li $v0,6
	    syscall
	    add.s $f12,$f12,$f0
	    addi $t0,$t0,1
	    beq $t0,$t1,loop_end
	    li $v0,6
	    syscall
	    sub.s $f12,$f12,$f0
	    addi $t0,$t0,1
	    j loop_begin

loop_end: li $v0,2
	  syscall
	  jr $ra
