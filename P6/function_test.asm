lui   $at, 0x9876
ori   $a0, $at, 0x5432
lui   $at, 0xfedc
ori   $a2, $at, 0xba98
mult  $a0, $a2
mfhi  $t7
mflo  $s0
div $a0, $a2
mfhi  $s3
mflo  $s4
