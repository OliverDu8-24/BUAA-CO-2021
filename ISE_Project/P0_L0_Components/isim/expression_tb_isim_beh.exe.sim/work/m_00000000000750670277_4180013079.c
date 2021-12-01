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
static const char *ng0 = "G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/expression.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {42, 0};
static int ng5[] = {43, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 2472);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2312);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t11[8];
    char t15[8];
    char t29[8];
    char t33[8];
    char t41[8];
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
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
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
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2472);
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

LAB14:
LAB16:
LAB15:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);

LAB18:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1912U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t13 = (t7 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t10) < *((unsigned int *)t7))
        goto LAB22;

LAB21:    *((unsigned int *)t11) = 1;

LAB22:    memset(t15, 0, 8);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t11);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB27:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB28;

LAB29:    memcpy(t41, t15, 8);

LAB30:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB45:    goto LAB17;

LAB9:    xsi_set_current_line(43, ng0);

LAB46:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1912U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t2);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t7);
    t24 = (t20 ^ t21);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t7);
    t36 = (t26 | t35);
    t37 = (~(t36));
    t38 = (t25 & t37);
    if (t38 != 0)
        goto LAB50;

LAB47:    if (t36 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t11) = 1;

LAB50:    memset(t15, 0, 8);
    t10 = (t11 + 4);
    t39 = *((unsigned int *)t10);
    t42 = (~(t39));
    t43 = *((unsigned int *)t11);
    t44 = (t43 & t42);
    t48 = (t44 & 1U);
    if (t48 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t10) != 0)
        goto LAB53;

LAB54:    t13 = (t15 + 4);
    t49 = *((unsigned int *)t15);
    t50 = (!(t49));
    t51 = *((unsigned int *)t13);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB55;

LAB56:    memcpy(t41, t15, 8);

LAB57:    t46 = (t41 + 4);
    t97 = *((unsigned int *)t46);
    t98 = (~(t97));
    t99 = *((unsigned int *)t41);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB71:    goto LAB17;

LAB11:    xsi_set_current_line(47, ng0);

LAB72:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1912U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB74;

LAB73:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t4) < *((unsigned int *)t2))
        goto LAB76;

LAB75:    *((unsigned int *)t11) = 1;

LAB76:    memset(t15, 0, 8);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t11);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t10) != 0)
        goto LAB80;

LAB81:    t13 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t13);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB82;

LAB83:    memcpy(t41, t15, 8);

LAB84:    t46 = (t41 + 4);
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB99:    goto LAB17;

LAB13:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB17;

LAB20:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB24:    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB26:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB27;

LAB28:    t27 = (t0 + 1912U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB32;

LAB31:    t31 = (t27 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t28) > *((unsigned int *)t27))
        goto LAB34;

LAB33:    *((unsigned int *)t29) = 1;

LAB34:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t34) != 0)
        goto LAB38;

LAB39:    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t15 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB30;

LAB32:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t33) = 1;
    goto LAB39;

LAB38:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB39;

LAB40:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t15 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t15);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB42;

LAB43:    xsi_set_current_line(40, ng0);
    t79 = (t0 + 608);
    t80 = *((char **)t79);
    t79 = (t0 + 2632);
    xsi_vlogvar_assign_value(t79, t80, 0, 0, 3);
    goto LAB45;

LAB49:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t15) = 1;
    goto LAB54;

LAB53:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB54;

LAB55:    t14 = (t0 + 1912U);
    t16 = *((char **)t14);
    t14 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t22 = (t16 + 4);
    t23 = (t14 + 4);
    t53 = *((unsigned int *)t16);
    t54 = *((unsigned int *)t14);
    t57 = (t53 ^ t54);
    t58 = *((unsigned int *)t22);
    t59 = *((unsigned int *)t23);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t23);
    t64 = (t62 | t63);
    t67 = (~(t64));
    t68 = (t61 & t67);
    if (t68 != 0)
        goto LAB61;

LAB58:    if (t64 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t29) = 1;

LAB61:    memset(t33, 0, 8);
    t28 = (t29 + 4);
    t69 = *((unsigned int *)t28);
    t70 = (~(t69));
    t71 = *((unsigned int *)t29);
    t72 = (t71 & t70);
    t74 = (t72 & 1U);
    if (t74 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t28) != 0)
        goto LAB64;

LAB65:    t75 = *((unsigned int *)t15);
    t76 = *((unsigned int *)t33);
    t77 = (t75 | t76);
    *((unsigned int *)t41) = t77;
    t31 = (t15 + 4);
    t32 = (t33 + 4);
    t34 = (t41 + 4);
    t78 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t32);
    t82 = (t78 | t81);
    *((unsigned int *)t34) = t82;
    t83 = *((unsigned int *)t34);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB60:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t33) = 1;
    goto LAB65;

LAB64:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB66:    t85 = *((unsigned int *)t41);
    t86 = *((unsigned int *)t34);
    *((unsigned int *)t41) = (t85 | t86);
    t40 = (t15 + 4);
    t45 = (t33 + 4);
    t87 = *((unsigned int *)t40);
    t88 = (~(t87));
    t89 = *((unsigned int *)t15);
    t65 = (t89 & t88);
    t90 = *((unsigned int *)t45);
    t91 = (~(t90));
    t92 = *((unsigned int *)t33);
    t66 = (t92 & t91);
    t93 = (~(t65));
    t94 = (~(t66));
    t95 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t95 & t93);
    t96 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t96 & t94);
    goto LAB68;

LAB69:    xsi_set_current_line(44, ng0);
    t47 = (t0 + 744);
    t55 = *((char **)t47);
    t47 = (t0 + 2632);
    xsi_vlogvar_assign_value(t47, t55, 0, 0, 3);
    goto LAB71;

LAB74:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t15) = 1;
    goto LAB81;

LAB80:    t12 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB81;

LAB82:    t14 = (t0 + 1912U);
    t16 = *((char **)t14);
    t14 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t22 = (t16 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB86;

LAB85:    t23 = (t14 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t16) > *((unsigned int *)t14))
        goto LAB88;

LAB87:    *((unsigned int *)t29) = 1;

LAB88:    memset(t33, 0, 8);
    t28 = (t29 + 4);
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t28) != 0)
        goto LAB92;

LAB93:    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t31 = (t15 + 4);
    t32 = (t33 + 4);
    t34 = (t41 + 4);
    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t32);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t51 = *((unsigned int *)t34);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB84;

LAB86:    t27 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB88;

LAB90:    *((unsigned int *)t33) = 1;
    goto LAB93;

LAB92:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB93;

LAB94:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t41) = (t53 | t54);
    t40 = (t15 + 4);
    t45 = (t33 + 4);
    t57 = *((unsigned int *)t15);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t45);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t69 & t67);
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB96;

LAB97:    xsi_set_current_line(48, ng0);
    t47 = (t0 + 608);
    t55 = *((char **)t47);
    t47 = (t0 + 2632);
    xsi_vlogvar_assign_value(t47, t55, 0, 0, 3);
    goto LAB99;

}

static void Always_56_2(char *t0)
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

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4632);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);

LAB10:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_65_3(char *t0)
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

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t6 = (t0 + 2472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 608);
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

LAB22:    t43 = (t0 + 2312);
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

LAB14:    t37 = ((char*)((ng6)));
    goto LAB15;

LAB16:    t42 = ((char*)((ng7)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 1, t37, 1, t42, 1);
    goto LAB22;

LAB20:    memcpy(t4, t37, 8);
    goto LAB22;

}


extern void work_m_00000000000750670277_4180013079_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_37_1,(void *)Always_56_2,(void *)Always_65_3};
	xsi_register_didat("work_m_00000000000750670277_4180013079", "isim/expression_tb_isim_beh.exe.sim/work/m_00000000000750670277_4180013079.didat");
	xsi_register_executes(pe);
}
