ori $28, $0, 0
ori $29, $0, 0
subu $26, $26, $4
ori $4, $14, 9971
j label1
ori $14, $4, 35741
ori $26, $0, 0
sw $4, 12($26)
label1: addu $26, $26, $14
subu $26, $4, $26
beq $14, $26, label2
lui $14, 36238
ori $4, $0, 0
sw $4, 12($4)
label2: subu $4, $4, $14
beq $26, $26, label3
addu $26, $14, $14
lui $4, 51825
label3: ori $14, $26, 34428
addu $26, $26, $4
subu $4, $4, $26
ori $26, $26, 31622
jal label4
ori $14, $0, 16
lui $26, 7417
label4: addu $14, $14, $31
jr $14
nop
lui $26, 58750
beq $4, $4, label5
subu $4, $26, $14
ori $14, $14, 41247
label5: ori $4, $0, 0
lw $26, 0($4)
lui $4, 16331
ori $26, $0, 0
lw $4, 0($26)
beq $4, $14, label6
subu $26, $26, $4
subu $26, $4, $4
label6: subu $26, $26, $4
beq $4, $4, label7
subu $4, $14, $4
ori $14, $26, 2511
label7: ori $26, $0, 0
lw $26, 4($26)
lui $26, 16279
ori $14, $0, 0
lw $14, 12($14)
beq $4, $26, label8
lui $4, 11139
ori $4, $26, 20173
label8: subu $26, $14, $4
ori $14, $26, 57850
ori $4, $4, 19760
addu $4, $26, $14
j label9
subu $4, $26, $26
lui $4, 29424
label9: subu $14, $26, $14
ori $4, $0, 0
lw $4, 0($4)
ori $4, $0, 0
lw $26, 4($4)
beq $14, $26, label10
subu $26, $4, $26
ori $4, $4, 55789
label10: ori $4, $4, 60781
lui $26, 42969
subu $26, $14, $14
ori $4, $0, 0
sw $4, 12($4)
ori $26, $26, 27347
addu $4, $14, $26
j label11
subu $4, $26, $4
addu $14, $4, $26
label11: ori $14, $0, 0
lw $26, 8($14)
lui $14, 28148
subu $4, $26, $26
lui $14, 42080
beq $26, $4, label12
ori $26, $0, 0
lw $4, 8($26)
subu $14, $4, $4
label12: ori $4, $0, 0
sw $26, 8($4)
j label13
lui $26, 52717
ori $26, $0, 0
sw $26, 8($26)
label13: ori $14, $0, 0
lw $26, 8($14)
lui $14, 51656
ori $26, $0, 0
lw $14, 4($26)
subu $4, $26, $14
j label14
ori $14, $0, 0
lw $26, 12($14)
addu $26, $14, $14
label14: ori $4, $4, 2136
j label15
lui $14, 52305
ori $26, $0, 0
sw $14, 0($26)
label15: subu $14, $4, $14
lui $14, 21648
lui $14, 32131
subu $14, $14, $26
lui $26, 9739
ori $4, $26, 34004
ori $4, $0, 0
sw $26, 4($4)
ori $26, $0, 0
sw $4, 12($26)
lui $14, 50679
lui $26, 61957
jal label16
ori $26, $0, 16
addu $14, $14, $4
label16: addu $26, $26, $31
jr $26
nop
jal label17
ori $4, $0, 16
lui $4, 41632
label17: addu $4, $4, $31
jr $4
nop
ori $14, $14, 52899
subu $26, $26, $14
ori $26, $26, 62148
j label18
ori $4, $0, 0
sw $14, 8($4)
addu $26, $26, $14
label18: subu $26, $26, $26
jal label19
ori $14, $0, 16
addu $14, $14, $26
label19: addu $14, $14, $31
jr $14
nop
subu $26, $14, $14
ori $26, $0, 0
sw $4, 8($26)
lui $14, 63671
ori $14, $0, 0
lw $14, 0($14)
lui $26, 12330
addu $14, $14, $26
addu $26, $4, $26
jal label20
ori $14, $0, 16
lui $26, 32714
label20: addu $14, $14, $31
jr $14
nop
j label21
ori $26, $26, 26206
lui $26, 58027
label21: addu $26, $26, $26
jal label22
ori $4, $0, 16
addu $14, $26, $4
label22: addu $4, $4, $31
jr $4
nop
ori $4, $0, 0
lw $14, 4($4)
j label23
ori $14, $0, 0
lw $14, 4($14)
addu $14, $4, $26
label23: ori $4, $4, 48334
beq $4, $26, label24
ori $4, $0, 0
sw $4, 4($4)
ori $14, $0, 0
sw $26, 12($14)
label24: addu $4, $14, $4
ori $14, $14, 18679
ori $14, $0, 0
sw $26, 8($14)
j label25
lui $26, 39404
ori $26, $4, 13624
label25: addu $14, $26, $14
addu $26, $26, $26
subu $4, $14, $26
ori $26, $0, 0
sw $14, 12($26)
addu $26, $26, $26
addu $26, $26, $26
ori $14, $4, 60041
ori $4, $0, 0
sw $4, 8($4)
beq $26, $14, label26
lui $14, 35607
addu $4, $4, $14
label26: lui $26, 54387
ori $26, $0, 0
sw $14, 4($26)
beq $4, $14, label27
ori $4, $14, 36098
lui $4, 61311
label27: ori $14, $26, 40131
ori $14, $0, 0
lw $14, 0($14)
addu $4, $26, $14
ori $14, $0, 0
lw $14, 12($14)
lui $26, 8885
lui $14, 36299
ori $4, $0, 0
lw $14, 12($4)
ori $4, $0, 0
sw $4, 0($4)
ori $14, $4, 50358
j label28
ori $26, $4, 45662
ori $26, $4, 29284
label28: ori $4, $0, 0
sw $26, 0($4)
ori $4, $0, 0
lw $26, 0($4)
addu $4, $4, $4
ori $14, $14, 971
subu $14, $4, $14
ori $26, $0, 0
lw $26, 4($26)
ori $26, $0, 0
lw $26, 4($26)
addu $14, $26, $26
beq $14, $4, label29
lui $14, 25858
ori $14, $14, 61989
label29: subu $14, $14, $14
beq $14, $4, label30
addu $26, $4, $26
subu $26, $26, $4
label30: lui $26, 5034
lui $26, 25137
beq $14, $14, label31
ori $26, $0, 0
lw $4, 4($26)
addu $4, $14, $4
label31: ori $14, $0, 0
sw $14, 0($14)
ori $4, $0, 0
lw $14, 8($4)
addu $4, $14, $26
ori $4, $26, 49662
ori $14, $0, 0
lw $26, 4($14)
addu $14, $26, $4
lui $14, 32984
subu $4, $26, $26
j label32
ori $14, $0, 0
sw $14, 12($14)
ori $26, $0, 0
sw $4, 4($26)
label32: lui $14, 64039
addu $14, $14, $26
beq $14, $4, label33
lui $14, 53276
lui $4, 36790
label33: ori $4, $26, 41310
jal label34
ori $26, $0, 16
subu $4, $26, $4
label34: addu $26, $26, $31
jr $26
nop
addu $14, $4, $14
subu $4, $4, $26
j label35
lui $4, 63697
ori $14, $4, 31147
label35: ori $14, $0, 0
sw $4, 4($14)
jal label36
ori $14, $0, 16
subu $14, $4, $14
label36: addu $14, $14, $31
jr $14
nop
ori $4, $0, 0
sw $26, 8($4)
lui $4, 18724
ori $4, $0, 0
sw $26, 4($4)
addu $26, $14, $14
beq $26, $4, label37
subu $14, $4, $14
addu $4, $26, $4
label37: addu $14, $26, $4
addu $14, $26, $14
lui $14, 32362
beq $26, $26, label38
lui $26, 59852
ori $14, $0, 0
lw $4, 12($14)
label38: addu $26, $26, $26
jal label39
ori $26, $0, 16
lui $14, 25826
label39: addu $26, $26, $31
jr $26
nop
ori $26, $26, 36780
j label40
addu $26, $26, $26
ori $26, $0, 0
lw $14, 12($26)
label40: ori $14, $0, 0
lw $14, 4($14)
subu $4, $4, $26
jal label41
ori $14, $0, 16
addu $4, $4, $26
label41: addu $14, $14, $31
jr $14
nop
addu $4, $14, $4
j label42
ori $4, $0, 0
lw $14, 8($4)
ori $4, $26, 52717
label42: addu $26, $14, $4
subu $4, $26, $26
ori $26, $4, 24351
subu $14, $26, $26
beq $14, $14, label43
addu $14, $4, $26
subu $4, $26, $14
label43: subu $26, $14, $14
ori $4, $4, 18316
ori $14, $0, 0
sw $26, 12($14)
ori $26, $14, 1504
jal label44
ori $14, $0, 16
subu $26, $14, $26
label44: addu $14, $14, $31
jr $14
nop
ori $26, $0, 0
sw $26, 12($26)
lui $4, 20949
beq $26, $26, label45
ori $4, $0, 0
lw $14, 8($4)
lui $26, 13002
label45: addu $26, $4, $14
subu $14, $4, $14
beq $26, $14, label46
ori $4, $4, 22558
subu $4, $26, $14
label46: lui $4, 54800
ori $14, $0, 0
sw $26, 4($14)
lui $4, 34903
addu $14, $14, $14
ori $26, $0, 0
lw $4, 0($26)
lui $4, 41121
j label47
ori $4, $4, 51793
ori $26, $0, 0
sw $4, 8($26)
label47: ori $26, $0, 0
lw $26, 0($26)
lui $4, 26355
addu $26, $4, $14
j label48
subu $4, $14, $26
ori $4, $0, 0
sw $4, 4($4)
label48: ori $4, $26, 29651
addu $14, $14, $26
addu $4, $26, $4
ori $14, $4, 49375
subu $4, $4, $4
j label49
addu $26, $14, $26
addu $14, $26, $14
label49: addu $26, $26, $14
beq $14, $14, label50
ori $4, $0, 0
sw $26, 4($4)
addu $26, $14, $4
label50: lui $4, 30467
ori $26, $0, 0
lw $26, 4($26)
ori $14, $0, 0
sw $4, 12($14)
ori $26, $0, 0
lw $4, 4($26)
lui $14, 18682
lui $4, 17743
beq $4, $4, label51
lui $4, 42110
lui $26, 30205
label51: subu $4, $4, $14
j label52
subu $26, $26, $14
ori $4, $0, 0
lw $26, 12($4)
label52: ori $26, $26, 54805
ori $4, $26, 18163
jal label53
ori $14, $0, 16
subu $26, $26, $26
label53: addu $14, $14, $31
jr $14
nop
j label54
lui $14, 13952
ori $26, $0, 0
sw $14, 8($26)
label54: ori $4, $14, 37437
ori $4, $4, 19949
lui $4, 9472
ori $26, $0, 0
sw $26, 4($26)
jal label55
ori $26, $0, 16
lui $26, 8605
label55: addu $26, $26, $31
jr $26
nop
ori $4, $0, 0
sw $14, 8($4)
lui $4, 21342
j label56
lui $26, 60851
lui $4, 51982
label56: addu $14, $26, $4
ori $4, $14, 30650
jal label57
ori $14, $0, 16
ori $14, $14, 48512
label57: addu $14, $14, $31
jr $14
nop
lui $14, 25158
ori $26, $26, 16083
addu $26, $4, $4
ori $4, $0, 0
sw $26, 12($4)
ori $14, $14, 2075
ori $4, $0, 0
sw $4, 0($4)
ori $4, $0, 0
lw $4, 8($4)
j label58
ori $4, $14, 42502
ori $14, $0, 0
sw $4, 8($14)
label58: ori $26, $0, 0
sw $4, 4($26)
beq $26, $4, label59
ori $26, $0, 0
sw $26, 4($26)
addu $4, $26, $14
label59: ori $26, $0, 0
lw $14, 8($26)
ori $14, $0, 0
sw $14, 0($14)
ori $14, $26, 57258
ori $4, $14, 26702
j label60
subu $4, $14, $14
subu $4, $14, $4
label60: ori $4, $26, 2163
lui $14, 23460
ori $14, $0, 0
lw $14, 12($14)
addu $26, $4, $14
beq $26, $14, label61
ori $26, $0, 0
sw $26, 4($26)
ori $26, $0, 0
lw $4, 4($26)
label61: lui $14, 14175
jal label62
ori $14, $0, 16
addu $4, $4, $4
label62: addu $14, $14, $31
jr $14
nop
lui $14, 16379
jal label63
ori $4, $0, 16
ori $4, $26, 32223
label63: addu $4, $4, $31
jr $4
nop
ori $14, $0, 0
lw $26, 0($14)
ori $14, $0, 0
lw $26, 12($14)
lui $14, 629
ori $26, $0, 0
sw $4, 4($26)
jal label64
ori $14, $0, 16
addu $14, $14, $14
label64: addu $14, $14, $31
jr $14
nop
lui $4, 23250
ori $26, $0, 0
lw $26, 4($26)
ori $26, $0, 0
sw $26, 8($26)
ori $14, $0, 0
sw $14, 8($14)
beq $4, $26, label65
ori $26, $0, 0
lw $26, 8($26)
subu $14, $14, $26
label65: ori $14, $14, 44220
ori $14, $4, 22033
lui $4, 51182
ori $14, $0, 0
lw $14, 12($14)
j label66
ori $14, $26, 34625
ori $14, $14, 33645
label66: subu $4, $4, $14
j label67
lui $14, 50826
ori $14, $0, 0
sw $14, 12($14)
label67: ori $4, $14, 49834
addu $26, $4, $4
ori $14, $0, 0
lw $26, 4($14)
lui $14, 28562
ori $26, $0, 0
lw $14, 12($26)
jal label68
ori $26, $0, 16
ori $14, $26, 58104
label68: addu $26, $26, $31
jr $26
nop
ori $4, $0, 0
sw $14, 4($4)
j label69
lui $4, 16213
ori $26, $0, 0
lw $26, 12($26)
label69: addu $14, $4, $4
jal label70
ori $4, $0, 16
subu $14, $14, $14
label70: addu $4, $4, $31
jr $4
nop
beq $14, $14, label71
ori $14, $0, 0
sw $14, 4($14)
addu $26, $26, $4
label71: ori $4, $26, 1226
jal label72
ori $4, $0, 16
ori $14, $26, 34254
label72: addu $4, $4, $31
jr $4
nop
beq $14, $14, label73
addu $4, $4, $14
lui $14, 20712
label73: addu $26, $26, $26
beq $14, $4, label74
subu $26, $14, $4
subu $26, $4, $14
label74: lui $14, 46366
ori $26, $14, 52421
addu $26, $14, $26
subu $4, $26, $26
lui $14, 49769
addu $26, $14, $26
j label75
ori $26, $0, 0
lw $14, 8($26)
lui $4, 9196
label75: ori $14, $26, 17556
j label76
ori $26, $26, 18705
addu $14, $4, $26
label76: lui $4, 60471
ori $26, $0, 0
lw $14, 0($26)
jal label77
ori $26, $0, 16
ori $26, $26, 56084
label77: addu $26, $26, $31
jr $26
nop
addu $26, $14, $26
addu $4, $26, $4
jal label78
ori $4, $0, 16
ori $14, $26, 63579
label78: addu $4, $4, $31
jr $4
nop
j label79
subu $4, $26, $14
addu $14, $14, $4
label79: ori $4, $4, 62926
ori $4, $0, 0
sw $4, 4($4)
lui $26, 4342
lui $14, 3744
j label80
ori $26, $0, 0
sw $4, 8($26)
ori $14, $0, 0
lw $26, 0($14)
label80: lui $14, 30086
addu $4, $26, $4
lui $14, 23445
beq $14, $4, label81
ori $4, $0, 0
lw $4, 8($4)
subu $4, $26, $4
label81: ori $26, $4, 1343
jal label82
ori $26, $0, 16
lui $14, 26326
label82: addu $26, $26, $31
jr $26
nop
ori $26, $14, 39061
addu $4, $26, $4
j label83
ori $26, $0, 0
lw $26, 12($26)
subu $26, $14, $4
label83: ori $4, $0, 0
lw $26, 0($4)
subu $26, $26, $26
subu $14, $26, $26
addu $26, $4, $4
beq $14, $26, label84
lui $14, 39189
addu $4, $14, $4
label84: addu $4, $4, $14
ori $4, $0, 0
sw $4, 12($4)
ori $26, $26, 11405
addu $14, $4, $14
addu $14, $26, $4
addu $14, $26, $26
ori $26, $4, 8543
lui $14, 64521
addu $26, $26, $26
jal label85
ori $4, $0, 16
addu $26, $14, $26
label85: addu $4, $4, $31
jr $4
nop
ori $4, $0, 0
lw $14, 4($4)
addu $26, $26, $26
ori $14, $4, 38346
ori $4, $26, 46498
beq $14, $14, label86
addu $4, $26, $4
ori $4, $0, 0
sw $14, 0($4)
label86: ori $26, $4, 40813
ori $26, $4, 35737
jal label87
ori $26, $0, 16
subu $26, $26, $4
label87: addu $26, $26, $31
jr $26
nop
addu $4, $26, $4
beq $4, $26, label88
subu $4, $26, $26
addu $4, $4, $26
label88: ori $14, $0, 0
lw $14, 4($14)
jal label89
ori $14, $0, 16
lui $26, 36611
label89: addu $14, $14, $31
jr $14
nop
ori $4, $0, 0
sw $4, 8($4)
ori $4, $26, 16210
beq $14, $26, label90
ori $4, $0, 0
lw $26, 8($4)
lui $26, 57326
label90: subu $4, $4, $26
j label91
lui $26, 44942
ori $4, $0, 0
lw $14, 0($4)
label91: ori $4, $0, 0
lw $26, 0($4)
j label92
ori $26, $0, 0
sw $26, 12($26)
subu $4, $4, $26
label92: subu $4, $26, $26
subu $14, $4, $14
jal label93
ori $26, $0, 16
addu $26, $26, $26
label93: addu $26, $26, $31
jr $26
nop
jal label94
ori $14, $0, 16
ori $14, $4, 6823
label94: addu $14, $14, $31
jr $14
nop
j label95
addu $26, $4, $26
addu $26, $26, $4
label95: ori $26, $26, 6097
ori $14, $0, 0
sw $4, 0($14)
beq $26, $26, label96
addu $4, $4, $26
subu $26, $4, $14
label96: addu $14, $14, $4
ori $4, $0, 0
lw $14, 4($4)
ori $26, $14, 21759
j label97
ori $26, $26, 12381
ori $4, $0, 0
lw $26, 8($4)
label97: ori $14, $0, 0
sw $4, 8($14)
ori $26, $14, 56364
j label98
ori $14, $26, 37762
ori $14, $0, 0
sw $4, 8($14)
label98: ori $26, $0, 0
lw $14, 8($26)
subu $14, $26, $4
addu $4, $14, $26
ori $4, $0, 0
lw $4, 8($4)
ori $14, $0, 0
lw $4, 8($14)
subu $4, $4, $14
addu $4, $26, $4
ori $14, $0, 0
lw $4, 12($14)
ori $26, $14, 56782
lui $26, 2968
addu $4, $4, $4
ori $4, $4, 14450
addu $26, $26, $14
subu $14, $4, $4
beq $26, $14, label99
subu $14, $14, $14
ori $4, $0, 0
lw $26, 8($4)
label99: ori $26, $0, 0
lw $4, 8($26)
ori $4, $4, 58881
ori $14, $14, 38135
lui $26, 56135
jal label100
ori $14, $0, 16
addu $26, $26, $26
label100: addu $14, $14, $31
jr $14
nop
lui $26, 59210
addu $26, $14, $14
jal label101
ori $4, $0, 16
addu $4, $14, $26
label101: addu $4, $4, $31
jr $4
nop
jal label102
ori $14, $0, 16
ori $26, $26, 27793
label102: addu $14, $14, $31
jr $14
nop
j label103
ori $26, $0, 0
sw $4, 0($26)
subu $14, $4, $14
label103: ori $26, $0, 0
lw $14, 8($26)
jal label104
ori $26, $0, 16
ori $14, $4, 3664
label104: addu $26, $26, $31
jr $26
nop
ori $4, $0, 0
sw $14, 4($4)
ori $14, $26, 11284
addu $4, $4, $26
j label105
addu $26, $14, $4
lui $4, 46883
label105: addu $4, $14, $4
jal label106
ori $14, $0, 16
ori $4, $4, 56880
label106: addu $14, $14, $31
jr $14
nop
j label107
subu $4, $14, $4
subu $26, $4, $26
label107: lui $14, 42021
lui $26, 61418
lui $14, 21475
ori $4, $0, 0
lw $26, 8($4)
ori $4, $4, 41286
ori $4, $0, 0
lw $26, 8($4)
ori $4, $4, 43860
ori $14, $4, 43995
jal label108
ori $26, $0, 16
subu $14, $14, $4
label108: addu $26, $26, $31
jr $26
nop
j label109
ori $26, $0, 0
lw $14, 4($26)
ori $26, $0, 0
sw $26, 4($26)
label109: ori $4, $0, 0
sw $4, 4($4)
subu $4, $4, $14
subu $26, $4, $26
subu $14, $4, $4
lui $4, 27856
subu $4, $14, $14
ori $26, $0, 0
sw $14, 12($26)
addu $4, $14, $14
addu $4, $26, $4
jal label110
ori $14, $0, 16
ori $26, $26, 7220
label110: addu $14, $14, $31
jr $14
nop
subu $14, $4, $26
ori $4, $4, 61664
ori $26, $26, 54359
ori $26, $4, 4000
ori $14, $0, 0
sw $4, 8($14)
addu $4, $14, $4
jal label111
ori $4, $0, 16
subu $14, $14, $14
label111: addu $4, $4, $31
jr $4
nop
jal label112
ori $26, $0, 16
ori $14, $14, 35376
label112: addu $26, $26, $31
jr $26
nop
lui $26, 30173
lui $4, 5616
addu $4, $4, $26
jal label113
ori $14, $0, 16
lui $26, 56168
label113: addu $14, $14, $31
jr $14
nop
ori $14, $26, 20601
j label114
ori $4, $26, 44658
lui $4, 16463
label114: lui $26, 40825
addu $4, $14, $14
ori $26, $0, 0
lw $4, 0($26)
beq $14, $14, label115
subu $4, $14, $14
ori $4, $0, 0
sw $26, 4($4)
label115: lui $4, 41220
ori $4, $26, 36166
ori $4, $4, 31177
subu $4, $26, $26
jal label116
ori $26, $0, 16
subu $14, $4, $14
label116: addu $26, $26, $31
jr $26
nop
lui $14, 32934
subu $4, $4, $26
lui $14, 52169
jal label117
ori $14, $0, 16
addu $4, $4, $4
label117: addu $14, $14, $31
jr $14
nop
lui $4, 44411
beq $26, $14, label118
lui $4, 48289
addu $14, $4, $26
label118: ori $4, $0, 0
lw $4, 12($4)
ori $4, $0, 0
lw $4, 8($4)
j label119
ori $26, $0, 0
lw $4, 4($26)
lui $26, 41233
label119: lui $4, 63965
