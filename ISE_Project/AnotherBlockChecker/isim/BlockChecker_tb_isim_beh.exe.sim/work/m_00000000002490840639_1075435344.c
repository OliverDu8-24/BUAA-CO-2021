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
static const char *ng0 = "G:/MyWorkspace/Computer_Organization/ISE_Project/AnotherBlockChecker/BlockChecker.v";
static int ng1[] = {32, 0, 0, 0, 0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {1701276014, 0, 8290, 0};
static int ng5[] = {32, 0};
static int ng6[] = {543518308, 0};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 128);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t13[32];
    char t14[32];
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t14, 120, t5, 119, 0);
    xsi_vlogtype_concat(t13, 128, 128, 2U, t14, 120, t3, 8);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 128, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 128, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_48_2(char *t0)
{
    char t4[8];
    char t21[16];
    char t26[16];
    char t37[8];
    char t39[8];
    char t51[8];
    char t57[8];
    char t99[8];
    char t101[8];
    char t132[8];
    char t138[8];
    char t142[8];
    char t150[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t22 = (t0 + 1928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_get_part_select_value(t21, 48, t24, 47, 0);
    t25 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t26, 48, t21, 48, t25, 48);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t21, 48, t5, 55, 8);
    t6 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t26, 48, t21, 48, t6, 48);
    memset(t4, 0, 8);
    t7 = (t26 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t26);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t7) != 0)
        goto LAB19;

LAB20:    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB21;

LAB22:    memcpy(t57, t4, 8);

LAB23:    t89 = (t57 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t57);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 4294967295U);
    t8 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t14 = (t4 + 4);
    t15 = (t8 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t15);
    t29 = (t20 ^ t28);
    t30 = (t19 | t29);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t15);
    t40 = (t31 | t32);
    t41 = (~(t40));
    t42 = (t30 & t41);
    if (t42 != 0)
        goto LAB41;

LAB38:    if (t40 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t37) = 1;

LAB41:    t23 = (t37 + 4);
    t43 = *((unsigned int *)t23);
    t44 = (~(t43));
    t45 = *((unsigned int *)t37);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t6) = t12;
    t8 = (t5 + 8);
    t14 = (t5 + 12);
    t13 = *((unsigned int *)t8);
    t16 = (t13 << 24);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 | t16);
    t18 = *((unsigned int *)t14);
    t19 = (t18 << 24);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 | t19);
    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 4294967295U);
    t29 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t29 & 4294967295U);
    t15 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t22 = (t4 + 4);
    t23 = (t15 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t23);
    t42 = (t40 ^ t41);
    t43 = (t32 | t42);
    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t23);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB48;

LAB45:    if (t46 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t37) = 1;

LAB48:    memset(t39, 0, 8);
    t25 = (t37 + 4);
    t49 = *((unsigned int *)t25);
    t50 = (~(t49));
    t52 = *((unsigned int *)t37);
    t53 = (t52 & t50);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t25) != 0)
        goto LAB51;

LAB52:    t33 = (t39 + 4);
    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t33);
    t58 = (t55 || t56);
    if (t58 > 0)
        goto LAB53;

LAB54:    memcpy(t101, t39, 8);

LAB55:    t122 = (t101 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t101);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t6) = t12;
    t8 = (t5 + 8);
    t14 = (t5 + 12);
    t13 = *((unsigned int *)t8);
    t16 = (t13 << 24);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 | t16);
    t18 = *((unsigned int *)t14);
    t19 = (t18 << 24);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 | t19);
    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 4294967295U);
    t29 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t29 & 4294967295U);
    t15 = ((char*)((ng6)));
    memset(t37, 0, 8);
    t22 = (t4 + 4);
    t23 = (t15 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t23);
    t42 = (t40 ^ t41);
    t43 = (t32 | t42);
    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t23);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB73;

LAB70:    if (t46 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t37) = 1;

LAB73:    memset(t39, 0, 8);
    t25 = (t37 + 4);
    t49 = *((unsigned int *)t25);
    t50 = (~(t49));
    t52 = *((unsigned int *)t37);
    t53 = (t52 & t50);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t25) != 0)
        goto LAB76;

LAB77:    t33 = (t39 + 4);
    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t33);
    t58 = (t55 || t56);
    if (t58 > 0)
        goto LAB78;

LAB79:    memcpy(t101, t39, 8);

LAB80:    memset(t132, 0, 8);
    t122 = (t101 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t101);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t122) != 0)
        goto LAB94;

LAB95:    t129 = (t132 + 4);
    t134 = *((unsigned int *)t132);
    t135 = *((unsigned int *)t129);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB96;

LAB97:    memcpy(t150, t132, 8);

LAB98:    t182 = (t150 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t150);
    t186 = (t185 & t184);
    t187 = (t186 != 0);
    if (t187 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB113:
LAB69:
LAB44:
LAB37:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(50, ng0);
    t33 = (t0 + 2088);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 32, t36, 32);
    t38 = (t0 + 2088);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    goto LAB16;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB19:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB20;

LAB21:    t15 = (t0 + 1928);
    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    memset(t37, 0, 8);
    t24 = (t37 + 4);
    t25 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 0);
    *((unsigned int *)t37) = t20;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t30 & 255U);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 255U);
    t27 = ((char*)((ng5)));
    memset(t39, 0, 8);
    t33 = (t37 + 4);
    t34 = (t27 + 4);
    t32 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t27);
    t41 = (t32 ^ t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t33);
    t47 = *((unsigned int *)t34);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB25;

LAB24:    if (t48 != 0)
        goto LAB26;

LAB27:    memset(t51, 0, 8);
    t36 = (t39 + 4);
    t52 = *((unsigned int *)t36);
    t53 = (~(t52));
    t54 = *((unsigned int *)t39);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t36) != 0)
        goto LAB30;

LAB31:    t58 = *((unsigned int *)t4);
    t59 = *((unsigned int *)t51);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t4 + 4);
    t62 = (t51 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB23;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB27;

LAB26:    t35 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t51) = 1;
    goto LAB31;

LAB30:    t38 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB31;

LAB32:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t4 + 4);
    t72 = (t51 + 4);
    t73 = *((unsigned int *)t4);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t51);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB34;

LAB35:    xsi_set_current_line(51, ng0);
    t95 = (t0 + 2088);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = ((char*)((ng3)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_minus(t99, 32, t97, 32, t98, 32);
    t100 = (t0 + 2088);
    xsi_vlogvar_assign_value(t100, t99, 0, 0, 32);
    goto LAB37;

LAB40:    t22 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(52, ng0);
    t24 = (t0 + 2088);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    t33 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t27, 32, t33, 32);
    t34 = (t0 + 2088);
    xsi_vlogvar_assign_value(t34, t39, 0, 0, 32);
    goto LAB44;

LAB47:    t24 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t39) = 1;
    goto LAB52;

LAB51:    t27 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB52;

LAB53:    t34 = (t0 + 1928);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t51, 0, 8);
    t38 = (t51 + 4);
    t61 = (t36 + 4);
    t59 = *((unsigned int *)t36);
    t60 = (t59 >> 0);
    *((unsigned int *)t51) = t60;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t38) = t65;
    t66 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t66 & 255U);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & 255U);
    t62 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t63 = (t51 + 4);
    t71 = (t62 + 4);
    t68 = *((unsigned int *)t51);
    t69 = *((unsigned int *)t62);
    t70 = (t68 ^ t69);
    t73 = *((unsigned int *)t63);
    t74 = *((unsigned int *)t71);
    t75 = (t73 ^ t74);
    t76 = (t70 | t75);
    t77 = *((unsigned int *)t63);
    t78 = *((unsigned int *)t71);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t83 = (t76 & t80);
    if (t83 != 0)
        goto LAB57;

LAB56:    if (t79 != 0)
        goto LAB58;

LAB59:    memset(t99, 0, 8);
    t89 = (t57 + 4);
    t84 = *((unsigned int *)t89);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t89) != 0)
        goto LAB62;

LAB63:    t90 = *((unsigned int *)t39);
    t91 = *((unsigned int *)t99);
    t92 = (t90 & t91);
    *((unsigned int *)t101) = t92;
    t96 = (t39 + 4);
    t97 = (t99 + 4);
    t98 = (t101 + 4);
    t93 = *((unsigned int *)t96);
    t94 = *((unsigned int *)t97);
    t102 = (t93 | t94);
    *((unsigned int *)t98) = t102;
    t103 = *((unsigned int *)t98);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    *((unsigned int *)t57) = 1;
    goto LAB59;

LAB58:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t99) = 1;
    goto LAB63;

LAB62:    t95 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB63;

LAB64:    t105 = *((unsigned int *)t101);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t101) = (t105 | t106);
    t100 = (t39 + 4);
    t107 = (t99 + 4);
    t108 = *((unsigned int *)t39);
    t109 = (~(t108));
    t110 = *((unsigned int *)t100);
    t111 = (~(t110));
    t112 = *((unsigned int *)t99);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t81 = (t109 & t111);
    t82 = (t113 & t115);
    t116 = (~(t81));
    t117 = (~(t82));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t116);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    t120 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t120 & t116);
    t121 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t121 & t117);
    goto LAB66;

LAB67:    xsi_set_current_line(53, ng0);
    t128 = (t0 + 2088);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng3)));
    memset(t132, 0, 8);
    xsi_vlog_unsigned_add(t132, 32, t130, 32, t131, 32);
    t133 = (t0 + 2088);
    xsi_vlogvar_assign_value(t133, t132, 0, 0, 32);
    goto LAB69;

LAB72:    t24 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t39) = 1;
    goto LAB77;

LAB76:    t27 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB77;

LAB78:    t34 = (t0 + 1928);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t51, 0, 8);
    t38 = (t51 + 4);
    t61 = (t36 + 4);
    t59 = *((unsigned int *)t36);
    t60 = (t59 >> 0);
    *((unsigned int *)t51) = t60;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t38) = t65;
    t66 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t66 & 255U);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & 255U);
    t62 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t63 = (t51 + 4);
    t71 = (t62 + 4);
    t68 = *((unsigned int *)t51);
    t69 = *((unsigned int *)t62);
    t70 = (t68 ^ t69);
    t73 = *((unsigned int *)t63);
    t74 = *((unsigned int *)t71);
    t75 = (t73 ^ t74);
    t76 = (t70 | t75);
    t77 = *((unsigned int *)t63);
    t78 = *((unsigned int *)t71);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t83 = (t76 & t80);
    if (t83 != 0)
        goto LAB84;

LAB81:    if (t79 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t57) = 1;

LAB84:    memset(t99, 0, 8);
    t89 = (t57 + 4);
    t84 = *((unsigned int *)t89);
    t85 = (~(t84));
    t86 = *((unsigned int *)t57);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t89) != 0)
        goto LAB87;

LAB88:    t90 = *((unsigned int *)t39);
    t91 = *((unsigned int *)t99);
    t92 = (t90 & t91);
    *((unsigned int *)t101) = t92;
    t96 = (t39 + 4);
    t97 = (t99 + 4);
    t98 = (t101 + 4);
    t93 = *((unsigned int *)t96);
    t94 = *((unsigned int *)t97);
    t102 = (t93 | t94);
    *((unsigned int *)t98) = t102;
    t103 = *((unsigned int *)t98);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t99) = 1;
    goto LAB88;

LAB87:    t95 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB88;

LAB89:    t105 = *((unsigned int *)t101);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t101) = (t105 | t106);
    t100 = (t39 + 4);
    t107 = (t99 + 4);
    t108 = *((unsigned int *)t39);
    t109 = (~(t108));
    t110 = *((unsigned int *)t100);
    t111 = (~(t110));
    t112 = *((unsigned int *)t99);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t81 = (t109 & t111);
    t82 = (t113 & t115);
    t116 = (~(t81));
    t117 = (~(t82));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t116);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    t120 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t120 & t116);
    t121 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t121 & t117);
    goto LAB91;

LAB92:    *((unsigned int *)t132) = 1;
    goto LAB95;

LAB94:    t128 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB95;

LAB96:    t130 = (t0 + 2088);
    t131 = (t130 + 56U);
    t133 = *((char **)t131);
    t137 = ((char*)((ng2)));
    memset(t138, 0, 8);
    t139 = (t133 + 4);
    if (*((unsigned int *)t139) != 0)
        goto LAB100;

LAB99:    t140 = (t137 + 4);
    if (*((unsigned int *)t140) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t133) < *((unsigned int *)t137))
        goto LAB101;

LAB102:    memset(t142, 0, 8);
    t143 = (t138 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t138);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t143) != 0)
        goto LAB106;

LAB107:    t151 = *((unsigned int *)t132);
    t152 = *((unsigned int *)t142);
    t153 = (t151 & t152);
    *((unsigned int *)t150) = t153;
    t154 = (t132 + 4);
    t155 = (t142 + 4);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB98;

LAB100:    t141 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t138) = 1;
    goto LAB102;

LAB104:    *((unsigned int *)t142) = 1;
    goto LAB107;

LAB106:    t149 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB107;

LAB108:    t162 = *((unsigned int *)t150);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t150) = (t162 | t163);
    t164 = (t132 + 4);
    t165 = (t142 + 4);
    t166 = *((unsigned int *)t132);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t142);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t180 & t176);
    t181 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t181 & t177);
    goto LAB110;

LAB111:    xsi_set_current_line(54, ng0);
    t188 = ((char*)((ng3)));
    t189 = (t0 + 2248);
    xsi_vlogvar_assign_value(t189, t188, 0, 0, 1);
    goto LAB113;

}

static void Always_59_3(char *t0)
{
    char t4[8];
    char t25[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
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
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t25, 0, 8);
    t26 = (t4 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t26) != 0)
        goto LAB14;

LAB15:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB16;

LAB17:    memcpy(t65, t25, 8);

LAB18:    t97 = (t0 + 1768);
    xsi_vlogvar_assign_value(t97, t65, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    *((unsigned int *)t25) = 1;
    goto LAB15;

LAB14:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB15;

LAB16:    t37 = (t0 + 2088);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB22;

LAB19:    if (t53 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t41) = 1;

LAB22:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t58) != 0)
        goto LAB25;

LAB26:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB21:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t57) = 1;
    goto LAB26;

LAB25:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB26;

LAB27:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB29;

}


extern void work_m_00000000002490840639_1075435344_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_38_1,(void *)Always_48_2,(void *)Always_59_3};
	xsi_register_didat("work_m_00000000002490840639_1075435344", "isim/BlockChecker_tb_isim_beh.exe.sim/work/m_00000000002490840639_1075435344.didat");
	xsi_register_executes(pe);
}
