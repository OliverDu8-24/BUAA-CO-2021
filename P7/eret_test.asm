li $t1, 12
li $t2, 12
mtc0 $t1, $14
mfc0 $2, $14
beq $2, $t2, next
ori $3, 65535
ori $4, 65535
ori $5, 65535
next:
ori $6, 65535
ori $7, 65535