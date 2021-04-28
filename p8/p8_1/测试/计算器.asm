loop:
	ori $1,$0,0x7f40
	lw $2,0($1)
	ori $3,$0,1
	beq $2,$3,loop1
	nop
	ori $3,$0,2
	beq $2,$3,loop2
	nop
	
	ori $3,$0,4
	beq $2,$3,loop3
	nop
	
	ori $3,$0,8
	beq $2,$3,loop4
	nop
	
	ori $3,$0,16
	beq $2,$3,loop5
	nop
	
	ori $3,$0,32
	beq $2,$3,loop6
	nop
	
	j loop
	nop
loop1:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	addu $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop
loop2:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	subu $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop
loop3:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	or $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop
loop4:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	and $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop
loop5:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	nor $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop
loop6:
	ori $4,$0,0x7f2c
	ori $5,$0,0x7f30
	lw $6,0($4)
	lw $7,0($5)
	xor $8,$6,$7
	ori $9,$0,0x7f44
	sw $8,0($9)
	j loop
	nop