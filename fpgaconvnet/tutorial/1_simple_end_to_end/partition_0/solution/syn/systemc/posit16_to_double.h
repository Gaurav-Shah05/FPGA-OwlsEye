// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _posit16_to_double_HH_
#define _posit16_to_double_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pow_generic_double_s.h"
#include "fpgaconvnet_ip_da6jw.h"
#include "fpgaconvnet_ip_dmeOg.h"
#include "fpgaconvnet_ip_si7jG.h"
#include "fpgaconvnet_ip_sig8j.h"

namespace ap_rtl {

struct posit16_to_double : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > ui;
    sc_out< sc_lv<64> > ap_return;
    sc_signal< sc_logic > ap_var_for_const2;
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const1;


    // Module declarations
    posit16_to_double(sc_module_name name);
    SC_HAS_PROCESS(posit16_to_double);

    ~posit16_to_double();

    sc_trace_file* mVcdFile;

    pow_generic_double_s* grp_pow_generic_double_s_fu_450;
    pow_generic_double_s* grp_pow_generic_double_s_fu_481;
    fpgaconvnet_ip_da6jw<1,14,64,64,64>* fpgaconvnet_ip_da6jw_U851;
    fpgaconvnet_ip_dmeOg<1,10,64,64,64>* fpgaconvnet_ip_dmeOg_U852;
    fpgaconvnet_ip_si7jG<1,8,32,64>* fpgaconvnet_ip_si7jG_U853;
    fpgaconvnet_ip_sig8j<1,8,32,64>* fpgaconvnet_ip_sig8j_U854;
    sc_signal< sc_lv<230> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > grp_fu_518_p2;
    sc_signal< sc_lv<64> > reg_531;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state219;
    sc_signal< sc_logic > ap_CS_fsm_state229;
    sc_signal< sc_lv<1> > icmp_ln54_fu_538_p2;
    sc_signal< sc_lv<1> > icmp_ln54_reg_1038;
    sc_signal< sc_lv<1> > icmp_ln55_fu_544_p2;
    sc_signal< sc_lv<1> > icmp_ln55_reg_1042;
    sc_signal< sc_lv<1> > neg_fu_550_p3;
    sc_signal< sc_lv<1> > neg_reg_1046;
    sc_signal< sc_lv<16> > zext_ln60_fu_568_p1;
    sc_signal< sc_lv<1> > regSign_reg_1055;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<16> > shl_ln72_fu_592_p2;
    sc_signal< sc_lv<16> > shl_ln72_1_fu_612_p2;
    sc_signal< sc_lv<1> > xor_ln70_fu_606_p2;
    sc_signal< sc_lv<16> > shl_ln72_2_fu_632_p2;
    sc_signal< sc_lv<1> > xor_ln70_1_fu_626_p2;
    sc_signal< sc_lv<16> > shl_ln72_3_fu_652_p2;
    sc_signal< sc_lv<1> > xor_ln70_2_fu_646_p2;
    sc_signal< sc_lv<16> > shl_ln72_4_fu_672_p2;
    sc_signal< sc_lv<1> > xor_ln70_3_fu_666_p2;
    sc_signal< sc_lv<16> > shl_ln72_5_fu_692_p2;
    sc_signal< sc_lv<1> > xor_ln70_4_fu_686_p2;
    sc_signal< sc_lv<16> > shl_ln72_6_fu_712_p2;
    sc_signal< sc_lv<1> > xor_ln70_5_fu_706_p2;
    sc_signal< sc_lv<16> > shl_ln72_7_fu_732_p2;
    sc_signal< sc_lv<1> > xor_ln70_6_fu_726_p2;
    sc_signal< sc_lv<16> > shl_ln72_8_fu_752_p2;
    sc_signal< sc_lv<1> > xor_ln70_7_fu_746_p2;
    sc_signal< sc_lv<16> > shl_ln72_9_fu_772_p2;
    sc_signal< sc_lv<1> > xor_ln70_8_fu_766_p2;
    sc_signal< sc_lv<16> > shl_ln72_10_fu_792_p2;
    sc_signal< sc_lv<1> > xor_ln70_9_fu_786_p2;
    sc_signal< sc_lv<16> > shl_ln72_11_fu_812_p2;
    sc_signal< sc_lv<1> > xor_ln70_10_fu_806_p2;
    sc_signal< sc_lv<16> > shl_ln72_12_fu_832_p2;
    sc_signal< sc_lv<1> > xor_ln70_11_fu_826_p2;
    sc_signal< sc_lv<1> > xor_ln70_13_fu_858_p2;
    sc_signal< sc_lv<1> > xor_ln70_12_fu_846_p2;
    sc_signal< sc_lv<16> > p_tmp_4_13_fu_864_p3;
    sc_signal< sc_lv<4> > p_10_cast_fu_872_p1;
    sc_signal< sc_lv<4> > p_11_cast_cast_cast_fu_876_p3;
    sc_signal< sc_lv<5> > zext_ln78_fu_884_p1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > k_fu_908_p3;
    sc_signal< sc_lv<5> > k_reg_1189;
    sc_signal< sc_lv<16> > tmp_45_fu_915_p2;
    sc_signal< sc_lv<1> > ap_phi_mux_icmp_ln70_lcssa_phi_fu_175_p28;
    sc_signal< sc_lv<5> > remaining_fu_921_p2;
    sc_signal< sc_lv<5> > remaining_3_fu_959_p3;
    sc_signal< sc_lv<5> > remaining_3_reg_1204;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<16> > tmp_48_fu_967_p3;
    sc_signal< sc_lv<32> > zext_ln97_fu_975_p1;
    sc_signal< sc_lv<32> > zext_ln97_reg_1214;
    sc_signal< sc_lv<4> > i_fu_988_p2;
    sc_signal< sc_lv<4> > i_reg_1222;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_49_reg_1227;
    sc_signal< sc_lv<1> > icmp_ln97_fu_983_p2;
    sc_signal< sc_lv<16> > tmp_50_fu_1002_p2;
    sc_signal< sc_lv<16> > tmp_50_reg_1232;
    sc_signal< sc_lv<64> > grp_fu_512_p2;
    sc_signal< sc_lv<64> > frac_reg_1242;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > frac_1_fu_1012_p3;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > grp_fu_525_p1;
    sc_signal< sc_lv<64> > y_assign_reg_1252;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<64> > grp_fu_528_p1;
    sc_signal< sc_lv<64> > y_assign_1_reg_1257;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_450_ap_return;
    sc_signal< sc_lv<64> > tmp_i_reg_1262;
    sc_signal< sc_logic > ap_CS_fsm_state209;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_481_ap_return;
    sc_signal< sc_lv<64> > tmp_i1_reg_1267;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_450_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_450_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_450_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_450_ap_ready;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_481_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_481_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_481_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_481_ap_ready;
    sc_signal< sc_lv<16> > p_01_reg_162;
    sc_signal< sc_lv<1> > icmp_ln70_lcssa_reg_171;
    sc_signal< sc_lv<16> > tmp_0_lcssa_reg_218;
    sc_signal< sc_lv<4> > remaining_0_lcssa_reg_252;
    sc_signal< sc_lv<4> > regCount_0_lcssa_reg_311;
    sc_signal< sc_lv<5> > remaining_1_reg_370;
    sc_signal< sc_lv<16> > tmp_1_reg_379;
    sc_signal< sc_lv<64> > frac_0_reg_389;
    sc_signal< sc_lv<64> > bitVal_0_reg_401;
    sc_signal< sc_lv<16> > tmp_3_reg_413;
    sc_signal< sc_lv<4> > i_0_reg_422;
    sc_signal< sc_lv<64> > bitcast_ln108_1_fu_1028_p1;
    sc_signal< sc_lv<64> > ap_phi_mux_p_0_phi_fu_438_p8;
    sc_signal< sc_lv<64> > p_0_reg_433;
    sc_signal< sc_logic > ap_CS_fsm_state230;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_450_ap_start_reg;
    sc_signal< sc_lv<230> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_481_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > grp_fu_518_p0;
    sc_signal< sc_lv<64> > grp_fu_518_p1;
    sc_signal< sc_logic > ap_CS_fsm_state210;
    sc_signal< sc_logic > ap_CS_fsm_state220;
    sc_signal< sc_lv<32> > grp_fu_525_p0;
    sc_signal< sc_lv<15> > trunc_ln60_fu_558_p1;
    sc_signal< sc_lv<15> > xor_ln60_fu_562_p2;
    sc_signal< sc_lv<1> > tmp_31_fu_598_p3;
    sc_signal< sc_lv<1> > tmp_fu_584_p3;
    sc_signal< sc_lv<1> > tmp_32_fu_618_p3;
    sc_signal< sc_lv<1> > tmp_34_fu_638_p3;
    sc_signal< sc_lv<1> > tmp_35_fu_658_p3;
    sc_signal< sc_lv<1> > tmp_36_fu_678_p3;
    sc_signal< sc_lv<1> > tmp_37_fu_698_p3;
    sc_signal< sc_lv<1> > tmp_38_fu_718_p3;
    sc_signal< sc_lv<1> > tmp_39_fu_738_p3;
    sc_signal< sc_lv<1> > tmp_40_fu_758_p3;
    sc_signal< sc_lv<1> > tmp_41_fu_778_p3;
    sc_signal< sc_lv<1> > tmp_42_fu_798_p3;
    sc_signal< sc_lv<1> > tmp_43_fu_818_p3;
    sc_signal< sc_lv<1> > tmp_44_fu_838_p3;
    sc_signal< sc_lv<1> > trunc_ln68_fu_572_p1;
    sc_signal< sc_lv<16> > shl_ln72_13_fu_852_p2;
    sc_signal< sc_lv<4> > add_ln78_fu_892_p2;
    sc_signal< sc_lv<5> > zext_ln78_1_fu_888_p1;
    sc_signal< sc_lv<5> > zext_ln78_2_fu_898_p1;
    sc_signal< sc_lv<5> > sub_ln78_fu_902_p2;
    sc_signal< sc_lv<1> > icmp_ln88_fu_927_p2;
    sc_signal< sc_lv<1> > tmp_46_fu_933_p3;
    sc_signal< sc_lv<5> > remaining_2_fu_947_p2;
    sc_signal< sc_lv<16> > tmp_47_fu_941_p2;
    sc_signal< sc_lv<1> > and_ln88_fu_953_p2;
    sc_signal< sc_lv<5> > zext_ln97_1_fu_979_p1;
    sc_signal< sc_lv<64> > bitcast_ln108_fu_1018_p1;
    sc_signal< sc_lv<64> > xor_ln108_fu_1022_p2;
    sc_signal< sc_lv<64> > ap_return_preg;
    sc_signal< bool > ap_condition_2410;
    sc_signal< bool > ap_condition_286;
    sc_signal< bool > ap_condition_492;
    sc_signal< bool > ap_condition_496;
    sc_signal< bool > ap_condition_500;
    sc_signal< bool > ap_condition_504;
    sc_signal< bool > ap_condition_508;
    sc_signal< bool > ap_condition_512;
    sc_signal< bool > ap_condition_516;
    sc_signal< bool > ap_condition_520;
    sc_signal< bool > ap_condition_524;
    sc_signal< bool > ap_condition_528;
    sc_signal< bool > ap_condition_532;
    sc_signal< bool > ap_condition_377;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<230> ap_ST_fsm_state1;
    static const sc_lv<230> ap_ST_fsm_state2;
    static const sc_lv<230> ap_ST_fsm_state3;
    static const sc_lv<230> ap_ST_fsm_state4;
    static const sc_lv<230> ap_ST_fsm_state5;
    static const sc_lv<230> ap_ST_fsm_state6;
    static const sc_lv<230> ap_ST_fsm_state7;
    static const sc_lv<230> ap_ST_fsm_state8;
    static const sc_lv<230> ap_ST_fsm_state9;
    static const sc_lv<230> ap_ST_fsm_state10;
    static const sc_lv<230> ap_ST_fsm_state11;
    static const sc_lv<230> ap_ST_fsm_state12;
    static const sc_lv<230> ap_ST_fsm_state13;
    static const sc_lv<230> ap_ST_fsm_state14;
    static const sc_lv<230> ap_ST_fsm_state15;
    static const sc_lv<230> ap_ST_fsm_state16;
    static const sc_lv<230> ap_ST_fsm_state17;
    static const sc_lv<230> ap_ST_fsm_state18;
    static const sc_lv<230> ap_ST_fsm_state19;
    static const sc_lv<230> ap_ST_fsm_state20;
    static const sc_lv<230> ap_ST_fsm_state21;
    static const sc_lv<230> ap_ST_fsm_state22;
    static const sc_lv<230> ap_ST_fsm_state23;
    static const sc_lv<230> ap_ST_fsm_state24;
    static const sc_lv<230> ap_ST_fsm_state25;
    static const sc_lv<230> ap_ST_fsm_state26;
    static const sc_lv<230> ap_ST_fsm_state27;
    static const sc_lv<230> ap_ST_fsm_state28;
    static const sc_lv<230> ap_ST_fsm_state29;
    static const sc_lv<230> ap_ST_fsm_state30;
    static const sc_lv<230> ap_ST_fsm_state31;
    static const sc_lv<230> ap_ST_fsm_state32;
    static const sc_lv<230> ap_ST_fsm_state33;
    static const sc_lv<230> ap_ST_fsm_state34;
    static const sc_lv<230> ap_ST_fsm_state35;
    static const sc_lv<230> ap_ST_fsm_state36;
    static const sc_lv<230> ap_ST_fsm_state37;
    static const sc_lv<230> ap_ST_fsm_state38;
    static const sc_lv<230> ap_ST_fsm_state39;
    static const sc_lv<230> ap_ST_fsm_state40;
    static const sc_lv<230> ap_ST_fsm_state41;
    static const sc_lv<230> ap_ST_fsm_state42;
    static const sc_lv<230> ap_ST_fsm_state43;
    static const sc_lv<230> ap_ST_fsm_state44;
    static const sc_lv<230> ap_ST_fsm_state45;
    static const sc_lv<230> ap_ST_fsm_state46;
    static const sc_lv<230> ap_ST_fsm_state47;
    static const sc_lv<230> ap_ST_fsm_state48;
    static const sc_lv<230> ap_ST_fsm_state49;
    static const sc_lv<230> ap_ST_fsm_state50;
    static const sc_lv<230> ap_ST_fsm_state51;
    static const sc_lv<230> ap_ST_fsm_state52;
    static const sc_lv<230> ap_ST_fsm_state53;
    static const sc_lv<230> ap_ST_fsm_state54;
    static const sc_lv<230> ap_ST_fsm_state55;
    static const sc_lv<230> ap_ST_fsm_state56;
    static const sc_lv<230> ap_ST_fsm_state57;
    static const sc_lv<230> ap_ST_fsm_state58;
    static const sc_lv<230> ap_ST_fsm_state59;
    static const sc_lv<230> ap_ST_fsm_state60;
    static const sc_lv<230> ap_ST_fsm_state61;
    static const sc_lv<230> ap_ST_fsm_state62;
    static const sc_lv<230> ap_ST_fsm_state63;
    static const sc_lv<230> ap_ST_fsm_state64;
    static const sc_lv<230> ap_ST_fsm_state65;
    static const sc_lv<230> ap_ST_fsm_state66;
    static const sc_lv<230> ap_ST_fsm_state67;
    static const sc_lv<230> ap_ST_fsm_state68;
    static const sc_lv<230> ap_ST_fsm_state69;
    static const sc_lv<230> ap_ST_fsm_state70;
    static const sc_lv<230> ap_ST_fsm_state71;
    static const sc_lv<230> ap_ST_fsm_state72;
    static const sc_lv<230> ap_ST_fsm_state73;
    static const sc_lv<230> ap_ST_fsm_state74;
    static const sc_lv<230> ap_ST_fsm_state75;
    static const sc_lv<230> ap_ST_fsm_state76;
    static const sc_lv<230> ap_ST_fsm_state77;
    static const sc_lv<230> ap_ST_fsm_state78;
    static const sc_lv<230> ap_ST_fsm_state79;
    static const sc_lv<230> ap_ST_fsm_state80;
    static const sc_lv<230> ap_ST_fsm_state81;
    static const sc_lv<230> ap_ST_fsm_state82;
    static const sc_lv<230> ap_ST_fsm_state83;
    static const sc_lv<230> ap_ST_fsm_state84;
    static const sc_lv<230> ap_ST_fsm_state85;
    static const sc_lv<230> ap_ST_fsm_state86;
    static const sc_lv<230> ap_ST_fsm_state87;
    static const sc_lv<230> ap_ST_fsm_state88;
    static const sc_lv<230> ap_ST_fsm_state89;
    static const sc_lv<230> ap_ST_fsm_state90;
    static const sc_lv<230> ap_ST_fsm_state91;
    static const sc_lv<230> ap_ST_fsm_state92;
    static const sc_lv<230> ap_ST_fsm_state93;
    static const sc_lv<230> ap_ST_fsm_state94;
    static const sc_lv<230> ap_ST_fsm_state95;
    static const sc_lv<230> ap_ST_fsm_state96;
    static const sc_lv<230> ap_ST_fsm_state97;
    static const sc_lv<230> ap_ST_fsm_state98;
    static const sc_lv<230> ap_ST_fsm_state99;
    static const sc_lv<230> ap_ST_fsm_state100;
    static const sc_lv<230> ap_ST_fsm_state101;
    static const sc_lv<230> ap_ST_fsm_state102;
    static const sc_lv<230> ap_ST_fsm_state103;
    static const sc_lv<230> ap_ST_fsm_state104;
    static const sc_lv<230> ap_ST_fsm_state105;
    static const sc_lv<230> ap_ST_fsm_state106;
    static const sc_lv<230> ap_ST_fsm_state107;
    static const sc_lv<230> ap_ST_fsm_state108;
    static const sc_lv<230> ap_ST_fsm_state109;
    static const sc_lv<230> ap_ST_fsm_state110;
    static const sc_lv<230> ap_ST_fsm_state111;
    static const sc_lv<230> ap_ST_fsm_state112;
    static const sc_lv<230> ap_ST_fsm_state113;
    static const sc_lv<230> ap_ST_fsm_state114;
    static const sc_lv<230> ap_ST_fsm_state115;
    static const sc_lv<230> ap_ST_fsm_state116;
    static const sc_lv<230> ap_ST_fsm_state117;
    static const sc_lv<230> ap_ST_fsm_state118;
    static const sc_lv<230> ap_ST_fsm_state119;
    static const sc_lv<230> ap_ST_fsm_state120;
    static const sc_lv<230> ap_ST_fsm_state121;
    static const sc_lv<230> ap_ST_fsm_state122;
    static const sc_lv<230> ap_ST_fsm_state123;
    static const sc_lv<230> ap_ST_fsm_state124;
    static const sc_lv<230> ap_ST_fsm_state125;
    static const sc_lv<230> ap_ST_fsm_state126;
    static const sc_lv<230> ap_ST_fsm_state127;
    static const sc_lv<230> ap_ST_fsm_state128;
    static const sc_lv<230> ap_ST_fsm_state129;
    static const sc_lv<230> ap_ST_fsm_state130;
    static const sc_lv<230> ap_ST_fsm_state131;
    static const sc_lv<230> ap_ST_fsm_state132;
    static const sc_lv<230> ap_ST_fsm_state133;
    static const sc_lv<230> ap_ST_fsm_state134;
    static const sc_lv<230> ap_ST_fsm_state135;
    static const sc_lv<230> ap_ST_fsm_state136;
    static const sc_lv<230> ap_ST_fsm_state137;
    static const sc_lv<230> ap_ST_fsm_state138;
    static const sc_lv<230> ap_ST_fsm_state139;
    static const sc_lv<230> ap_ST_fsm_state140;
    static const sc_lv<230> ap_ST_fsm_state141;
    static const sc_lv<230> ap_ST_fsm_state142;
    static const sc_lv<230> ap_ST_fsm_state143;
    static const sc_lv<230> ap_ST_fsm_state144;
    static const sc_lv<230> ap_ST_fsm_state145;
    static const sc_lv<230> ap_ST_fsm_state146;
    static const sc_lv<230> ap_ST_fsm_state147;
    static const sc_lv<230> ap_ST_fsm_state148;
    static const sc_lv<230> ap_ST_fsm_state149;
    static const sc_lv<230> ap_ST_fsm_state150;
    static const sc_lv<230> ap_ST_fsm_state151;
    static const sc_lv<230> ap_ST_fsm_state152;
    static const sc_lv<230> ap_ST_fsm_state153;
    static const sc_lv<230> ap_ST_fsm_state154;
    static const sc_lv<230> ap_ST_fsm_state155;
    static const sc_lv<230> ap_ST_fsm_state156;
    static const sc_lv<230> ap_ST_fsm_state157;
    static const sc_lv<230> ap_ST_fsm_state158;
    static const sc_lv<230> ap_ST_fsm_state159;
    static const sc_lv<230> ap_ST_fsm_state160;
    static const sc_lv<230> ap_ST_fsm_state161;
    static const sc_lv<230> ap_ST_fsm_state162;
    static const sc_lv<230> ap_ST_fsm_state163;
    static const sc_lv<230> ap_ST_fsm_state164;
    static const sc_lv<230> ap_ST_fsm_state165;
    static const sc_lv<230> ap_ST_fsm_state166;
    static const sc_lv<230> ap_ST_fsm_state167;
    static const sc_lv<230> ap_ST_fsm_state168;
    static const sc_lv<230> ap_ST_fsm_state169;
    static const sc_lv<230> ap_ST_fsm_state170;
    static const sc_lv<230> ap_ST_fsm_state171;
    static const sc_lv<230> ap_ST_fsm_state172;
    static const sc_lv<230> ap_ST_fsm_state173;
    static const sc_lv<230> ap_ST_fsm_state174;
    static const sc_lv<230> ap_ST_fsm_state175;
    static const sc_lv<230> ap_ST_fsm_state176;
    static const sc_lv<230> ap_ST_fsm_state177;
    static const sc_lv<230> ap_ST_fsm_state178;
    static const sc_lv<230> ap_ST_fsm_state179;
    static const sc_lv<230> ap_ST_fsm_state180;
    static const sc_lv<230> ap_ST_fsm_state181;
    static const sc_lv<230> ap_ST_fsm_state182;
    static const sc_lv<230> ap_ST_fsm_state183;
    static const sc_lv<230> ap_ST_fsm_state184;
    static const sc_lv<230> ap_ST_fsm_state185;
    static const sc_lv<230> ap_ST_fsm_state186;
    static const sc_lv<230> ap_ST_fsm_state187;
    static const sc_lv<230> ap_ST_fsm_state188;
    static const sc_lv<230> ap_ST_fsm_state189;
    static const sc_lv<230> ap_ST_fsm_state190;
    static const sc_lv<230> ap_ST_fsm_state191;
    static const sc_lv<230> ap_ST_fsm_state192;
    static const sc_lv<230> ap_ST_fsm_state193;
    static const sc_lv<230> ap_ST_fsm_state194;
    static const sc_lv<230> ap_ST_fsm_state195;
    static const sc_lv<230> ap_ST_fsm_state196;
    static const sc_lv<230> ap_ST_fsm_state197;
    static const sc_lv<230> ap_ST_fsm_state198;
    static const sc_lv<230> ap_ST_fsm_state199;
    static const sc_lv<230> ap_ST_fsm_state200;
    static const sc_lv<230> ap_ST_fsm_state201;
    static const sc_lv<230> ap_ST_fsm_state202;
    static const sc_lv<230> ap_ST_fsm_state203;
    static const sc_lv<230> ap_ST_fsm_state204;
    static const sc_lv<230> ap_ST_fsm_state205;
    static const sc_lv<230> ap_ST_fsm_state206;
    static const sc_lv<230> ap_ST_fsm_state207;
    static const sc_lv<230> ap_ST_fsm_state208;
    static const sc_lv<230> ap_ST_fsm_state209;
    static const sc_lv<230> ap_ST_fsm_state210;
    static const sc_lv<230> ap_ST_fsm_state211;
    static const sc_lv<230> ap_ST_fsm_state212;
    static const sc_lv<230> ap_ST_fsm_state213;
    static const sc_lv<230> ap_ST_fsm_state214;
    static const sc_lv<230> ap_ST_fsm_state215;
    static const sc_lv<230> ap_ST_fsm_state216;
    static const sc_lv<230> ap_ST_fsm_state217;
    static const sc_lv<230> ap_ST_fsm_state218;
    static const sc_lv<230> ap_ST_fsm_state219;
    static const sc_lv<230> ap_ST_fsm_state220;
    static const sc_lv<230> ap_ST_fsm_state221;
    static const sc_lv<230> ap_ST_fsm_state222;
    static const sc_lv<230> ap_ST_fsm_state223;
    static const sc_lv<230> ap_ST_fsm_state224;
    static const sc_lv<230> ap_ST_fsm_state225;
    static const sc_lv<230> ap_ST_fsm_state226;
    static const sc_lv<230> ap_ST_fsm_state227;
    static const sc_lv<230> ap_ST_fsm_state228;
    static const sc_lv<230> ap_ST_fsm_state229;
    static const sc_lv<230> ap_ST_fsm_state230;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_DA;
    static const sc_lv<32> ap_const_lv32_E4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_D0;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<4> ap_const_lv4_D;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<64> ap_const_lv64_3FE0000000000000;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_E5;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_7FF8000000000000;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<64> ap_const_lv64_4010000000000000;
    static const sc_lv<64> ap_const_lv64_4000000000000000;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_D1;
    static const sc_lv<32> ap_const_lv32_DB;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<16> ap_const_lv16_8000;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<15> ap_const_lv15_7FFF;
    static const sc_lv<16> ap_const_lv16_2;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<16> ap_const_lv16_3;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<16> ap_const_lv16_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<16> ap_const_lv16_5;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<16> ap_const_lv16_6;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<16> ap_const_lv16_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<16> ap_const_lv16_8;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<16> ap_const_lv16_9;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<16> ap_const_lv16_A;
    static const sc_lv<16> ap_const_lv16_B;
    static const sc_lv<16> ap_const_lv16_C;
    static const sc_lv<16> ap_const_lv16_D;
    static const sc_lv<16> ap_const_lv16_E;
    static const sc_lv<16> ap_const_lv16_F;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<64> ap_const_lv64_8000000000000000;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_add_ln78_fu_892_p2();
    void thread_and_ln88_fu_953_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state209();
    void thread_ap_CS_fsm_state210();
    void thread_ap_CS_fsm_state219();
    void thread_ap_CS_fsm_state220();
    void thread_ap_CS_fsm_state229();
    void thread_ap_CS_fsm_state230();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_NS_fsm_state28();
    void thread_ap_condition_2410();
    void thread_ap_condition_286();
    void thread_ap_condition_377();
    void thread_ap_condition_492();
    void thread_ap_condition_496();
    void thread_ap_condition_500();
    void thread_ap_condition_504();
    void thread_ap_condition_508();
    void thread_ap_condition_512();
    void thread_ap_condition_516();
    void thread_ap_condition_520();
    void thread_ap_condition_524();
    void thread_ap_condition_528();
    void thread_ap_condition_532();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_icmp_ln70_lcssa_phi_fu_175_p28();
    void thread_ap_phi_mux_p_0_phi_fu_438_p8();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln108_1_fu_1028_p1();
    void thread_bitcast_ln108_fu_1018_p1();
    void thread_frac_1_fu_1012_p3();
    void thread_grp_fu_518_p0();
    void thread_grp_fu_518_p1();
    void thread_grp_fu_525_p0();
    void thread_grp_pow_generic_double_s_fu_450_ap_start();
    void thread_grp_pow_generic_double_s_fu_481_ap_start();
    void thread_i_fu_988_p2();
    void thread_icmp_ln54_fu_538_p2();
    void thread_icmp_ln55_fu_544_p2();
    void thread_icmp_ln88_fu_927_p2();
    void thread_icmp_ln97_fu_983_p2();
    void thread_k_fu_908_p3();
    void thread_neg_fu_550_p3();
    void thread_p_10_cast_fu_872_p1();
    void thread_p_11_cast_cast_cast_fu_876_p3();
    void thread_p_tmp_4_13_fu_864_p3();
    void thread_remaining_2_fu_947_p2();
    void thread_remaining_3_fu_959_p3();
    void thread_remaining_fu_921_p2();
    void thread_shl_ln72_10_fu_792_p2();
    void thread_shl_ln72_11_fu_812_p2();
    void thread_shl_ln72_12_fu_832_p2();
    void thread_shl_ln72_13_fu_852_p2();
    void thread_shl_ln72_1_fu_612_p2();
    void thread_shl_ln72_2_fu_632_p2();
    void thread_shl_ln72_3_fu_652_p2();
    void thread_shl_ln72_4_fu_672_p2();
    void thread_shl_ln72_5_fu_692_p2();
    void thread_shl_ln72_6_fu_712_p2();
    void thread_shl_ln72_7_fu_732_p2();
    void thread_shl_ln72_8_fu_752_p2();
    void thread_shl_ln72_9_fu_772_p2();
    void thread_shl_ln72_fu_592_p2();
    void thread_sub_ln78_fu_902_p2();
    void thread_tmp_31_fu_598_p3();
    void thread_tmp_32_fu_618_p3();
    void thread_tmp_34_fu_638_p3();
    void thread_tmp_35_fu_658_p3();
    void thread_tmp_36_fu_678_p3();
    void thread_tmp_37_fu_698_p3();
    void thread_tmp_38_fu_718_p3();
    void thread_tmp_39_fu_738_p3();
    void thread_tmp_40_fu_758_p3();
    void thread_tmp_41_fu_778_p3();
    void thread_tmp_42_fu_798_p3();
    void thread_tmp_43_fu_818_p3();
    void thread_tmp_44_fu_838_p3();
    void thread_tmp_45_fu_915_p2();
    void thread_tmp_46_fu_933_p3();
    void thread_tmp_47_fu_941_p2();
    void thread_tmp_48_fu_967_p3();
    void thread_tmp_50_fu_1002_p2();
    void thread_tmp_fu_584_p3();
    void thread_trunc_ln60_fu_558_p1();
    void thread_trunc_ln68_fu_572_p1();
    void thread_xor_ln108_fu_1022_p2();
    void thread_xor_ln60_fu_562_p2();
    void thread_xor_ln70_10_fu_806_p2();
    void thread_xor_ln70_11_fu_826_p2();
    void thread_xor_ln70_12_fu_846_p2();
    void thread_xor_ln70_13_fu_858_p2();
    void thread_xor_ln70_1_fu_626_p2();
    void thread_xor_ln70_2_fu_646_p2();
    void thread_xor_ln70_3_fu_666_p2();
    void thread_xor_ln70_4_fu_686_p2();
    void thread_xor_ln70_5_fu_706_p2();
    void thread_xor_ln70_6_fu_726_p2();
    void thread_xor_ln70_7_fu_746_p2();
    void thread_xor_ln70_8_fu_766_p2();
    void thread_xor_ln70_9_fu_786_p2();
    void thread_xor_ln70_fu_606_p2();
    void thread_zext_ln60_fu_568_p1();
    void thread_zext_ln78_1_fu_888_p1();
    void thread_zext_ln78_2_fu_898_p1();
    void thread_zext_ln78_fu_884_p1();
    void thread_zext_ln97_1_fu_979_p1();
    void thread_zext_ln97_fu_975_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
