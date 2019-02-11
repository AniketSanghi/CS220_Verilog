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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/users/btech/sanghi/CS220/Lab3_2/ledripple/ledripple.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {50000000, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {0U, 0U};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t8[8];
    char t31[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3088);
    *((int *)t2) = 1;
    t3 = (t0 + 2800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t28 = (t0 + 1448);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 0);
    t36 = (t35 & 1);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    t39 = (t38 & 1);
    *((unsigned int *)t32) = t39;
    t40 = (t0 + 1448);
    t42 = (t0 + 1448);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t41, t44, 2, t45, 32, 1);
    t46 = (t41 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    if (t48 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 4);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 5);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 5);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 6);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 6);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t7 = (t0 + 1448);
    t9 = (t0 + 1448);
    t22 = (t9 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t31, t28, 2, t29, 32, 1);
    t30 = (t31 + 4);
    t16 = *((unsigned int *)t30);
    t48 = (!(t16));
    if (t48 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t40, t31, 0, *((unsigned int *)t41), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t7, t8, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB29;

}


extern void work_m_03626217803968960343_3901801092_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_31_1};
	xsi_register_didat("work_m_03626217803968960343_3901801092", "isim/ledripple_top_isim_beh.exe.sim/work/m_03626217803968960343_3901801092.didat");
	xsi_register_executes(pe);
}
