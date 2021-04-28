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
static const char *ng0 = "G:/cpu/p8_4/opt.v";
static int ng1[] = {32, 0};
static int ng2[] = {0, 0};
static int ng3[] = {24, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {36, 0};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {33, 0};
static int ng10[] = {16, 0};
static int ng11[] = {37, 0};



static void Always_27_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t52[8];
    char t53[8];
    char t63[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t6) = 1;

LAB45:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t6) = 1;

LAB103:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB104;

LAB105:
LAB106:
LAB84:
LAB48:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB34:
LAB27:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);
    t54 = (t0 + 1368U);
    t55 = *((char **)t54);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t56 = (t55 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 0);
    *((unsigned int *)t54) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 255U);
    t62 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t62 & 255U);
    t64 = ((char*)((ng3)));
    t65 = (t0 + 1368U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t65 = (t67 + 4);
    t68 = (t66 + 4);
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 7);
    t71 = (t70 & 1);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 7);
    t74 = (t73 & 1);
    *((unsigned int *)t65) = t74;
    xsi_vlog_mul_concat(t63, 24, 1, t64, 1U, t67, 1);
    xsi_vlogtype_concat(t52, 32, 32, 2U, t63, 24, t53, 8);
    t75 = (t0 + 1768);
    xsi_vlogvar_assign_value(t75, t52, 0, 0, 32);
    goto LAB20;

LAB23:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(30, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 8);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 8);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t45 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = (t39 >> 15);
    t41 = (t40 & 1);
    *((unsigned int *)t63) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 15);
    t44 = (t43 & 1);
    *((unsigned int *)t31) = t44;
    xsi_vlog_mul_concat(t53, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t53, 24, t52, 8);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t30, 0, 0, 32);
    goto LAB27;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(31, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 16);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 16);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t45 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = (t39 >> 23);
    t41 = (t40 & 1);
    *((unsigned int *)t63) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 23);
    t44 = (t43 & 1);
    *((unsigned int *)t31) = t44;
    xsi_vlog_mul_concat(t53, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t53, 24, t52, 8);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t30, 0, 0, 32);
    goto LAB34;

LAB37:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(32, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 24);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 24);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t45 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = (t39 >> 31);
    t41 = (t40 & 1);
    *((unsigned int *)t63) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t31) = t44;
    xsi_vlog_mul_concat(t53, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t53, 24, t52, 8);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t30, 0, 0, 32);
    goto LAB41;

LAB44:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(34, ng0);

LAB49:    xsi_set_current_line(35, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB53;

LAB50:    if (t42 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t30) = 1;

LAB53:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB67;

LAB64:    if (t18 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t6) = 1;

LAB67:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t6) = 1;

LAB74:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB70:
LAB63:
LAB56:    goto LAB48;

LAB52:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(35, ng0);
    t45 = (t0 + 1368U);
    t46 = *((char **)t45);
    memset(t53, 0, 8);
    t45 = (t53 + 4);
    t54 = (t46 + 4);
    t57 = *((unsigned int *)t46);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 >> 0);
    *((unsigned int *)t45) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 255U);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & 255U);
    t55 = ((char*)((ng8)));
    xsi_vlogtype_concat(t52, 32, 32, 2U, t55, 24, t53, 8);
    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t52, 0, 0, 32);
    goto LAB56;

LAB59:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(36, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 8);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 8);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng8)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t29, 24, t52, 8);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB63;

LAB66:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(37, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 16);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 16);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng8)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t29, 24, t52, 8);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB70;

LAB73:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(38, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 24);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 24);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = ((char*)((ng8)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t29, 24, t52, 8);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB77;

LAB80:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(40, ng0);

LAB85:    xsi_set_current_line(41, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB89;

LAB86:    if (t42 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t30) = 1;

LAB89:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB96;

LAB93:    if (t18 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t6) = 1;

LAB96:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB92:    goto LAB84;

LAB88:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(41, ng0);
    t45 = (t0 + 1368U);
    t46 = *((char **)t45);
    memset(t53, 0, 8);
    t45 = (t53 + 4);
    t54 = (t46 + 4);
    t57 = *((unsigned int *)t46);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 >> 0);
    *((unsigned int *)t45) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 65535U);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & 65535U);
    t55 = ((char*)((ng10)));
    t56 = (t0 + 1368U);
    t64 = *((char **)t56);
    memset(t67, 0, 8);
    t56 = (t67 + 4);
    t65 = (t64 + 4);
    t69 = *((unsigned int *)t64);
    t70 = (t69 >> 15);
    t71 = (t70 & 1);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t65);
    t73 = (t72 >> 15);
    t74 = (t73 & 1);
    *((unsigned int *)t56) = t74;
    xsi_vlog_mul_concat(t63, 16, 1, t55, 1U, t67, 1);
    xsi_vlogtype_concat(t52, 32, 32, 2U, t63, 16, t53, 16);
    t66 = (t0 + 1768);
    xsi_vlogvar_assign_value(t66, t52, 0, 0, 32);
    goto LAB92;

LAB95:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 16);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 16);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 65535U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 65535U);
    t29 = ((char*)((ng10)));
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t45 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = (t39 >> 31);
    t41 = (t40 & 1);
    *((unsigned int *)t63) = t41;
    t42 = *((unsigned int *)t45);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t31) = t44;
    xsi_vlog_mul_concat(t53, 16, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t53, 16, t52, 16);
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t30, 0, 0, 32);
    goto LAB99;

LAB102:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(44, ng0);

LAB107:    xsi_set_current_line(45, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB111;

LAB108:    if (t42 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t30) = 1;

LAB111:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB118;

LAB115:    if (t18 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t6) = 1;

LAB118:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB119;

LAB120:
LAB121:
LAB114:    goto LAB106;

LAB110:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(45, ng0);
    t45 = (t0 + 1368U);
    t46 = *((char **)t45);
    memset(t53, 0, 8);
    t45 = (t53 + 4);
    t54 = (t46 + 4);
    t57 = *((unsigned int *)t46);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 >> 0);
    *((unsigned int *)t45) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 65535U);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & 65535U);
    t55 = ((char*)((ng8)));
    xsi_vlogtype_concat(t52, 32, 32, 2U, t55, 16, t53, 16);
    t56 = (t0 + 1768);
    xsi_vlogvar_assign_value(t56, t52, 0, 0, 32);
    goto LAB114;

LAB117:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(46, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 16);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 16);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 65535U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 65535U);
    t29 = ((char*)((ng8)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t29, 16, t52, 16);
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB121;

}


extern void work_m_00000000002279931595_0966459031_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000002279931595_0966459031", "isim/mips_test_isim_beh.exe.sim/work/m_00000000002279931595_0966459031.didat");
	xsi_register_executes(pe);
}
