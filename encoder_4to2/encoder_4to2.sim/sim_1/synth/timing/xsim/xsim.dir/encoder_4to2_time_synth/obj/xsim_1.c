/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_184(char*, char *);
extern void execute_185(char*, char *);
extern void execute_186(char*, char *);
extern void execute_187(char*, char *);
extern void execute_188(char*, char *);
extern void execute_189(char*, char *);
extern void execute_190(char*, char *);
extern void execute_191(char*, char *);
extern void execute_192(char*, char *);
extern void execute_193(char*, char *);
extern void execute_194(char*, char *);
extern void execute_195(char*, char *);
extern void execute_196(char*, char *);
extern void execute_197(char*, char *);
extern void execute_4(char*, char *);
extern void execute_39(char*, char *);
extern void execute_12(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_45(char*, char *);
extern void execute_16(char*, char *);
extern void execute_18(char*, char *);
extern void execute_19(char*, char *);
extern void execute_49(char*, char *);
extern void execute_52(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_54(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_64(char*, char *);
extern void execute_65(char*, char *);
extern void execute_66(char*, char *);
extern void execute_67(char*, char *);
extern void execute_68(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_71(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_37(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_38(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_39(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_40(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_41(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_42(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_43(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_44(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_45(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_46(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_47(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_48(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_49(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_50(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_51(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_52(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_53(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_54(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_55(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_56(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_57(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_58(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_59(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_60(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_61(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_62(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_63(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_64(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_65(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_66(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_67(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_68(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_69(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_70(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_71(char*, char *);
extern void timing_checker_condition_m_b7129c40_f4d1fc17_72(char*, char *);
extern void execute_98(char*, char *);
extern void execute_106(char*, char *);
extern void execute_107(char*, char *);
extern void execute_108(char*, char *);
extern void execute_72(char*, char *);
extern void execute_22(char*, char *);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_112(char*, char *);
extern void execute_113(char*, char *);
extern void execute_109(char*, char *);
extern void execute_33(char*, char *);
extern void execute_34(char*, char *);
extern void execute_179(char*, char *);
extern void execute_36(char*, char *);
extern void execute_37(char*, char *);
extern void execute_38(char*, char *);
extern void execute_198(char*, char *);
extern void execute_199(char*, char *);
extern void execute_200(char*, char *);
extern void execute_201(char*, char *);
extern void execute_202(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[130] = {(funcp)execute_2, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_184, (funcp)execute_185, (funcp)execute_186, (funcp)execute_187, (funcp)execute_188, (funcp)execute_189, (funcp)execute_190, (funcp)execute_191, (funcp)execute_192, (funcp)execute_193, (funcp)execute_194, (funcp)execute_195, (funcp)execute_196, (funcp)execute_197, (funcp)execute_4, (funcp)execute_39, (funcp)execute_12, (funcp)execute_43, (funcp)execute_44, (funcp)execute_45, (funcp)execute_16, (funcp)execute_18, (funcp)execute_19, (funcp)execute_49, (funcp)execute_52, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_58, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_62, (funcp)execute_64, (funcp)execute_65, (funcp)execute_66, (funcp)execute_67, (funcp)execute_68, (funcp)execute_69, (funcp)execute_70, (funcp)execute_71, (funcp)vlog_timingcheck_execute_0, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_37, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_38, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_39, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_40, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_41, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_42, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_43, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_44, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_45, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_46, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_47, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_48, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_49, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_50, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_51, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_52, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_53, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_54, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_55, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_56, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_57, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_58, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_59, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_60, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_61, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_62, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_63, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_64, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_65, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_66, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_67, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_68, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_69, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_70, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_71, (funcp)timing_checker_condition_m_b7129c40_f4d1fc17_72, (funcp)execute_98, (funcp)execute_106, (funcp)execute_107, (funcp)execute_108, (funcp)execute_72, (funcp)execute_22, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)execute_113, (funcp)execute_109, (funcp)execute_33, (funcp)execute_34, (funcp)execute_179, (funcp)execute_36, (funcp)execute_37, (funcp)execute_38, (funcp)execute_198, (funcp)execute_199, (funcp)execute_200, (funcp)execute_201, (funcp)execute_202, (funcp)transaction_0, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 130;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/encoder_4to2_time_synth/xsim.reloc",  (void **)funcTab, 130);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/encoder_4to2_time_synth/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/encoder_4to2_time_synth/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstantiate();

extern void implicit_HDL_SCcleanup();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/encoder_4to2_time_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/encoder_4to2_time_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/encoder_4to2_time_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
