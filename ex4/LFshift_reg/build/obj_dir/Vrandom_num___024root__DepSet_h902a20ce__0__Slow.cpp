// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom_num.h for the primary calling header

#include "verilated.h"

#include "Vrandom_num___024root.h"

VL_ATTR_COLD void Vrandom_num___024root___eval_static(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrandom_num___024root___eval_initial(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__random_num__DOT__i = vlSelf->random_num__DOT__i;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vrandom_num___024root___eval_final(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrandom_num___024root___eval_triggers__stl(Vrandom_num___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__stl(Vrandom_num___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___eval_stl(Vrandom_num___024root* vlSelf);

VL_ATTR_COLD void Vrandom_num___024root___eval_settle(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrandom_num___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrandom_num___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/my_test/ex4/LFshift_reg/vsrc/random_num.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrandom_num___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__stl(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vrandom_num__ConstPool__TABLE_h25bdbd99_0;

VL_ATTR_COLD void Vrandom_num___024root___stl_sequent__TOP__0(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->led = vlSelf->dout;
    __Vtableidx1 = (0xfU & ((IData)(vlSelf->dout) >> 4U));
    vlSelf->seg1 = Vrandom_num__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->dout));
    vlSelf->seg0 = Vrandom_num__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vrandom_num___024root___eval_stl(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrandom_num___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__act(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge random_num.i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom_num___024root___dump_triggers__nba(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge random_num.i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrandom_num___024root___ctor_var_reset(Vrandom_num___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom_num__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom_num___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->st = 0;
    vlSelf->din = 0;
    vlSelf->clk = 0;
    vlSelf->dout = 0;
    vlSelf->led = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->rst = 0;
    vlSelf->random_num__DOT__i = 0;
    vlSelf->random_num__DOT__myreg__DOT__dcul = 0;
    vlSelf->random_num__DOT__myclk__DOT__count = 0;
    vlSelf->__Vtrigrprev__TOP__random_num__DOT__i = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
