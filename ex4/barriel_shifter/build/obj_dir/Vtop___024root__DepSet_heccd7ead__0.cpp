// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h25bdbd99_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__dout;
    __Vdly__dout = 0;
    // Body
    __Vdly__dout = vlSelf->dout;
    if (vlSelf->st) {
        __Vdly__dout = vlSelf->din;
    } else if ((1U & (~ (IData)(vlSelf->st)))) {
        __Vdly__dout = ((IData)(vlSelf->select_ult)
                         ? ((IData)(vlSelf->select_dir)
                             ? ((1U == (IData)(vlSelf->shamt))
                                 ? (0xfeU & ((IData)(vlSelf->dout) 
                                             << 1U))
                                 : ((3U == (IData)(vlSelf->shamt))
                                     ? (0xfcU & ((IData)(vlSelf->dout) 
                                                 << 2U))
                                     : ((7U == (IData)(vlSelf->shamt))
                                         ? (0xf8U & 
                                            ((IData)(vlSelf->dout) 
                                             << 3U))
                                         : (IData)(vlSelf->dout))))
                             : ((1U == (IData)(vlSelf->shamt))
                                 ? ((0x80U & (IData)(vlSelf->dout)) 
                                    | (0x7fU & ((IData)(vlSelf->dout) 
                                                >> 1U)))
                                 : ((3U == (IData)(vlSelf->shamt))
                                     ? ((0x80U & (IData)(vlSelf->dout)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->dout) 
                                             >> 1U)) 
                                           | (0x3fU 
                                              & ((IData)(vlSelf->dout) 
                                                 >> 2U))))
                                     : ((7U == (IData)(vlSelf->shamt))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->dout)) 
                                            | ((0x40U 
                                                & ((IData)(vlSelf->dout) 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   & ((IData)(vlSelf->dout) 
                                                      >> 2U)) 
                                                  | (0x1fU 
                                                     & ((IData)(vlSelf->dout) 
                                                        >> 3U)))))
                                         : (IData)(vlSelf->dout)))))
                         : ((IData)(vlSelf->select_dir)
                             ? ((1U == (IData)(vlSelf->shamt))
                                 ? (0xfeU & ((IData)(vlSelf->dout) 
                                             << 1U))
                                 : ((3U == (IData)(vlSelf->shamt))
                                     ? (0xfcU & ((IData)(vlSelf->dout) 
                                                 << 2U))
                                     : ((7U == (IData)(vlSelf->shamt))
                                         ? (0xf8U & 
                                            ((IData)(vlSelf->dout) 
                                             << 3U))
                                         : (IData)(vlSelf->dout))))
                             : ((1U == (IData)(vlSelf->shamt))
                                 ? (0x7fU & ((IData)(vlSelf->dout) 
                                             >> 1U))
                                 : ((3U == (IData)(vlSelf->shamt))
                                     ? (0x3fU & ((IData)(vlSelf->dout) 
                                                 >> 2U))
                                     : ((7U == (IData)(vlSelf->shamt))
                                         ? (0x1fU & 
                                            ((IData)(vlSelf->dout) 
                                             >> 3U))
                                         : (IData)(vlSelf->dout))))));
    }
    vlSelf->dout = __Vdly__dout;
    vlSelf->led_high = (0xfU & ((IData)(vlSelf->dout) 
                                >> 4U));
    vlSelf->led_low = (0xfU & (IData)(vlSelf->dout));
    __Vtableidx1 = vlSelf->led_high;
    vlSelf->segA = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->led_low;
    vlSelf->segB = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx2];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/arvail/my_test/ex4/barriel_shifter/vsrc/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/my_test/ex4/barriel_shifter/vsrc/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->select_dir & 0xfeU))) {
        Verilated::overWidthError("select_dir");}
    if (VL_UNLIKELY((vlSelf->st & 0xfeU))) {
        Verilated::overWidthError("st");}
    if (VL_UNLIKELY((vlSelf->select_ult & 0xfeU))) {
        Verilated::overWidthError("select_ult");}
    if (VL_UNLIKELY((vlSelf->shamt & 0xf8U))) {
        Verilated::overWidthError("shamt");}
}
#endif  // VL_DEBUG
