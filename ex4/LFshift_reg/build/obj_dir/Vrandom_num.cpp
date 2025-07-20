// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrandom_num.h"
#include "Vrandom_num__Syms.h"

//============================================================
// Constructors

Vrandom_num::Vrandom_num(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrandom_num__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , st{vlSymsp->TOP.st}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , led{vlSymsp->TOP.led}
    , seg0{vlSymsp->TOP.seg0}
    , seg1{vlSymsp->TOP.seg1}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrandom_num::Vrandom_num(const char* _vcname__)
    : Vrandom_num(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrandom_num::~Vrandom_num() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrandom_num___024root___eval_debug_assertions(Vrandom_num___024root* vlSelf);
#endif  // VL_DEBUG
void Vrandom_num___024root___eval_static(Vrandom_num___024root* vlSelf);
void Vrandom_num___024root___eval_initial(Vrandom_num___024root* vlSelf);
void Vrandom_num___024root___eval_settle(Vrandom_num___024root* vlSelf);
void Vrandom_num___024root___eval(Vrandom_num___024root* vlSelf);

void Vrandom_num::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrandom_num::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrandom_num___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrandom_num___024root___eval_static(&(vlSymsp->TOP));
        Vrandom_num___024root___eval_initial(&(vlSymsp->TOP));
        Vrandom_num___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrandom_num___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrandom_num::eventsPending() { return false; }

uint64_t Vrandom_num::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrandom_num::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrandom_num___024root___eval_final(Vrandom_num___024root* vlSelf);

VL_ATTR_COLD void Vrandom_num::final() {
    Vrandom_num___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrandom_num::hierName() const { return vlSymsp->name(); }
const char* Vrandom_num::modelName() const { return "Vrandom_num"; }
unsigned Vrandom_num::threads() const { return 1; }
