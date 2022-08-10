// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore___024root.h"
#include "Vcore__Syms.h"

//==========

VL_INLINE_OPT void Vcore___024root___sequent__TOP__1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__1\n"); );
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
    IData/*31:0*/ __Vdly__core__DOT__dec_reg_pc;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    QData/*63:0*/ core__DOT__RegFile__DOT___GEN_13;
    QData/*63:0*/ core__DOT__RegFile__DOT___GEN_45;
    QData/*63:0*/ core__DOT__ImmSext__DOT___io_imm_T_42;
    QData/*63:0*/ __Vdly__core__DOT__mem_reg_alu_data;
    // Body
    __Vdly__core__DOT__dec_reg_pc = vlSelf->core__DOT__dec_reg_pc;
    __Vdly__core__DOT__mem_reg_alu_data = vlSelf->core__DOT__mem_reg_alu_data;
    if (vlSelf->reset) {
        __Vdly__core__DOT__dec_reg_pc = 0x80000000U;
    } else if ((8U & (IData)(vlSelf->io_ctrl_flush))) {
        __Vdly__core__DOT__dec_reg_pc = 0x80000000U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 3U)))) {
        __Vdly__core__DOT__dec_reg_pc = vlSelf->core__DOT__if_reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_wmem_sel = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            vlSelf->core__DOT__mem_reg_ctrl_wmem_sel 
                = vlSelf->core__DOT__exe_reg_ctrl_wmem_sel;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_wmem_en = 0U;
    } else if ((2U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__mem_reg_ctrl_wmem_en = 0U;
    } else if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
        vlSelf->core__DOT__mem_reg_ctrl_wmem_en = vlSelf->core__DOT__exe_reg_ctrl_wmem_en;
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_rmem_sel = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            vlSelf->core__DOT__mem_reg_ctrl_rmem_sel 
                = vlSelf->core__DOT__exe_reg_ctrl_rmem_sel;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_rs2_data = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            vlSelf->core__DOT__mem_reg_rs2_data = vlSelf->core__DOT__exe_reg_rs2_data;
        }
    }
    if (vlSelf->reset) {
        __Vdly__core__DOT__mem_reg_alu_data = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            VL_EXTEND_WQ(127,64, __Vtemp2, (vlSelf->core__DOT__exe_reg_data1 
                                            + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp3, (vlSelf->core__DOT__exe_reg_data1 
                                            - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(127,64, __Vtemp4, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp5, __Vtemp4, 
                          (0x3fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            VL_EXTEND_WQ(127,64, __Vtemp6, ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
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
            VL_EXTEND_WQ(95,64, __Vtemp16, (vlSelf->core__DOT__exe_reg_data1 
                                            + vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp17, (vlSelf->core__DOT__exe_reg_data1 
                                            - vlSelf->core__DOT__exe_reg_data2));
            VL_EXTEND_WQ(95,64, __Vtemp18, vlSelf->core__DOT__exe_reg_data1);
            VL_SHIFTL_WWI(95,95,5, __Vtemp19, __Vtemp18, 
                          (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)));
            if ((0U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))) {
                __Vtemp27[0U] = __Vtemp16[0U];
                __Vtemp27[1U] = __Vtemp16[1U];
                __Vtemp27[2U] = (0x7fffffffU & __Vtemp16[2U]);
            } else {
                __Vtemp27[0U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                  ? __Vtemp17[0U] : 
                                 ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp19[0U] : 0U));
                __Vtemp27[1U] = ((1U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                  ? __Vtemp17[1U] : 
                                 ((2U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                   ? __Vtemp19[1U] : 0U));
                __Vtemp27[2U] = (0x7fffffffU & ((1U 
                                                 == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                 ? 
                                                __Vtemp17[2U]
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                                                  ? 
                                                 __Vtemp19[2U]
                                                  : 0U)));
            }
            VL_EXTEND_WW(96,95, __Vtemp28, __Vtemp27);
            __Vdly__core__DOT__mem_reg_alu_data = (
                                                   (0U 
                                                    == (IData)(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((0U 
                                                                       == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                       ? 
                                                                      __Vtemp2[1U]
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                        ? 
                                                                       __Vtemp3[1U]
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                         ? 
                                                                        __Vtemp5[1U]
                                                                         : 
                                                                        __Vtemp6[1U]))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0U 
                                                                        == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                        ? 
                                                                       __Vtemp2[0U]
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                         ? 
                                                                        __Vtemp3[0U]
                                                                         : 
                                                                        ((2U 
                                                                          == (IData)(vlSelf->core__DOT__exe_reg_ctrl_alu_op))
                                                                          ? 
                                                                         __Vtemp5[0U]
                                                                          : 
                                                                         __Vtemp6[0U]))))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->core__DOT__exe_reg_ctrl_cmp_sel))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (((3U 
                                                                         == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                                        | (4U 
                                                                           == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                                        ? (IData)(
                                                                                (vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
                                                                                >> 0x20U))
                                                                        : 
                                                                       __Vtemp28[1U]))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((3U 
                                                                          == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)) 
                                                                         | (4U 
                                                                            == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op)))
                                                                         ? (IData)(vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2)
                                                                         : 
                                                                        __Vtemp28[0U]))))
                                                     : 0ULL));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_31 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1fU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_31 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_29 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1dU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_29 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_30 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1eU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_30 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_27 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1bU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_27 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_28 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1cU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_28 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_19 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x13U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_19 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_18 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x12U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_18 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_17 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x11U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_17 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_16 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x10U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_16 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_26 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x1aU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_26 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_25 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x19U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_25 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_24 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x18U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_24 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_14 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xeU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_14 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_23 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x17U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_23 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_15 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xfU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_15 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_21 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x15U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_21 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_20 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x14U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_20 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_22 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0x16U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_22 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_5 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((5U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_5 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_13 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xdU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_13 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_4 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((4U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_4 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_1 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((1U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_1 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_9 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((9U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_9 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_7 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((7U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_7 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_6 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((6U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_6 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_2 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((2U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_2 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_11 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xbU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_11 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_3 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((3U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_3 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_12 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xcU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_12 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_8 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((8U == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_8 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__RegFile__DOT__gprFile_10 = 0ULL;
    } else if (vlSelf->core__DOT__wb_reg_ctrl_wreg_en) {
        if ((0xaU == (IData)(vlSelf->core__DOT__wb_reg_ctrl_rd))) {
            vlSelf->core__DOT__RegFile__DOT__gprFile_10 
                = vlSelf->core__DOT__wb_reg_wbdata;
        }
    }
    vlSelf->io_wmem_sel = vlSelf->core__DOT__mem_reg_ctrl_wmem_sel;
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_wmem_sel = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_wmem_sel 
                = ((0x37U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                    ? 0U : ((0x17U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                             ? 0U : ((0x6fU == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst))
                                      ? 0U : ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x63U 
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
                                                    : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_620)))))));
        }
    }
    vlSelf->io_wmem_en = vlSelf->core__DOT__mem_reg_ctrl_wmem_en;
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_wmem_en = 0U;
    } else if ((4U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__exe_reg_ctrl_wmem_en = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 2U)))) {
        vlSelf->core__DOT__exe_reg_ctrl_wmem_en = (
                                                   (0x37U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->core__DOT__dec_reg_inst)) 
                                                   & ((0x17U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->core__DOT__dec_reg_inst)) 
                                                      & ((0x6fU 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->core__DOT__dec_reg_inst)) 
                                                         & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_575))));
    }
    vlSelf->io_rmem_sel = vlSelf->core__DOT__mem_reg_ctrl_rmem_sel;
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_rmem_sel = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_rmem_sel 
                = ((0x37U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                    ? 0U : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529));
        }
    }
    vlSelf->io_wmem_data = vlSelf->core__DOT__mem_reg_rs2_data;
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_data2 = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_data2 = ((0U 
                                                 == (IData)(vlSelf->core__DOT__Decoder_io_op2_sel))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->core__DOT__rs2_sel))
                                                  ? vlSelf->core__DOT__mem_reg_alu_data
                                                  : vlSelf->core__DOT___rs2_data_T_2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->core__DOT__Decoder_io_op2_sel))
                                                  ? vlSelf->core__DOT__ImmSext_io_imm
                                                  : (QData)((IData)(
                                                                    ((2U 
                                                                      == (IData)(vlSelf->core__DOT__Decoder_io_op2_sel))
                                                                      ? 4U
                                                                      : 0U)))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_data1 = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_data1 = ((0U 
                                                 == (IData)(vlSelf->core__DOT__Decoder_io_op1_sel))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->core__DOT__rs1_sel))
                                                  ? vlSelf->core__DOT__mem_reg_alu_data
                                                  : vlSelf->core__DOT___rs1_data_T_2)
                                                 : (QData)((IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelf->core__DOT__Decoder_io_op1_sel))
                                                                     ? vlSelf->core__DOT__if_reg_pc
                                                                     : 0U))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_cmp_sel = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_cmp_sel 
                = ((0x37U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                    ? 0U : ((0x17U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                             ? 0U : ((0x6fU == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst))
                                      ? 0U : ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_238)))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_alu_op = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_alu_op 
                = ((0x37U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                    ? 0U : ((0x17U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                             ? 0U : ((0x6fU == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst))
                                      ? 0U : ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : ((0x63U 
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
                                                        : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_376)))))))))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_walu_op = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_walu_op 
                = ((0x37U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                    ? 0U : ((0x17U == (0x7fU & vlSelf->core__DOT__dec_reg_inst))
                             ? 0U : ((0x6fU == (0x7fU 
                                                & vlSelf->core__DOT__dec_reg_inst))
                                      ? 0U : ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->core__DOT__dec_reg_inst))
                                               ? 0U
                                               : (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_430)))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_rs2_data = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_rs2_data = (
                                                   (1U 
                                                    == (IData)(vlSelf->core__DOT__rs2_sel))
                                                    ? vlSelf->core__DOT__mem_reg_alu_data
                                                    : vlSelf->core__DOT___rs2_data_T_2);
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__wb_reg_wbdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->io_ctrl_flush)))) {
        if ((1U & (~ (IData)(vlSelf->io_ctrl_hold)))) {
            vlSelf->core__DOT__wb_reg_wbdata = ((IData)(vlSelf->core__DOT__mem_reg_ctrl_rmem_en)
                                                 ? vlSelf->io_rmem_data
                                                 : vlSelf->core__DOT__mem_reg_alu_data);
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__wb_reg_ctrl_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->io_ctrl_flush)))) {
        if ((1U & (~ (IData)(vlSelf->io_ctrl_hold)))) {
            vlSelf->core__DOT__wb_reg_ctrl_rd = vlSelf->core__DOT__mem_reg_ctrl_rd;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__wb_reg_ctrl_wreg_en = 0U;
    } else if ((1U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__wb_reg_ctrl_wreg_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->io_ctrl_hold)))) {
        vlSelf->core__DOT__wb_reg_ctrl_wreg_en = vlSelf->core__DOT__mem_reg_ctrl_wreg_en;
    }
    vlSelf->core__DOT__mem_reg_alu_data = __Vdly__core__DOT__mem_reg_alu_data;
    if (vlSelf->reset) {
        vlSelf->core__DOT__if_reg_pc = 0x80000000U;
    } else if ((0x10U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__if_reg_pc = 0x80000000U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 4U)))) {
        vlSelf->core__DOT__if_reg_pc = ((((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)) 
                                          | (2U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))) 
                                         | (3U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type)))
                                         ? ((1U == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                             ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                             : ((2U 
                                                 == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                                 ? vlSelf->core__DOT__Transfer__DOT___io_pc_next_T_4
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->core__DOT__Transfer__DOT__pc_type))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & ((IData)(vlSelf->core__DOT__Transfer_io_rs1_data) 
                                                     + (IData)(vlSelf->core__DOT__ImmSext_io_imm)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->core__DOT__dec_reg_pc))))
                                         : vlSelf->core__DOT___if_reg_pc_T_1);
    }
    vlSelf->core__DOT__CMP_Module__DOT__walu__DOT__walu_data2 
        = ((3U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
            ? (QData)((IData)(((IData)(vlSelf->core__DOT__exe_reg_data1) 
                               >> (0x1fU & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
            : ((4U == (IData)(vlSelf->core__DOT__exe_reg_ctrl_walu_op))
                ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->core__DOT__exe_reg_data1), 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->core__DOT__exe_reg_data2)))))
                : 0ULL));
    vlSelf->io_rmem_addr = (IData)(vlSelf->core__DOT__mem_reg_alu_data);
    vlSelf->io_wmem_addr = (IData)(vlSelf->core__DOT__mem_reg_alu_data);
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_rmem_en = 0U;
    } else if ((2U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__mem_reg_ctrl_rmem_en = 0U;
    } else if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
        vlSelf->core__DOT__mem_reg_ctrl_rmem_en = vlSelf->core__DOT__exe_reg_ctrl_rmem_en;
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_rd = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            vlSelf->core__DOT__mem_reg_ctrl_rd = vlSelf->core__DOT__exe_reg_ctrl_rd;
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__mem_reg_ctrl_wreg_en = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 1U)))) {
        if ((0U == (IData)(vlSelf->io_ctrl_hold))) {
            vlSelf->core__DOT__mem_reg_ctrl_wreg_en 
                = vlSelf->core__DOT__exe_reg_ctrl_wreg_en;
        }
    }
    vlSelf->core__DOT__dec_reg_pc = __Vdly__core__DOT__dec_reg_pc;
    vlSelf->core__DOT___if_reg_pc_T_1 = ((IData)(4U) 
                                         + vlSelf->core__DOT__if_reg_pc);
    vlSelf->io_inst_addr = vlSelf->core__DOT__if_reg_pc;
    vlSelf->io_rmem_en = vlSelf->core__DOT__mem_reg_ctrl_rmem_en;
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_rmem_en = 0U;
    } else if ((4U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__exe_reg_ctrl_rmem_en = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 2U)))) {
        vlSelf->core__DOT__exe_reg_ctrl_rmem_en = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->core__DOT__dec_reg_inst))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_529)));
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_rd = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_flush) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                      >> 2U)))) {
            vlSelf->core__DOT__exe_reg_ctrl_rd = (0x1fU 
                                                  & (vlSelf->core__DOT__dec_reg_inst 
                                                     >> 7U));
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__exe_reg_ctrl_wreg_en = 0U;
    } else if ((4U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__exe_reg_ctrl_wreg_en = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 2U)))) {
        vlSelf->core__DOT__exe_reg_ctrl_wreg_en = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->core__DOT__dec_reg_inst)) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->core__DOT__dec_reg_inst)) 
                                                      | ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->core__DOT__dec_reg_inst)) 
                                                         | ((0x67U 
                                                             == 
                                                             (0x707fU 
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
                                                                                & (IData)(vlSelf->core__DOT__Decoder__DOT___ctrl_signals_T_654)))))))))))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__dec_reg_inst = 0x13U;
    } else if ((8U & (IData)(vlSelf->io_ctrl_flush))) {
        vlSelf->core__DOT__dec_reg_inst = 0x13U;
    } else if ((1U & (~ ((IData)(vlSelf->io_ctrl_hold) 
                         >> 3U)))) {
        vlSelf->core__DOT__dec_reg_inst = vlSelf->io_inst;
    }
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

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vcore___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vcore___024root___change_request_1(Vcore___024root* vlSelf);

VL_INLINE_OPT QData Vcore___024root___change_request(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___change_request\n"); );
    // Body
    return (Vcore___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcore___024root___change_request_1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ctrl_flush & 0xe0U))) {
        Verilated::overWidthError("io_ctrl_flush");}
    if (VL_UNLIKELY((vlSelf->io_ctrl_hold & 0xe0U))) {
        Verilated::overWidthError("io_ctrl_hold");}
}
#endif  // VL_DEBUG
