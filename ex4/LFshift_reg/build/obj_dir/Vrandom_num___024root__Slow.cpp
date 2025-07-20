// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom_num.h for the primary calling header

#include "verilated.h"

#include "Vrandom_num__Syms.h"
#include "Vrandom_num___024root.h"

void Vrandom_num___024root___ctor_var_reset(Vrandom_num___024root* vlSelf);

Vrandom_num___024root::Vrandom_num___024root(Vrandom_num__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrandom_num___024root___ctor_var_reset(this);
}

void Vrandom_num___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrandom_num___024root::~Vrandom_num___024root() {
}
