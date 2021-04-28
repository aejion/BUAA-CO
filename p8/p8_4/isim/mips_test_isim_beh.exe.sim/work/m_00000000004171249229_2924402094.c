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
static const char *ng0 = "G:/cpu/p8_4/dm.v";
static int ng1[] = {1, 0};
static int ng2[] = {43, 0};
static unsigned int ng3[] = {15U, 0U};
static int ng4[] = {41, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {12U, 0U};
static int ng9[] = {31, 0};
static int ng10[] = {16, 0};
static int ng11[] = {40, 0};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {2U, 0U};
static int ng15[] = {15, 0};
static int ng16[] = {8, 0};
static unsigned int ng17[] = {4U, 0U};
static int ng18[] = {23, 0};
static int ng19[] = {3, 0};
static unsigned int ng20[] = {8U, 0U};
static int ng21[] = {24, 0};
static unsigned int ng22[] = {0U, 0U};



static void Always_42_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t55[8];
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
    char *t52;
    char *t53;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t28 = (t0 + 2008U);
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

LAB19:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
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
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2008U);
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
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB28:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(44, ng0);
    t52 = ((char*)((ng3)));
    t53 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 4, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);

LAB29:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng5)));
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
        goto LAB33;

LAB30:    if (t42 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t30) = 1;

LAB33:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2168U);
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
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB36:    goto LAB28;

LAB32:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    t45 = ((char*)((ng6)));
    t46 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 4, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB36;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(52, ng0);

LAB45:    xsi_set_current_line(53, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t5 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng9)));
    t28 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t30, t54, t55, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t56 = (!(t15));
    t31 = (t54 + 4);
    t16 = *((unsigned int *)t31);
    t57 = (!(t16));
    t58 = (t56 && t57);
    t32 = (t55 + 4);
    t17 = *((unsigned int *)t32);
    t59 = (!(t17));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB46;

LAB47:    goto LAB44;

LAB46:    t18 = *((unsigned int *)t55);
    t61 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t62 = (t19 - t20);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t61, *((unsigned int *)t54), t63, 0LL);
    goto LAB47;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(57, ng0);

LAB55:    xsi_set_current_line(58, ng0);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng5)));
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
        goto LAB59;

LAB56:    if (t42 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t30) = 1;

LAB59:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t6) = 1;

LAB69:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2168U);
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
        goto LAB79;

LAB76:    if (t18 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t6) = 1;

LAB79:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng19)));
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
        goto LAB89;

LAB86:    if (t18 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t6) = 1;

LAB89:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB82:
LAB72:
LAB62:    goto LAB54;

LAB58:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(58, ng0);

LAB63:    xsi_set_current_line(59, ng0);
    t45 = ((char*)((ng12)));
    t46 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng13)));
    t28 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t30, t54, t55, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t56 = (!(t15));
    t31 = (t54 + 4);
    t16 = *((unsigned int *)t31);
    t57 = (!(t16));
    t58 = (t56 && t57);
    t32 = (t55 + 4);
    t17 = *((unsigned int *)t32);
    t59 = (!(t17));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB64;

LAB65:    goto LAB62;

LAB64:    t18 = *((unsigned int *)t55);
    t61 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t62 = (t19 - t20);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t61, *((unsigned int *)t54), t63, 0LL);
    goto LAB65;

LAB68:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(62, ng0);

LAB73:    xsi_set_current_line(63, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng15)));
    t28 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t30, t54, t55, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t56 = (!(t15));
    t31 = (t54 + 4);
    t16 = *((unsigned int *)t31);
    t57 = (!(t16));
    t58 = (t56 && t57);
    t32 = (t55 + 4);
    t17 = *((unsigned int *)t32);
    t59 = (!(t17));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB74;

LAB75:    goto LAB72;

LAB74:    t18 = *((unsigned int *)t55);
    t61 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t62 = (t19 - t20);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t61, *((unsigned int *)t54), t63, 0LL);
    goto LAB75;

LAB78:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(66, ng0);

LAB83:    xsi_set_current_line(67, ng0);
    t21 = ((char*)((ng17)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng18)));
    t28 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t30, t54, t55, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t56 = (!(t15));
    t31 = (t54 + 4);
    t16 = *((unsigned int *)t31);
    t57 = (!(t16));
    t58 = (t56 && t57);
    t32 = (t55 + 4);
    t17 = *((unsigned int *)t32);
    t59 = (!(t17));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB84;

LAB85:    goto LAB82;

LAB84:    t18 = *((unsigned int *)t55);
    t61 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t62 = (t19 - t20);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t61, *((unsigned int *)t54), t63, 0LL);
    goto LAB85;

LAB88:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(70, ng0);

LAB93:    xsi_set_current_line(71, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = (t0 + 2888);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng9)));
    t28 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t30, t54, t55, ((int*)(t21)), 2, t22, 32, 1, t28, 32, 1);
    t29 = (t30 + 4);
    t15 = *((unsigned int *)t29);
    t56 = (!(t15));
    t31 = (t54 + 4);
    t16 = *((unsigned int *)t31);
    t57 = (!(t16));
    t58 = (t56 && t57);
    t32 = (t55 + 4);
    t17 = *((unsigned int *)t32);
    t59 = (!(t17));
    t60 = (t58 && t59);
    if (t60 == 1)
        goto LAB94;

LAB95:    goto LAB92;

LAB94:    t18 = *((unsigned int *)t55);
    t61 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t62 = (t19 - t20);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t61, *((unsigned int *)t54), t63, 0LL);
    goto LAB95;

}


extern void work_m_00000000004171249229_2924402094_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000004171249229_2924402094", "isim/mips_test_isim_beh.exe.sim/work/m_00000000004171249229_2924402094.didat");
	xsi_register_executes(pe);
}
