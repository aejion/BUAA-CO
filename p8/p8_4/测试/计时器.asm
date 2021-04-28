.text	
	ori $2,$0,0x0401
	mtc0 $2,$12
	ori $2,$0,0x7f30
	lw $3,0($2)
	ori $2,$0,0x7f04
	sw $3,0($2)
	ori $1,$0,0x9
	ori $2,$0,0x7f00
	sw $1,0($2)
loop:
	nop
	j loop
	nop
	
.ktext 0x00004180
	ori $2,$0,0x7f30
	lw $3,0($2)
	ori $2,$0,0x7f04
	sw $3,0($2)
	ori $4,$0,0x7f04
	ori $5,$0,0x7f2c
	lw $6,0($4)
	lw $7,0($5)
	addu $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	ori $1,$0,0x9
	ori $2,$0,0x7f00
	sw $1,0($2)
	eret
	nop
