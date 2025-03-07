// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "glue.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic glue::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic glue::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> glue::ap_ST_fsm_state1 = "1";
const sc_lv<2> glue::ap_ST_fsm_pp0_stage0 = "10";
const bool glue::ap_const_boolean_1 = true;
const sc_lv<32> glue::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> glue::ap_const_lv1_1 = "1";
const sc_lv<32> glue::ap_const_lv32_1 = "1";
const bool glue::ap_const_boolean_0 = false;
const sc_lv<1> glue::ap_const_lv1_0 = "0";
const sc_lv<12> glue::ap_const_lv12_0 = "000000000000";
const sc_lv<32> glue::ap_const_lv32_11 = "10001";
const sc_lv<32> glue::ap_const_lv32_1D = "11101";
const sc_lv<32> glue::ap_const_lv32_10 = "10000";
const sc_lv<12> glue::ap_const_lv12_1 = "1";
const sc_lv<12> glue::ap_const_lv12_8FF = "100011111111";

glue::glue(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( ap_start );
    sensitive << ( in_0_V_V_empty_n );
    sensitive << ( in_1_V_V_empty_n );
    sensitive << ( in_2_V_V_empty_n );
    sensitive << ( in_3_V_V_empty_n );
    sensitive << ( out_0_V_V_full_n );
    sensitive << ( out_1_V_V_full_n );
    sensitive << ( out_2_V_V_full_n );
    sensitive << ( out_3_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );
    sensitive << ( in_0_V_V_empty_n );
    sensitive << ( in_1_V_V_empty_n );
    sensitive << ( in_2_V_V_empty_n );
    sensitive << ( in_3_V_V_empty_n );
    sensitive << ( out_0_V_V_full_n );
    sensitive << ( out_1_V_V_full_n );
    sensitive << ( out_2_V_V_full_n );
    sensitive << ( out_3_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );
    sensitive << ( in_0_V_V_empty_n );
    sensitive << ( in_1_V_V_empty_n );
    sensitive << ( in_2_V_V_empty_n );
    sensitive << ( in_3_V_V_empty_n );
    sensitive << ( out_0_V_V_full_n );
    sensitive << ( out_1_V_V_full_n );
    sensitive << ( out_2_V_V_full_n );
    sensitive << ( out_3_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);
    sensitive << ( in_0_V_V_empty_n );
    sensitive << ( in_1_V_V_empty_n );
    sensitive << ( in_2_V_V_empty_n );
    sensitive << ( in_3_V_V_empty_n );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);
    sensitive << ( out_0_V_V_full_n );
    sensitive << ( out_1_V_V_full_n );
    sensitive << ( out_2_V_V_full_n );
    sensitive << ( out_3_V_V_full_n );

    SC_METHOD(thread_ap_condition_102);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( icmp_ln64_reg_351 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_idle_pp0_0to0);
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_phi_mux_pixel_index_01_phi_fu_142_p6);
    sensitive << ( pixel_index_01_reg_138 );
    sensitive << ( pixel_index_reg_346 );
    sensitive << ( icmp_ln64_reg_351 );
    sensitive << ( ap_condition_102 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( icmp_ln64_fu_230_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to0 );

    SC_METHOD(thread_icmp_ln64_fu_230_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_phi_mux_pixel_index_01_phi_fu_142_p6 );

    SC_METHOD(thread_in_0_V_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( in_0_V_V_empty_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_in_0_V_V_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_in_1_V_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( in_1_V_V_empty_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_in_1_V_V_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_in_2_V_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( in_2_V_V_empty_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_in_2_V_V_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_in_3_V_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( in_3_V_V_empty_n );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_in_3_V_V_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_out_0_V_V_blk_n);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( out_0_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_out_0_V_V_din);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( tmp_V_144_fu_242_p2 );

    SC_METHOD(thread_out_0_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_out_1_V_V_blk_n);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( out_1_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_out_1_V_V_din);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( tmp_V_147_fu_259_p2 );

    SC_METHOD(thread_out_1_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_out_2_V_V_blk_n);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( out_2_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_out_2_V_V_din);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( tmp_V_150_fu_276_p2 );

    SC_METHOD(thread_out_2_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_out_3_V_V_blk_n);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( out_3_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_out_3_V_V_din);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( tmp_V_153_fu_293_p2 );

    SC_METHOD(thread_out_3_V_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_pixel_index_fu_224_p2);
    sensitive << ( ap_phi_mux_pixel_index_01_phi_fu_142_p6 );

    SC_METHOD(thread_sext_ln415_2_fu_253_p1);
    sensitive << ( trunc_ln708_1_reg_316 );

    SC_METHOD(thread_sext_ln415_4_fu_270_p1);
    sensitive << ( trunc_ln708_2_reg_326 );

    SC_METHOD(thread_sext_ln415_6_fu_287_p1);
    sensitive << ( trunc_ln708_3_reg_336 );

    SC_METHOD(thread_sext_ln415_fu_236_p1);
    sensitive << ( trunc_ln_reg_306 );

    SC_METHOD(thread_tmp_V_144_fu_242_p2);
    sensitive << ( zext_ln415_fu_239_p1 );
    sensitive << ( sext_ln415_fu_236_p1 );

    SC_METHOD(thread_tmp_V_147_fu_259_p2);
    sensitive << ( zext_ln415_1_fu_256_p1 );
    sensitive << ( sext_ln415_2_fu_253_p1 );

    SC_METHOD(thread_tmp_V_150_fu_276_p2);
    sensitive << ( zext_ln415_2_fu_273_p1 );
    sensitive << ( sext_ln415_4_fu_270_p1 );

    SC_METHOD(thread_tmp_V_153_fu_293_p2);
    sensitive << ( zext_ln415_3_fu_290_p1 );
    sensitive << ( sext_ln415_6_fu_287_p1 );

    SC_METHOD(thread_zext_ln415_1_fu_256_p1);
    sensitive << ( tmp_52_reg_321 );

    SC_METHOD(thread_zext_ln415_2_fu_273_p1);
    sensitive << ( tmp_53_reg_331 );

    SC_METHOD(thread_zext_ln415_3_fu_290_p1);
    sensitive << ( tmp_54_reg_341 );

    SC_METHOD(thread_zext_ln415_fu_239_p1);
    sensitive << ( tmp_51_reg_311 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_reset_idle_pp0 );

    ap_CS_fsm = "01";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "glue_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in_0_V_V_dout, "(port)in_0_V_V_dout");
    sc_trace(mVcdFile, in_0_V_V_empty_n, "(port)in_0_V_V_empty_n");
    sc_trace(mVcdFile, in_0_V_V_read, "(port)in_0_V_V_read");
    sc_trace(mVcdFile, in_1_V_V_dout, "(port)in_1_V_V_dout");
    sc_trace(mVcdFile, in_1_V_V_empty_n, "(port)in_1_V_V_empty_n");
    sc_trace(mVcdFile, in_1_V_V_read, "(port)in_1_V_V_read");
    sc_trace(mVcdFile, in_2_V_V_dout, "(port)in_2_V_V_dout");
    sc_trace(mVcdFile, in_2_V_V_empty_n, "(port)in_2_V_V_empty_n");
    sc_trace(mVcdFile, in_2_V_V_read, "(port)in_2_V_V_read");
    sc_trace(mVcdFile, in_3_V_V_dout, "(port)in_3_V_V_dout");
    sc_trace(mVcdFile, in_3_V_V_empty_n, "(port)in_3_V_V_empty_n");
    sc_trace(mVcdFile, in_3_V_V_read, "(port)in_3_V_V_read");
    sc_trace(mVcdFile, out_0_V_V_din, "(port)out_0_V_V_din");
    sc_trace(mVcdFile, out_0_V_V_full_n, "(port)out_0_V_V_full_n");
    sc_trace(mVcdFile, out_0_V_V_write, "(port)out_0_V_V_write");
    sc_trace(mVcdFile, out_1_V_V_din, "(port)out_1_V_V_din");
    sc_trace(mVcdFile, out_1_V_V_full_n, "(port)out_1_V_V_full_n");
    sc_trace(mVcdFile, out_1_V_V_write, "(port)out_1_V_V_write");
    sc_trace(mVcdFile, out_2_V_V_din, "(port)out_2_V_V_din");
    sc_trace(mVcdFile, out_2_V_V_full_n, "(port)out_2_V_V_full_n");
    sc_trace(mVcdFile, out_2_V_V_write, "(port)out_2_V_V_write");
    sc_trace(mVcdFile, out_3_V_V_din, "(port)out_3_V_V_din");
    sc_trace(mVcdFile, out_3_V_V_full_n, "(port)out_3_V_V_full_n");
    sc_trace(mVcdFile, out_3_V_V_write, "(port)out_3_V_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, icmp_ln64_fu_230_p2, "icmp_ln64_fu_230_p2");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, in_0_V_V_blk_n, "in_0_V_V_blk_n");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, in_1_V_V_blk_n, "in_1_V_V_blk_n");
    sc_trace(mVcdFile, in_2_V_V_blk_n, "in_2_V_V_blk_n");
    sc_trace(mVcdFile, in_3_V_V_blk_n, "in_3_V_V_blk_n");
    sc_trace(mVcdFile, out_0_V_V_blk_n, "out_0_V_V_blk_n");
    sc_trace(mVcdFile, out_1_V_V_blk_n, "out_1_V_V_blk_n");
    sc_trace(mVcdFile, out_2_V_V_blk_n, "out_2_V_V_blk_n");
    sc_trace(mVcdFile, out_3_V_V_blk_n, "out_3_V_V_blk_n");
    sc_trace(mVcdFile, pixel_index_01_reg_138, "pixel_index_01_reg_138");
    sc_trace(mVcdFile, trunc_ln_reg_306, "trunc_ln_reg_306");
    sc_trace(mVcdFile, tmp_51_reg_311, "tmp_51_reg_311");
    sc_trace(mVcdFile, trunc_ln708_1_reg_316, "trunc_ln708_1_reg_316");
    sc_trace(mVcdFile, tmp_52_reg_321, "tmp_52_reg_321");
    sc_trace(mVcdFile, trunc_ln708_2_reg_326, "trunc_ln708_2_reg_326");
    sc_trace(mVcdFile, tmp_53_reg_331, "tmp_53_reg_331");
    sc_trace(mVcdFile, trunc_ln708_3_reg_336, "trunc_ln708_3_reg_336");
    sc_trace(mVcdFile, tmp_54_reg_341, "tmp_54_reg_341");
    sc_trace(mVcdFile, pixel_index_fu_224_p2, "pixel_index_fu_224_p2");
    sc_trace(mVcdFile, pixel_index_reg_346, "pixel_index_reg_346");
    sc_trace(mVcdFile, icmp_ln64_reg_351, "icmp_ln64_reg_351");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_phi_mux_pixel_index_01_phi_fu_142_p6, "ap_phi_mux_pixel_index_01_phi_fu_142_p6");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, zext_ln415_fu_239_p1, "zext_ln415_fu_239_p1");
    sc_trace(mVcdFile, sext_ln415_fu_236_p1, "sext_ln415_fu_236_p1");
    sc_trace(mVcdFile, tmp_V_144_fu_242_p2, "tmp_V_144_fu_242_p2");
    sc_trace(mVcdFile, zext_ln415_1_fu_256_p1, "zext_ln415_1_fu_256_p1");
    sc_trace(mVcdFile, sext_ln415_2_fu_253_p1, "sext_ln415_2_fu_253_p1");
    sc_trace(mVcdFile, tmp_V_147_fu_259_p2, "tmp_V_147_fu_259_p2");
    sc_trace(mVcdFile, zext_ln415_2_fu_273_p1, "zext_ln415_2_fu_273_p1");
    sc_trace(mVcdFile, sext_ln415_4_fu_270_p1, "sext_ln415_4_fu_270_p1");
    sc_trace(mVcdFile, tmp_V_150_fu_276_p2, "tmp_V_150_fu_276_p2");
    sc_trace(mVcdFile, zext_ln415_3_fu_290_p1, "zext_ln415_3_fu_290_p1");
    sc_trace(mVcdFile, sext_ln415_6_fu_287_p1, "sext_ln415_6_fu_287_p1");
    sc_trace(mVcdFile, tmp_V_153_fu_293_p2, "tmp_V_153_fu_293_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to0, "ap_idle_pp0_0to0");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, ap_condition_102, "ap_condition_102");
#endif

    }
}

glue::~glue() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void glue::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_start.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_351.read(), ap_const_lv1_0))) {
        pixel_index_01_reg_138 = pixel_index_reg_346.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                 esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_reg_351.read())))) {
        pixel_index_01_reg_138 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln64_reg_351 = icmp_ln64_fu_230_p2.read();
        tmp_51_reg_311 = in_0_V_V_dout.read().range(16, 16);
        tmp_52_reg_321 = in_1_V_V_dout.read().range(16, 16);
        tmp_53_reg_331 = in_2_V_V_dout.read().range(16, 16);
        tmp_54_reg_341 = in_3_V_V_dout.read().range(16, 16);
        trunc_ln708_1_reg_316 = in_1_V_V_dout.read().range(29, 17);
        trunc_ln708_2_reg_326 = in_2_V_V_dout.read().range(29, 17);
        trunc_ln708_3_reg_336 = in_3_V_V_dout.read().range(29, 17);
        trunc_ln_reg_306 = in_0_V_V_dout.read().range(29, 17);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        pixel_index_reg_346 = pixel_index_fu_224_p2.read();
    }
}

void glue::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void glue::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void glue::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void glue::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, in_0_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_1_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_2_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_3_V_V_empty_n.read()))) || ((esl_seteq<1,1,1>(ap_const_logic_0, out_0_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_1_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_2_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_3_V_V_full_n.read())) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())));
}

void glue::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, in_0_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_1_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_2_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_3_V_V_empty_n.read()))) || ((esl_seteq<1,1,1>(ap_const_logic_0, out_0_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_1_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_2_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_3_V_V_full_n.read())) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())));
}

void glue::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
  (esl_seteq<1,1,1>(ap_const_logic_0, in_0_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_1_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_2_V_V_empty_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, in_3_V_V_empty_n.read()))) || ((esl_seteq<1,1,1>(ap_const_logic_0, out_0_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_1_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_2_V_V_full_n.read()) || 
   esl_seteq<1,1,1>(ap_const_logic_0, out_3_V_V_full_n.read())) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())));
}

void glue::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, in_0_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_1_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_2_V_V_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, in_3_V_V_empty_n.read()));
}

void glue::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, out_0_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_1_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_2_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_3_V_V_full_n.read()));
}

void glue::thread_ap_condition_102() {
    ap_condition_102 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0));
}

void glue::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_reg_351.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void glue::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void glue::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void glue::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void glue::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void glue::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void glue::thread_ap_phi_mux_pixel_index_01_phi_fu_142_p6() {
    if (esl_seteq<1,1,1>(ap_condition_102.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_reg_351.read())) {
            ap_phi_mux_pixel_index_01_phi_fu_142_p6 = ap_const_lv12_0;
        } else if (esl_seteq<1,1,1>(icmp_ln64_reg_351.read(), ap_const_lv1_0)) {
            ap_phi_mux_pixel_index_01_phi_fu_142_p6 = pixel_index_reg_346.read();
        } else {
            ap_phi_mux_pixel_index_01_phi_fu_142_p6 = pixel_index_01_reg_138.read();
        }
    } else {
        ap_phi_mux_pixel_index_01_phi_fu_142_p6 = pixel_index_01_reg_138.read();
    }
}

void glue::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(icmp_ln64_fu_230_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void glue::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void glue::thread_icmp_ln64_fu_230_p2() {
    icmp_ln64_fu_230_p2 = (!ap_phi_mux_pixel_index_01_phi_fu_142_p6.read().is_01() || !ap_const_lv12_8FF.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_pixel_index_01_phi_fu_142_p6.read() == ap_const_lv12_8FF);
}

void glue::thread_in_0_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        in_0_V_V_blk_n = in_0_V_V_empty_n.read();
    } else {
        in_0_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_in_0_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_0_V_V_read = ap_const_logic_1;
    } else {
        in_0_V_V_read = ap_const_logic_0;
    }
}

void glue::thread_in_1_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        in_1_V_V_blk_n = in_1_V_V_empty_n.read();
    } else {
        in_1_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_in_1_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_1_V_V_read = ap_const_logic_1;
    } else {
        in_1_V_V_read = ap_const_logic_0;
    }
}

void glue::thread_in_2_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        in_2_V_V_blk_n = in_2_V_V_empty_n.read();
    } else {
        in_2_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_in_2_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_2_V_V_read = ap_const_logic_1;
    } else {
        in_2_V_V_read = ap_const_logic_0;
    }
}

void glue::thread_in_3_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        in_3_V_V_blk_n = in_3_V_V_empty_n.read();
    } else {
        in_3_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_in_3_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        in_3_V_V_read = ap_const_logic_1;
    } else {
        in_3_V_V_read = ap_const_logic_0;
    }
}

void glue::thread_out_0_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        out_0_V_V_blk_n = out_0_V_V_full_n.read();
    } else {
        out_0_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_out_0_V_V_din() {
    out_0_V_V_din = esl_sext<16,14>(tmp_V_144_fu_242_p2.read());
}

void glue::thread_out_0_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_0_V_V_write = ap_const_logic_1;
    } else {
        out_0_V_V_write = ap_const_logic_0;
    }
}

void glue::thread_out_1_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        out_1_V_V_blk_n = out_1_V_V_full_n.read();
    } else {
        out_1_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_out_1_V_V_din() {
    out_1_V_V_din = esl_sext<16,14>(tmp_V_147_fu_259_p2.read());
}

void glue::thread_out_1_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_1_V_V_write = ap_const_logic_1;
    } else {
        out_1_V_V_write = ap_const_logic_0;
    }
}

void glue::thread_out_2_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        out_2_V_V_blk_n = out_2_V_V_full_n.read();
    } else {
        out_2_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_out_2_V_V_din() {
    out_2_V_V_din = esl_sext<16,14>(tmp_V_150_fu_276_p2.read());
}

void glue::thread_out_2_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_2_V_V_write = ap_const_logic_1;
    } else {
        out_2_V_V_write = ap_const_logic_0;
    }
}

void glue::thread_out_3_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        out_3_V_V_blk_n = out_3_V_V_full_n.read();
    } else {
        out_3_V_V_blk_n = ap_const_logic_1;
    }
}

void glue::thread_out_3_V_V_din() {
    out_3_V_V_din = esl_sext<16,14>(tmp_V_153_fu_293_p2.read());
}

void glue::thread_out_3_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        out_3_V_V_write = ap_const_logic_1;
    } else {
        out_3_V_V_write = ap_const_logic_0;
    }
}

void glue::thread_pixel_index_fu_224_p2() {
    pixel_index_fu_224_p2 = (!ap_phi_mux_pixel_index_01_phi_fu_142_p6.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(ap_phi_mux_pixel_index_01_phi_fu_142_p6.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void glue::thread_sext_ln415_2_fu_253_p1() {
    sext_ln415_2_fu_253_p1 = esl_sext<14,13>(trunc_ln708_1_reg_316.read());
}

void glue::thread_sext_ln415_4_fu_270_p1() {
    sext_ln415_4_fu_270_p1 = esl_sext<14,13>(trunc_ln708_2_reg_326.read());
}

void glue::thread_sext_ln415_6_fu_287_p1() {
    sext_ln415_6_fu_287_p1 = esl_sext<14,13>(trunc_ln708_3_reg_336.read());
}

void glue::thread_sext_ln415_fu_236_p1() {
    sext_ln415_fu_236_p1 = esl_sext<14,13>(trunc_ln_reg_306.read());
}

void glue::thread_tmp_V_144_fu_242_p2() {
    tmp_V_144_fu_242_p2 = (!zext_ln415_fu_239_p1.read().is_01() || !sext_ln415_fu_236_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln415_fu_239_p1.read()) + sc_bigint<14>(sext_ln415_fu_236_p1.read()));
}

void glue::thread_tmp_V_147_fu_259_p2() {
    tmp_V_147_fu_259_p2 = (!zext_ln415_1_fu_256_p1.read().is_01() || !sext_ln415_2_fu_253_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln415_1_fu_256_p1.read()) + sc_bigint<14>(sext_ln415_2_fu_253_p1.read()));
}

void glue::thread_tmp_V_150_fu_276_p2() {
    tmp_V_150_fu_276_p2 = (!zext_ln415_2_fu_273_p1.read().is_01() || !sext_ln415_4_fu_270_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln415_2_fu_273_p1.read()) + sc_bigint<14>(sext_ln415_4_fu_270_p1.read()));
}

void glue::thread_tmp_V_153_fu_293_p2() {
    tmp_V_153_fu_293_p2 = (!zext_ln415_3_fu_290_p1.read().is_01() || !sext_ln415_6_fu_287_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln415_3_fu_290_p1.read()) + sc_bigint<14>(sext_ln415_6_fu_287_p1.read()));
}

void glue::thread_zext_ln415_1_fu_256_p1() {
    zext_ln415_1_fu_256_p1 = esl_zext<14,1>(tmp_52_reg_321.read());
}

void glue::thread_zext_ln415_2_fu_273_p1() {
    zext_ln415_2_fu_273_p1 = esl_zext<14,1>(tmp_53_reg_331.read());
}

void glue::thread_zext_ln415_3_fu_290_p1() {
    zext_ln415_3_fu_290_p1 = esl_zext<14,1>(tmp_54_reg_341.read());
}

void glue::thread_zext_ln415_fu_239_p1() {
    zext_ln415_fu_239_p1 = esl_zext<14,1>(tmp_51_reg_311.read());
}

void glue::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}

