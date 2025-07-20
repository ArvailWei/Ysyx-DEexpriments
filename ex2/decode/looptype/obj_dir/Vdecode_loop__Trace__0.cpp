// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode_loop__Syms.h"


void Vdecode_loop___024root__trace_chg_sub_0(Vdecode_loop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdecode_loop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_loop___024root__trace_chg_top_0\n"); );
    // Init
    Vdecode_loop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_loop___024root*>(voidSelf);
    Vdecode_loop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecode_loop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdecode_loop___024root__trace_chg_sub_0(Vdecode_loop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode_loop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_loop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->x),3);
    bufp->chgBit(oldp+1,(vlSelf->en));
    bufp->chgCData(oldp+2,(vlSelf->y),8);
    bufp->chgIData(oldp+3,(vlSelf->decode_loop__DOT__i),32);
}

void Vdecode_loop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_loop___024root__trace_cleanup\n"); );
    // Init
    Vdecode_loop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode_loop___024root*>(voidSelf);
    Vdecode_loop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
