// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom_num.h for the primary calling header

#include "verilated.h"

#include "Vrandom_num___024root.h"

void Vrandom_num___024root___eval_act(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vrandom_num___024root___nba_sequent__TOP__0(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__random_num__DOT__myclk__DOT__count;
    __Vdly__random_num__DOT__myclk__DOT__count = 0;
    // Body
    __Vdly__random_num__DOT__myclk__DOT__count = vlSelf->random_num__DOT__myclk__DOT__count;
    if ((0x4c4b40U == vlSelf->random_num__DOT__myclk__DOT__count)) {
        __Vdly__random_num__DOT__myclk__DOT__count = 0U;
        vlSelf->random_num__DOT__i = 1U;
    } else {
        __Vdly__random_num__DOT__myclk__DOT__count 
            = ((IData)(1U) + vlSelf->random_num__DOT__myclk__DOT__count);
        vlSelf->random_num__DOT__i = 0U;
    }
    vlSelf->random_num__DOT__myclk__DOT__count = __Vdly__random_num__DOT__myclk__DOT__count;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vrandom_num__ConstPool__TABLE_h25bdbd99_0;

VL_INLINE_OPT void Vrandom_num___024root___nba_sequent__TOP__1(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__dout;
    __Vdly__dout = 0;
    CData/*0:0*/ __Vdly__random_num__DOT__myreg__DOT__dcul;
    __Vdly__random_num__DOT__myreg__DOT__dcul = 0;
    // Body
    __Vdly__random_num__DOT__myreg__DOT__dcul = vlSelf->random_num__DOT__myreg__DOT__dcul;
    __Vdly__dout = vlSelf->dout;
    if (vlSelf->st) {
        __Vdly__dout = vlSelf->din;
        __Vdly__random_num__DOT__myreg__DOT__dcul = 0U;
    } else {
        __Vdly__random_num__DOT__myreg__DOT__dcul = 0U;
        __Vdly__dout = (((IData)(vlSelf->random_num__DOT__myreg__DOT__dcul) 
                         << 7U) | (0x7fU & ((IData)(vlSelf->dout) 
                                            >> 1U)));
        __Vdly__random_num__DOT__myreg__DOT__dcul = 
            (1U & VL_REDXOR_8((0x1dU & (IData)(vlSelf->dout))));
    }
    vlSelf->random_num__DOT__myreg__DOT__dcul = __Vdly__random_num__DOT__myreg__DOT__dcul;
    vlSelf->dout = __Vdly__dout;
    vlSelf->led = vlSelf->dout;
    __Vtableidx1 = (0xfU & ((IData)(vlSelf->dout) >> 4U));
    vlSelf->seg1 = Vrandom_num__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->dout));
    vlSelf->seg0 = Vrandom_num__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx2];
}

void Vrandom_num___024root___eval_nba(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrandom_num___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrandom_num___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vrandom_num___024root___eval_triggers__act(Vrandom_num___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__act(Vrandom_num___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__nba(Vrandom_num___024root* vlSelf);
#endif  // VL_DEBUG

void Vrandom_num___024root___eval(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            Vrandom_num___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrandom_num___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/arvail/my_test/ex4/LFshift_reg/vsrc/random_num.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrandom_num___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrandom_num___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/my_test/ex4/LFshift_reg/vsrc/random_num.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrandom_num___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrandom_num___024root___eval_debug_assertions(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->st & 0xfeU))) {
        Verilated::overWidthError("st");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
