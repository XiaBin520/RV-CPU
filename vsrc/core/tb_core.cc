#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>


#include "Vcore.h"
#include "Vcore___024root.h"


typedef int                     int32;
typedef unsigned int            uint32;
typedef long long int           int64;
typedef unsigned long long int  uint64;




int main(){
    Vcore *dut = new Vcore;

    Verilated :: traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");



    dut->reset = 1;
    for(int i = 0; i < 100; i++){
      dut->clock ^= 1;
      dut->eval();
    }
    dut->reset = 0;


    // def LUI                = BitPat("b?????????????????????????0110111")
    for(uint32 i = 0; i < 80; i++){
      printf("============ i = %02d ==clock = %d=========\n", i, dut->clock);
      printf("inst addr = %x\n\n", dut->io_inst_addr);
      // def LUI                 = BitPat("  b?????????????????????????0110111")
      if(i == 7 || i == 8) dut->io_inst =   0b00000000000000000011000100110111;
      if(i == 11 || i == 12) dut->io_inst = 0b00000000000000000100000010110111;
      //                             BitPat("b0000000??????????000?????0110011")
      if(i == 25 || i == 26) dut->io_inst = 0b00000000000100010000001000110011;
      //                                    "b?????????????????011?????0100011"
      if(i == 35 || i == 36) dut->io_inst = 0b00000000010000001011000100100011;
      dut->reset = (i < 3) ? 1 : 0;
      dut->clock ^= 1;
      dut->eval();
      m_trace->dump(i);
    }
    
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    printf("\n>>>> SUCCESS <<<<\n\n");

    return 0;
}