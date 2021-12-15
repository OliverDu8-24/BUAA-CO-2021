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
static const char *ng0 = "G:/MyWorkspace/Computer_Organization/ISE_Project/P0_L0_Components/gray.v";
static unsigned int ng1[] = {8U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {4U, 0U};



static void Always_35_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 3312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 3);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t9 = ((char*)((ng2)));
    memcpy(t10, t9, 8);
    t11 = (t0 + 3472);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB27;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng2)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng4)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng5)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB15:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng6)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB17:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng7)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB19:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng8)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB21:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng9)));
    memcpy(t10, t3, 8);
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 4);
    goto LAB27;

LAB23:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3472);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB27;

}

static void Always_60_1(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5224);
    *((int *)t2) = 1;
    t3 = (t0 + 4672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2432U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);

LAB9:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2992);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    memcpy(t13, t2, 8);
    t3 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t3, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 3472);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB13;

}

static void Always_71_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 3312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 7U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 7U);
    t16 = (t0 + 2992);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t16 = (t4 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3152);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

}


extern void work_m_00000000004087740934_0735672237_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_60_1,(void *)Always_71_2};
	xsi_register_didat("work_m_00000000004087740934_0735672237", "isim/gray_tb_isim_beh.exe.sim/work/m_00000000004087740934_0735672237.didat");
	xsi_register_executes(pe);
}
