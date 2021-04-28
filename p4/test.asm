	lui $t1,0x1111
	ori $t2,$0,0x1111
	addu $t3,$t1,$t2
	addu $t3,$t2,$t1
	lui $t2,0x1111
	beq $t1,$t2,loop1
	ori $t4,$0,0x0001
loop1:
	nop
	ori $t1,$0,0x0001
	ori $t3,$0,0x0002
loop2:
	addu $0,$t1,$t2
	addu $t4,$t1,$t2
	subu $t3,$t3,$t1
	beq $t3,$t1,loop2
	jal dfs
	nop
	ori $t1,$0,0x0000
	ori $t2,$0,0x1111
	sw $t2,0($t1)
	lw $t3,0,($t1)
	nop
	lui $t1,0x0000
	beq $t1,$0,done
dfs:
	ori $t1,$0,0x000c
	lui $t2,0x0001
	sw $t2,0($t1)
	lw $t3,0,($t1)
	ori $t1,$0,0x0001
	ori $t3,$0,0x0002
loop3:
	subu $t3,$t3,$t1
	beq $t3,$t1,loop3
	jr $ra
done:
	nop
	
	
