// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecodeloop.h for the primary calling header

#include "verilated.h"

#include "Vdecodeloop__Syms.h"
#include "Vdecodeloop___024root.h"

void Vdecodeloop___024root___ctor_var_reset(Vdecodeloop___024root* vlSelf);

Vdecodeloop___024root::Vdecodeloop___024root(Vdecodeloop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdecodeloop___024root___ctor_var_reset(this);
}

void Vdecodeloop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdecodeloop___024root::~Vdecodeloop___024root() {
}
