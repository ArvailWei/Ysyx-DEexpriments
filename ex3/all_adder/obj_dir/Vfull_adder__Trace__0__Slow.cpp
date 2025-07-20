// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfull_adder__Syms.h"


VL_ATTR_COLD void Vfull_adder___024root__trace_init_sub__TOP__0(Vfull_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"in_c", false,-1);
    tracep->declBit(c+4,"out_s", false,-1);
    tracep->declBit(c+5,"out_c", false,-1);
    tracep->pushNamePrefix("full_adder ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"in_c", false,-1);
    tracep->declBit(c+4,"out_s", false,-1);
    tracep->declBit(c+5,"out_c", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_init_top(Vfull_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_init_top\n"); );
    // Body
    Vfull_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfull_adder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfull_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfull_adder___024root__trace_register(Vfull_adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfull_adder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfull_adder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfull_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_full_sub_0(Vfull_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfull_adder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_full_top_0\n"); );
    // Init
    Vfull_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder___024root*>(voidSelf);
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfull_adder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_full_sub_0(Vfull_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->in_c));
    bufp->fullBit(oldp+4,(vlSelf->out_s));
    bufp->fullBit(oldp+5,(vlSelf->out_c));
}
