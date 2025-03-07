-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fpgaconvnet_ip_shXh4 is
    generic (
      ID : INTEGER := 1;            --core ID, unused in RTL
      din0_WIDTH : INTEGER := 130;  --data bitwidth
      din1_WIDTH : INTEGER := 130;    --shift control bitwidth
      dout_WIDTH : INTEGER := 130;  --output bitwidth
      OP : INTEGER := 0;            --opcode: 0-shl, 1-lshr, 2-ashr
      NUM_STAGE : INTEGER := 6      --stage number
  );
    port (
      clk : IN STD_LOGIC;
      reset : IN STD_LOGIC;
      ce : IN STD_LOGIC;
      din0 : IN STD_LOGIC_VECTOR (din0_WIDTH-1 downto 0);
      din1 : IN STD_LOGIC_VECTOR (din0_WIDTH-1 downto 0);
      dout : OUT STD_LOGIC_VECTOR (dout_WIDTH-1 downto 0)
  );
end entity fpgaconvnet_ip_shXh4;
architecture rtl of fpgaconvnet_ip_shXh4 is
    constant K : INTEGER := (din1_WIDTH + NUM_STAGE - 1)/NUM_STAGE;
    constant LATENCY : INTEGER := NUM_STAGE - 1;
    type dout_array_type is array (0 to LATENCY-1) of STD_LOGIC_VECTOR(dout_WIDTH-1 downto 0);
    signal dout_array : dout_array_type;
    type din1_cast_array_type is array (0 to LATENCY-1) of STD_LOGIC_VECTOR(din1_WIDTH-1 downto 0);
    signal din1_cast_array : din1_cast_array_type;
    signal din0_reg : STD_LOGIC_VECTOR(din0_WIDTH-1 downto 0);
    signal din1_reg : STD_LOGIC_VECTOR(din0_WIDTH-1 downto 0);
    signal dout_tmp : STD_LOGIC_VECTOR(dout_WIDTH-1 downto 0);
    signal din1_cast : STD_LOGIC_VECTOR(din1_WIDTH-1 downto 0);
    signal din1_mask : STD_LOGIC_VECTOR(din1_WIDTH-1 downto 0);
begin
    din0_reg <= din0;
    din1_reg <= din1;
    din1_mask(din1_WIDTH-1 downto K) <= (others => '0');
    din1_mask(K-1 downto 0) <= (others => '1');
    din1_cast <= ('0' & din1_reg(din1_WIDTH-2 downto 0)) when (din1_WIDTH>=32) else
            din1_reg(din1_WIDTH-1 downto 0);
    dout <= dout_tmp;

    dout_tmp <= STD_LOGIC_VECTOR(shift_left(UNSIGNED(dout_array(LATENCY-1)),to_integer(UNSIGNED(din1_cast_array(LATENCY-1) and din1_mask)))) when (OP = 0) else
            STD_LOGIC_VECTOR(shift_right(UNSIGNED(dout_array(LATENCY-1)),to_integer(UNSIGNED(din1_cast_array(LATENCY-1) and din1_mask)))) when (OP = 1) else
            STD_LOGIC_VECTOR(shift_right(SIGNED(dout_array(LATENCY-1)),to_integer(UNSIGNED(din1_cast_array(LATENCY-1) and din1_mask)))) when (OP = 2) else
            (others => '0');

    proc_dout_array_0 : process (clk)
    begin
        if (clk'event and clk = '1') then
            if (reset = '1') then
                dout_array(0) <=  (others => '0');
                din1_cast_array(0) <=  (others => '0');
            else
                if (ce = '1') then
                    if (OP = 0) then
                        dout_array(0) <= STD_LOGIC_VECTOR(shift_left(UNSIGNED(din0_reg),to_integer(UNSIGNED(din1_cast and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), (LATENCY*K)))))));
                    elsif (OP = 1) then
                        dout_array(0) <= STD_LOGIC_VECTOR(shift_right(UNSIGNED(din0_reg),to_integer(UNSIGNED(din1_cast and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), (LATENCY*K)))))));
                    elsif (OP = 2) then
                        dout_array(0) <= STD_LOGIC_VECTOR(shift_right(SIGNED(din0_reg),to_integer(UNSIGNED(din1_cast and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), (LATENCY*K)))))));
                    end if;
                    din1_cast_array(0) <=  din1_cast;
                end if;
            end if;
        end if;
    end process;

    dout_array_loop:for i IN 1 TO (LATENCY-1) GENERATE
        proc_dout_array_i : process(clk)
        begin
            if (clk'event and clk = '1') then
                if (reset = '1') then
                    dout_array(i) <=  (others => '0');
                    din1_cast_array(i) <=  (others => '0');
                else
                   if (ce = '1') then
                       if (OP = 0) then
                           dout_array(i) <= STD_LOGIC_VECTOR(shift_left(UNSIGNED(dout_array(i-1)),to_integer(UNSIGNED(din1_cast_array(i-1) and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), ((LATENCY-i)*K)))))));
                       elsif (OP = 1) then
                           dout_array(i) <= STD_LOGIC_VECTOR(shift_right(UNSIGNED(dout_array(i-1)),to_integer(UNSIGNED(din1_cast_array(i-1) and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), ((LATENCY-i)*K)))))));
                       elsif (OP = 2) then
                           dout_array(i) <= STD_LOGIC_VECTOR(shift_right(SIGNED(dout_array(i-1)),to_integer(UNSIGNED(din1_cast_array(i-1) and STD_LOGIC_VECTOR(shift_left(UNSIGNED(din1_mask), ((LATENCY-i)*K)))))));
                       end if;
                       din1_cast_array(i) <=  din1_cast_array(i-1);
                   end if;
               end if;
            end if;
        end process;
    END GENERATE dout_array_loop;

end rtl;
