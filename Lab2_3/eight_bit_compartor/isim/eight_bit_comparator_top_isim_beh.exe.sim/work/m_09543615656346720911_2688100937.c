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
static const char *ng0 = "/users/btech/sanghi/CS220/Lab2_3/eight_bit_compartor/eight_bit_comparator_top.v";
static int ng1[] = {3, 0};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static int ng4[] = {4, 0};
static const char *ng5 = "time %d: %8b %8b %b %b %b";
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {8U, 0U};



static void Always_48_0(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2088);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    t15 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t8, t9, t10, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    t23 = (t10 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    goto LAB2;

LAB5:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB6;

}

static void Always_50_1(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4736);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2088);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    t15 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t8, t9, t10, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    t23 = (t10 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    goto LAB2;

LAB5:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB6;

}

static void Always_52_2(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4752);
    *((int *)t2) = 1;
    t3 = (t0 + 3688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2248);
    t11 = (t0 + 2248);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    t15 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t8, t9, t10, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    t23 = (t10 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    goto LAB2;

LAB5:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB6;

}

static void Always_54_3(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    t3 = (t0 + 3936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2248);
    t11 = (t0 + 2248);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    t15 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t8, t9, t10, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    t23 = (t10 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    goto LAB2;

LAB5:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB6;

}

static void Always_57_4(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4784);
    *((int *)t2) = 1;
    t3 = (t0 + 4184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t6 = (t0 + 2088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2248);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    t12 = (t0 + 1048U);
    t14 = *((char **)t12);
    t12 = (t0 + 1368U);
    t15 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng5, 7, t0, (char)118, t4, 64, (char)118, t8, 8, (char)118, t11, 8, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1);
    goto LAB2;

}

static void Initial_60_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4208);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(73, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_09543615656346720911_2688100937_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Always_50_1,(void *)Always_52_2,(void *)Always_54_3,(void *)Always_57_4,(void *)Initial_60_5};
	xsi_register_didat("work_m_09543615656346720911_2688100937", "isim/eight_bit_comparator_top_isim_beh.exe.sim/work/m_09543615656346720911_2688100937.didat");
	xsi_register_executes(pe);
}
