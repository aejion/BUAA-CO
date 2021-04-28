.text
	li $s0, 0xfc01
	mtc0 $s0, $12
loop:
	nop
	j loop
	nop
.ktext 0x4180
	ori $1,$0,0x7f10
	lw $2,0($1)
	sw $2,0($1)
	eret
	nop