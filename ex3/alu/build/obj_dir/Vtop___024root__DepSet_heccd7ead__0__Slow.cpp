// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/ysyx-workbench/npc/my_test/ex3/alu/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->button = 0;
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->s = 0;
    vlSelf->out_c = 0;
    vlSelf->zero = 0;
    vlSelf->overflow = 0;
    vlSelf->in = 0;
    vlSelf->segA = 0;
    vlSelf->segB = 0;
    vlSelf->segC = 0;
    vlSelf->segD = 0;
    vlSelf->segE = 0;
    vlSelf->segF = 0;
    vlSelf->segG = 0;
    vlSelf->segH = 0;
    vlSelf->top__DOT__unnamedblk1__DOT__diff_b = 0;
    vlSelf->top__DOT____Vlvbound_hf0824abe__0 = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__0__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__1__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__3__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__3__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__4__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__4__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__5__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__5__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__7__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__7__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__8__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__8__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__9__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__9__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__11__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__11__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__12__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__12__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__13__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__13__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__15__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__15__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__16__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__16__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__17__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__17__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__19__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__19__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__20__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__20__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__21__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__21__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__23__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__23__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__24__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__24__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__25__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__25__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__27__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__27__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__28__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__28__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__29__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__29__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__31__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__31__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__32__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__32__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__33__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__33__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__35__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__35__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__36__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__36__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__37__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__37__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__39__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__39__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__40__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__40__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__41__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__41__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__43__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__43__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__44__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__44__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__45__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__45__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__47__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__47__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__48__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__48__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__49__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__49__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__51__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__51__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__52__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__52__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__53__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__53__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__55__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__55__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__56__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__56__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__57__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__57__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__59__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__59__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__60__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__60__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__61__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__61__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__63__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__63__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__64__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__64__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__65__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__65__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__67__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__67__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__68__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__68__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__69__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__69__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__71__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__71__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__72__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__72__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__73__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__73__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__75__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__75__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__76__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__76__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__77__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__77__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__79__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__79__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__80__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__80__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__81__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__81__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__83__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__83__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__84__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__84__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__85__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__85__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__87__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__87__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__88__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__88__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__89__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__89__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__91__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__91__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__92__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__92__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__93__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__93__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__95__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__95__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__96__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__96__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__97__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__97__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__99__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__99__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__100__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__100__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__101__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__101__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__103__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__103__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__104__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__104__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__105__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__105__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__107__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__107__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__108__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__108__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__109__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__109__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__111__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__111__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__112__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__112__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__113__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__113__x = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__115__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__seg_led__115__x = 0;
}
