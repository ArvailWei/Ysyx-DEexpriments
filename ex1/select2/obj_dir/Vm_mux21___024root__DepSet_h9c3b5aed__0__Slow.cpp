// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "verilated.h"

#include "Vm_mux21___024root.h"

VL_ATTR_COLD void Vm_mux21___024root___eval_static(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vm_mux21___024root___eval_initial(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vm_mux21___024root___eval_final(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vm_mux21___024root___eval_triggers__stl(Vm_mux21___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__stl(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___eval_stl(Vm_mux21___024root* vlSelf);

VL_ATTR_COLD void Vm_mux21___024root___eval_settle(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vm_mux21___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vm_mux21___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/m_mux21.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vm_mux21___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__stl(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vm_mux21___024root___ico_sequent__TOP__0(Vm_mux21___024root* vlSelf);

VL_ATTR_COLD void Vm_mux21___024root___eval_stl(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vm_mux21___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__ico(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__act(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__nba(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vm_mux21___024root___ctor_var_reset(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
}
