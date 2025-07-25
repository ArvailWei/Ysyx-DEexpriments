// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfull_adder.h"
#include "Vfull_adder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfull_adder::Vfull_adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfull_adder__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , in_c{vlSymsp->TOP.in_c}
    , out_s{vlSymsp->TOP.out_s}
    , out_c{vlSymsp->TOP.out_c}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfull_adder::Vfull_adder(const char* _vcname__)
    : Vfull_adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfull_adder::~Vfull_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfull_adder___024root___eval_debug_assertions(Vfull_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vfull_adder___024root___eval_static(Vfull_adder___024root* vlSelf);
void Vfull_adder___024root___eval_initial(Vfull_adder___024root* vlSelf);
void Vfull_adder___024root___eval_settle(Vfull_adder___024root* vlSelf);
void Vfull_adder___024root___eval(Vfull_adder___024root* vlSelf);

void Vfull_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfull_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfull_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfull_adder___024root___eval_static(&(vlSymsp->TOP));
        Vfull_adder___024root___eval_initial(&(vlSymsp->TOP));
        Vfull_adder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfull_adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfull_adder::eventsPending() { return false; }

uint64_t Vfull_adder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfull_adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfull_adder___024root___eval_final(Vfull_adder___024root* vlSelf);

VL_ATTR_COLD void Vfull_adder::final() {
    Vfull_adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfull_adder::hierName() const { return vlSymsp->name(); }
const char* Vfull_adder::modelName() const { return "Vfull_adder"; }
unsigned Vfull_adder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfull_adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfull_adder___024root__trace_init_top(Vfull_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfull_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder___024root*>(voidSelf);
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfull_adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfull_adder___024root__trace_register(Vfull_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfull_adder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfull_adder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfull_adder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
