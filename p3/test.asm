.text
	ori $28,$28,0x0000 
	ori $1,$0,0x1                     #≤‚ ‘ori
	addu $8,$1,$2                   #≤‚ ‘addu
	ori $0,$1,0x1111 		 #≤‚ ‘0∫≈ºƒ¥Ê∆˜≤ªƒ‹±ª∏ƒ±‰
	jal dfs
	ori $1,$0,0x1    
	beq $1,$0,loop1                 #≤‚ ‘ori
	addu $8,$1,$2  
loop1:     
	ori $1,$0,0x1             #≤‚ ‘addu
	ori $0,$1,0x1111 
dfs:           
	ori $t1,$0,0x1000                		#≤‚ ‘subu			
	lui $t1,0x1
	sw $t1,40($0)
	lw $t2,40($0)
	jr $ra			#≤‚ ‘lui
	
