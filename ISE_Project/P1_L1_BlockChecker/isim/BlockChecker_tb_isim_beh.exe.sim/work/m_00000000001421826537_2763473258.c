/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/MyWorkspace/Computer_Organization/ISE_Project/P1_L1_BlockChecker/BlockChecker.v";
static int ng1[] = {69, 0};
static int ng2[] = {101, 0};
static int ng3[] = {32, 0};
static int ng4[] = {78, 0};
static int ng5[] = {110, 0};
static int ng6[] = {68, 0};
static int ng7[] = {100, 0};
static int ng8[] = {0, 0};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {0U, 0U};



static void Always_195_0(char *t0)
{
    char t11[8];
    char t27[8];
    char t42[8];
    char t58[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(195, ng0);

LAB5:    xsi_set_current_line(196, ng0);
    t4 = (t0 + 2608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(197, ng0);

LAB20:    xsi_set_current_line(198, ng0);
    t7 = (t0 + 2048U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB24;

LAB21:    if (t23 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t28) != 0)
        goto LAB27;

LAB28:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB29;

LAB30:    memcpy(t66, t27, 8);

LAB31:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB49;

LAB46:    if (t23 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t11) = 1;

LAB49:    t8 = (t11 + 4);
    t29 = *((unsigned int *)t8);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB52:
LAB45:    goto LAB19;

LAB9:    xsi_set_current_line(202, ng0);

LAB53:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t11) = 1;

LAB57:    memset(t27, 0, 8);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t10) != 0)
        goto LAB60;

LAB61:    t13 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB62;

LAB63:    memcpy(t66, t27, 8);

LAB64:    t71 = (t66 + 4);
    t95 = *((unsigned int *)t71);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB78:    goto LAB19;

LAB11:    xsi_set_current_line(206, ng0);

LAB79:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB83;

LAB80:    if (t23 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t11) = 1;

LAB83:    memset(t27, 0, 8);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t10) != 0)
        goto LAB86;

LAB87:    t13 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB88;

LAB89:    memcpy(t66, t27, 8);

LAB90:    t71 = (t66 + 4);
    t95 = *((unsigned int *)t71);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB104:    goto LAB19;

LAB13:    xsi_set_current_line(210, ng0);

LAB105:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB109;

LAB106:    if (t23 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t11) = 1;

LAB109:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB112:    goto LAB19;

LAB15:    xsi_set_current_line(214, ng0);

LAB113:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB117;

LAB114:    if (t23 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t11) = 1;

LAB117:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 2768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB120:    goto LAB19;

LAB23:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB28;

LAB27:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB29:    t40 = (t0 + 2048U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB35;

LAB32:    if (t54 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t42) = 1;

LAB35:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t59) != 0)
        goto LAB38;

LAB39:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t27 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB34:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t58) = 1;
    goto LAB39;

LAB38:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB39;

LAB40:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t27 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB42;

LAB43:    xsi_set_current_line(198, ng0);
    t100 = (t0 + 608);
    t101 = *((char **)t100);
    t100 = (t0 + 2768);
    xsi_vlogvar_assign_value(t100, t101, 0, 0, 3);
    goto LAB45;

LAB48:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(199, ng0);
    t10 = (t0 + 472);
    t12 = *((char **)t10);
    t10 = (t0 + 2768);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB52;

LAB56:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t27) = 1;
    goto LAB61;

LAB60:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB61;

LAB62:    t26 = (t0 + 2048U);
    t28 = *((char **)t26);
    t26 = ((char*)((ng5)));
    memset(t42, 0, 8);
    t34 = (t28 + 4);
    t35 = (t26 + 4);
    t45 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t26);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t35);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t35);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB68;

LAB65:    if (t54 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t42) = 1;

LAB68:    memset(t58, 0, 8);
    t41 = (t42 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t41) != 0)
        goto LAB71;

LAB72:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t44 = (t27 + 4);
    t57 = (t58 + 4);
    t59 = (t66 + 4);
    t73 = *((unsigned int *)t44);
    t74 = *((unsigned int *)t57);
    t75 = (t73 | t74);
    *((unsigned int *)t59) = t75;
    t76 = *((unsigned int *)t59);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB67:    t40 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t58) = 1;
    goto LAB72;

LAB71:    t43 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB72;

LAB73:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t66) = (t78 | t79);
    t65 = (t27 + 4);
    t70 = (t58 + 4);
    t82 = *((unsigned int *)t65);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t70);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t92 & t90);
    t93 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t93 & t91);
    goto LAB75;

LAB76:    xsi_set_current_line(203, ng0);
    t72 = (t0 + 744);
    t80 = *((char **)t72);
    t72 = (t0 + 2768);
    xsi_vlogvar_assign_value(t72, t80, 0, 0, 3);
    goto LAB78;

LAB82:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t27) = 1;
    goto LAB87;

LAB86:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB87;

LAB88:    t26 = (t0 + 2048U);
    t28 = *((char **)t26);
    t26 = ((char*)((ng7)));
    memset(t42, 0, 8);
    t34 = (t28 + 4);
    t35 = (t26 + 4);
    t45 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t26);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t35);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t35);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB94;

LAB91:    if (t54 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t42) = 1;

LAB94:    memset(t58, 0, 8);
    t41 = (t42 + 4);
    t60 = *((unsigned int *)t41);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t41) != 0)
        goto LAB97;

LAB98:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t44 = (t27 + 4);
    t57 = (t58 + 4);
    t59 = (t66 + 4);
    t73 = *((unsigned int *)t44);
    t74 = *((unsigned int *)t57);
    t75 = (t73 | t74);
    *((unsigned int *)t59) = t75;
    t76 = *((unsigned int *)t59);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB90;

LAB93:    t40 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t58) = 1;
    goto LAB98;

LAB97:    t43 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB98;

LAB99:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t66) = (t78 | t79);
    t65 = (t27 + 4);
    t70 = (t58 + 4);
    t82 = *((unsigned int *)t65);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t70);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t92 & t90);
    t93 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t93 & t91);
    goto LAB101;

LAB102:    xsi_set_current_line(207, ng0);
    t72 = (t0 + 880);
    t80 = *((char **)t72);
    t72 = (t0 + 2768);
    xsi_vlogvar_assign_value(t72, t80, 0, 0, 3);
    goto LAB104;

LAB108:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(211, ng0);
    t12 = (t0 + 472);
    t13 = *((char **)t12);
    t12 = (t0 + 2768);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB112;

LAB116:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(215, ng0);
    t12 = (t0 + 472);
    t13 = *((char **)t12);
    t12 = (t0 + 2768);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB120;

}

static void Always_222_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 4520);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(222, ng0);

LAB5:    xsi_set_current_line(223, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(226, ng0);

LAB10:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 2768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(223, ng0);

LAB9:    xsi_set_current_line(224, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_231_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    t6 = (t0 + 2608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 880);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t10);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    memset(t5, 0, 8);
    t26 = (t11 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t26) != 0)
        goto LAB12;

LAB13:    t33 = (t5 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t33) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t42, 8);

LAB22:    t43 = (t0 + 2448);
    xsi_vlogvar_assign_value(t43, t4, 0, 0, 1);
    goto LAB2;

LAB8:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t32 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB14:    t37 = ((char*)((ng9)));
    goto LAB15;

LAB16:    t42 = ((char*)((ng10)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 1, t37, 1, t42, 1);
    goto LAB22;

LAB20:    memcpy(t4, t37, 8);
    goto LAB22;

}


extern void work_m_00000000001421826537_2763473258_init()
{
	static char *pe[] = {(void *)Always_195_0,(void *)Always_222_1,(void *)Always_231_2};
	xsi_register_didat("work_m_00000000001421826537_2763473258", "isim/BlockChecker_tb_isim_beh.exe.sim/work/m_00000000001421826537_2763473258.didat");
	xsi_register_executes(pe);
}
