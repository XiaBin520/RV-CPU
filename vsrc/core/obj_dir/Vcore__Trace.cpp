// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__traceChgSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep);

void Vcore___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcore___024root* const __restrict vlSelf = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcore___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcore___024root__traceChgSub0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp176;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+1,((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                               >> 0x14U))),5);
            tracep->chgQData(oldp+2,((((((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                        & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                       & (0U != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                       ? vlSelf->core__DOT__wb_reg_wbdata
                                       : ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->core__DOT__dec_reg_inst 
                                             >> 0xfU)))
                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_29
                                                   : 
                                                  ((0x1cU 
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
            tracep->chgQData(oldp+4,((((((0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                        & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                       & (0U != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                       ? vlSelf->core__DOT__wb_reg_wbdata
                                       : ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->core__DOT__dec_reg_inst 
                                             >> 0x14U)))
                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_29
                                                   : 
                                                  ((0x1cU 
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
            tracep->chgBit(oldp+6,(vlSelf->core__DOT__wb_reg_ctrl_wreg_en));
            tracep->chgCData(oldp+7,(vlSelf->core__DOT__wb_reg_ctrl_rd),5);
            tracep->chgQData(oldp+8,(vlSelf->core__DOT__wb_reg_wbdata),64);
            tracep->chgIData(oldp+10,(vlSelf->core__DOT__dec_reg_inst),32);
            tracep->chgCData(oldp+11,(vlSelf->core__DOT__Decoder_io_br_type),4);
            tracep->chgCData(oldp+12,(vlSelf->core__DOT__Decoder_io_imm_op),3);
            tracep->chgCData(oldp+13,(((0x37U == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_238)))))),2);
            tracep->chgCData(oldp+14,(vlSelf->core__DOT__Decoder_io_op1_sel),2);
            tracep->chgCData(oldp+15,(vlSelf->core__DOT__Decoder_io_op2_sel),2);
            tracep->chgCData(oldp+16,(((0x37U == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
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
            tracep->chgCData(oldp+17,(((0x37U == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_430)))))),3);
            tracep->chgBit(oldp+18,(((0x37U == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst))
                                      ? 0U : (1U & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529)))));
            tracep->chgCData(oldp+19,(((0x37U == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                        ? 0U : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529))),3);
            tracep->chgBit(oldp+20,(((0x37U != (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                     & ((0x17U != (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                        & ((0x6fU != 
                                            (0x7fU 
                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                           & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_575))))));
            tracep->chgCData(oldp+21,(((0x37U == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                        ? 0U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                                 ? 0U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x67U 
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
            tracep->chgBit(oldp+22,(((0x37U == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                           | ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                              | ((0x63U 
                                                  != 
                                                  (0x707fU 
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
            tracep->chgIData(oldp+23,((vlSelf->core__DOT__dec_reg_inst 
                                       >> 7U)),25);
            tracep->chgQData(oldp+24,(vlSelf->core__DOT__ImmSext_io_imm),64);
            tracep->chgQData(oldp+26,(vlSelf->core__DOT__Transfer_io_rs1_data),64);
            tracep->chgQData(oldp+28,(vlSelf->core__DOT__Transfer_io_rs2_data),64);
            tracep->chgIData(oldp+30,((IData)(vlSelf->core__DOT__ImmSext_io_imm)),32);
            tracep->chgIData(oldp+31,(vlSelf->core__DOT__dec_reg_pc),32);
            tracep->chgBit(oldp+32,((((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)) 
                                      | (2U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))) 
                                     | (3U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)))));
            tracep->chgIData(oldp+33,(((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                        ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                        : ((2U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                            ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                            : ((3U 
                                                == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                                ? (0xfffffffeU 
                                                   & ((IData)(vlSelf->core__DOT__Transfer_io_rs1_data) 
                                                      + (IData)(vlSelf->core__DOT__ImmSext_io_imm)))
                                                : ((IData)(4U) 
                                                   + vlSelf->core__DOT__dec_reg_pc))))),32);
            tracep->chgCData(oldp+34,(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel),2);
            tracep->chgCData(oldp+35,(vlSelf->core__DOT__exe_reg_ctrl_alu_op),4);
            tracep->chgCData(oldp+36,(vlSelf->core__DOT__exe_reg_ctrl_walu_op),3);
            tracep->chgQData(oldp+37,(vlSelf->core__DOT__exe_reg_data1),64);
            tracep->chgQData(oldp+39,(vlSelf->core__DOT__exe_reg_data2),64);
            VL_EXTEND_WQ(127,64, __Vtemp105, (vlSelf->core__DOT__exe_reg_data1 
                                              + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp106, (vlSelf->core__DOT__exe_reg_data1 
                                              - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp107, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp108, __Vtemp107, 
                          (0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            VL_EXTEND_WQ(127,64, __Vtemp109, ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                               ? (QData)((IData)(
                                                                 VL_LTS_IQQ(1,64,64, vlSelf->core__DOT__exe_reg_data1, vlSelf->core__DOT__exe_reg_data2)))
                                               : ((4U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->core__DOT__exe_reg_data1 
                                                                      < vlSelf->core__DOT__exe_reg_data2)))
                                                   : 
                                                  ((5U 
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
            VL_EXTEND_WQ(95,64, __Vtemp119, (vlSelf->core__DOT__exe_reg_data1 
                                             + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp120, (vlSelf->core__DOT__exe_reg_data1 
                                             - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp121, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(95,95,5, __Vtemp122, __Vtemp121, 
                          (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
                __Vtemp130[0U] = __Vtemp119[0U];
                __Vtemp130[1U] = __Vtemp119[1U];
                __Vtemp130[2U] = (0x7fffffffU & __Vtemp119[2U]);
            } else {
                __Vtemp130[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp120[0U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp122[0U]
                                       : 0U));
                __Vtemp130[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp120[1U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp122[1U]
                                       : 0U));
                __Vtemp130[2U] = (0x7fffffffU & ((1U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp120[2U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                   ? 
                                                  __Vtemp122[2U]
                                                   : 0U)));
            }
            VL_EXTEND_WW(96,95, __Vtemp131, __Vtemp130);
            tracep->chgQData(oldp+41,(((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel))
                                        ? (((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                              ? 
                                                             __Vtemp105[1U]
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                               ? 
                                                              __Vtemp106[1U]
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                ? 
                                                               __Vtemp108[1U]
                                                                : 
                                                               __Vtemp109[1U]))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                               ? 
                                                              __Vtemp105[0U]
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                ? 
                                                               __Vtemp106[0U]
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                 ? 
                                                                __Vtemp108[0U]
                                                                 : 
                                                                __Vtemp109[0U]))))))
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
                                                                 __Vtemp131[1U]))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((3U 
                                                                    == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                                   | (4U 
                                                                      == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                                   ? (IData)(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2)
                                                                   : 
                                                                  __Vtemp131[0U]))))
                                            : 0ULL))),64);
            tracep->chgIData(oldp+43,(vlSelf->core__DOT__if_reg_pc),32);
            tracep->chgQData(oldp+44,(vlSelf->core__DOT__exe_reg_rs2_data),64);
            tracep->chgBit(oldp+46,(vlSelf->core__DOT__exe_reg_ctrl_rmem_en));
            tracep->chgCData(oldp+47,(vlSelf->core__DOT__exe_reg_ctrl_rmem_sel),3);
            tracep->chgBit(oldp+48,(vlSelf->core__DOT__exe_reg_ctrl_wmem_en));
            tracep->chgCData(oldp+49,(vlSelf->core__DOT__exe_reg_ctrl_wmem_sel),2);
            tracep->chgBit(oldp+50,(vlSelf->core__DOT__exe_reg_ctrl_wreg_en));
            tracep->chgCData(oldp+51,(vlSelf->core__DOT__exe_reg_ctrl_rd),5);
            tracep->chgQData(oldp+52,(vlSelf->core__DOT__mem_reg_alu_data),64);
            tracep->chgQData(oldp+54,(vlSelf->core__DOT__mem_reg_rs2_data),64);
            tracep->chgBit(oldp+56,(vlSelf->core__DOT__mem_reg_ctrl_rmem_en));
            tracep->chgCData(oldp+57,(vlSelf->core__DOT__mem_reg_ctrl_rmem_sel),3);
            tracep->chgBit(oldp+58,(vlSelf->core__DOT__mem_reg_ctrl_wmem_en));
            tracep->chgCData(oldp+59,(vlSelf->core__DOT__mem_reg_ctrl_wmem_sel),2);
            tracep->chgBit(oldp+60,(vlSelf->core__DOT__mem_reg_ctrl_wreg_en));
            tracep->chgCData(oldp+61,(vlSelf->core__DOT__mem_reg_ctrl_rd),5);
            tracep->chgCData(oldp+62,(vlSelf->core__DOT__rs1_sel),2);
            tracep->chgCData(oldp+63,(vlSelf->core__DOT__rs2_sel),2);
            tracep->chgQData(oldp+64,(((1U == (IData)(vlSelf->core__DOT__rs1_sel))
                                        ? vlSelf->core__DOT__mem_reg_alu_data
                                        : vlSelf->core__DOT___rs1_data_T_2)),64);
            tracep->chgQData(oldp+66,(((1U == (IData)(vlSelf->core__DOT__rs2_sel))
                                        ? vlSelf->core__DOT__mem_reg_alu_data
                                        : vlSelf->core__DOT___rs2_data_T_2)),64);
            tracep->chgQData(oldp+68,(vlSelf->core__DOT__RegFile__DOT__gprFile_1),64);
            tracep->chgQData(oldp+70,(vlSelf->core__DOT__RegFile__DOT__gprFile_2),64);
            tracep->chgQData(oldp+72,(vlSelf->core__DOT__RegFile__DOT__gprFile_3),64);
            tracep->chgQData(oldp+74,(vlSelf->core__DOT__RegFile__DOT__gprFile_4),64);
            tracep->chgQData(oldp+76,(vlSelf->core__DOT__RegFile__DOT__gprFile_5),64);
            tracep->chgQData(oldp+78,(vlSelf->core__DOT__RegFile__DOT__gprFile_6),64);
            tracep->chgQData(oldp+80,(vlSelf->core__DOT__RegFile__DOT__gprFile_7),64);
            tracep->chgQData(oldp+82,(vlSelf->core__DOT__RegFile__DOT__gprFile_8),64);
            tracep->chgQData(oldp+84,(vlSelf->core__DOT__RegFile__DOT__gprFile_9),64);
            tracep->chgQData(oldp+86,(vlSelf->core__DOT__RegFile__DOT__gprFile_10),64);
            tracep->chgQData(oldp+88,(vlSelf->core__DOT__RegFile__DOT__gprFile_11),64);
            tracep->chgQData(oldp+90,(vlSelf->core__DOT__RegFile__DOT__gprFile_12),64);
            tracep->chgQData(oldp+92,(vlSelf->core__DOT__RegFile__DOT__gprFile_13),64);
            tracep->chgQData(oldp+94,(vlSelf->core__DOT__RegFile__DOT__gprFile_14),64);
            tracep->chgQData(oldp+96,(vlSelf->core__DOT__RegFile__DOT__gprFile_15),64);
            tracep->chgQData(oldp+98,(vlSelf->core__DOT__RegFile__DOT__gprFile_16),64);
            tracep->chgQData(oldp+100,(vlSelf->core__DOT__RegFile__DOT__gprFile_17),64);
            tracep->chgQData(oldp+102,(vlSelf->core__DOT__RegFile__DOT__gprFile_18),64);
            tracep->chgQData(oldp+104,(vlSelf->core__DOT__RegFile__DOT__gprFile_19),64);
            tracep->chgQData(oldp+106,(vlSelf->core__DOT__RegFile__DOT__gprFile_20),64);
            tracep->chgQData(oldp+108,(vlSelf->core__DOT__RegFile__DOT__gprFile_21),64);
            tracep->chgQData(oldp+110,(vlSelf->core__DOT__RegFile__DOT__gprFile_22),64);
            tracep->chgQData(oldp+112,(vlSelf->core__DOT__RegFile__DOT__gprFile_23),64);
            tracep->chgQData(oldp+114,(vlSelf->core__DOT__RegFile__DOT__gprFile_24),64);
            tracep->chgQData(oldp+116,(vlSelf->core__DOT__RegFile__DOT__gprFile_25),64);
            tracep->chgQData(oldp+118,(vlSelf->core__DOT__RegFile__DOT__gprFile_26),64);
            tracep->chgQData(oldp+120,(vlSelf->core__DOT__RegFile__DOT__gprFile_27),64);
            tracep->chgQData(oldp+122,(vlSelf->core__DOT__RegFile__DOT__gprFile_28),64);
            tracep->chgQData(oldp+124,(vlSelf->core__DOT__RegFile__DOT__gprFile_29),64);
            tracep->chgQData(oldp+126,(vlSelf->core__DOT__RegFile__DOT__gprFile_30),64);
            tracep->chgQData(oldp+128,(vlSelf->core__DOT__RegFile__DOT__gprFile_31),64);
            tracep->chgCData(oldp+130,(vlSelf->core__DOT__Transfer__DOT__pc_type),3);
            tracep->chgIData(oldp+131,((IData)(vlSelf->core__DOT__Transfer_io_rs1_data)),32);
            VL_EXTEND_WQ(127,64, __Vtemp135, (vlSelf->core__DOT__exe_reg_data1 
                                              + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp136, (vlSelf->core__DOT__exe_reg_data1 
                                              - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp137, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp138, __Vtemp137, 
                          (0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            VL_EXTEND_WQ(127,64, __Vtemp139, ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                               ? (QData)((IData)(
                                                                 VL_LTS_IQQ(1,64,64, vlSelf->core__DOT__exe_reg_data1, vlSelf->core__DOT__exe_reg_data2)))
                                               : ((4U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->core__DOT__exe_reg_data1 
                                                                      < vlSelf->core__DOT__exe_reg_data2)))
                                                   : 
                                                  ((5U 
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
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                           ? 
                                                          __Vtemp135[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                            ? 
                                                           __Vtemp136[1U]
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                             ? 
                                                            __Vtemp138[1U]
                                                             : 
                                                            __Vtemp139[1U]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                            ? 
                                                           __Vtemp135[0U]
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                             ? 
                                                            __Vtemp136[0U]
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                              ? 
                                                             __Vtemp138[0U]
                                                              : 
                                                             __Vtemp139[0U]))))))),64);
            VL_EXTEND_WQ(95,64, __Vtemp149, (vlSelf->core__DOT__exe_reg_data1 
                                             + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp150, (vlSelf->core__DOT__exe_reg_data1 
                                             - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp151, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(95,95,5, __Vtemp152, __Vtemp151, 
                          (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
                __Vtemp160[0U] = __Vtemp149[0U];
                __Vtemp160[1U] = __Vtemp149[1U];
                __Vtemp160[2U] = (0x7fffffffU & __Vtemp149[2U]);
            } else {
                __Vtemp160[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp150[0U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp152[0U]
                                       : 0U));
                __Vtemp160[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp150[1U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp152[1U]
                                       : 0U));
                __Vtemp160[2U] = (0x7fffffffU & ((1U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp150[2U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                   ? 
                                                  __Vtemp152[2U]
                                                   : 0U)));
            }
            VL_EXTEND_WW(96,95, __Vtemp161, __Vtemp160);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         (((3U 
                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                           | (4U 
                                                              == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                           ? (IData)(
                                                                     (vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
                                                                      >> 0x20U))
                                                           : 
                                                          __Vtemp161[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((3U 
                                                             == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                            | (4U 
                                                               == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                            ? (IData)(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2)
                                                            : 
                                                           __Vtemp161[0U]))))),64);
            tracep->chgCData(oldp+136,((0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2))),6);
            tracep->chgIData(oldp+137,((IData)(vlSelf->core__DOT__exe_reg_data1)),32);
            tracep->chgCData(oldp+138,((0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2))),5);
            VL_EXTEND_WQ(95,64, __Vtemp165, (vlSelf->core__DOT__exe_reg_data1 
                                             + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp166, (vlSelf->core__DOT__exe_reg_data1 
                                             - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp167, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(95,95,5, __Vtemp168, __Vtemp167, 
                          (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
                __Vtemp176[0U] = __Vtemp165[0U];
                __Vtemp176[1U] = __Vtemp165[1U];
                __Vtemp176[2U] = (0x7fffffffU & __Vtemp165[2U]);
            } else {
                __Vtemp176[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp166[0U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp168[0U]
                                       : 0U));
                __Vtemp176[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp166[1U]
                                   : ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                       ? __Vtemp168[1U]
                                       : 0U));
                __Vtemp176[2U] = (0x7fffffffU & ((1U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp166[2U]
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                   ? 
                                                  __Vtemp168[2U]
                                                   : 0U)));
            }
            tracep->chgWData(oldp+139,(__Vtemp176),95);
            tracep->chgQData(oldp+142,(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2),64);
        }
        tracep->chgBit(oldp+144,(vlSelf->clock));
        tracep->chgBit(oldp+145,(vlSelf->reset));
        tracep->chgIData(oldp+146,(vlSelf->io_inst_addr),32);
        tracep->chgIData(oldp+147,(vlSelf->io_inst),32);
        tracep->chgCData(oldp+148,(vlSelf->io_ctrl_flush),5);
        tracep->chgCData(oldp+149,(vlSelf->io_ctrl_hold),5);
        tracep->chgBit(oldp+150,(vlSelf->io_rmem_en));
        tracep->chgCData(oldp+151,(vlSelf->io_rmem_sel),3);
        tracep->chgIData(oldp+152,(vlSelf->io_rmem_addr),32);
        tracep->chgQData(oldp+153,(vlSelf->io_rmem_data),64);
        tracep->chgBit(oldp+155,(vlSelf->io_wmem_en));
        tracep->chgCData(oldp+156,(vlSelf->io_wmem_sel),2);
        tracep->chgIData(oldp+157,(vlSelf->io_wmem_addr),32);
        tracep->chgQData(oldp+158,(vlSelf->io_wmem_data),64);
    }
}

void Vcore___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcore___024root* const __restrict vlSelf = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
