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
static const char *ng0 = "V:/Verilog/MIPSPipelined/mips.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Always_44_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 8288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 8856);
    *((int *)t2) = 1;
    t3 = (t0 + 8320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t20 = (t17 | t18);
    t21 = (~(t20));
    t23 = (t16 & t21);
    if (t23 != 0)
        goto LAB21;

LAB18:    if (t20 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t9) = 1;

LAB21:    t19 = (t9 + 4);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(65, ng0);

LAB26:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    t2 = (t0 + 7208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB24:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB12:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 3928U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t12 = *((unsigned int *)t8);
    t13 = (t12 & 4U);
    t10 = t13;
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 & 4U);
    t11 = t15;
    t16 = (t13 != 0);
    if (t16 == 1)
        goto LAB13;

LAB14:    t18 = (t15 != 0);
    if (t18 == 1)
        goto LAB15;

LAB16:    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 255U);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t23 & 255U);
    t24 = (t0 + 7368);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 8);
    goto LAB11;

LAB9:    xsi_set_current_line(53, ng0);

LAB17:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 5208U);
    t4 = *((char **)t3);
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB11;

LAB13:    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | 4294967288U);
    goto LAB14;

LAB15:    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 | 4294967288U);
    goto LAB16;

LAB20:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(60, ng0);

LAB25:    xsi_set_current_line(62, ng0);
    t22 = (t0 + 5368U);
    t24 = *((char **)t22);
    t22 = (t0 + 7208);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 8);
    goto LAB24;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 8936);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_00000000003649633235_3877310806_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003649633235_3877310806", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000003649633235_3877310806.didat");
	xsi_register_executes(pe);
}
