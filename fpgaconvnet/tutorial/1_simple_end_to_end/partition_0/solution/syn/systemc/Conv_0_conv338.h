// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Conv_0_conv338_HH_
#define _Conv_0_conv338_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "conv507.h"

namespace ap_rtl {

struct Conv_0_conv338 : public sc_module {
    // Port declarations 160
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<2> > weights_V21050_address0;
    sc_out< sc_logic > weights_V21050_ce0;
    sc_in< sc_lv<16> > weights_V21050_q0;
    sc_out< sc_lv<2> > weights_V21051_address0;
    sc_out< sc_logic > weights_V21051_ce0;
    sc_in< sc_lv<16> > weights_V21051_q0;
    sc_out< sc_lv<2> > weights_V21052_address0;
    sc_out< sc_logic > weights_V21052_ce0;
    sc_in< sc_lv<16> > weights_V21052_q0;
    sc_out< sc_lv<2> > weights_V21053_address0;
    sc_out< sc_logic > weights_V21053_ce0;
    sc_in< sc_lv<16> > weights_V21053_q0;
    sc_out< sc_lv<2> > weights_V21054_address0;
    sc_out< sc_logic > weights_V21054_ce0;
    sc_in< sc_lv<16> > weights_V21054_q0;
    sc_out< sc_lv<2> > weights_V21155_address0;
    sc_out< sc_logic > weights_V21155_ce0;
    sc_in< sc_lv<16> > weights_V21155_q0;
    sc_out< sc_lv<2> > weights_V21156_address0;
    sc_out< sc_logic > weights_V21156_ce0;
    sc_in< sc_lv<16> > weights_V21156_q0;
    sc_out< sc_lv<2> > weights_V21157_address0;
    sc_out< sc_logic > weights_V21157_ce0;
    sc_in< sc_lv<16> > weights_V21157_q0;
    sc_out< sc_lv<2> > weights_V21158_address0;
    sc_out< sc_logic > weights_V21158_ce0;
    sc_in< sc_lv<16> > weights_V21158_q0;
    sc_out< sc_lv<2> > weights_V21159_address0;
    sc_out< sc_logic > weights_V21159_ce0;
    sc_in< sc_lv<16> > weights_V21159_q0;
    sc_out< sc_lv<2> > weights_V21260_address0;
    sc_out< sc_logic > weights_V21260_ce0;
    sc_in< sc_lv<16> > weights_V21260_q0;
    sc_out< sc_lv<2> > weights_V21261_address0;
    sc_out< sc_logic > weights_V21261_ce0;
    sc_in< sc_lv<16> > weights_V21261_q0;
    sc_out< sc_lv<2> > weights_V21262_address0;
    sc_out< sc_logic > weights_V21262_ce0;
    sc_in< sc_lv<16> > weights_V21262_q0;
    sc_out< sc_lv<2> > weights_V21263_address0;
    sc_out< sc_logic > weights_V21263_ce0;
    sc_in< sc_lv<16> > weights_V21263_q0;
    sc_out< sc_lv<2> > weights_V21264_address0;
    sc_out< sc_logic > weights_V21264_ce0;
    sc_in< sc_lv<16> > weights_V21264_q0;
    sc_out< sc_lv<2> > weights_V21365_address0;
    sc_out< sc_logic > weights_V21365_ce0;
    sc_in< sc_lv<16> > weights_V21365_q0;
    sc_out< sc_lv<2> > weights_V21366_address0;
    sc_out< sc_logic > weights_V21366_ce0;
    sc_in< sc_lv<16> > weights_V21366_q0;
    sc_out< sc_lv<2> > weights_V21367_address0;
    sc_out< sc_logic > weights_V21367_ce0;
    sc_in< sc_lv<16> > weights_V21367_q0;
    sc_out< sc_lv<2> > weights_V21368_address0;
    sc_out< sc_logic > weights_V21368_ce0;
    sc_in< sc_lv<16> > weights_V21368_q0;
    sc_out< sc_lv<2> > weights_V21369_address0;
    sc_out< sc_logic > weights_V21369_ce0;
    sc_in< sc_lv<16> > weights_V21369_q0;
    sc_out< sc_lv<2> > weights_V21470_address0;
    sc_out< sc_logic > weights_V21470_ce0;
    sc_in< sc_lv<16> > weights_V21470_q0;
    sc_out< sc_lv<2> > weights_V21471_address0;
    sc_out< sc_logic > weights_V21471_ce0;
    sc_in< sc_lv<16> > weights_V21471_q0;
    sc_out< sc_lv<2> > weights_V21472_address0;
    sc_out< sc_logic > weights_V21472_ce0;
    sc_in< sc_lv<16> > weights_V21472_q0;
    sc_out< sc_lv<2> > weights_V21473_address0;
    sc_out< sc_logic > weights_V21473_ce0;
    sc_in< sc_lv<16> > weights_V21473_q0;
    sc_out< sc_lv<2> > weights_V21474_address0;
    sc_out< sc_logic > weights_V21474_ce0;
    sc_in< sc_lv<16> > weights_V21474_q0;
    sc_in< sc_lv<16> > in_V_V5_dout;
    sc_in< sc_logic > in_V_V5_empty_n;
    sc_out< sc_logic > in_V_V5_read;
    sc_in< sc_lv<16> > in_V_V5140_dout;
    sc_in< sc_logic > in_V_V5140_empty_n;
    sc_out< sc_logic > in_V_V5140_read;
    sc_in< sc_lv<16> > in_V_V5141_dout;
    sc_in< sc_logic > in_V_V5141_empty_n;
    sc_out< sc_logic > in_V_V5141_read;
    sc_in< sc_lv<16> > in_V_V5142_dout;
    sc_in< sc_logic > in_V_V5142_empty_n;
    sc_out< sc_logic > in_V_V5142_read;
    sc_in< sc_lv<16> > in_V_V5143_dout;
    sc_in< sc_logic > in_V_V5143_empty_n;
    sc_out< sc_logic > in_V_V5143_read;
    sc_in< sc_lv<16> > in_V_V528_dout;
    sc_in< sc_logic > in_V_V528_empty_n;
    sc_out< sc_logic > in_V_V528_read;
    sc_in< sc_lv<16> > in_V_V528144_dout;
    sc_in< sc_logic > in_V_V528144_empty_n;
    sc_out< sc_logic > in_V_V528144_read;
    sc_in< sc_lv<16> > in_V_V528145_dout;
    sc_in< sc_logic > in_V_V528145_empty_n;
    sc_out< sc_logic > in_V_V528145_read;
    sc_in< sc_lv<16> > in_V_V528146_dout;
    sc_in< sc_logic > in_V_V528146_empty_n;
    sc_out< sc_logic > in_V_V528146_read;
    sc_in< sc_lv<16> > in_V_V528147_dout;
    sc_in< sc_logic > in_V_V528147_empty_n;
    sc_out< sc_logic > in_V_V528147_read;
    sc_in< sc_lv<16> > in_V_V529_dout;
    sc_in< sc_logic > in_V_V529_empty_n;
    sc_out< sc_logic > in_V_V529_read;
    sc_in< sc_lv<16> > in_V_V529148_dout;
    sc_in< sc_logic > in_V_V529148_empty_n;
    sc_out< sc_logic > in_V_V529148_read;
    sc_in< sc_lv<16> > in_V_V529149_dout;
    sc_in< sc_logic > in_V_V529149_empty_n;
    sc_out< sc_logic > in_V_V529149_read;
    sc_in< sc_lv<16> > in_V_V529150_dout;
    sc_in< sc_logic > in_V_V529150_empty_n;
    sc_out< sc_logic > in_V_V529150_read;
    sc_in< sc_lv<16> > in_V_V529151_dout;
    sc_in< sc_logic > in_V_V529151_empty_n;
    sc_out< sc_logic > in_V_V529151_read;
    sc_in< sc_lv<16> > in_V_V530_dout;
    sc_in< sc_logic > in_V_V530_empty_n;
    sc_out< sc_logic > in_V_V530_read;
    sc_in< sc_lv<16> > in_V_V530152_dout;
    sc_in< sc_logic > in_V_V530152_empty_n;
    sc_out< sc_logic > in_V_V530152_read;
    sc_in< sc_lv<16> > in_V_V530153_dout;
    sc_in< sc_logic > in_V_V530153_empty_n;
    sc_out< sc_logic > in_V_V530153_read;
    sc_in< sc_lv<16> > in_V_V530154_dout;
    sc_in< sc_logic > in_V_V530154_empty_n;
    sc_out< sc_logic > in_V_V530154_read;
    sc_in< sc_lv<16> > in_V_V530155_dout;
    sc_in< sc_logic > in_V_V530155_empty_n;
    sc_out< sc_logic > in_V_V530155_read;
    sc_in< sc_lv<16> > in_V_V531_dout;
    sc_in< sc_logic > in_V_V531_empty_n;
    sc_out< sc_logic > in_V_V531_read;
    sc_in< sc_lv<16> > in_V_V531156_dout;
    sc_in< sc_logic > in_V_V531156_empty_n;
    sc_out< sc_logic > in_V_V531156_read;
    sc_in< sc_lv<16> > in_V_V531157_dout;
    sc_in< sc_logic > in_V_V531157_empty_n;
    sc_out< sc_logic > in_V_V531157_read;
    sc_in< sc_lv<16> > in_V_V531158_dout;
    sc_in< sc_logic > in_V_V531158_empty_n;
    sc_out< sc_logic > in_V_V531158_read;
    sc_in< sc_lv<16> > in_V_V531159_dout;
    sc_in< sc_logic > in_V_V531159_empty_n;
    sc_out< sc_logic > in_V_V531159_read;
    sc_out< sc_lv<30> > out_V_V8_din;
    sc_in< sc_logic > out_V_V8_full_n;
    sc_out< sc_logic > out_V_V8_write;
    sc_signal< sc_lv<16> > ap_var_for_const0;


    // Module declarations
    Conv_0_conv338(sc_module_name name);
    SC_HAS_PROCESS(Conv_0_conv338);

    ~Conv_0_conv338();

    sc_trace_file* mVcdFile;

    conv507* grp_conv507_fu_150;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V1_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V2_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V3_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V4_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V15_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V16_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V17_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V18_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V19_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V210_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V211_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V212_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V213_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V214_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V315_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V316_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V317_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V318_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V319_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V420_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V421_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V422_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V423_read;
    sc_signal< sc_logic > grp_conv507_fu_150_in_V_V424_read;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_0_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_0_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_0_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_0_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_0_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_0_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_0_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_0_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_1_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_1_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_1_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_1_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_1_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_1_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_1_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_1_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_2_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_2_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_2_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_2_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_2_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_2_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_2_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_2_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_3_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_3_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_3_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_3_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_3_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_3_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_3_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_3_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_4_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_4_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_4_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_4_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_0_4_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_4_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_0_4_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_0_4_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_0_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_0_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_0_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_0_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_0_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_0_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_0_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_0_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_1_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_1_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_1_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_1_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_1_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_1_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_1_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_1_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_2_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_2_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_2_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_2_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_2_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_2_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_2_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_2_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_3_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_3_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_3_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_3_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_3_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_3_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_3_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_3_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_4_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_4_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_4_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_4_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_1_4_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_4_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_1_4_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_1_4_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_0_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_0_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_0_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_0_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_0_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_0_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_0_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_0_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_1_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_1_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_1_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_1_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_1_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_1_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_1_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_1_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_2_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_2_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_2_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_2_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_2_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_2_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_2_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_2_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_3_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_3_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_3_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_3_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_3_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_3_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_3_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_3_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_4_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_4_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_4_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_4_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_2_4_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_4_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_2_4_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_2_4_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_0_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_0_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_0_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_0_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_0_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_0_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_0_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_0_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_1_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_1_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_1_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_1_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_1_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_1_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_1_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_1_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_2_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_2_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_2_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_2_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_2_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_2_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_2_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_2_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_3_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_3_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_3_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_3_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_3_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_3_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_3_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_3_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_4_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_4_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_4_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_4_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_3_4_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_4_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_3_4_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_3_4_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_0_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_0_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_0_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_0_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_0_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_0_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_0_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_0_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_1_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_1_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_1_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_1_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_1_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_1_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_1_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_1_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_2_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_2_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_2_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_2_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_2_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_2_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_2_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_2_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_3_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_3_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_3_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_3_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_3_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_3_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_3_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_3_V_we1;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_4_V_address0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_4_V_ce0;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_4_V_d0;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_4_V_we0;
    sc_signal< sc_lv<2> > grp_conv507_fu_150_weights_4_4_V_address1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_4_V_ce1;
    sc_signal< sc_lv<16> > grp_conv507_fu_150_weights_4_4_V_d1;
    sc_signal< sc_logic > grp_conv507_fu_150_weights_4_4_V_we1;
    sc_signal< sc_lv<30> > grp_conv507_fu_150_out_V_V_din;
    sc_signal< sc_logic > grp_conv507_fu_150_out_V_V_write;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_start;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_done;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_ready;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_idle;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_continue;
    sc_signal< sc_logic > grp_conv507_fu_150_ap_start_reg;
    sc_signal< bool > ap_block_state1_ignore_call76;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_sync_grp_conv507_fu_150_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_conv507_fu_150_ap_done;
    sc_signal< bool > ap_block_state2_on_subcall_done;
    sc_signal< sc_logic > ap_sync_reg_grp_conv507_fu_150_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_conv507_fu_150_ap_done;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< bool > ap_block_state1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state1();
    void thread_ap_block_state1_ignore_call76();
    void thread_ap_block_state2_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_grp_conv507_fu_150_ap_done();
    void thread_ap_sync_grp_conv507_fu_150_ap_ready();
    void thread_grp_conv507_fu_150_ap_continue();
    void thread_grp_conv507_fu_150_ap_start();
    void thread_in_V_V5140_read();
    void thread_in_V_V5141_read();
    void thread_in_V_V5142_read();
    void thread_in_V_V5143_read();
    void thread_in_V_V528144_read();
    void thread_in_V_V528145_read();
    void thread_in_V_V528146_read();
    void thread_in_V_V528147_read();
    void thread_in_V_V528_read();
    void thread_in_V_V529148_read();
    void thread_in_V_V529149_read();
    void thread_in_V_V529150_read();
    void thread_in_V_V529151_read();
    void thread_in_V_V529_read();
    void thread_in_V_V530152_read();
    void thread_in_V_V530153_read();
    void thread_in_V_V530154_read();
    void thread_in_V_V530155_read();
    void thread_in_V_V530_read();
    void thread_in_V_V531156_read();
    void thread_in_V_V531157_read();
    void thread_in_V_V531158_read();
    void thread_in_V_V531159_read();
    void thread_in_V_V531_read();
    void thread_in_V_V5_read();
    void thread_out_V_V8_din();
    void thread_out_V_V8_write();
    void thread_weights_V21050_address0();
    void thread_weights_V21050_ce0();
    void thread_weights_V21051_address0();
    void thread_weights_V21051_ce0();
    void thread_weights_V21052_address0();
    void thread_weights_V21052_ce0();
    void thread_weights_V21053_address0();
    void thread_weights_V21053_ce0();
    void thread_weights_V21054_address0();
    void thread_weights_V21054_ce0();
    void thread_weights_V21155_address0();
    void thread_weights_V21155_ce0();
    void thread_weights_V21156_address0();
    void thread_weights_V21156_ce0();
    void thread_weights_V21157_address0();
    void thread_weights_V21157_ce0();
    void thread_weights_V21158_address0();
    void thread_weights_V21158_ce0();
    void thread_weights_V21159_address0();
    void thread_weights_V21159_ce0();
    void thread_weights_V21260_address0();
    void thread_weights_V21260_ce0();
    void thread_weights_V21261_address0();
    void thread_weights_V21261_ce0();
    void thread_weights_V21262_address0();
    void thread_weights_V21262_ce0();
    void thread_weights_V21263_address0();
    void thread_weights_V21263_ce0();
    void thread_weights_V21264_address0();
    void thread_weights_V21264_ce0();
    void thread_weights_V21365_address0();
    void thread_weights_V21365_ce0();
    void thread_weights_V21366_address0();
    void thread_weights_V21366_ce0();
    void thread_weights_V21367_address0();
    void thread_weights_V21367_ce0();
    void thread_weights_V21368_address0();
    void thread_weights_V21368_ce0();
    void thread_weights_V21369_address0();
    void thread_weights_V21369_ce0();
    void thread_weights_V21470_address0();
    void thread_weights_V21470_ce0();
    void thread_weights_V21471_address0();
    void thread_weights_V21471_ce0();
    void thread_weights_V21472_address0();
    void thread_weights_V21472_ce0();
    void thread_weights_V21473_address0();
    void thread_weights_V21473_ce0();
    void thread_weights_V21474_address0();
    void thread_weights_V21474_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
