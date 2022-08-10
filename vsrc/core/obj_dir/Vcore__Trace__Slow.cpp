// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__traceInitSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcore___024root__traceInitTop(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcore___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcore___024root__traceInitSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+145,"clock", false,-1);
        tracep->declBit(c+146,"reset", false,-1);
        tracep->declBus(c+147,"io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+148,"io_inst", false,-1, 31,0);
        tracep->declBus(c+149,"io_ctrl_flush", false,-1, 4,0);
        tracep->declBus(c+150,"io_ctrl_hold", false,-1, 4,0);
        tracep->declBit(c+151,"io_rmem_en", false,-1);
        tracep->declBus(c+152,"io_rmem_sel", false,-1, 2,0);
        tracep->declBus(c+153,"io_rmem_addr", false,-1, 31,0);
        tracep->declQuad(c+154,"io_rmem_data", false,-1, 63,0);
        tracep->declBit(c+156,"io_wmem_en", false,-1);
        tracep->declBus(c+157,"io_wmem_sel", false,-1, 1,0);
        tracep->declBus(c+158,"io_wmem_addr", false,-1, 31,0);
        tracep->declQuad(c+159,"io_wmem_data", false,-1, 63,0);
        tracep->declBit(c+145,"core clock", false,-1);
        tracep->declBit(c+146,"core reset", false,-1);
        tracep->declBus(c+147,"core io_inst_addr", false,-1, 31,0);
        tracep->declBus(c+148,"core io_inst", false,-1, 31,0);
        tracep->declBus(c+149,"core io_ctrl_flush", false,-1, 4,0);
        tracep->declBus(c+150,"core io_ctrl_hold", false,-1, 4,0);
        tracep->declBit(c+151,"core io_rmem_en", false,-1);
        tracep->declBus(c+152,"core io_rmem_sel", false,-1, 2,0);
        tracep->declBus(c+153,"core io_rmem_addr", false,-1, 31,0);
        tracep->declQuad(c+154,"core io_rmem_data", false,-1, 63,0);
        tracep->declBit(c+156,"core io_wmem_en", false,-1);
        tracep->declBus(c+157,"core io_wmem_sel", false,-1, 1,0);
        tracep->declBus(c+158,"core io_wmem_addr", false,-1, 31,0);
        tracep->declQuad(c+159,"core io_wmem_data", false,-1, 63,0);
        tracep->declBit(c+145,"core RegFile_clock", false,-1);
        tracep->declBit(c+146,"core RegFile_reset", false,-1);
        tracep->declBus(c+1,"core RegFile_io_rs1", false,-1, 4,0);
        tracep->declBus(c+2,"core RegFile_io_rs2", false,-1, 4,0);
        tracep->declQuad(c+3,"core RegFile_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+5,"core RegFile_io_rs2_data", false,-1, 63,0);
        tracep->declBit(c+7,"core RegFile_io_wreg_en", false,-1);
        tracep->declBus(c+8,"core RegFile_io_rd", false,-1, 4,0);
        tracep->declQuad(c+9,"core RegFile_io_rd_data", false,-1, 63,0);
        tracep->declBus(c+11,"core Decoder_io_inst", false,-1, 31,0);
        tracep->declBus(c+12,"core Decoder_io_br_type", false,-1, 3,0);
        tracep->declBus(c+13,"core Decoder_io_imm_op", false,-1, 2,0);
        tracep->declBus(c+14,"core Decoder_io_cmp_sel", false,-1, 1,0);
        tracep->declBus(c+15,"core Decoder_io_op1_sel", false,-1, 1,0);
        tracep->declBus(c+16,"core Decoder_io_op2_sel", false,-1, 1,0);
        tracep->declBus(c+17,"core Decoder_io_alu_op", false,-1, 3,0);
        tracep->declBus(c+18,"core Decoder_io_walu_op", false,-1, 2,0);
        tracep->declBit(c+19,"core Decoder_io_rmem_en", false,-1);
        tracep->declBus(c+20,"core Decoder_io_rmem_sel", false,-1, 2,0);
        tracep->declBit(c+21,"core Decoder_io_wmem_en", false,-1);
        tracep->declBus(c+22,"core Decoder_io_wmem_sel", false,-1, 1,0);
        tracep->declBit(c+23,"core Decoder_io_wreg_en", false,-1);
        tracep->declBus(c+24,"core ImmSext_io_imm31To7", false,-1, 24,0);
        tracep->declBus(c+13,"core ImmSext_io_imm_op", false,-1, 2,0);
        tracep->declQuad(c+25,"core ImmSext_io_imm", false,-1, 63,0);
        tracep->declBus(c+12,"core Transfer_io_br_type", false,-1, 3,0);
        tracep->declQuad(c+27,"core Transfer_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+29,"core Transfer_io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+31,"core Transfer_io_imm", false,-1, 31,0);
        tracep->declBus(c+32,"core Transfer_io_pc", false,-1, 31,0);
        tracep->declBit(c+33,"core Transfer_io_jmp_en", false,-1);
        tracep->declBus(c+34,"core Transfer_io_pc_next", false,-1, 31,0);
        tracep->declBus(c+35,"core CMP_Module_io_cmp_sel", false,-1, 1,0);
        tracep->declBus(c+36,"core CMP_Module_io_alu_op", false,-1, 3,0);
        tracep->declBus(c+37,"core CMP_Module_io_walu_op", false,-1, 2,0);
        tracep->declQuad(c+38,"core CMP_Module_io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module_io_data2", false,-1, 63,0);
        tracep->declQuad(c+42,"core CMP_Module_io_alu_data", false,-1, 63,0);
        tracep->declBus(c+44,"core if_reg_pc", false,-1, 31,0);
        tracep->declBus(c+11,"core dec_reg_inst", false,-1, 31,0);
        tracep->declBus(c+32,"core dec_reg_pc", false,-1, 31,0);
        tracep->declQuad(c+38,"core exe_reg_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core exe_reg_data2", false,-1, 63,0);
        tracep->declQuad(c+45,"core exe_reg_rs2_data", false,-1, 63,0);
        tracep->declBus(c+35,"core exe_reg_ctrl_cmp_sel", false,-1, 1,0);
        tracep->declBus(c+36,"core exe_reg_ctrl_alu_op", false,-1, 3,0);
        tracep->declBus(c+37,"core exe_reg_ctrl_walu_op", false,-1, 2,0);
        tracep->declBit(c+47,"core exe_reg_ctrl_rmem_en", false,-1);
        tracep->declBus(c+48,"core exe_reg_ctrl_rmem_sel", false,-1, 2,0);
        tracep->declBit(c+49,"core exe_reg_ctrl_wmem_en", false,-1);
        tracep->declBus(c+50,"core exe_reg_ctrl_wmem_sel", false,-1, 1,0);
        tracep->declBit(c+51,"core exe_reg_ctrl_wreg_en", false,-1);
        tracep->declBus(c+52,"core exe_reg_ctrl_rd", false,-1, 4,0);
        tracep->declQuad(c+53,"core mem_reg_alu_data", false,-1, 63,0);
        tracep->declQuad(c+55,"core mem_reg_rs2_data", false,-1, 63,0);
        tracep->declBit(c+57,"core mem_reg_ctrl_rmem_en", false,-1);
        tracep->declBus(c+58,"core mem_reg_ctrl_rmem_sel", false,-1, 2,0);
        tracep->declBit(c+59,"core mem_reg_ctrl_wmem_en", false,-1);
        tracep->declBus(c+60,"core mem_reg_ctrl_wmem_sel", false,-1, 1,0);
        tracep->declBit(c+61,"core mem_reg_ctrl_wreg_en", false,-1);
        tracep->declBus(c+62,"core mem_reg_ctrl_rd", false,-1, 4,0);
        tracep->declQuad(c+9,"core wb_reg_wbdata", false,-1, 63,0);
        tracep->declBit(c+7,"core wb_reg_ctrl_wreg_en", false,-1);
        tracep->declBus(c+8,"core wb_reg_ctrl_rd", false,-1, 4,0);
        tracep->declBus(c+63,"core rs1_sel", false,-1, 1,0);
        tracep->declBus(c+64,"core rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+65,"core rs1_data", false,-1, 63,0);
        tracep->declQuad(c+67,"core rs2_data", false,-1, 63,0);
        tracep->declBit(c+145,"core RegFile clock", false,-1);
        tracep->declBit(c+146,"core RegFile reset", false,-1);
        tracep->declBus(c+1,"core RegFile io_rs1", false,-1, 4,0);
        tracep->declBus(c+2,"core RegFile io_rs2", false,-1, 4,0);
        tracep->declQuad(c+3,"core RegFile io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+5,"core RegFile io_rs2_data", false,-1, 63,0);
        tracep->declBit(c+7,"core RegFile io_wreg_en", false,-1);
        tracep->declBus(c+8,"core RegFile io_rd", false,-1, 4,0);
        tracep->declQuad(c+9,"core RegFile io_rd_data", false,-1, 63,0);
        tracep->declQuad(c+69,"core RegFile gprFile_1", false,-1, 63,0);
        tracep->declQuad(c+71,"core RegFile gprFile_2", false,-1, 63,0);
        tracep->declQuad(c+73,"core RegFile gprFile_3", false,-1, 63,0);
        tracep->declQuad(c+75,"core RegFile gprFile_4", false,-1, 63,0);
        tracep->declQuad(c+77,"core RegFile gprFile_5", false,-1, 63,0);
        tracep->declQuad(c+79,"core RegFile gprFile_6", false,-1, 63,0);
        tracep->declQuad(c+81,"core RegFile gprFile_7", false,-1, 63,0);
        tracep->declQuad(c+83,"core RegFile gprFile_8", false,-1, 63,0);
        tracep->declQuad(c+85,"core RegFile gprFile_9", false,-1, 63,0);
        tracep->declQuad(c+87,"core RegFile gprFile_10", false,-1, 63,0);
        tracep->declQuad(c+89,"core RegFile gprFile_11", false,-1, 63,0);
        tracep->declQuad(c+91,"core RegFile gprFile_12", false,-1, 63,0);
        tracep->declQuad(c+93,"core RegFile gprFile_13", false,-1, 63,0);
        tracep->declQuad(c+95,"core RegFile gprFile_14", false,-1, 63,0);
        tracep->declQuad(c+97,"core RegFile gprFile_15", false,-1, 63,0);
        tracep->declQuad(c+99,"core RegFile gprFile_16", false,-1, 63,0);
        tracep->declQuad(c+101,"core RegFile gprFile_17", false,-1, 63,0);
        tracep->declQuad(c+103,"core RegFile gprFile_18", false,-1, 63,0);
        tracep->declQuad(c+105,"core RegFile gprFile_19", false,-1, 63,0);
        tracep->declQuad(c+107,"core RegFile gprFile_20", false,-1, 63,0);
        tracep->declQuad(c+109,"core RegFile gprFile_21", false,-1, 63,0);
        tracep->declQuad(c+111,"core RegFile gprFile_22", false,-1, 63,0);
        tracep->declQuad(c+113,"core RegFile gprFile_23", false,-1, 63,0);
        tracep->declQuad(c+115,"core RegFile gprFile_24", false,-1, 63,0);
        tracep->declQuad(c+117,"core RegFile gprFile_25", false,-1, 63,0);
        tracep->declQuad(c+119,"core RegFile gprFile_26", false,-1, 63,0);
        tracep->declQuad(c+121,"core RegFile gprFile_27", false,-1, 63,0);
        tracep->declQuad(c+123,"core RegFile gprFile_28", false,-1, 63,0);
        tracep->declQuad(c+125,"core RegFile gprFile_29", false,-1, 63,0);
        tracep->declQuad(c+127,"core RegFile gprFile_30", false,-1, 63,0);
        tracep->declQuad(c+129,"core RegFile gprFile_31", false,-1, 63,0);
        tracep->declBus(c+11,"core Decoder io_inst", false,-1, 31,0);
        tracep->declBus(c+12,"core Decoder io_br_type", false,-1, 3,0);
        tracep->declBus(c+13,"core Decoder io_imm_op", false,-1, 2,0);
        tracep->declBus(c+14,"core Decoder io_cmp_sel", false,-1, 1,0);
        tracep->declBus(c+15,"core Decoder io_op1_sel", false,-1, 1,0);
        tracep->declBus(c+16,"core Decoder io_op2_sel", false,-1, 1,0);
        tracep->declBus(c+17,"core Decoder io_alu_op", false,-1, 3,0);
        tracep->declBus(c+18,"core Decoder io_walu_op", false,-1, 2,0);
        tracep->declBit(c+19,"core Decoder io_rmem_en", false,-1);
        tracep->declBus(c+20,"core Decoder io_rmem_sel", false,-1, 2,0);
        tracep->declBit(c+21,"core Decoder io_wmem_en", false,-1);
        tracep->declBus(c+22,"core Decoder io_wmem_sel", false,-1, 1,0);
        tracep->declBit(c+23,"core Decoder io_wreg_en", false,-1);
        tracep->declBus(c+20,"core Decoder ctrl_signals_8", false,-1, 2,0);
        tracep->declBus(c+24,"core ImmSext io_imm31To7", false,-1, 24,0);
        tracep->declBus(c+13,"core ImmSext io_imm_op", false,-1, 2,0);
        tracep->declQuad(c+25,"core ImmSext io_imm", false,-1, 63,0);
        tracep->declBus(c+12,"core Transfer io_br_type", false,-1, 3,0);
        tracep->declQuad(c+27,"core Transfer io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+29,"core Transfer io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+31,"core Transfer io_imm", false,-1, 31,0);
        tracep->declBus(c+32,"core Transfer io_pc", false,-1, 31,0);
        tracep->declBit(c+33,"core Transfer io_jmp_en", false,-1);
        tracep->declBus(c+34,"core Transfer io_pc_next", false,-1, 31,0);
        tracep->declBus(c+131,"core Transfer pc_type", false,-1, 2,0);
        tracep->declBus(c+132,"core Transfer rs1_data_32", false,-1, 31,0);
        tracep->declBus(c+35,"core CMP_Module io_cmp_sel", false,-1, 1,0);
        tracep->declBus(c+36,"core CMP_Module io_alu_op", false,-1, 3,0);
        tracep->declBus(c+37,"core CMP_Module io_walu_op", false,-1, 2,0);
        tracep->declQuad(c+38,"core CMP_Module io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module io_data2", false,-1, 63,0);
        tracep->declQuad(c+42,"core CMP_Module io_alu_data", false,-1, 63,0);
        tracep->declBus(c+36,"core CMP_Module alu_io_alu_op", false,-1, 3,0);
        tracep->declQuad(c+38,"core CMP_Module alu_io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module alu_io_data2", false,-1, 63,0);
        tracep->declQuad(c+133,"core CMP_Module alu_io_alu_data", false,-1, 63,0);
        tracep->declBus(c+37,"core CMP_Module walu_io_walu_op", false,-1, 2,0);
        tracep->declQuad(c+38,"core CMP_Module walu_io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module walu_io_data2", false,-1, 63,0);
        tracep->declQuad(c+135,"core CMP_Module walu_io_walu_data", false,-1, 63,0);
        tracep->declBus(c+36,"core CMP_Module alu io_alu_op", false,-1, 3,0);
        tracep->declQuad(c+38,"core CMP_Module alu io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module alu io_data2", false,-1, 63,0);
        tracep->declQuad(c+133,"core CMP_Module alu io_alu_data", false,-1, 63,0);
        tracep->declBus(c+137,"core CMP_Module alu shamt", false,-1, 5,0);
        tracep->declBus(c+37,"core CMP_Module walu io_walu_op", false,-1, 2,0);
        tracep->declQuad(c+38,"core CMP_Module walu io_data1", false,-1, 63,0);
        tracep->declQuad(c+40,"core CMP_Module walu io_data2", false,-1, 63,0);
        tracep->declQuad(c+135,"core CMP_Module walu io_walu_data", false,-1, 63,0);
        tracep->declBus(c+138,"core CMP_Module walu wdata1", false,-1, 31,0);
        tracep->declBus(c+139,"core CMP_Module walu shamt", false,-1, 4,0);
        tracep->declArray(c+140,"core CMP_Module walu walu_data1", false,-1, 94,0);
        tracep->declQuad(c+143,"core CMP_Module walu walu_data2", false,-1, 63,0);
    }
}

void Vcore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcore___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcore___024root__traceRegister(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcore___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcore___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcore___024root__traceCleanup, vlSelf);
    }
}

void Vcore___024root__traceFullSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcore___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcore___024root* const __restrict vlSelf = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcore___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcore___024root__traceFullSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp65;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp103;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+2,((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                            >> 0x14U))),5);
        tracep->fullQData(oldp+3,((((((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                >> 0xfU)) 
                                      == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                     & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                    & (0U != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                    ? vlSelf->core__DOT__wb_reg_wbdata
                                    : ((0x1fU == (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlSelf->core__DOT__dec_reg_inst 
                                                >> 0xfU)))
                                            ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->core__DOT__dec_reg_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->core__DOT__RegFile__DOT__gprFile_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_27
                                                     : vlSelf->core__DOT__RegFile__DOT___GEN_26))))))),64);
        tracep->fullQData(oldp+5,((((((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                >> 0x14U)) 
                                      == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                     & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                    & (0U != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                    ? vlSelf->core__DOT__wb_reg_wbdata
                                    : ((0x1fU == (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlSelf->core__DOT__dec_reg_inst 
                                                >> 0x14U)))
                                            ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->core__DOT__dec_reg_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->core__DOT__RegFile__DOT__gprFile_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_27
                                                     : vlSelf->core__DOT__RegFile__DOT___GEN_58))))))),64);
        tracep->fullBit(oldp+7,(vlSelf->core__DOT__wb_reg_ctrl_wreg_en));
        tracep->fullCData(oldp+8,(vlSelf->core__DOT__wb_reg_ctrl_rd),5);
        tracep->fullQData(oldp+9,(vlSelf->core__DOT__wb_reg_wbdata),64);
        tracep->fullIData(oldp+11,(vlSelf->core__DOT__dec_reg_inst),32);
        tracep->fullCData(oldp+12,(vlSelf->core__DOT__Decoder_io_br_type),4);
        tracep->fullCData(oldp+13,(vlSelf->core__DOT__Decoder_io_imm_op),3);
        tracep->fullCData(oldp+14,(((0x37U == (0x7fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_238)))))),2);
        tracep->fullCData(oldp+15,(vlSelf->core__DOT__Decoder_io_op1_sel),2);
        tracep->fullCData(oldp+16,(vlSelf->core__DOT__Decoder_io_op2_sel),2);
        tracep->fullCData(oldp+17,(((0x37U == (0x7fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_376)))))))))))),4);
        tracep->fullCData(oldp+18,(((0x37U == (0x7fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_430)))))),3);
        tracep->fullBit(oldp+19,(((0x37U == (0x7fU 
                                             & vlSelf->core__DOT__dec_reg_inst))
                                   ? 0U : (1U & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529)))));
        tracep->fullCData(oldp+20,(((0x37U == (0x7fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529))),3);
        tracep->fullBit(oldp+21,(((0x37U != (0x7fU 
                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                  & ((0x17U != (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                     & ((0x6fU != (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                        & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_575))))));
        tracep->fullCData(oldp+22,(((0x37U == (0x7fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_620)))))))),2);
        tracep->fullBit(oldp+23,(((0x37U == (0x7fU 
                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                  | ((0x17U == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                        | ((0x67U == 
                                            (0x707fU 
                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                           | ((0x63U 
                                               != (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                              & ((0x1063U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                                 & ((0x4063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst)) 
                                                    & ((0x5063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst)) 
                                                       & ((0x6063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst)) 
                                                          & ((0x7063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->core__DOT__dec_reg_inst)) 
                                                             & ((3U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->core__DOT__dec_reg_inst)) 
                                                                | ((0x1003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->core__DOT__dec_reg_inst)) 
                                                                   | ((0x2003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->core__DOT__dec_reg_inst)) 
                                                                      | ((0x3003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->core__DOT__dec_reg_inst)) 
                                                                         | ((0x4003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->core__DOT__dec_reg_inst)) 
                                                                            | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                               | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_654)))))))))))))))))))))));
        tracep->fullIData(oldp+24,((vlSelf->core__DOT__dec_reg_inst 
                                    >> 7U)),25);
        tracep->fullQData(oldp+25,(vlSelf->core__DOT__ImmSext_io_imm),64);
        tracep->fullQData(oldp+27,(vlSelf->core__DOT__Transfer_io_rs1_data),64);
        tracep->fullQData(oldp+29,(vlSelf->core__DOT__Transfer_io_rs2_data),64);
        tracep->fullIData(oldp+31,((IData)(vlSelf->core__DOT__ImmSext_io_imm)),32);
        tracep->fullIData(oldp+32,(vlSelf->core__DOT__dec_reg_pc),32);
        tracep->fullBit(oldp+33,((((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)) 
                                   | (2U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))) 
                                  | (3U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)))));
        tracep->fullIData(oldp+34,(((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                     ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                     : ((2U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                         ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                         : ((3U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                             ? (0xfffffffeU 
                                                & ((IData)(vlSelf->core__DOT__Transfer_io_rs1_data) 
                                                   + (IData)(vlSelf->core__DOT__ImmSext_io_imm)))
                                             : ((IData)(4U) 
                                                + vlSelf->core__DOT__dec_reg_pc))))),32);
        tracep->fullCData(oldp+35,(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel),2);
        tracep->fullCData(oldp+36,(vlSelf->core__DOT__exe_reg_ctrl_alu_op),4);
        tracep->fullCData(oldp+37,(vlSelf->core__DOT__exe_reg_ctrl_walu_op),3);
        tracep->fullQData(oldp+38,(vlSelf->core__DOT__exe_reg_data1),64);
        tracep->fullQData(oldp+40,(vlSelf->core__DOT__exe_reg_data2),64);
        VL_EXTEND_WQ(127,64, __Vtemp32, (vlSelf->core__DOT__exe_reg_data1 
                                         + vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(127,64, __Vtemp33, (vlSelf->core__DOT__exe_reg_data1 
                                         - vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(127,64, __Vtemp34, vlSelf->core__DOT__exe_reg_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp35, __Vtemp34, 
                      (0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
        VL_EXTEND_WQ(127,64, __Vtemp36, ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                          ? (QData)((IData)(
                                                            VL_LTS_IQQ(1,64,64, vlSelf->core__DOT__exe_reg_data1, vlSelf->core__DOT__exe_reg_data2)))
                                          : ((4U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                              ? (QData)((IData)(
                                                                (vlSelf->core__DOT__exe_reg_data1 
                                                                 < vlSelf->core__DOT__exe_reg_data2)))
                                              : ((5U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                  ? 
                                                 (vlSelf->core__DOT__exe_reg_data1 
                                                  ^ vlSelf->core__DOT__exe_reg_data2)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                   ? 
                                                  (vlSelf->core__DOT__exe_reg_data1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->core__DOT__exe_reg_data2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                    ? 
                                                   VL_SHIFTRS_QQI(64,64,6, vlSelf->core__DOT__exe_reg_data1, 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->core__DOT__exe_reg_data2)))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                     ? 
                                                    (vlSelf->core__DOT__exe_reg_data1 
                                                     | (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                      ? 
                                                     (vlSelf->core__DOT__exe_reg_data1 
                                                      & (QData)((IData)(
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                                                      : 0ULL))))))));
        VL_EXTEND_WQ(95,64, __Vtemp46, (vlSelf->core__DOT__exe_reg_data1 
                                        + vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp47, (vlSelf->core__DOT__exe_reg_data1 
                                        - vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp48, vlSelf->core__DOT__exe_reg_data1);
        VL_SHIFTL_WWI(95,95,5, __Vtemp49, __Vtemp48, 
                      (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
        if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
            __Vtemp57[0U] = __Vtemp46[0U];
            __Vtemp57[1U] = __Vtemp46[1U];
            __Vtemp57[2U] = (0x7fffffffU & __Vtemp46[2U]);
        } else {
            __Vtemp57[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                              ? __Vtemp47[0U] : ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp49[0U]
                                                  : 0U));
            __Vtemp57[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                              ? __Vtemp47[1U] : ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp49[1U]
                                                  : 0U));
            __Vtemp57[2U] = (0x7fffffffU & ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                             ? __Vtemp47[2U]
                                             : ((2U 
                                                 == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                 ? 
                                                __Vtemp49[2U]
                                                 : 0U)));
        }
        VL_EXTEND_WW(96,95, __Vtemp58, __Vtemp57);
        tracep->fullQData(oldp+42,(((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel))
                                     ? (((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                           ? 
                                                          __Vtemp32[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                            ? 
                                                           __Vtemp33[1U]
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                             ? 
                                                            __Vtemp35[1U]
                                                             : 
                                                            __Vtemp36[1U]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                            ? 
                                                           __Vtemp32[0U]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                             ? 
                                                            __Vtemp33[0U]
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                              ? 
                                                             __Vtemp35[0U]
                                                              : 
                                                             __Vtemp36[0U]))))))
                                     : ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel))
                                         ? (((QData)((IData)(
                                                             (((3U 
                                                                == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                               | (4U 
                                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                               ? (IData)(
                                                                         (vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
                                                                          >> 0x20U))
                                                               : 
                                                              __Vtemp58[1U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((3U 
                                                                 == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                                | (4U 
                                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                                ? (IData)(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2)
                                                                : 
                                                               __Vtemp58[0U]))))
                                         : 0ULL))),64);
        tracep->fullIData(oldp+44,(vlSelf->core__DOT__if_reg_pc),32);
        tracep->fullQData(oldp+45,(vlSelf->core__DOT__exe_reg_rs2_data),64);
        tracep->fullBit(oldp+47,(vlSelf->core__DOT__exe_reg_ctrl_rmem_en));
        tracep->fullCData(oldp+48,(vlSelf->core__DOT__exe_reg_ctrl_rmem_sel),3);
        tracep->fullBit(oldp+49,(vlSelf->core__DOT__exe_reg_ctrl_wmem_en));
        tracep->fullCData(oldp+50,(vlSelf->core__DOT__exe_reg_ctrl_wmem_sel),2);
        tracep->fullBit(oldp+51,(vlSelf->core__DOT__exe_reg_ctrl_wreg_en));
        tracep->fullCData(oldp+52,(vlSelf->core__DOT__exe_reg_ctrl_rd),5);
        tracep->fullQData(oldp+53,(vlSelf->core__DOT__mem_reg_alu_data),64);
        tracep->fullQData(oldp+55,(vlSelf->core__DOT__mem_reg_rs2_data),64);
        tracep->fullBit(oldp+57,(vlSelf->core__DOT__mem_reg_ctrl_rmem_en));
        tracep->fullCData(oldp+58,(vlSelf->core__DOT__mem_reg_ctrl_rmem_sel),3);
        tracep->fullBit(oldp+59,(vlSelf->core__DOT__mem_reg_ctrl_wmem_en));
        tracep->fullCData(oldp+60,(vlSelf->core__DOT__mem_reg_ctrl_wmem_sel),2);
        tracep->fullBit(oldp+61,(vlSelf->core__DOT__mem_reg_ctrl_wreg_en));
        tracep->fullCData(oldp+62,(vlSelf->core__DOT__mem_reg_ctrl_rd),5);
        tracep->fullCData(oldp+63,(vlSelf->core__DOT__rs1_sel),2);
        tracep->fullCData(oldp+64,(vlSelf->core__DOT__rs2_sel),2);
        tracep->fullQData(oldp+65,(((1U == (IData)(vlSelf->core__DOT__rs1_sel))
                                     ? vlSelf->core__DOT__mem_reg_alu_data
                                     : vlSelf->core__DOT___rs1_data_T_2)),64);
        tracep->fullQData(oldp+67,(((1U == (IData)(vlSelf->core__DOT__rs2_sel))
                                     ? vlSelf->core__DOT__mem_reg_alu_data
                                     : vlSelf->core__DOT___rs2_data_T_2)),64);
        tracep->fullQData(oldp+69,(vlSelf->core__DOT__RegFile__DOT__gprFile_1),64);
        tracep->fullQData(oldp+71,(vlSelf->core__DOT__RegFile__DOT__gprFile_2),64);
        tracep->fullQData(oldp+73,(vlSelf->core__DOT__RegFile__DOT__gprFile_3),64);
        tracep->fullQData(oldp+75,(vlSelf->core__DOT__RegFile__DOT__gprFile_4),64);
        tracep->fullQData(oldp+77,(vlSelf->core__DOT__RegFile__DOT__gprFile_5),64);
        tracep->fullQData(oldp+79,(vlSelf->core__DOT__RegFile__DOT__gprFile_6),64);
        tracep->fullQData(oldp+81,(vlSelf->core__DOT__RegFile__DOT__gprFile_7),64);
        tracep->fullQData(oldp+83,(vlSelf->core__DOT__RegFile__DOT__gprFile_8),64);
        tracep->fullQData(oldp+85,(vlSelf->core__DOT__RegFile__DOT__gprFile_9),64);
        tracep->fullQData(oldp+87,(vlSelf->core__DOT__RegFile__DOT__gprFile_10),64);
        tracep->fullQData(oldp+89,(vlSelf->core__DOT__RegFile__DOT__gprFile_11),64);
        tracep->fullQData(oldp+91,(vlSelf->core__DOT__RegFile__DOT__gprFile_12),64);
        tracep->fullQData(oldp+93,(vlSelf->core__DOT__RegFile__DOT__gprFile_13),64);
        tracep->fullQData(oldp+95,(vlSelf->core__DOT__RegFile__DOT__gprFile_14),64);
        tracep->fullQData(oldp+97,(vlSelf->core__DOT__RegFile__DOT__gprFile_15),64);
        tracep->fullQData(oldp+99,(vlSelf->core__DOT__RegFile__DOT__gprFile_16),64);
        tracep->fullQData(oldp+101,(vlSelf->core__DOT__RegFile__DOT__gprFile_17),64);
        tracep->fullQData(oldp+103,(vlSelf->core__DOT__RegFile__DOT__gprFile_18),64);
        tracep->fullQData(oldp+105,(vlSelf->core__DOT__RegFile__DOT__gprFile_19),64);
        tracep->fullQData(oldp+107,(vlSelf->core__DOT__RegFile__DOT__gprFile_20),64);
        tracep->fullQData(oldp+109,(vlSelf->core__DOT__RegFile__DOT__gprFile_21),64);
        tracep->fullQData(oldp+111,(vlSelf->core__DOT__RegFile__DOT__gprFile_22),64);
        tracep->fullQData(oldp+113,(vlSelf->core__DOT__RegFile__DOT__gprFile_23),64);
        tracep->fullQData(oldp+115,(vlSelf->core__DOT__RegFile__DOT__gprFile_24),64);
        tracep->fullQData(oldp+117,(vlSelf->core__DOT__RegFile__DOT__gprFile_25),64);
        tracep->fullQData(oldp+119,(vlSelf->core__DOT__RegFile__DOT__gprFile_26),64);
        tracep->fullQData(oldp+121,(vlSelf->core__DOT__RegFile__DOT__gprFile_27),64);
        tracep->fullQData(oldp+123,(vlSelf->core__DOT__RegFile__DOT__gprFile_28),64);
        tracep->fullQData(oldp+125,(vlSelf->core__DOT__RegFile__DOT__gprFile_29),64);
        tracep->fullQData(oldp+127,(vlSelf->core__DOT__RegFile__DOT__gprFile_30),64);
        tracep->fullQData(oldp+129,(vlSelf->core__DOT__RegFile__DOT__gprFile_31),64);
        tracep->fullCData(oldp+131,(vlSelf->core__DOT__Transfer__DOT__pc_type),3);
        tracep->fullIData(oldp+132,((IData)(vlSelf->core__DOT__Transfer_io_rs1_data)),32);
        VL_EXTEND_WQ(127,64, __Vtemp62, (vlSelf->core__DOT__exe_reg_data1 
                                         + vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(127,64, __Vtemp63, (vlSelf->core__DOT__exe_reg_data1 
                                         - vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(127,64, __Vtemp64, vlSelf->core__DOT__exe_reg_data1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp65, __Vtemp64, 
                      (0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
        VL_EXTEND_WQ(127,64, __Vtemp66, ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                          ? (QData)((IData)(
                                                            VL_LTS_IQQ(1,64,64, vlSelf->core__DOT__exe_reg_data1, vlSelf->core__DOT__exe_reg_data2)))
                                          : ((4U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                              ? (QData)((IData)(
                                                                (vlSelf->core__DOT__exe_reg_data1 
                                                                 < vlSelf->core__DOT__exe_reg_data2)))
                                              : ((5U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                  ? 
                                                 (vlSelf->core__DOT__exe_reg_data1 
                                                  ^ vlSelf->core__DOT__exe_reg_data2)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                   ? 
                                                  (vlSelf->core__DOT__exe_reg_data1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->core__DOT__exe_reg_data2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                    ? 
                                                   VL_SHIFTRS_QQI(64,64,6, vlSelf->core__DOT__exe_reg_data1, 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->core__DOT__exe_reg_data2)))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                     ? 
                                                    (vlSelf->core__DOT__exe_reg_data1 
                                                     | (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                      ? 
                                                     (vlSelf->core__DOT__exe_reg_data1 
                                                      & (QData)((IData)(
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                                                      : 0ULL))))))));
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      ((0U 
                                                        == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                        ? 
                                                       __Vtemp62[1U]
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                         ? 
                                                        __Vtemp63[1U]
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                          ? 
                                                         __Vtemp65[1U]
                                                          : 
                                                         __Vtemp66[1U]))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((0U 
                                                                    == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                    ? 
                                                                   __Vtemp62[0U]
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                     ? 
                                                                    __Vtemp63[0U]
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                      ? 
                                                                     __Vtemp65[0U]
                                                                      : 
                                                                     __Vtemp66[0U]))))))),64);
        VL_EXTEND_WQ(95,64, __Vtemp76, (vlSelf->core__DOT__exe_reg_data1 
                                        + vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp77, (vlSelf->core__DOT__exe_reg_data1 
                                        - vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp78, vlSelf->core__DOT__exe_reg_data1);
        VL_SHIFTL_WWI(95,95,5, __Vtemp79, __Vtemp78, 
                      (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
        if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
            __Vtemp87[0U] = __Vtemp76[0U];
            __Vtemp87[1U] = __Vtemp76[1U];
            __Vtemp87[2U] = (0x7fffffffU & __Vtemp76[2U]);
        } else {
            __Vtemp87[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                              ? __Vtemp77[0U] : ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp79[0U]
                                                  : 0U));
            __Vtemp87[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                              ? __Vtemp77[1U] : ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp79[1U]
                                                  : 0U));
            __Vtemp87[2U] = (0x7fffffffU & ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                             ? __Vtemp77[2U]
                                             : ((2U 
                                                 == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                 ? 
                                                __Vtemp79[2U]
                                                 : 0U)));
        }
        VL_EXTEND_WW(96,95, __Vtemp88, __Vtemp87);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      (((3U 
                                                         == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                        | (4U 
                                                           == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                        ? (IData)(
                                                                  (vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
                                                                   >> 0x20U))
                                                        : 
                                                       __Vtemp88[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((3U 
                                                                     == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                                    | (4U 
                                                                       == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                                    ? (IData)(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2)
                                                                    : 
                                                                   __Vtemp88[0U]))))),64);
        tracep->fullCData(oldp+137,((0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2))),6);
        tracep->fullIData(oldp+138,((IData)(vlSelf->core__DOT__exe_reg_data1)),32);
        tracep->fullCData(oldp+139,((0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2))),5);
        VL_EXTEND_WQ(95,64, __Vtemp92, (vlSelf->core__DOT__exe_reg_data1 
                                        + vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp93, (vlSelf->core__DOT__exe_reg_data1 
                                        - vlSelf->core__DOT__exe_reg_data2));
        VL_EXTEND_WQ(95,64, __Vtemp94, vlSelf->core__DOT__exe_reg_data1);
        VL_SHIFTL_WWI(95,95,5, __Vtemp95, __Vtemp94, 
                      (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
        if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
            __Vtemp103[0U] = __Vtemp92[0U];
            __Vtemp103[1U] = __Vtemp92[1U];
            __Vtemp103[2U] = (0x7fffffffU & __Vtemp92[2U]);
        } else {
            __Vtemp103[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                               ? __Vtemp93[0U] : ((2U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                   ? 
                                                  __Vtemp95[0U]
                                                   : 0U));
            __Vtemp103[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                               ? __Vtemp93[1U] : ((2U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                   ? 
                                                  __Vtemp95[1U]
                                                   : 0U));
            __Vtemp103[2U] = (0x7fffffffU & ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                              ? __Vtemp93[2U]
                                              : ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp95[2U]
                                                  : 0U)));
        }
        tracep->fullWData(oldp+140,(__Vtemp103),95);
        tracep->fullQData(oldp+143,(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2),64);
        tracep->fullBit(oldp+145,(vlSelf->clock));
        tracep->fullBit(oldp+146,(vlSelf->reset));
        tracep->fullIData(oldp+147,(vlSelf->io_inst_addr),32);
        tracep->fullIData(oldp+148,(vlSelf->io_inst),32);
        tracep->fullCData(oldp+149,(vlSelf->io_ctrl_flush),5);
        tracep->fullCData(oldp+150,(vlSelf->io_ctrl_hold),5);
        tracep->fullBit(oldp+151,(vlSelf->io_rmem_en));
        tracep->fullCData(oldp+152,(vlSelf->io_rmem_sel),3);
        tracep->fullIData(oldp+153,(vlSelf->io_rmem_addr),32);
        tracep->fullQData(oldp+154,(vlSelf->io_rmem_data),64);
        tracep->fullBit(oldp+156,(vlSelf->io_wmem_en));
        tracep->fullCData(oldp+157,(vlSelf->io_wmem_sel),2);
        tracep->fullIData(oldp+158,(vlSelf->io_wmem_addr),32);
        tracep->fullQData(oldp+159,(vlSelf->io_wmem_data),64);
    }
}
