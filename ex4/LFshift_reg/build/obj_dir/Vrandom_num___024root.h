// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrandom_num.h for the primary calling header

#ifndef VERILATED_VRANDOM_NUM___024ROOT_H_
#define VERILATED_VRANDOM_NUM___024ROOT_H_  // guard

#include "verilated.h"

class Vrandom_num__Syms;

class Vrandom_num___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ random_num__DOT__i;
    VL_IN8(st,0,0);
    VL_IN8(din,7,0);
    VL_OUT8(dout,7,0);
    VL_OUT8(led,7,0);
    VL_OUT8(seg0,6,0);
    VL_OUT8(seg1,6,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ random_num__DOT__myreg__DOT__dcul;
    CData/*0:0*/ __Vtrigrprev__TOP__random_num__DOT__i;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ random_num__DOT__myclk__DOT__count;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrandom_num__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrandom_num___024root(Vrandom_num__Syms* symsp, const char* v__name);
    ~Vrandom_num___024root();
    VL_UNCOPYABLE(Vrandom_num___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
