ori $28, $0, 0
ori $29, $0, 0
add $17, $0, $2
mflo $2
nor $2, $6, $2
ori $2, $17, 44400
ori $17, $0, 0
lbu $2, 0($17)
and $6, $2, $2
mfhi $2
ori $17, $0, 0
lb $17, 2($17)
ori $17, $0, 0
lw $17, 12($17)
ori $17, $0, 0
sh $17, 12($17)
lui $17, 44829
addiu $2, $2, 24374
lui $2, 52555
add $2, $0, $6
slt $17, $17, $6
bltz $6, label1
ori $17, $0, 0
lw $2, 0($17)
ori $17, $0, 0
lhu $17, 12($17)
label1: addu $17, $6, $2
andi $2, $17, 50580
bltz $6, label2
mflo $6
sra $2, $2, 3
label2: ori $6, $6, 1
divu $17, $6
srl $17, $17, 0
ori $6, $0, 0
sh $17, 2($6)
sub $2, $2, $2
sltu $17, $6, $2
subu $17, $17, $2
xor $17, $17, $17
nor $2, $2, $6
ori $2, $0, 0
lhu $2, 6($2)
xor $6, $2, $17
sra $2, $6, 24
ori $2, $0, 0
lbu $17, 3($2)
addi $2, $17, 0
ori $2, $0, 0
lhu $17, 0($2)
add $2, $0, $17
j label3
andi $17, $6, 8714
xori $6, $17, 34086
label3: andi $2, $6, 1166
srlv $2, $2, $17
ori $17, $17, 1
divu $17, $17
xor $17, $6, $6
blez $2, label4
ori $17, $0, 0
lh $6, 6($17)
mult $2, $17
label4: ori $2, $0, 0
sh $17, 0($2)
jal label5
ori $6, $0, 16
srl $17, $6, 11
label5: addu $6, $6, $31
jalr $6, $6
nop
ori $17, $6, 51097
xori $17, $6, 18511
bgtz $6, label6
ori $2, $0, 0
lw $2, 12($2)
ori $2, $2, 1
divu $17, $2
label6: srl $2, $6, 20
ori $17, $0, 0
lb $2, 13($17)
j label7
xor $6, $6, $6
ori $17, $17, 1
div $17, $17
label7: ori $6, $0, 0
sw $6, 4($6)
andi $6, $6, 22832
ori $2, $0, 0
lb $17, 12($2)
andi $2, $17, 47360
add $6, $0, $2
sllv $2, $6, $2
sltiu $17, $2, 5712
ori $17, $0, 0
lbu $17, 12($17)
sra $17, $17, 14
ori $6, $6, 1
div $2, $6
bltz $17, label8
sltiu $6, $6, -24959
sltu $6, $17, $6
label8: sll $17, $17, 9
sltu $6, $6, $17
jal label9
ori $17, $0, 16
multu $17, $17
label9: addu $17, $17, $31
jr $17
nop
ori $2, $0, 0
lh $2, 0($2)
bne $17, $2, label10
add $2, $0, $2
and $2, $2, $17
label10: sltiu $2, $6, 9906
srl $6, $6, 16
srl $17, $6, 8
add $6, $0, $6
and $2, $17, $2
lui $2, 7481
j label11
or $2, $17, $17
multu $2, $2
label11: nor $17, $2, $6
xor $17, $17, $2
ori $17, $0, 0
lh $6, 4($17)
ori $6, $6, 1
div $6, $6
mthi $2
srl $17, $17, 23
sltiu $17, $6, 22912
blez $2, label12
addiu $2, $17, 19313
ori $17, $0, 0
lbu $6, 5($17)
label12: sltiu $2, $6, -23391
bgtz $17, label13
ori $17, $0, 0
lw $2, 12($17)
add $2, $0, $6
label13: mthi $17
jal label14
ori $2, $0, 16
srlv $17, $17, $17
label14: addu $2, $2, $31
jr $2
nop
ori $6, $0, 0
lhu $6, 2($6)
srav $6, $17, $17
subu $6, $2, $6
slti $17, $17, -2402
nor $6, $6, $17
xor $6, $6, $17
ori $17, $0, 0
sh $2, 12($17)
srav $17, $6, $17
ori $6, $0, 0
lb $2, 5($6)
andi $17, $2, 34523
bltz $17, label15
ori $17, $17, 1
div $6, $17
addiu $17, $6, -5686
label15: addi $2, $2, 0
j label16
sltu $6, $6, $17
ori $2, $0, 0
lhu $17, 2($2)
label16: ori $2, $0, 0
sh $17, 2($2)
mult $17, $6
mflo $6
ori $17, $17, 1
div $6, $17
ori $17, $17, 1
divu $17, $17
addu $17, $6, $2
slt $6, $17, $6
jal label17
ori $6, $0, 16
slti $17, $17, -1730
label17: addu $6, $6, $31
jr $6
nop
beq $2, $6, label18
ori $2, $2, 1
divu $17, $2
xor $17, $17, $17
label18: mult $2, $6
jal label19
ori $2, $0, 16
andi $6, $6, 35642
label19: addu $2, $2, $31
jalr $2, $2
nop
ori $2, $0, 0
lhu $6, 10($2)
addi $17, $6, 0
jal label20
ori $6, $0, 16
slt $2, $17, $2
label20: addu $6, $6, $31
jr $6
nop
sltiu $17, $17, 10000
addu $2, $2, $6
mfhi $6
addu $2, $6, $2
mtlo $17
addi $2, $6, 0
srlv $17, $6, $2
ori $2, $2, 1
divu $17, $2
addiu $17, $6, -24196
ori $6, $2, 12629
mtlo $6
jal label21
ori $6, $0, 16
sll $2, $6, 17
label21: addu $6, $6, $31
jr $6
nop
jal label22
ori $6, $0, 16
mtlo $17
label22: addu $6, $6, $31
jr $6
nop
slt $2, $17, $17
srav $6, $17, $6
mtlo $17
ori $6, $0, 0
lb $6, 2($6)
mthi $6
ori $2, $0, 0
lb $17, 8($2)
jal label23
ori $6, $0, 16
mfhi $6
label23: addu $6, $6, $31
jr $6
nop
or $17, $17, $2
blez $2, label24
ori $2, $0, 0
lhu $2, 10($2)
ori $17, $17, 1
divu $6, $17
label24: sllv $2, $2, $6
addi $2, $17, 0
and $17, $2, $2
ori $17, $0, 0
sh $6, 14($17)
ori $6, $0, 0
lb $2, 5($6)
srav $2, $2, $6
bltz $2, label25
ori $6, $0, 0
lbu $17, 0($6)
ori $17, $0, 0
lw $17, 12($17)
label25: xor $17, $6, $6
ori $2, $2, 1
div $17, $2
sllv $6, $17, $6
ori $17, $0, 0
lh $6, 4($17)
subu $2, $6, $17
ori $17, $0, 0
sb $6, 11($17)
sra $17, $17, 24
ori $2, $0, 0
lbu $6, 7($2)
addu $2, $17, $17
ori $2, $0, 0
lbu $2, 8($2)
bltz $2, label26
ori $6, $0, 0
sh $2, 2($6)
ori $6, $0, 0
sb $17, 5($6)
label26: ori $17, $17, 1
divu $6, $17
ori $6, $6, 1
divu $2, $6
bgtz $2, label27
mult $17, $2
ori $17, $0, 0
sw $6, 8($17)
label27: mthi $2
ori $2, $0, 0
sb $2, 15($2)
ori $17, $17, 1
divu $2, $17
ori $2, $0, 0
lh $2, 10($2)
addiu $6, $17, 11087
sub $17, $17, $17
add $2, $0, $2
or $17, $17, $17
blez $17, label28
ori $6, $6, 1
div $6, $6
xor $6, $6, $2
label28: andi $6, $6, 26776
bgez $6, label29
mfhi $2
addiu $2, $2, -19083
label29: srav $6, $6, $6
and $17, $2, $2
jal label30
ori $6, $0, 16
slti $6, $17, -31476
label30: addu $6, $6, $31
jr $6
nop
bgtz $6, label31
subu $6, $2, $17
ori $6, $6, 1
div $6, $6
label31: slt $2, $2, $2
ori $17, $0, 0
lhu $6, 14($17)
ori $17, $0, 0
lb $6, 14($17)
jal label32
ori $2, $0, 16
mthi $17
label32: addu $2, $2, $31
jr $2
nop
ori $2, $0, 0
lhu $17, 10($2)
sltu $17, $17, $6
mtlo $17
ori $6, $0, 0
lb $17, 5($6)
mtlo $17
xori $2, $17, 24417
bne $6, $2, label33
subu $2, $6, $2
mflo $17
label33: or $2, $17, $17
addu $17, $17, $2
ori $17, $2, 63424
ori $6, $0, 0
lw $17, 4($6)
mthi $17
add $6, $0, $6
and $2, $6, $2
sra $2, $2, 8
srav $6, $17, $6
mult $17, $2
lui $6, 37745
mult $17, $17
ori $17, $0, 0
sw $17, 0($17)
xori $6, $6, 43011
ori $17, $0, 0
sb $17, 0($17)
jal label34
ori $2, $0, 16
xori $17, $2, 46855
label34: addu $2, $2, $31
jalr $2, $2
nop
multu $2, $2
srlv $6, $17, $2
xori $6, $6, 36630
j label35
multu $2, $2
sltu $6, $2, $2
label35: sltu $17, $2, $17
ori $6, $6, 1
divu $17, $6
sub $2, $17, $17
bne $6, $17, label36
ori $17, $0, 0
lbu $6, 6($17)
xor $17, $6, $17
label36: addiu $17, $2, 9207
slti $17, $6, 1353
ori $2, $0, 0
lbu $17, 11($2)
bgtz $6, label37
ori $2, $0, 0
lhu $6, 4($2)
and $17, $2, $2
label37: sltu $6, $6, $17
nor $6, $6, $17
mthi $6
bgez $17, label38
ori $17, $0, 0
lh $2, 2($17)
srav $17, $17, $6
label38: addu $17, $6, $2
mthi $17
addi $6, $6, 0
ori $17, $17, 1
divu $2, $17
jal label39
ori $6, $0, 16
slti $17, $2, -9729
label39: addu $6, $6, $31
jr $6
nop
andi $2, $2, 55241
mtlo $2
beq $17, $6, label40
ori $2, $0, 0
lw $17, 8($2)
addi $2, $17, 0
label40: or $2, $17, $2
mthi $2
ori $6, $6, 1
divu $2, $6
slti $2, $17, -31399
bne $2, $17, label41
addiu $2, $2, -13653
or $17, $2, $17
label41: ori $17, $0, 0
sh $6, 12($17)
and $6, $17, $17
ori $2, $2, 1
divu $17, $2
beq $6, $17, label42
addu $17, $2, $6
addi $6, $2, 0
label42: srl $17, $6, 8
ori $2, $2, 1
div $2, $2
ori $17, $0, 0
sh $17, 10($17)
sllv $2, $6, $6
blez $2, label43
add $6, $0, $2
ori $17, $0, 0
lbu $17, 2($17)
label43: mflo $6
ori $6, $0, 0
sh $6, 14($6)
mthi $6
xor $2, $17, $2
sltiu $2, $17, -28573
bgtz $6, label44
sub $6, $2, $2
ori $6, $0, 0
lb $2, 8($6)
label44: srav $6, $17, $6
mthi $2
ori $6, $17, 23262
or $6, $2, $6
sltu $17, $17, $2
sltu $2, $2, $6
sltiu $6, $2, -5792
ori $17, $0, 0
lbu $2, 5($17)
andi $6, $2, 14872
jal label45
ori $2, $0, 16
multu $6, $17
label45: addu $2, $2, $31
jr $2
nop
bltz $17, label46
slt $6, $2, $6
srl $6, $17, 3
label46: ori $6, $2, 11154
ori $2, $0, 0
lw $2, 12($2)
blez $17, label47
add $2, $0, $17
subu $6, $6, $6
label47: sll $2, $17, 24
blez $6, label48
ori $6, $0, 0
sb $6, 8($6)
ori $2, $0, 0
lb $2, 5($2)
label48: slti $6, $6, -20476
sltiu $17, $17, -21762
andi $2, $6, 19555
jal label49
ori $17, $0, 16
or $2, $6, $6
label49: addu $17, $17, $31
jr $17
nop
mflo $6
ori $17, $0, 0
lb $2, 14($17)
xori $2, $2, 16233
mult $17, $6
multu $6, $17
sltu $17, $2, $6
j label50
xori $6, $17, 32580
ori $6, $6, 1
divu $17, $6
label50: sllv $17, $17, $6
ori $6, $0, 0
lhu $6, 12($6)
ori $2, $0, 0
sw $2, 8($2)
bne $2, $2, label51
addiu $2, $17, -28720
ori $17, $17, 1
divu $17, $17
label51: mthi $17
ori $2, $0, 0
sw $2, 0($2)
ori $17, $2, 34260
bgez $2, label52
sll $6, $2, 2
sllv $6, $2, $6
label52: sltu $17, $6, $2
bgtz $6, label53
ori $2, $0, 0
lbu $6, 4($2)
multu $2, $17
label53: or $17, $17, $2
ori $6, $0, 0
lh $17, 6($6)
sltiu $17, $6, 8840
andi $2, $6, 46124
or $17, $6, $2
blez $6, label54
srlv $2, $2, $2
srlv $2, $17, $6
label54: addiu $2, $2, -24358
sltu $17, $6, $17
srlv $2, $2, $17
mfhi $6
sltu $6, $2, $2
and $17, $2, $6
addi $17, $6, 0
sll $6, $2, 14
xori $2, $6, 23875
bne $17, $6, label55
ori $2, $0, 0
lbu $17, 3($2)
sltiu $17, $17, -22699
label55: sltiu $17, $6, -19385
ori $6, $0, 0
lb $2, 12($6)
bgtz $2, label56
srlv $6, $17, $2
ori $6, $0, 0
sb $17, 1($6)
label56: ori $6, $0, 0
sw $17, 0($6)
blez $17, label57
ori $6, $0, 0
lbu $17, 9($6)
sub $2, $2, $2
label57: srav $6, $17, $2
xori $6, $6, 20627
ori $17, $0, 0
lbu $2, 8($17)
ori $6, $0, 0
sb $17, 4($6)
sllv $6, $17, $6
slti $17, $2, -20245
bgtz $17, label58
ori $17, $0, 0
sw $2, 8($17)
mtlo $6
label58: ori $6, $6, 1
divu $17, $6
xori $2, $17, 35383
sra $2, $6, 1
ori $6, $6, 1
divu $6, $6
addi $2, $6, 0
xori $17, $2, 38744
mult $17, $17
jal label59
ori $2, $0, 16
mfhi $17
label59: addu $2, $2, $31
jalr $2, $2
nop
ori $2, $0, 0
sh $2, 0($2)
mthi $17
xor $2, $6, $6
blez $17, label60
srlv $17, $17, $6
addi $2, $6, 0
label60: ori $6, $0, 0
lw $17, 0($6)
subu $6, $6, $17
addiu $6, $2, 4731
slt $6, $2, $6
ori $6, $0, 0
sb $2, 10($6)
sltu $2, $6, $6
slt $2, $6, $2
jal label61
ori $17, $0, 16
mflo $2
label61: addu $17, $17, $31
jalr $17, $17
nop
ori $17, $0, 0
sb $6, 15($17)
ori $17, $0, 0
sh $2, 10($17)
ori $17, $0, 0
lbu $6, 9($17)
ori $6, $0, 0
lh $6, 14($6)
sllv $6, $2, $6
sllv $6, $2, $17
sllv $6, $2, $6
ori $2, $0, 0
sh $6, 8($2)
addi $2, $17, 0
srav $2, $17, $6
addiu $17, $2, 22632
jal label62
ori $2, $0, 16
addi $6, $2, 0
label62: addu $2, $2, $31
jr $2
nop
ori $6, $0, 0
sh $6, 0($6)
lui $6, 40088
ori $17, $0, 0
lh $17, 0($17)
add $6, $0, $6
nor $17, $2, $6
mtlo $17
ori $6, $0, 0
lbu $6, 3($6)
addi $2, $17, 0
ori $2, $0, 0
sb $2, 6($2)
or $2, $6, $2
srl $17, $2, 11
ori $2, $0, 0
sb $6, 15($2)
mult $6, $17
mthi $17
andi $2, $17, 35419
blez $2, label63
addiu $17, $6, 11198
mult $17, $17
label63: add $17, $0, $6
sltu $2, $2, $17
sltiu $17, $17, 8206
sra $17, $6, 24
sub $17, $17, $17
lui $6, 44531
mtlo $2
ori $6, $0, 0
lhu $17, 2($6)
slt $2, $6, $17
j label64
ori $17, $0, 0
sh $6, 0($17)
subu $2, $2, $6
label64: mfhi $2
ori $6, $0, 0
lw $2, 12($6)
ori $2, $0, 0
sw $2, 8($2)
mtlo $2
j label65
add $17, $0, $2
sllv $17, $2, $6
label65: mthi $6
bltz $2, label66
ori $6, $0, 0
sb $17, 9($6)
addiu $6, $2, 21184
label66: srl $6, $17, 8
beq $2, $6, label67
add $6, $0, $2
mult $2, $6
label67: lui $6, 40139
srav $17, $2, $17
j label68
ori $6, $0, 0
sh $17, 10($6)
mtlo $2
label68: add $17, $0, $17
nor $17, $17, $17
and $17, $17, $17
bne $17, $6, label69
xor $6, $2, $17
ori $2, $0, 0
sh $2, 10($2)
label69: mtlo $17
subu $17, $2, $6
blez $6, label70
srlv $2, $2, $17
mtlo $2
label70: addiu $2, $2, 27069
sllv $17, $2, $2
subu $6, $17, $2
jal label71
ori $17, $0, 16
sllv $6, $6, $17
label71: addu $17, $17, $31
jalr $2, $17
nop
add $2, $0, $6
ori $17, $0, 0
sw $6, 4($17)
ori $6, $0, 0
sh $2, 10($6)
beq $17, $17, label72
xori $2, $17, 29996
sltiu $6, $2, 20137
label72: xori $6, $2, 11698
slt $17, $6, $17
jal label73
ori $17, $0, 16
multu $6, $17
label73: addu $17, $17, $31
jr $17
nop
jal label74
ori $6, $0, 16
add $6, $0, $2
label74: addu $6, $6, $31
jalr $6, $6
nop
slti $2, $6, -19494
ori $6, $6, 1
div $6, $6
mthi $2
mtlo $6
mtlo $2
ori $2, $0, 0
lw $6, 12($2)
ori $17, $17, 1
div $17, $17
sllv $2, $17, $6
slti $6, $2, -1320
sltu $17, $17, $17
ori $17, $6, 51339
sll $17, $6, 23
ori $6, $0, 0
sh $6, 6($6)
multu $6, $6
ori $17, $0, 0
lbu $6, 5($17)
ori $17, $17, 1
divu $2, $17
add $2, $0, $2
bgtz $6, label75
xori $17, $2, 39467
mfhi $2
label75: ori $6, $0, 0
lh $6, 6($6)
sub $6, $6, $6
subu $17, $6, $17
sltiu $2, $6, 6143
ori $2, $2, 1
divu $6, $2
nor $2, $6, $6
ori $17, $0, 0
sh $17, 10($17)
or $17, $6, $17
slt $6, $6, $2
sub $6, $6, $6
addiu $17, $17, -6322
ori $2, $0, 0
lhu $2, 10($2)
slt $2, $2, $6
bltz $6, label76
nor $2, $17, $2
srlv $6, $2, $2
label76: mtlo $17
add $6, $0, $6
addi $17, $2, 0
slt $6, $2, $17
ori $2, $0, 0
sb $6, 9($2)
xori $2, $6, 5695
mult $6, $17
ori $6, $0, 0
sh $6, 10($6)
sllv $2, $2, $6
sllv $2, $2, $2
xor $6, $17, $6
add $2, $0, $2
j label77
mtlo $2
ori $6, $6, 1
divu $2, $6
label77: sllv $2, $2, $17
slti $2, $17, 10183
mtlo $17
addiu $17, $17, -26571
subu $2, $6, $6
sra $17, $2, 26
jal label78
ori $2, $0, 16
sub $6, $2, $2
label78: addu $2, $2, $31
jr $2
nop
ori $6, $0, 0
lhu $17, 4($6)
mflo $6
mtlo $6
addiu $2, $6, 32406
beq $2, $6, label79
ori $6, $0, 0
sb $17, 15($6)
mfhi $17
label79: mthi $2
srl $2, $17, 8
ori $17, $17, 1
div $6, $17
or $6, $2, $2
sra $6, $2, 24
multu $6, $17
ori $2, $0, 0
sh $2, 4($2)
or $17, $17, $17
ori $6, $0, 0
lw $17, 0($6)
beq $17, $2, label80
mult $2, $6
ori $2, $0, 0
sb $17, 10($2)
label80: mtlo $17
ori $2, $0, 0
lw $6, 12($2)
srlv $17, $6, $17
mult $17, $17
xori $17, $17, 2334
blez $17, label81
multu $17, $6
xor $17, $17, $2
label81: mfhi $17
ori $17, $0, 0
lb $6, 13($17)
nor $2, $6, $2
multu $17, $6
andi $6, $6, 29597
ori $2, $6, 3769
jal label82
ori $6, $0, 16
mthi $17
label82: addu $6, $6, $31
jalr $6, $6
nop
addiu $6, $17, -9221
ori $2, $0, 0
lh $17, 8($2)
nor $17, $2, $6
ori $17, $0, 0
lhu $17, 2($17)
bltz $6, label83
sra $2, $2, 14
addu $6, $6, $6
label83: ori $6, $0, 0
lbu $6, 13($6)
sra $2, $6, 19
ori $17, $0, 0
lh $6, 6($17)
slt $6, $2, $17
addiu $6, $6, 21120
multu $6, $2
mtlo $17
sllv $2, $6, $2
ori $6, $6, 1
div $2, $6
ori $2, $0, 0
lh $17, 14($2)
andi $2, $6, 64387
bgtz $17, label84
ori $17, $0, 0
lw $6, 0($17)
multu $17, $6
label84: ori $17, $0, 0
sb $17, 6($17)
sra $2, $17, 4
addiu $2, $17, 237
sllv $17, $6, $6
ori $6, $6, 1
divu $6, $6
mflo $17
sub $17, $2, $2
jal label85
ori $2, $0, 16
srlv $17, $17, $2
label85: addu $2, $2, $31
jr $2
nop
addiu $17, $6, 25430
lui $6, 25194
ori $6, $0, 0
sb $6, 0($6)
mflo $2
ori $6, $17, 8528
srl $17, $17, 26
bgtz $17, label86
addi $6, $6, 0
mtlo $6
label86: ori $17, $0, 0
lhu $17, 2($17)
ori $6, $0, 0
lhu $2, 10($6)
mthi $2
lui $17, 16357
ori $2, $0, 0
sh $17, 0($2)
addi $2, $17, 0
addu $2, $17, $2
blez $2, label87
ori $2, $17, 50463
ori $17, $17, 26303
label87: srlv $6, $17, $2
sltiu $2, $2, 32197
sltiu $6, $17, 7937
sltu $6, $2, $2
