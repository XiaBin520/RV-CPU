// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore___024root.h"
#include "Vcore__Syms.h"

//==========


void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf);

Vcore___024root::Vcore___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcore___024root___ctor_var_reset(this);
}

void Vcore___024root::__Vconfigure(Vcore__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcore___024root::~Vcore___024root() {
}

void Vcore___024root___settle__TOP__2(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___settle__TOP__2\n"); );
    // Variables
    CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_165;
    CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_180;
    CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_208;
    CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_223;
    CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_309;
    CData/*1:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_324;
    CData/*3:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_361;
    CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_400;
    CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_415;
    CData/*2:0*/ core__DOT__Decoder__DOT___ctrl_signals_T_528;
    QData/*63:0*/ core__DOT__RegFile__DOT___GEN_13;
    QData/*63:0*/ core__DOT__RegFile__DOT___GEN_45;
    QData/*63:0*/ core__DOT__ImmSext__DOT___io_imm_T_42;
    // Body
    vlSelf->io_rmem_sel = vlSelf->core__DOT__mem_reg_ctrl_rmem_sel;
    vlSelf->io_wmem_en = vlSelf->core__DOT__mem_reg_ctrl_wmem_en;
    vlSelf->io_wmem_sel = vlSelf->core__DOT__mem_reg_ctrl_wmem_sel;
    vlSelf->io_wmem_data = vlSelf->core__DOT__mem_reg_rs2_data;
    vlSelf->io_rmem_addr = (IData)(vlSelf->core__DOT__mem_reg_alu_data);
    vlSelf->io_wmem_addr = (IData)(vlSelf->core__DOT__mem_reg_alu_data);
    vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
        = ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
            ? (QData)((IData)(((IData)(vlSelf->core__DOT__exe_reg_data1) 
                               >> (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
            : ((4U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->core__DOT__exe_reg_data1), 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                : 0ULL));
    vlSelf->core__DOT___if_reg_pc_T_1 = ((IData)(4U) 
                                         + vlSelf->core__DOT__if_reg_pc);
    vlSelf->io_inst_addr = vlSelf->core__DOT__if_reg_pc;
    vlSelf->io_rmem_en = vlSelf->core__DOT__mem_reg_ctrl_rmem_en;
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_575 
        = ((0x67U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
           & ((0x63U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
              & ((0x1063U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                 & ((0x4063U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                    & ((0x5063U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                       & ((0x6063U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                          & ((0x7063U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                             & ((3U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                                & ((0x1003U != (0x707fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                   & ((0x2003U != (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                      & ((0x3003U != 
                                          (0x707fU 
                                           & vlSelf->core__DOT__dec_reg_inst)) 
                                         & ((0x4003U 
                                             != (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst)) 
                                            & ((0x5003U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst)) 
                                               & ((0x6003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst)) 
                                                  & ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst)) 
                                                     | ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst)) 
                                                        | ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                                           | (0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->core__DOT__dec_reg_inst)))))))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_620 
        = ((0x4063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
            ? 0U : ((0x5063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                     ? 0U : ((0x6063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                              ? 0U : ((0x7063U == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                       ? 0U : ((3U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 2U
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_654 
        = ((0x3023U != (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
           & ((0x13U == (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
              | ((0x1013U == (0xfc00707fU & vlSelf->core__DOT__dec_reg_inst)) 
                 | ((0x2013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                    | ((0x3013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                       | ((0x4013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst)) 
                          | ((0x5013U == (0xfc00707fU 
                                          & vlSelf->core__DOT__dec_reg_inst)) 
                             | ((0x40005013U == (0xfc00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst)) 
                                | ((0x6013U == (0x707fU 
                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                   | ((0x7013U == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                      | ((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->core__DOT__dec_reg_inst)) 
                                         | ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst)) 
                                            | ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst)) 
                                               | ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst)) 
                                                  | ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst)) 
                                                     | ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst)) 
                                                        | ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst)) 
                                                           | ((0x40005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                              | ((0x6033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->core__DOT__dec_reg_inst)) 
                                                                 | ((0x7033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->core__DOT__dec_reg_inst)) 
                                                                    | ((0x1bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->core__DOT__dec_reg_inst)) 
                                                                       | ((0x101bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->core__DOT__dec_reg_inst)) 
                                                                          | ((0x501bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->core__DOT__dec_reg_inst)) 
                                                                             | ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | ((0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst)) 
                                                                                | (0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->core__DOT__dec_reg_inst))))))))))))))))))))))))))))));
    vlSelf->core__DOT__Decoder_io_op1_sel = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 2U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 1U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 0U))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_361 = 
        ((0x4013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 5U : ((0x5013U == (0xfc00707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 6U : ((0x40005013U == (0xfc00707fU 
                                            & vlSelf->core__DOT__dec_reg_inst))
                            ? 7U : ((0x6013U == (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 9U : ((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0xaU
                                              : ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 6U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 7U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 9U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 0xaU
                                                           : 0U)))))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_528 = 
        ((0x6fU == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
          ? 0U : ((0x67U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x63U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x1063U == (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x6063U 
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
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 3U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 6U
                                                           : 0U)))))))))))))));
    vlSelf->core__DOT__Decoder_io_br_type = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 7U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 6U
                                                          : 0U))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_208 = 
        ((0x3033U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 0U : ((0x4033U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x5033U == (0xfe00707fU 
                                        & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x40005033U == 
                                     (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 0U)))))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_309 = 
        ((0x7013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 1U : ((0x33U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x1033U == (0xfe00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x3033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 0U)))))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_400 = 
        ((0x3033U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 0U : ((0x4033U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x5033U == (0xfe00707fU 
                                        & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x40005033U == 
                                     (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x6033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 4U
                                                           : 0U)))))))))))))));
    vlSelf->core__DOT__rs1_sel = (((((IData)(vlSelf->core__DOT__mem_reg_ctrl_wreg_en) 
                                     & (~ (IData)(vlSelf->core__DOT__mem_reg_ctrl_rmem_en))) 
                                    & (0U != (IData)(vlSelf->core__DOT__mem_reg_ctrl_rd))) 
                                   & ((IData)(vlSelf->core__DOT__mem_reg_ctrl_rd) 
                                      == (0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0xfU))))
                                   ? 1U : ((((IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en) 
                                             & (0U 
                                                != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) 
                                            & ((IData)(vlSelf->core__DOT__wb_reg_ctrl_rd) 
                                               == (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0xfU))))
                                            ? 2U : 0U));
    vlSelf->core__DOT__rs2_sel = (((((IData)(vlSelf->core__DOT__mem_reg_ctrl_wreg_en) 
                                     & (~ (IData)(vlSelf->core__DOT__mem_reg_ctrl_rmem_en))) 
                                    & (0U != (IData)(vlSelf->core__DOT__mem_reg_ctrl_rd))) 
                                   & ((IData)(vlSelf->core__DOT__mem_reg_ctrl_rd) 
                                      == (0x1fU & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0x14U))))
                                   ? 1U : ((((IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en) 
                                             & (0U 
                                                != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) 
                                            & ((IData)(vlSelf->core__DOT__wb_reg_ctrl_rd) 
                                               == (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0x14U))))
                                            ? 2U : 0U));
    core__DOT__RegFile__DOT___GEN_13 = ((0xdU == (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0xfU)))
                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                 >> 0xfU)))
                                             ? vlSelf->core__DOT__RegFile__DOT__gprFile_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->core__DOT__dec_reg_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->core__DOT__RegFile__DOT__gprFile_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->core__DOT__dec_reg_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->core__DOT__RegFile__DOT__gprFile_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->core__DOT__dec_reg_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->core__DOT__dec_reg_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->core__DOT__dec_reg_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->core__DOT__RegFile__DOT__gprFile_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->core__DOT__dec_reg_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_1
                                                           : 0ULL)))))))))))));
    core__DOT__RegFile__DOT___GEN_45 = ((0xdU == (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x14U)))
                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                 >> 0x14U)))
                                             ? vlSelf->core__DOT__RegFile__DOT__gprFile_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->core__DOT__dec_reg_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->core__DOT__RegFile__DOT__gprFile_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->core__DOT__dec_reg_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->core__DOT__RegFile__DOT__gprFile_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->core__DOT__dec_reg_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->core__DOT__dec_reg_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->core__DOT__dec_reg_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->core__DOT__RegFile__DOT__gprFile_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->core__DOT__dec_reg_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_1
                                                           : 0ULL)))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_165 = 
        ((0x7013U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 1U : ((0x33U == (0xfe00707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x1033U == (0xfe00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x3033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 0U)))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_376 
        = ((3U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
            ? 0U : ((0x1003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                     ? 0U : ((0x2003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                              ? 0U : ((0x3003U == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                       ? 0U : ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 3U
                                                            : 
                                                           ((0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 4U
                                                             : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_361))))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529 
        = ((0x17U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
            ? 0U : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_528));
    core__DOT__Decoder__DOT___ctrl_signals_T_223 = 
        ((0x2023U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 0U : ((0x3023U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x13U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x1013U == (0xfc00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 0U
                                                           : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_208))))))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_324 = 
        ((0x4003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 1U : ((0x5003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 1U : ((0x6003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                            ? 1U : ((0x23U == (0x707fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 1U : ((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 1U : 
                                             ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 1U
                                               : ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_309))))))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_415 = 
        ((0x2023U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 0U : ((0x3023U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 0U : ((0x13U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                            ? 0U : ((0x1013U == (0xfc00707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                     ? 0U : ((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 0U : 
                                             ((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 0U
                                                           : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_400))))))))))))))));
    vlSelf->core__DOT__RegFile__DOT___GEN_26 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->core__DOT__dec_reg_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->core__DOT__RegFile__DOT__gprFile_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->core__DOT__dec_reg_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->core__DOT__RegFile__DOT__gprFile_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->core__DOT__dec_reg_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->core__DOT__dec_reg_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->core__DOT__dec_reg_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->core__DOT__RegFile__DOT__gprFile_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->core__DOT__dec_reg_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->core__DOT__dec_reg_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->core__DOT__RegFile__DOT__gprFile_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->core__DOT__RegFile__DOT__gprFile_14
                                                             : core__DOT__RegFile__DOT___GEN_13)))))))))))));
    vlSelf->core__DOT__RegFile__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->core__DOT__RegFile__DOT__gprFile_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->core__DOT__RegFile__DOT__gprFile_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->core__DOT__RegFile__DOT__gprFile_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->core__DOT__dec_reg_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->core__DOT__RegFile__DOT__gprFile_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->core__DOT__dec_reg_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->core__DOT__RegFile__DOT__gprFile_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->core__DOT__dec_reg_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->core__DOT__RegFile__DOT__gprFile_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->core__DOT__dec_reg_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->core__DOT__RegFile__DOT__gprFile_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->core__DOT__dec_reg_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->core__DOT__RegFile__DOT__gprFile_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->core__DOT__dec_reg_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->core__DOT__RegFile__DOT__gprFile_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->core__DOT__dec_reg_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->core__DOT__RegFile__DOT__gprFile_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->core__DOT__RegFile__DOT__gprFile_14
                                                             : core__DOT__RegFile__DOT___GEN_45)))))))))))));
    core__DOT__Decoder__DOT___ctrl_signals_T_180 = 
        ((0x4003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
          ? 1U : ((0x5003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                   ? 1U : ((0x6003U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                            ? 1U : ((0x23U == (0x707fU 
                                               & vlSelf->core__DOT__dec_reg_inst))
                                     ? 2U : ((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 2U : 
                                             ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 2U
                                               : ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 2U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_165))))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_238 
        = ((0x63U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
            ? 0U : ((0x1063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                     ? 0U : ((0x4063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                              ? 0U : ((0x5063U == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                       ? 0U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 0U
                                                             : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_223))))))))))))))));
    vlSelf->core__DOT__Decoder_io_op2_sel = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 1U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 1U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 2U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 2U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 1U
                                                             : 
                                                            ((0x3003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->core__DOT__dec_reg_inst))
                                                              ? 1U
                                                              : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_324)))))))))))))));
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_430 
        = ((0x63U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
            ? 0U : ((0x1063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                     ? 0U : ((0x4063U == (0x707fU & vlSelf->core__DOT__dec_reg_inst))
                              ? 0U : ((0x5063U == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                       ? 0U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 0U
                                                             : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_415))))))))))))))));
    vlSelf->core__DOT___rs1_data_T_2 = ((2U == (IData)(vlSelf->core__DOT__rs1_sel))
                                         ? vlSelf->core__DOT__wb_reg_wbdata
                                         : (((((0x1fU 
                                                & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                              & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                             & (0U 
                                                != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                             ? vlSelf->core__DOT__wb_reg_wbdata
                                             : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                                  : 
                                                 ((0x1dU 
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
                                                     : vlSelf->core__DOT__RegFile__DOT___GEN_26)))))));
    vlSelf->core__DOT___rs2_data_T_2 = ((2U == (IData)(vlSelf->core__DOT__rs2_sel))
                                         ? vlSelf->core__DOT__wb_reg_wbdata
                                         : (((((0x1fU 
                                                & (vlSelf->core__DOT__dec_reg_inst 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)) 
                                              & (IData)(vlSelf->core__DOT__wb_reg_ctrl_wreg_en)) 
                                             & (0U 
                                                != (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd)))
                                             ? vlSelf->core__DOT__wb_reg_wbdata
                                             : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->core__DOT__RegFile__DOT__gprFile_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->core__DOT__dec_reg_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->core__DOT__RegFile__DOT__gprFile_30
                                                  : 
                                                 ((0x1dU 
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
                                                     : vlSelf->core__DOT__RegFile__DOT___GEN_58)))))));
    vlSelf->core__DOT__Decoder_io_imm_op = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->core__DOT__dec_reg_inst))
                                             ? 4U : 
                                            ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->core__DOT__dec_reg_inst))
                                              ? 4U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 5U
                                               : ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->core__DOT__dec_reg_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->core__DOT__dec_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->core__DOT__dec_reg_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->core__DOT__dec_reg_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->core__DOT__dec_reg_inst))
                                                        ? 3U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->core__DOT__dec_reg_inst))
                                                         ? 3U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->core__DOT__dec_reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->core__DOT__dec_reg_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->core__DOT__dec_reg_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->core__DOT__dec_reg_inst))
                                                             ? 1U
                                                             : (IData)(core__DOT__Decoder__DOT___ctrl_signals_T_180)))))))))))))));
    vlSelf->core__DOT__Transfer_io_rs1_data = ((1U 
                                                == (IData)(vlSelf->core__DOT__rs1_sel))
                                                ? vlSelf->core__DOT__mem_reg_alu_data
                                                : vlSelf->core__DOT___rs1_data_T_2);
    vlSelf->core__DOT__Transfer_io_rs2_data = ((1U 
                                                == (IData)(vlSelf->core__DOT__rs2_sel))
                                                ? vlSelf->core__DOT__mem_reg_alu_data
                                                : vlSelf->core__DOT___rs2_data_T_2);
    core__DOT__ImmSext__DOT___io_imm_T_42 = ((2U == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                              ? (((
                                                   (vlSelf->core__DOT__dec_reg_inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->core__DOT__dec_reg_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->core__DOT__dec_reg_inst 
                                                                          >> 7U))))))
                                              : ((3U 
                                                  == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                                  ? 
                                                 ((((vlSelf->core__DOT__dec_reg_inst 
                                                     >> 0x1fU)
                                                     ? 0x7ffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->core__DOT__dec_reg_inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->core__DOT__dec_reg_inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->core__DOT__dec_reg_inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                                                >> 7U))))))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((vlSelf->core__DOT__dec_reg_inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->core__DOT__dec_reg_inst))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                                    ? 
                                                   ((((vlSelf->core__DOT__dec_reg_inst 
                                                       >> 0x1fU)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->core__DOT__dec_reg_inst 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->core__DOT__dec_reg_inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->core__DOT__dec_reg_inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->core__DOT__dec_reg_inst 
                                                                                >> 0x14U))))))))
                                                    : 0ULL))));
    vlSelf->core__DOT__Transfer__DOT__pc_type = (((1U 
                                                   == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                  & (vlSelf->core__DOT__Transfer_io_rs1_data 
                                                     == vlSelf->core__DOT__Transfer_io_rs2_data))
                                                  ? 1U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                   & (vlSelf->core__DOT__Transfer_io_rs1_data 
                                                      != vlSelf->core__DOT__Transfer_io_rs2_data))
                                                   ? 1U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                    & VL_LTS_IQQ(1,64,64, vlSelf->core__DOT__Transfer_io_rs1_data, vlSelf->core__DOT__Transfer_io_rs2_data))
                                                    ? 1U
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                     & VL_GTES_IQQ(1,64,64, vlSelf->core__DOT__Transfer_io_rs1_data, vlSelf->core__DOT__Transfer_io_rs2_data))
                                                     ? 1U
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                      & (vlSelf->core__DOT__Transfer_io_rs1_data 
                                                         < vlSelf->core__DOT__Transfer_io_rs2_data))
                                                      ? 1U
                                                      : 
                                                     (((6U 
                                                        == (IData)(vlSelf->core__DOT__Decoder_io_br_type)) 
                                                       & (vlSelf->core__DOT__Transfer_io_rs1_data 
                                                          >= vlSelf->core__DOT__Transfer_io_rs2_data))
                                                       ? 1U
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->core__DOT__Decoder_io_br_type))
                                                        ? 2U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->core__DOT__Decoder_io_br_type))
                                                         ? 3U
                                                         : 0U))))))));
    vlSelf->core__DOT__ImmSext_io_imm = ((0U == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                          ? 0ULL : 
                                         ((1U == (IData)(vlSelf->core__DOT__Decoder_io_imm_op))
                                           ? ((((vlSelf->core__DOT__dec_reg_inst 
                                                 >> 0x1fU)
                                                 ? 0xfffffffffffffULL
                                                 : 0ULL) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->core__DOT__dec_reg_inst 
                                                                 >> 0x14U))))
                                           : core__DOT__ImmSext__DOT___io_imm_T_42));
    vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4 
        = (vlSelf->core__DOT__dec_reg_pc + (IData)(vlSelf->core__DOT__ImmSext_io_imm));
}

void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    // Body
    Vcore___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcore___024root___final(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___final\n"); );
}

void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst_addr = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_ctrl_flush = VL_RAND_RESET_I(5);
    vlSelf->io_ctrl_hold = VL_RAND_RESET_I(5);
    vlSelf->io_rmem_en = VL_RAND_RESET_I(1);
    vlSelf->io_rmem_sel = VL_RAND_RESET_I(3);
    vlSelf->io_rmem_addr = VL_RAND_RESET_I(32);
    vlSelf->io_rmem_data = VL_RAND_RESET_Q(64);
    vlSelf->io_wmem_en = VL_RAND_RESET_I(1);
    vlSelf->io_wmem_sel = VL_RAND_RESET_I(2);
    vlSelf->io_wmem_addr = VL_RAND_RESET_I(32);
    vlSelf->io_wmem_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Decoder_io_br_type = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Decoder_io_imm_op = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Decoder_io_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Decoder_io_op2_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ImmSext_io_imm = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Transfer_io_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Transfer_io_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dec_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dec_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__exe_reg_data1 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__exe_reg_data2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__exe_reg_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__exe_reg_ctrl_cmp_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__exe_reg_ctrl_alu_op = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__exe_reg_ctrl_walu_op = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__exe_reg_ctrl_rmem_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__exe_reg_ctrl_rmem_sel = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__exe_reg_ctrl_wmem_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__exe_reg_ctrl_wmem_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__exe_reg_ctrl_wreg_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__exe_reg_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__mem_reg_alu_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__mem_reg_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__mem_reg_ctrl_rmem_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_reg_ctrl_rmem_sel = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__mem_reg_ctrl_wmem_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_reg_ctrl_wmem_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__mem_reg_ctrl_wreg_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_reg_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__wb_reg_wbdata = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__wb_reg_ctrl_wreg_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_reg_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__rs1_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__rs2_sel = VL_RAND_RESET_I(2);
    vlSelf->core__DOT___rs1_data_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT___rs2_data_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT___if_reg_pc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__RegFile__DOT__gprFile_1 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_3 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_4 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_5 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_6 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_7 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_8 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_9 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_10 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_11 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_12 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_13 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_14 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_15 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_16 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_17 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_18 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_19 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_20 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_21 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_22 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_23 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_24 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_25 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_26 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_27 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_28 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_29 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_30 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT__gprFile_31 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT___GEN_26 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RegFile__DOT___GEN_58 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_238 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_376 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_430 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_575 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_620 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_654 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Transfer__DOT__pc_type = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
