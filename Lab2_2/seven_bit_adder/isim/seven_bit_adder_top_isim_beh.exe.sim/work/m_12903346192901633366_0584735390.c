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
static const char *ng0 = "/users/btech/sanghi/Lab2_2/seven_bit_adder/seven_bit_adder_top.v";
static int ng1[] = {3, 0};
static int ng2[] = {0, 0};
static int ng3[] = {6, 0};
static int ng4[] = {4, 0};
static const char *ng5 = "time = %d: %7b + %7b = %b%7b";
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};



static void Always_46_0(char *t0)
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

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1928);
    t11 = (t0 + 1928);
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
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB7;

}

static void Always_49_1(char *t0)
{
    char t4[8];
    char t17[8];
    char t18[8];
    char t19[8];
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1768);
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
    t16 = (t0 + 1928);
    t20 = (t0 + 1928);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    t24 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t16, t4, t37, *((unsigned int *)t18), t41, 0LL);
    goto LAB7;

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

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4592);
    *((int *)t2) = 1;
    t3 = (t0 + 3528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1768);
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
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t27 = *((unsigned int *)t10);
    t28 = (t27 + 0);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t9);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, t28, *((unsigned int *)t9), t32, 0LL);
    goto LAB7;

}

static void Always_55_3(char *t0)
{
    char t4[8];
    char t17[8];
    char t18[8];
    char t19[8];
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 3776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 1768);
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
    t16 = (t0 + 2088);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    t24 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t16, t4, t37, *((unsigned int *)t18), t41, 0LL);
    goto LAB7;

}

static void Always_59_4(char *t0)
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

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t6 = (t0 + 1928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2088);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    t12 = (t0 + 1048U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng5, 6, t0, (char)118, t4, 64, (char)118, t8, 7, (char)118, t11, 7, (char)118, t13, 1, (char)118, t14, 7);
    goto LAB2;

}

static void Initial_63_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(84, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_12903346192901633366_0584735390_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Always_49_1,(void *)Always_52_2,(void *)Always_55_3,(void *)Always_59_4,(void *)Initial_63_5};
	xsi_register_didat("work_m_12903346192901633366_0584735390", "isim/seven_bit_adder_top_isim_beh.exe.sim/work/m_12903346192901633366_0584735390.didat");
	xsi_register_executes(pe);
}
