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
static const char *ng0 = "G:/cpu/p8_4/cp0.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {12288U, 0U};
static int ng3[] = {12, 0};
static int ng4[] = {13, 0};
static int ng5[] = {14, 0};
static int ng6[] = {15, 0};
static int ng7[] = {1, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {4, 0};
static int ng11[] = {6, 0};
static int ng12[] = {2, 0};
static int ng13[] = {31, 0};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t25[8];
    char t67[8];
    char t76[8];
    char t108[8];
    char t112[8];
    char t138[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    t14 = (t0 + 3528);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 10);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 10);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 63U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 63U);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t13);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t13 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t57 = (t25 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t25);
    t61 = (t60 & t59);
    t62 = (t61 & 63U);
    if (t62 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t57) != 0)
        goto LAB9;

LAB10:    t64 = (t0 + 3528);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    t77 = *((unsigned int *)t3);
    t78 = *((unsigned int *)t67);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t3 + 4);
    t81 = (t67 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB11;

LAB12:
LAB13:    t109 = (t0 + 3528);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t112, 0, 8);
    t113 = (t112 + 4);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 1);
    t117 = (t116 & 1);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 >> 1);
    t120 = (t119 & 1);
    *((unsigned int *)t113) = t120;
    memset(t108, 0, 8);
    t121 = (t112 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t112);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t121) == 0)
        goto LAB14;

LAB16:    t127 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t127) = 1;

LAB17:    t128 = (t108 + 4);
    t129 = (t112 + 4);
    t130 = *((unsigned int *)t112);
    t131 = (~(t130));
    *((unsigned int *)t108) = t131;
    *((unsigned int *)t128) = 0;
    if (*((unsigned int *)t129) != 0)
        goto LAB19;

LAB18:    t136 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t136 & 1U);
    t137 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t137 & 1U);
    t139 = *((unsigned int *)t76);
    t140 = *((unsigned int *)t108);
    t141 = (t139 & t140);
    *((unsigned int *)t138) = t141;
    t142 = (t76 + 4);
    t143 = (t108 + 4);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t142);
    t146 = *((unsigned int *)t143);
    t147 = (t145 | t146);
    *((unsigned int *)t144) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB20;

LAB21:
LAB22:    t170 = (t0 + 6792);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    t173 = (t172 + 56U);
    t174 = *((char **)t173);
    memset(t174, 0, 8);
    t175 = 1U;
    t176 = t175;
    t177 = (t138 + 4);
    t178 = *((unsigned int *)t138);
    t175 = (t175 & t178);
    t179 = *((unsigned int *)t177);
    t176 = (t176 & t179);
    t180 = (t174 + 4);
    t181 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t181 | t175);
    t182 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t182 | t176);
    xsi_driver_vfirst_trans(t170, 0, 0);
    t183 = (t0 + 6648);
    *((int *)t183) = 1;

LAB1:    return;
LAB4:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t13 + 4);
    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t63 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB10;

LAB11:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t3 + 4);
    t91 = (t67 + 4);
    t92 = *((unsigned int *)t3);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t67);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB13;

LAB14:    *((unsigned int *)t108) = 1;
    goto LAB17;

LAB19:    t132 = *((unsigned int *)t108);
    t133 = *((unsigned int *)t129);
    *((unsigned int *)t108) = (t132 | t133);
    t134 = *((unsigned int *)t128);
    t135 = *((unsigned int *)t129);
    *((unsigned int *)t128) = (t134 | t135);
    goto LAB18;

LAB20:    t150 = *((unsigned int *)t138);
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t138) = (t150 | t151);
    t152 = (t76 + 4);
    t153 = (t108 + 4);
    t154 = *((unsigned int *)t76);
    t155 = (~(t154));
    t156 = *((unsigned int *)t152);
    t157 = (~(t156));
    t158 = *((unsigned int *)t108);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (~(t160));
    t162 = (t155 & t157);
    t163 = (t159 & t161);
    t164 = (~(t162));
    t165 = (~(t163));
    t166 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t166 & t164);
    t167 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t167 & t165);
    t168 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t168 & t164);
    t169 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t169 & t165);
    goto LAB22;

}

static void Initial_36_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Cont_42_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t78[8];
    char t79[8];
    char t82[8];
    char t116[8];
    char t117[8];
    char t120[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
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
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
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
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t155 = (t0 + 6856);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memcpy(t159, t3, 8);
    xsi_driver_vfirst_trans(t155, 0, 31);
    t160 = (t0 + 6664);
    *((int *)t160) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3528);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1048U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 3688);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t80 = (t0 + 1048U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng5)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t112 = *((unsigned int *)t79);
    t113 = (~(t112));
    t114 = *((unsigned int *)t105);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t116, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 3848);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    goto LAB47;

LAB48:    t118 = (t0 + 1048U);
    t119 = *((char **)t118);
    t118 = ((char*)((ng6)));
    memset(t120, 0, 8);
    t121 = (t119 + 4);
    t122 = (t118 + 4);
    t123 = *((unsigned int *)t119);
    t124 = *((unsigned int *)t118);
    t125 = (t123 ^ t124);
    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t122);
    t128 = (t126 ^ t127);
    t129 = (t125 | t128);
    t130 = *((unsigned int *)t121);
    t131 = *((unsigned int *)t122);
    t132 = (t130 | t131);
    t133 = (~(t132));
    t134 = (t129 & t133);
    if (t134 != 0)
        goto LAB58;

LAB55:    if (t132 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t120) = 1;

LAB58:    memset(t117, 0, 8);
    t136 = (t120 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t120);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t136) != 0)
        goto LAB61;

LAB62:    t143 = (t117 + 4);
    t144 = *((unsigned int *)t117);
    t145 = *((unsigned int *)t143);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB63;

LAB64:    t150 = *((unsigned int *)t117);
    t151 = (~(t150));
    t152 = *((unsigned int *)t143);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t143) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t117) > 0)
        goto LAB69;

LAB70:    memcpy(t116, t154, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 32, t111, 32, t116, 32);
    goto LAB54;

LAB52:    memcpy(t78, t111, 8);
    goto LAB54;

LAB57:    t135 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t117) = 1;
    goto LAB62;

LAB61:    t142 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB62;

LAB63:    t147 = (t0 + 4008);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    goto LAB64;

LAB65:    t154 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t116, 32, t149, 32, t154, 32);
    goto LAB71;

LAB69:    memcpy(t116, t149, 8);
    goto LAB71;

}

static void Cont_47_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6680);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_48_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t25[8];
    char t67[8];
    char t76[8];
    char t108[8];
    char t112[8];
    char t138[8];
    char t172[8];
    char t180[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    t14 = (t0 + 3528);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 10);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 10);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 63U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 63U);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t13);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t13 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t57 = (t25 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t25);
    t61 = (t60 & t59);
    t62 = (t61 & 63U);
    if (t62 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t57) != 0)
        goto LAB9;

LAB10:    t64 = (t0 + 3528);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    t77 = *((unsigned int *)t3);
    t78 = *((unsigned int *)t67);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t3 + 4);
    t81 = (t67 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB11;

LAB12:
LAB13:    t109 = (t0 + 3528);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t112, 0, 8);
    t113 = (t112 + 4);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 1);
    t117 = (t116 & 1);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 >> 1);
    t120 = (t119 & 1);
    *((unsigned int *)t113) = t120;
    memset(t108, 0, 8);
    t121 = (t112 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t112);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t121) == 0)
        goto LAB14;

LAB16:    t127 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t127) = 1;

LAB17:    t128 = (t108 + 4);
    t129 = (t112 + 4);
    t130 = *((unsigned int *)t112);
    t131 = (~(t130));
    *((unsigned int *)t108) = t131;
    *((unsigned int *)t128) = 0;
    if (*((unsigned int *)t129) != 0)
        goto LAB19;

LAB18:    t136 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t136 & 1U);
    t137 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t137 & 1U);
    t139 = *((unsigned int *)t76);
    t140 = *((unsigned int *)t108);
    t141 = (t139 & t140);
    *((unsigned int *)t138) = t141;
    t142 = (t76 + 4);
    t143 = (t108 + 4);
    t144 = (t138 + 4);
    t145 = *((unsigned int *)t142);
    t146 = *((unsigned int *)t143);
    t147 = (t145 | t146);
    *((unsigned int *)t144) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 != 0);
    if (t149 == 1)
        goto LAB20;

LAB21:
LAB22:    t170 = (t0 + 1528U);
    t171 = *((char **)t170);
    memset(t172, 0, 8);
    t170 = (t172 + 4);
    t173 = (t171 + 4);
    t174 = *((unsigned int *)t171);
    t175 = (t174 >> 5);
    t176 = (t175 & 1);
    *((unsigned int *)t172) = t176;
    t177 = *((unsigned int *)t173);
    t178 = (t177 >> 5);
    t179 = (t178 & 1);
    *((unsigned int *)t170) = t179;
    t181 = *((unsigned int *)t138);
    t182 = *((unsigned int *)t172);
    t183 = (t181 | t182);
    *((unsigned int *)t180) = t183;
    t184 = (t138 + 4);
    t185 = (t172 + 4);
    t186 = (t180 + 4);
    t187 = *((unsigned int *)t184);
    t188 = *((unsigned int *)t185);
    t189 = (t187 | t188);
    *((unsigned int *)t186) = t189;
    t190 = *((unsigned int *)t186);
    t191 = (t190 != 0);
    if (t191 == 1)
        goto LAB23;

LAB24:
LAB25:    t208 = (t0 + 6984);
    t209 = (t208 + 56U);
    t210 = *((char **)t209);
    t211 = (t210 + 56U);
    t212 = *((char **)t211);
    memset(t212, 0, 8);
    t213 = 1U;
    t214 = t213;
    t215 = (t180 + 4);
    t216 = *((unsigned int *)t180);
    t213 = (t213 & t216);
    t217 = *((unsigned int *)t215);
    t214 = (t214 & t217);
    t218 = (t212 + 4);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t219 | t213);
    t220 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t220 | t214);
    xsi_driver_vfirst_trans(t208, 0, 0);
    t221 = (t0 + 6696);
    *((int *)t221) = 1;

LAB1:    return;
LAB4:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t13 + 4);
    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t63 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB10;

LAB11:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t3 + 4);
    t91 = (t67 + 4);
    t92 = *((unsigned int *)t3);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t67);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB13;

LAB14:    *((unsigned int *)t108) = 1;
    goto LAB17;

LAB19:    t132 = *((unsigned int *)t108);
    t133 = *((unsigned int *)t129);
    *((unsigned int *)t108) = (t132 | t133);
    t134 = *((unsigned int *)t128);
    t135 = *((unsigned int *)t129);
    *((unsigned int *)t128) = (t134 | t135);
    goto LAB18;

LAB20:    t150 = *((unsigned int *)t138);
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t138) = (t150 | t151);
    t152 = (t76 + 4);
    t153 = (t108 + 4);
    t154 = *((unsigned int *)t76);
    t155 = (~(t154));
    t156 = *((unsigned int *)t152);
    t157 = (~(t156));
    t158 = *((unsigned int *)t108);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (~(t160));
    t162 = (t155 & t157);
    t163 = (t159 & t161);
    t164 = (~(t162));
    t165 = (~(t163));
    t166 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t166 & t164);
    t167 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t167 & t165);
    t168 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t168 & t164);
    t169 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t169 & t165);
    goto LAB22;

LAB23:    t192 = *((unsigned int *)t180);
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t180) = (t192 | t193);
    t194 = (t138 + 4);
    t195 = (t172 + 4);
    t196 = *((unsigned int *)t194);
    t197 = (~(t196));
    t198 = *((unsigned int *)t138);
    t199 = (t198 & t197);
    t200 = *((unsigned int *)t195);
    t201 = (~(t200));
    t202 = *((unsigned int *)t172);
    t203 = (t202 & t201);
    t204 = (~(t199));
    t205 = (~(t203));
    t206 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t206 & t204);
    t207 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t207 & t205);
    goto LAB25;

}

static void Always_50_5(char *t0)
{
    char t13[8];
    char t21[8];
    char t61[8];
    char t91[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6712);
    *((int *)t2) = 1;
    t3 = (t0 + 6360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB10:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = *((unsigned int *)t3);
    t23 = *((unsigned int *)t13);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t25 = (t3 + 4);
    t26 = (t13 + 4);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t25);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB15;

LAB16:
LAB17:    t53 = (t21 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t21);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    t25 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t13, t21, t61, ((int*)(t6)), 2, t7, 32, 1, t25, 32, 1);
    t26 = (t13 + 4);
    t8 = *((unsigned int *)t26);
    t45 = (!(t8));
    t27 = (t21 + 4);
    t9 = *((unsigned int *)t27);
    t46 = (!(t9));
    t85 = (t45 && t46);
    t35 = (t61 + 4);
    t10 = *((unsigned int *)t35);
    t86 = (!(t10));
    t87 = (t85 && t86);
    if (t87 == 1)
        goto LAB64;

LAB65:
LAB8:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB14;

LAB15:    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t33 | t34);
    t35 = (t3 + 4);
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t3);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (~(t39));
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t45 = (t38 & t40);
    t46 = (t42 & t44);
    t47 = (~(t45));
    t48 = (~(t46));
    t49 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t49 & t47);
    t50 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t50 & t48);
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t47);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t48);
    goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);

LAB21:    xsi_set_current_line(60, ng0);
    t59 = (t0 + 1048U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng3)));
    memset(t61, 0, 8);
    t62 = (t60 + 4);
    t63 = (t59 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t59);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB25;

LAB22:    if (t73 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t61) = 1;

LAB25:    t77 = (t61 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t61);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t13) = 1;

LAB39:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB46;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;

LAB46:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB42:
LAB35:
LAB28:    goto LAB20;

LAB24:    t76 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(60, ng0);
    t83 = (t0 + 1208U);
    t84 = *((char **)t83);
    t83 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t83, t84, 0, 0, 32, 0LL);
    goto LAB28;

LAB31:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(61, ng0);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t25, t26, 0, 0, 32, 0LL);
    goto LAB35;

LAB38:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(62, ng0);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t25, t26, 0, 0, 32, 0LL);
    goto LAB42;

LAB45:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(63, ng0);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t25, t26, 0, 0, 32, 0LL);
    goto LAB49;

LAB50:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    t6 = (t0 + 3528);
    t7 = (t6 + 72U);
    t25 = *((char **)t7);
    t26 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t25, 2, t26, 32, 1);
    t27 = (t13 + 4);
    t14 = *((unsigned int *)t27);
    t45 = (!(t14));
    if (t45 == 1)
        goto LAB53;

LAB54:    goto LAB52;

LAB53:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB54;

LAB57:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(67, ng0);
    t25 = ((char*)((ng7)));
    t26 = (t0 + 3528);
    t27 = (t0 + 3528);
    t35 = (t27 + 72U);
    t36 = *((char **)t35);
    t53 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t21, t36, 2, t53, 32, 1);
    t59 = (t21 + 4);
    t30 = *((unsigned int *)t59);
    t45 = (!(t30));
    if (t45 == 1)
        goto LAB62;

LAB63:    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t26, t25, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB63;

LAB64:    t11 = *((unsigned int *)t61);
    t88 = (t11 + 0);
    t12 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t21);
    t89 = (t12 - t14);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t88, *((unsigned int *)t21), t90, 0LL);
    goto LAB65;

LAB66:    xsi_set_current_line(70, ng0);

LAB69:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t28 = (~(t24));
    t29 = (t20 & t28);
    if (t29 != 0)
        goto LAB73;

LAB70:    if (t24 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t26 = (t13 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB80;

LAB77:    if (t18 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t13) = 1;

LAB80:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB81;

LAB82:
LAB83:
LAB76:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB87;

LAB84:    if (t18 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t13) = 1;

LAB87:    t7 = (t13 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t28 = (t24 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t5 = (t0 + 3688);
    t6 = (t0 + 3688);
    t7 = (t6 + 72U);
    t25 = *((char **)t7);
    t26 = ((char*)((ng11)));
    t27 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t21, t61, t91, ((int*)(t25)), 2, t26, 32, 1, t27, 32, 1);
    t35 = (t21 + 4);
    t15 = *((unsigned int *)t35);
    t45 = (!(t15));
    t36 = (t61 + 4);
    t16 = *((unsigned int *)t36);
    t46 = (!(t16));
    t85 = (t45 && t46);
    t53 = (t91 + 4);
    t17 = *((unsigned int *)t53);
    t86 = (!(t17));
    t87 = (t85 && t86);
    if (t87 == 1)
        goto LAB94;

LAB95:
LAB90:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    t4 = (t0 + 3688);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t13, t6, 2, t7, 32, 1);
    t25 = (t13 + 4);
    t8 = *((unsigned int *)t25);
    t45 = (!(t8));
    if (t45 == 1)
        goto LAB96;

LAB97:    goto LAB68;

LAB72:    t25 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(72, ng0);
    t27 = ((char*)((ng9)));
    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    memset(t61, 0, 8);
    t35 = (t61 + 4);
    t53 = (t36 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (t37 >> 2);
    *((unsigned int *)t61) = t38;
    t39 = *((unsigned int *)t53);
    t40 = (t39 >> 2);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t41 & 1073741823U);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 1073741823U);
    xsi_vlogtype_concat(t21, 32, 32, 2U, t61, 30, t27, 2);
    t59 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t59, t21, 0, 0, 32, 0LL);
    goto LAB76;

LAB79:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(73, ng0);
    t25 = ((char*)((ng9)));
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t61, 0, 8);
    t26 = (t61 + 4);
    t35 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 2);
    *((unsigned int *)t61) = t31;
    t32 = *((unsigned int *)t35);
    t33 = (t32 >> 2);
    *((unsigned int *)t26) = t33;
    t34 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t34 & 1073741823U);
    t37 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t37 & 1073741823U);
    xsi_vlogtype_concat(t21, 32, 32, 2U, t61, 30, t25, 2);
    t36 = ((char*)((ng10)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_minus(t91, 32, t21, 32, t36, 32);
    t53 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t53, t91, 0, 0, 32, 0LL);
    goto LAB83;

LAB86:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(74, ng0);

LAB91:    xsi_set_current_line(75, ng0);
    t25 = ((char*)((ng1)));
    t26 = (t0 + 3688);
    t27 = (t0 + 3688);
    t35 = (t27 + 72U);
    t36 = *((char **)t35);
    t53 = ((char*)((ng11)));
    t59 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t21, t61, t91, ((int*)(t36)), 2, t53, 32, 1, t59, 32, 1);
    t60 = (t21 + 4);
    t30 = *((unsigned int *)t60);
    t45 = (!(t30));
    t62 = (t61 + 4);
    t31 = *((unsigned int *)t62);
    t46 = (!(t31));
    t85 = (t45 && t46);
    t63 = (t91 + 4);
    t32 = *((unsigned int *)t63);
    t86 = (!(t32));
    t87 = (t85 && t86);
    if (t87 == 1)
        goto LAB92;

LAB93:    goto LAB90;

LAB92:    t33 = *((unsigned int *)t91);
    t88 = (t33 + 0);
    t34 = *((unsigned int *)t21);
    t37 = *((unsigned int *)t61);
    t89 = (t34 - t37);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t26, t25, t88, *((unsigned int *)t61), t90, 0LL);
    goto LAB93;

LAB94:    t18 = *((unsigned int *)t91);
    t88 = (t18 + 0);
    t19 = *((unsigned int *)t21);
    t20 = *((unsigned int *)t61);
    t89 = (t19 - t20);
    t90 = (t89 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t88, *((unsigned int *)t61), t90, 0LL);
    goto LAB95;

LAB96:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB97;

}


extern void work_m_00000000003599253545_1093763706_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Initial_36_1,(void *)Cont_42_2,(void *)Cont_47_3,(void *)Cont_48_4,(void *)Always_50_5};
	xsi_register_didat("work_m_00000000003599253545_1093763706", "isim/mips_test_isim_beh.exe.sim/work/m_00000000003599253545_1093763706.didat");
	xsi_register_executes(pe);
}
