// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(button,2,0);
        VL_IN8(a,4,0);
        VL_IN8(b,4,0);
        VL_OUT8(s,4,0);
        VL_OUT8(out_c,0,0);
        VL_OUT8(zero,0,0);
        VL_OUT8(overflow,0,0);
        VL_OUT8(segA,6,0);
        VL_OUT8(segB,6,0);
        VL_OUT8(segC,6,0);
        VL_OUT8(segD,6,0);
        VL_OUT8(segE,6,0);
        VL_OUT8(segF,6,0);
        VL_OUT8(segG,6,0);
        VL_OUT8(segH,6,0);
        CData/*0:0*/ top__DOT____Vlvbound_hf0824abe__0;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__0__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__0__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__1__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__1__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__3__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__3__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__4__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__4__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__5__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__5__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__7__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__7__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__8__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__8__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__9__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__9__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__11__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__11__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__12__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__12__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__13__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__13__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__15__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__15__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__16__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__16__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__17__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__17__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__19__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__19__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__20__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__20__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__21__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__21__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__23__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__23__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__24__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__24__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__25__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__25__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__27__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__27__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__28__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__28__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__29__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__29__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__31__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__31__x;
    };
    struct {
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__32__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__32__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__33__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__33__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__35__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__35__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__36__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__36__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__37__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__37__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__39__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__39__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__40__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__40__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__41__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__41__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__43__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__43__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__44__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__44__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__45__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__45__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__47__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__47__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__48__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__48__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__49__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__49__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__51__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__51__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__52__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__52__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__53__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__53__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__55__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__55__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__56__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__56__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__57__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__57__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__59__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__59__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__60__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__60__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__61__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__61__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__63__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__63__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__64__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__64__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__65__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__65__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__67__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__67__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__68__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__68__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__69__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__69__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__71__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__71__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__72__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__72__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__73__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__73__x;
    };
    struct {
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__75__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__75__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__76__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__76__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__77__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__77__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__79__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__79__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__80__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__80__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__81__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__81__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__83__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__83__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__84__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__84__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__85__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__85__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__87__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__87__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__88__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__88__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__89__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__89__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__91__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__91__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__92__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__92__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__93__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__93__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__95__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__95__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__96__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__96__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__97__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__97__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__99__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__99__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__100__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__100__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__101__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__101__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__103__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__103__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__104__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__104__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__105__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__105__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__107__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__107__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__108__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__108__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__109__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__109__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__111__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__111__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__112__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__112__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__113__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__113__x;
        CData/*6:0*/ __Vfunc_top__DOT__seg_led__115__Vfuncout;
        CData/*3:0*/ __Vfunc_top__DOT__seg_led__115__x;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(in,9,0);
    };
    struct {
        IData/*31:0*/ top__DOT__unnamedblk1__DOT__diff_b;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
