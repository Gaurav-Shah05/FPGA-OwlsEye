// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __bias513_Conv_0_bibll_H__
#define __bias513_Conv_0_bibll_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct bias513_Conv_0_bibll_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 24;
  static const unsigned AddressRange = 4;
  static const unsigned AddressWidth = 2;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(bias513_Conv_0_bibll_ram) {
        ram[0] = "0b011000000101111010111001";
        ram[1] = "0b101111100101000111000101";
        ram[2] = "0b110111110100110110100010";
        ram[3] = "0b101110011010000011000010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(bias513_Conv_0_bibll) {


static const unsigned DataWidth = 24;
static const unsigned AddressRange = 4;
static const unsigned AddressWidth = 2;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


bias513_Conv_0_bibll_ram* meminst;


SC_CTOR(bias513_Conv_0_bibll) {
meminst = new bias513_Conv_0_bibll_ram("bias513_Conv_0_bibll_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~bias513_Conv_0_bibll() {
    delete meminst;
}


};//endmodule
#endif
