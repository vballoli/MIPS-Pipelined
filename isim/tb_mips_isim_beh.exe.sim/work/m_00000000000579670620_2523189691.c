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
static const char *ng0 = "V:/Verilog/MIPSPipelined/exe.v";
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static int ng3[] = {0, 0};



static void Always_10_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t35[8];
    char t60[8];
    char t61[8];
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
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
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
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(13, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = (t0 + 1168U);
    t31 = (t28 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t30, 32, t29, t32, 2, t33, 32, 1);
    t34 = ((char*)((ng3)));
    memset(t35, 0, 8);
    t36 = (t30 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB16;

LAB13:    if (t47 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t35) = 1;

LAB16:    t51 = (t35 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t35, 0, 8);
    t5 = (t35 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t19 & 7U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 7U);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 3, t30, 3, t35, 3);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t61, 0, 8);
    t21 = (t61 + 4);
    t28 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 3);
    *((unsigned int *)t61) = t24;
    t25 = *((unsigned int *)t28);
    t26 = (t25 >> 3);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t27 & 31U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 31U);
    xsi_vlogtype_concat(t6, 8, 8, 2U, t61, 5, t60, 3);
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);

LAB19:    goto LAB12;

LAB15:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(14, ng0);
    t57 = (t0 + 1048U);
    t58 = *((char **)t57);
    t57 = (t0 + 1208U);
    t59 = *((char **)t57);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 8, t58, 8, t59, 8);
    t57 = (t0 + 1768);
    xsi_vlogvar_assign_value(t57, t60, 0, 0, 8);
    goto LAB19;

}


extern void work_m_00000000000579670620_2523189691_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000000579670620_2523189691", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000000579670620_2523189691.didat");
	xsi_register_executes(pe);
}
