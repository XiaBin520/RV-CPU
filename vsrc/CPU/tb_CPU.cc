#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>


#include "VCPU.h"
#include "VCPU___024root.h"


typedef int                     int32;
typedef unsigned int            uint32;
typedef long long int           int64;
typedef unsigned long long int  uint64;



int main(){
    VCPU *dut = new VCPU;

    Verilated :: traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");


    for(uint32 i = 0; i < 100; i++){
      dut->io_mem_rinst_valid = (i == 23 || i == 24 || i == 43 || i == 44) ? 1 : 0;



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