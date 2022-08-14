#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>


#include "VcoreCtrl.h"
#include "VcoreCtrl___024root.h"


typedef int                     int32;
typedef unsigned int            uint32;
typedef long long int           int64;
typedef unsigned long long int  uint64;



int main(){
    VcoreCtrl *dut = new VcoreCtrl;

    Verilated :: traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");



    for(uint32 i = 0; i < 100; i++){
      printf("============ i = %02d ==clock = %d=========\n", i, dut->clock);
      printf("Flush = %x, Hold = %x\n", dut->io_Core_ctrl_flush, dut->io_Core_ctrl_hold);

      dut->io_Core_dec_rs2_en = 1;
      dut->io_Core_dec_rs2 = 11;
      dut->io_Core_exe_wreg_en = 1;
      dut->io_Core_exe_rd = 11;

      dut->io_Mem_mem_rinst_valid = (i == 19 || i == 20 || i == 79 || i == 80) ? 1 : 0;

      dut->io_Core_wmem_en = (i < 24) ? 1 : 0;
      dut->io_Mem_mem_wmem_valid = (i == 49 || i == 50) ? 1 : 0;


      dut->reset = (i < 7) ? 1 : 0;
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