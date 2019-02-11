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
static const char *ng0 = "/users/btech/sanghi/CS220/Lab2_3/eight_bit_compartor/comparator.v";



static void Cont_27_0(char *t0)
{
    char t5[8];
    char t23[8];
    char t57[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t4 + 4);
    t28 = (t5 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB10;

LAB11:
LAB12:    t55 = (t0 + 1208U);
    t56 = *((char **)t55);
    t58 = *((unsigned int *)t23);
    t59 = *((unsigned int *)t56);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t55 = (t23 + 4);
    t61 = (t56 + 4);
    t62 = (t57 + 4);
    t63 = *((unsigned int *)t55);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB13;

LAB14:
LAB15:    t89 = *((unsigned int *)t3);
    t90 = *((unsigned int *)t57);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = (t3 + 4);
    t93 = (t57 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB16;

LAB17:
LAB18:    t116 = (t0 + 4248);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t120, 0, 8);
    t121 = 1U;
    t122 = t121;
    t123 = (t88 + 4);
    t124 = *((unsigned int *)t88);
    t121 = (t121 & t124);
    t125 = *((unsigned int *)t123);
    t122 = (t122 & t125);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 | t121);
    t128 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t128 | t122);
    xsi_driver_vfirst_trans(t116, 0, 0);
    t129 = (t0 + 4136);
    *((int *)t129) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t4 + 4);
    t38 = (t5 + 4);
    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB12;

LAB13:    t68 = *((unsigned int *)t57);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t57) = (t68 | t69);
    t70 = (t23 + 4);
    t71 = (t56 + 4);
    t72 = *((unsigned int *)t23);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t80 = (t73 & t75);
    t81 = (t77 & t79);
    t82 = (~(t80));
    t83 = (~(t81));
    t84 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t84 & t82);
    t85 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t85 & t83);
    t86 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t86 & t82);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    goto LAB15;

LAB16:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t3 + 4);
    t103 = (t57 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (~(t104));
    t106 = *((unsigned int *)t3);
    t107 = (t106 & t105);
    t108 = *((unsigned int *)t103);
    t109 = (~(t108));
    t110 = *((unsigned int *)t57);
    t111 = (t110 & t109);
    t112 = (~(t107));
    t113 = (~(t111));
    t114 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t114 & t112);
    t115 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t115 & t113);
    goto LAB18;

}

static void Cont_28_1(char *t0)
{
    char t6[8];
    char t37[8];
    char t56[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
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
    unsigned int t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t39 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t38) == 0)
        goto LAB7;

LAB9:    t45 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t45) = 1;

LAB10:    t46 = (t37 + 4);
    t47 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (~(t48));
    *((unsigned int *)t37) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB12;

LAB11:    t54 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t57 = *((unsigned int *)t6);
    t58 = *((unsigned int *)t37);
    t59 = (t57 & t58);
    *((unsigned int *)t56) = t59;
    t60 = (t6 + 4);
    t61 = (t37 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB13;

LAB14:
LAB15:    t89 = *((unsigned int *)t3);
    t90 = *((unsigned int *)t56);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = (t3 + 4);
    t93 = (t56 + 4);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t93);
    t97 = (t95 | t96);
    *((unsigned int *)t94) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB16;

LAB17:
LAB18:    t116 = (t0 + 4312);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memset(t120, 0, 8);
    t121 = 1U;
    t122 = t121;
    t123 = (t88 + 4);
    t124 = *((unsigned int *)t88);
    t121 = (t121 & t124);
    t125 = *((unsigned int *)t123);
    t122 = (t122 & t125);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 | t121);
    t128 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t128 | t122);
    xsi_driver_vfirst_trans(t116, 0, 0);
    t129 = (t0 + 4152);
    *((int *)t129) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t37) = 1;
    goto LAB10;

LAB12:    t50 = *((unsigned int *)t37);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t37) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB11;

LAB13:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t56) = (t68 | t69);
    t70 = (t6 + 4);
    t71 = (t37 + 4);
    t72 = *((unsigned int *)t6);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t37);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t80 = (t73 & t75);
    t81 = (t77 & t79);
    t82 = (~(t80));
    t83 = (~(t81));
    t84 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t84 & t82);
    t85 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t85 & t83);
    t86 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t86 & t82);
    t87 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t87 & t83);
    goto LAB15;

LAB16:    t100 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t88) = (t100 | t101);
    t102 = (t3 + 4);
    t103 = (t56 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (~(t104));
    t106 = *((unsigned int *)t3);
    t107 = (t106 & t105);
    t108 = *((unsigned int *)t103);
    t109 = (~(t108));
    t110 = *((unsigned int *)t56);
    t111 = (t110 & t109);
    t112 = (~(t107));
    t113 = (~(t111));
    t114 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t114 & t112);
    t115 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t115 & t113);
    goto LAB18;

}

static void Cont_29_2(char *t0)
{
    char t4[8];
    char t7[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t20) == 0)
        goto LAB7;

LAB9:    t26 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t26) = 1;

LAB10:    t27 = (t4 + 4);
    t28 = (t7 + 4);
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    *((unsigned int *)t4) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB12;

LAB11:    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    t38 = *((unsigned int *)t3);
    t39 = *((unsigned int *)t4);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t3 + 4);
    t42 = (t4 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB13;

LAB14:
LAB15:    t69 = (t0 + 4376);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t37 + 4);
    t77 = *((unsigned int *)t37);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t82 = (t0 + 4168);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t4) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB11;

LAB13:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t3 + 4);
    t52 = (t4 + 4);
    t53 = *((unsigned int *)t3);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB15;

}


extern void work_m_18039950658252093221_3306708044_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_28_1,(void *)Cont_29_2};
	xsi_register_didat("work_m_18039950658252093221_3306708044", "isim/eight_bit_comparator_top_isim_beh.exe.sim/work/m_18039950658252093221_3306708044.didat");
	xsi_register_executes(pe);
}
