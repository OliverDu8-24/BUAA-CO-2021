addi $29, $29, 20
jal next
ori $1, $0, 65535
ori $2, $0, 65535
ori $3, $0, 65535
next:
addi $29, $29, 16
jal next2
ori $4, $0, 65535
ori $5, $0, 65535
ori $6, $0, 65535
next2:
li $1, 1
li $2, 15
mult $1, $2
li $1, -2
li $2, 15
madd $1, $2
mflo $4
lw $3, 20($0)
add $4, $1, $5
li $1, 1
li $2, 0
sw $1, 0($0)
lh $2, 0($0)
add $2, $2, $31

