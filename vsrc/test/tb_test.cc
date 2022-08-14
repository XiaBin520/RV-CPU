#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>


#include "Vtest.h"
#include "Vtest___024root.h"
#include "Vtest__Dpi.h"


typedef int                     int32;
typedef unsigned int            uint32;
typedef long long int           int64;
typedef unsigned long long int  uint64;

long long int value = 0;

void reg_value(int a, long long int b){
  value = b;
  printf("==%d===%llx\n", a, b);
}



int main(){
    Vtest *dut = new Vtest;

    Verilated :: traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");


    dut->io_wen = 1;
    dut->io_waddr = 3;
    dut->io_wdata = 0x33333333;
    dut->clock = 0;
    dut->eval();
    printf("C--test: %llx\n\n", value);

    dut->clock = 1;
    dut->eval();
    printf("C--test: %llx\n\n", value);




    // for(uint32 i = 0; i < 20; i++){
    //   dut->clock ^= 1;
    //   dut->eval();
    //   m_trace->dump(i);
    // }

    
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    printf("\n>>>> SUCCESS <<<<\n\n");
    return 0;
}