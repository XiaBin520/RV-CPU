// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcore__Syms;
class Vcore_VerilatedVcd;


//----------

VL_MODULE(Vcore___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_ctrl_flush,4,0);
    VL_IN8(io_ctrl_hold,4,0);
    VL_OUT8(io_rmem_en,0,0);
    VL_OUT8(io_rmem_sel,2,0);
    VL_OUT8(io_wmem_en,0,0);
    VL_OUT8(io_wmem_sel,1,0);
    VL_OUT(io_inst_addr,31,0);
    VL_IN(io_inst,31,0);
    VL_OUT(io_rmem_addr,31,0);
    VL_OUT(io_wmem_addr,31,0);
    VL_IN64(io_rmem_data,63,0);
    VL_OUT64(io_wmem_data,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ core__DOT__Decoder_io_br_type;
        CData/*2:0*/ core__DOT__Decoder_io_imm_op;
        CData/*1:0*/ core__DOT__Decoder_io_op1_sel;
        CData/*1:0*/ core__DOT__Decoder_io_op2_sel;
        CData/*1:0*/ core__DOT__exe_reg_ctrl_cmp_sel;
        CData/*3:0*/ core__DOT__exe_reg_ctrl_alu_op;
        CData/*2:0*/ core__DOT__exe_reg_ctrl_walu_op;
        CData/*0:0*/ core__DOT__exe_reg_ctrl_rmem_en;
        CData/*2:0*/ core__DOT__exe_reg_ctrl_rmem_sel;
        CData/*0:0*/ core__DOT__exe_reg_ctrl_wmem_en;
        CData/*1:0*/ core__DOT__exe_reg_ctrl_wmem_sel;
        CData/*0:0*/ core__DOT__exe_reg_ctrl_wreg_en;
        CData/*4:0*/ core__DOT__exe_reg_ctrl_rd;
        CData/*0:0*/ core__DOT__mem_reg_ctrl_rmem_en;
        CData/*2:0*/ core__DOT__mem_reg_ctrl_rmem_sel;
        CData/*0:0*/ core__DOT__mem_reg_ctrl_wmem_en;
        CData/*1:0*/ core__DOT__mem_reg_ctrl_wmem_sel;
        CData/*0:0*/ core__DOT__mem_reg_ctrl_wreg_en;
        CData/*4:0*/ core__DOT__mem_reg_ctrl_rd;
        CData/*0:0*/ core__DOT__wb_reg_ctrl_wreg_en;
        CData/*4:0*/ core__DOT__wb_reg_ctrl_rd;
        CData/*1:0*/ core__DOT__rs1_sel;
        CData/*1:0*/ core__DOT__rs2_sel;
        CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_238;
        CData/*3:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_376;
        CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_430;
        CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_529;
        CData/*0:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_575;
        CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_620;
        CData/*0:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_654;
        CData/*2:0*/ core__DOT__Transfer__DOT__pc_type;
        IData/*31:0*/ core__DOT__if_reg_pc;
        IData/*31:0*/ core__DOT__dec_reg_inst;
        IData/*31:0*/ core__DOT__dec_reg_pc;
        IData/*31:0*/ core__DOT___if_reg_pc_T_1;
        IData/*31:0*/ core__DOT__Transfer__DOT___io_pc_next_T_4;
        QData/*63:0*/ core__DOT__ImmSext_io_imm;
        QData/*63:0*/ core__DOT__Transfer_io_rs1_data;
        QData/*63:0*/ core__DOT__Transfer_io_rs2_data;
        QData/*63:0*/ core__DOT__exe_reg_data1;
        QData/*63:0*/ core__DOT__exe_reg_data2;
        QData/*63:0*/ core__DOT__exe_reg_rs2_data;
        QData/*63:0*/ core__DOT__mem_reg_alu_data;
        QData/*63:0*/ core__DOT__mem_reg_rs2_data;
        QData/*63:0*/ core__DOT__wb_reg_wbdata;
        QData/*63:0*/ core__DOT___rs1_data_T_2;
        QData/*63:0*/ core__DOT___rs2_data_T_2;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_1;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_2;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_3;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_4;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_5;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_6;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_7;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_8;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_9;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_10;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_11;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_12;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_13;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_14;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_15;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_16;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_17;
    };
    struct {
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_18;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_19;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_20;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_21;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_22;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_23;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_24;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_25;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_26;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_27;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_28;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_29;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_30;
        QData/*63:0*/ core__DOT__RegFile__DOT__gprFile_31;
        QData/*63:0*/ core__DOT__RegFile__DOT___GEN_26;
        QData/*63:0*/ core__DOT__RegFile__DOT___GEN_58;
        QData/*63:0*/ core__DOT__CMP_Module__DOT__walu__DOT__walu_data2;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcore__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore___024root);  ///< Copying not allowed
  public:
    Vcore___024root(const char* name);
    ~Vcore___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
