.text
li $t1, 1
li $t2, 2
add $t1, $t1, $t2
mfhi $t2
mflo $t3

mtc0 $t1, $13

li $v0, 10
syscall
