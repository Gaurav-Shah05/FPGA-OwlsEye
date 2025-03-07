-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity Conv_0_squeeze_Relu_16 is
port (
    ap_start : IN STD_LOGIC;
    start_full_n : IN STD_LOGIC;
    start_out : OUT STD_LOGIC;
    start_write : OUT STD_LOGIC;
    in_0_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    in_0_V_V_empty_n : IN STD_LOGIC;
    in_0_V_V_read : OUT STD_LOGIC;
    in_1_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    in_1_V_V_empty_n : IN STD_LOGIC;
    in_1_V_V_read : OUT STD_LOGIC;
    in_2_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    in_2_V_V_empty_n : IN STD_LOGIC;
    in_2_V_V_read : OUT STD_LOGIC;
    in_3_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    in_3_V_V_empty_n : IN STD_LOGIC;
    in_3_V_V_read : OUT STD_LOGIC;
    out_0_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_0_V_V_full_n : IN STD_LOGIC;
    out_0_V_V_write : OUT STD_LOGIC;
    out_1_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_1_V_V_full_n : IN STD_LOGIC;
    out_1_V_V_write : OUT STD_LOGIC;
    out_2_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_2_V_V_full_n : IN STD_LOGIC;
    out_2_V_V_write : OUT STD_LOGIC;
    out_3_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_3_V_V_full_n : IN STD_LOGIC;
    out_3_V_V_write : OUT STD_LOGIC;
    out_4_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_4_V_V_full_n : IN STD_LOGIC;
    out_4_V_V_write : OUT STD_LOGIC;
    out_5_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_5_V_V_full_n : IN STD_LOGIC;
    out_5_V_V_write : OUT STD_LOGIC;
    out_6_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_6_V_V_full_n : IN STD_LOGIC;
    out_6_V_V_write : OUT STD_LOGIC;
    out_7_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_7_V_V_full_n : IN STD_LOGIC;
    out_7_V_V_write : OUT STD_LOGIC;
    out_8_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_8_V_V_full_n : IN STD_LOGIC;
    out_8_V_V_write : OUT STD_LOGIC;
    out_9_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_9_V_V_full_n : IN STD_LOGIC;
    out_9_V_V_write : OUT STD_LOGIC;
    out_10_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_10_V_V_full_n : IN STD_LOGIC;
    out_10_V_V_write : OUT STD_LOGIC;
    out_11_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_11_V_V_full_n : IN STD_LOGIC;
    out_11_V_V_write : OUT STD_LOGIC;
    out_12_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_12_V_V_full_n : IN STD_LOGIC;
    out_12_V_V_write : OUT STD_LOGIC;
    out_13_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_13_V_V_full_n : IN STD_LOGIC;
    out_13_V_V_write : OUT STD_LOGIC;
    out_14_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_14_V_V_full_n : IN STD_LOGIC;
    out_14_V_V_write : OUT STD_LOGIC;
    out_15_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_15_V_V_full_n : IN STD_LOGIC;
    out_15_V_V_write : OUT STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC );
end;


architecture behav of Conv_0_squeeze_Relu_16 is 
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";

    signal real_start : STD_LOGIC;
    signal start_once_reg : STD_LOGIC := '0';
    signal internal_ap_ready : STD_LOGIC;
    signal squeeze_U0_in_0_V_V_read : STD_LOGIC;
    signal squeeze_U0_in_1_V_V_read : STD_LOGIC;
    signal squeeze_U0_in_2_V_V_read : STD_LOGIC;
    signal squeeze_U0_in_3_V_V_read : STD_LOGIC;
    signal squeeze_U0_out_0_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_0_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_1_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_1_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_2_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_2_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_3_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_3_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_4_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_4_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_5_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_5_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_6_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_6_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_7_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_7_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_8_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_8_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_9_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_9_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_10_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_10_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_11_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_11_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_12_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_12_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_13_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_13_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_14_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_14_V_V_write : STD_LOGIC;
    signal squeeze_U0_out_15_V_V_din : STD_LOGIC_VECTOR (15 downto 0);
    signal squeeze_U0_out_15_V_V_write : STD_LOGIC;
    signal squeeze_U0_ap_start : STD_LOGIC;
    signal squeeze_U0_ap_done : STD_LOGIC;
    signal squeeze_U0_ap_ready : STD_LOGIC;
    signal squeeze_U0_ap_idle : STD_LOGIC;
    signal squeeze_U0_ap_continue : STD_LOGIC;
    signal ap_sync_continue : STD_LOGIC;
    signal ap_sync_done : STD_LOGIC;
    signal ap_sync_ready : STD_LOGIC;
    signal squeeze_U0_start_full_n : STD_LOGIC;
    signal squeeze_U0_start_write : STD_LOGIC;

    component squeeze IS
    port (
        in_0_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
        in_0_V_V_empty_n : IN STD_LOGIC;
        in_0_V_V_read : OUT STD_LOGIC;
        in_1_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
        in_1_V_V_empty_n : IN STD_LOGIC;
        in_1_V_V_read : OUT STD_LOGIC;
        in_2_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
        in_2_V_V_empty_n : IN STD_LOGIC;
        in_2_V_V_read : OUT STD_LOGIC;
        in_3_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
        in_3_V_V_empty_n : IN STD_LOGIC;
        in_3_V_V_read : OUT STD_LOGIC;
        out_0_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_0_V_V_full_n : IN STD_LOGIC;
        out_0_V_V_write : OUT STD_LOGIC;
        out_1_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_1_V_V_full_n : IN STD_LOGIC;
        out_1_V_V_write : OUT STD_LOGIC;
        out_2_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_2_V_V_full_n : IN STD_LOGIC;
        out_2_V_V_write : OUT STD_LOGIC;
        out_3_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_3_V_V_full_n : IN STD_LOGIC;
        out_3_V_V_write : OUT STD_LOGIC;
        out_4_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_4_V_V_full_n : IN STD_LOGIC;
        out_4_V_V_write : OUT STD_LOGIC;
        out_5_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_5_V_V_full_n : IN STD_LOGIC;
        out_5_V_V_write : OUT STD_LOGIC;
        out_6_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_6_V_V_full_n : IN STD_LOGIC;
        out_6_V_V_write : OUT STD_LOGIC;
        out_7_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_7_V_V_full_n : IN STD_LOGIC;
        out_7_V_V_write : OUT STD_LOGIC;
        out_8_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_8_V_V_full_n : IN STD_LOGIC;
        out_8_V_V_write : OUT STD_LOGIC;
        out_9_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_9_V_V_full_n : IN STD_LOGIC;
        out_9_V_V_write : OUT STD_LOGIC;
        out_10_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_10_V_V_full_n : IN STD_LOGIC;
        out_10_V_V_write : OUT STD_LOGIC;
        out_11_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_11_V_V_full_n : IN STD_LOGIC;
        out_11_V_V_write : OUT STD_LOGIC;
        out_12_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_12_V_V_full_n : IN STD_LOGIC;
        out_12_V_V_write : OUT STD_LOGIC;
        out_13_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_13_V_V_full_n : IN STD_LOGIC;
        out_13_V_V_write : OUT STD_LOGIC;
        out_14_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_14_V_V_full_n : IN STD_LOGIC;
        out_14_V_V_write : OUT STD_LOGIC;
        out_15_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
        out_15_V_V_full_n : IN STD_LOGIC;
        out_15_V_V_write : OUT STD_LOGIC;
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC );
    end component;



begin
    squeeze_U0 : component squeeze
    port map (
        in_0_V_V_dout => in_0_V_V_dout,
        in_0_V_V_empty_n => in_0_V_V_empty_n,
        in_0_V_V_read => squeeze_U0_in_0_V_V_read,
        in_1_V_V_dout => in_1_V_V_dout,
        in_1_V_V_empty_n => in_1_V_V_empty_n,
        in_1_V_V_read => squeeze_U0_in_1_V_V_read,
        in_2_V_V_dout => in_2_V_V_dout,
        in_2_V_V_empty_n => in_2_V_V_empty_n,
        in_2_V_V_read => squeeze_U0_in_2_V_V_read,
        in_3_V_V_dout => in_3_V_V_dout,
        in_3_V_V_empty_n => in_3_V_V_empty_n,
        in_3_V_V_read => squeeze_U0_in_3_V_V_read,
        out_0_V_V_din => squeeze_U0_out_0_V_V_din,
        out_0_V_V_full_n => out_0_V_V_full_n,
        out_0_V_V_write => squeeze_U0_out_0_V_V_write,
        out_1_V_V_din => squeeze_U0_out_1_V_V_din,
        out_1_V_V_full_n => out_1_V_V_full_n,
        out_1_V_V_write => squeeze_U0_out_1_V_V_write,
        out_2_V_V_din => squeeze_U0_out_2_V_V_din,
        out_2_V_V_full_n => out_2_V_V_full_n,
        out_2_V_V_write => squeeze_U0_out_2_V_V_write,
        out_3_V_V_din => squeeze_U0_out_3_V_V_din,
        out_3_V_V_full_n => out_3_V_V_full_n,
        out_3_V_V_write => squeeze_U0_out_3_V_V_write,
        out_4_V_V_din => squeeze_U0_out_4_V_V_din,
        out_4_V_V_full_n => out_4_V_V_full_n,
        out_4_V_V_write => squeeze_U0_out_4_V_V_write,
        out_5_V_V_din => squeeze_U0_out_5_V_V_din,
        out_5_V_V_full_n => out_5_V_V_full_n,
        out_5_V_V_write => squeeze_U0_out_5_V_V_write,
        out_6_V_V_din => squeeze_U0_out_6_V_V_din,
        out_6_V_V_full_n => out_6_V_V_full_n,
        out_6_V_V_write => squeeze_U0_out_6_V_V_write,
        out_7_V_V_din => squeeze_U0_out_7_V_V_din,
        out_7_V_V_full_n => out_7_V_V_full_n,
        out_7_V_V_write => squeeze_U0_out_7_V_V_write,
        out_8_V_V_din => squeeze_U0_out_8_V_V_din,
        out_8_V_V_full_n => out_8_V_V_full_n,
        out_8_V_V_write => squeeze_U0_out_8_V_V_write,
        out_9_V_V_din => squeeze_U0_out_9_V_V_din,
        out_9_V_V_full_n => out_9_V_V_full_n,
        out_9_V_V_write => squeeze_U0_out_9_V_V_write,
        out_10_V_V_din => squeeze_U0_out_10_V_V_din,
        out_10_V_V_full_n => out_10_V_V_full_n,
        out_10_V_V_write => squeeze_U0_out_10_V_V_write,
        out_11_V_V_din => squeeze_U0_out_11_V_V_din,
        out_11_V_V_full_n => out_11_V_V_full_n,
        out_11_V_V_write => squeeze_U0_out_11_V_V_write,
        out_12_V_V_din => squeeze_U0_out_12_V_V_din,
        out_12_V_V_full_n => out_12_V_V_full_n,
        out_12_V_V_write => squeeze_U0_out_12_V_V_write,
        out_13_V_V_din => squeeze_U0_out_13_V_V_din,
        out_13_V_V_full_n => out_13_V_V_full_n,
        out_13_V_V_write => squeeze_U0_out_13_V_V_write,
        out_14_V_V_din => squeeze_U0_out_14_V_V_din,
        out_14_V_V_full_n => out_14_V_V_full_n,
        out_14_V_V_write => squeeze_U0_out_14_V_V_write,
        out_15_V_V_din => squeeze_U0_out_15_V_V_din,
        out_15_V_V_full_n => out_15_V_V_full_n,
        out_15_V_V_write => squeeze_U0_out_15_V_V_write,
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => squeeze_U0_ap_start,
        ap_done => squeeze_U0_ap_done,
        ap_ready => squeeze_U0_ap_ready,
        ap_idle => squeeze_U0_ap_idle,
        ap_continue => squeeze_U0_ap_continue);





    start_once_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                start_once_reg <= ap_const_logic_0;
            else
                if (((internal_ap_ready = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
                    start_once_reg <= ap_const_logic_1;
                elsif ((internal_ap_ready = ap_const_logic_1)) then 
                    start_once_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;

    ap_done <= squeeze_U0_ap_done;
    ap_idle <= squeeze_U0_ap_idle;
    ap_ready <= internal_ap_ready;
    ap_sync_continue <= ap_continue;
    ap_sync_done <= squeeze_U0_ap_done;
    ap_sync_ready <= squeeze_U0_ap_ready;
    in_0_V_V_read <= squeeze_U0_in_0_V_V_read;
    in_1_V_V_read <= squeeze_U0_in_1_V_V_read;
    in_2_V_V_read <= squeeze_U0_in_2_V_V_read;
    in_3_V_V_read <= squeeze_U0_in_3_V_V_read;
    internal_ap_ready <= ap_sync_ready;
    out_0_V_V_din <= squeeze_U0_out_0_V_V_din;
    out_0_V_V_write <= squeeze_U0_out_0_V_V_write;
    out_10_V_V_din <= squeeze_U0_out_10_V_V_din;
    out_10_V_V_write <= squeeze_U0_out_10_V_V_write;
    out_11_V_V_din <= squeeze_U0_out_11_V_V_din;
    out_11_V_V_write <= squeeze_U0_out_11_V_V_write;
    out_12_V_V_din <= squeeze_U0_out_12_V_V_din;
    out_12_V_V_write <= squeeze_U0_out_12_V_V_write;
    out_13_V_V_din <= squeeze_U0_out_13_V_V_din;
    out_13_V_V_write <= squeeze_U0_out_13_V_V_write;
    out_14_V_V_din <= squeeze_U0_out_14_V_V_din;
    out_14_V_V_write <= squeeze_U0_out_14_V_V_write;
    out_15_V_V_din <= squeeze_U0_out_15_V_V_din;
    out_15_V_V_write <= squeeze_U0_out_15_V_V_write;
    out_1_V_V_din <= squeeze_U0_out_1_V_V_din;
    out_1_V_V_write <= squeeze_U0_out_1_V_V_write;
    out_2_V_V_din <= squeeze_U0_out_2_V_V_din;
    out_2_V_V_write <= squeeze_U0_out_2_V_V_write;
    out_3_V_V_din <= squeeze_U0_out_3_V_V_din;
    out_3_V_V_write <= squeeze_U0_out_3_V_V_write;
    out_4_V_V_din <= squeeze_U0_out_4_V_V_din;
    out_4_V_V_write <= squeeze_U0_out_4_V_V_write;
    out_5_V_V_din <= squeeze_U0_out_5_V_V_din;
    out_5_V_V_write <= squeeze_U0_out_5_V_V_write;
    out_6_V_V_din <= squeeze_U0_out_6_V_V_din;
    out_6_V_V_write <= squeeze_U0_out_6_V_V_write;
    out_7_V_V_din <= squeeze_U0_out_7_V_V_din;
    out_7_V_V_write <= squeeze_U0_out_7_V_V_write;
    out_8_V_V_din <= squeeze_U0_out_8_V_V_din;
    out_8_V_V_write <= squeeze_U0_out_8_V_V_write;
    out_9_V_V_din <= squeeze_U0_out_9_V_V_din;
    out_9_V_V_write <= squeeze_U0_out_9_V_V_write;

    real_start_assign_proc : process(ap_start, start_full_n, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (start_full_n = ap_const_logic_0))) then 
            real_start <= ap_const_logic_0;
        else 
            real_start <= ap_start;
        end if; 
    end process;

    squeeze_U0_ap_continue <= ap_continue;
    squeeze_U0_ap_start <= real_start;
    squeeze_U0_start_full_n <= ap_const_logic_1;
    squeeze_U0_start_write <= ap_const_logic_0;
    start_out <= real_start;

    start_write_assign_proc : process(real_start, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
            start_write <= ap_const_logic_1;
        else 
            start_write <= ap_const_logic_0;
        end if; 
    end process;

end behav;
