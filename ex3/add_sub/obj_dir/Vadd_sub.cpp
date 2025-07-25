// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadd_sub.h"
#include "Vadd_sub__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadd_sub::Vadd_sub(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vadd_sub__Syms(contextp(), _vcname__, this)}
    , in_c{vlSymsp->TOP.in_c}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , out_c{vlSymsp->TOP.out_c}
    , overflow{vlSymsp->TOP.overflow}
    , zero{vlSymsp->TOP.zero}
    , s{vlSymsp->TOP.s}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vadd_sub::Vadd_sub(const char* _vcname__)
    : Vadd_sub(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vadd_sub::~Vadd_sub() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vadd_sub___024root___eval_debug_assertions(Vadd_sub___024root* vlSelf);
#endif  // VL_DEBUG
void Vadd_sub___024root___eval_static(Vadd_sub___024root* vlSelf);
void Vadd_sub___024root___eval_initial(Vadd_sub___024root* vlSelf);
void Vadd_sub___024root___eval_settle(Vadd_sub___024root* vlSelf);
void Vadd_sub___024root___eval(Vadd_sub___024root* vlSelf);

void Vadd_sub::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadd_sub::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadd_sub___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vadd_sub___024root___eval_static(&(vlSymsp->TOP));
        Vadd_sub___024root___eval_initial(&(vlSymsp->TOP));
        Vadd_sub___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vadd_sub___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vadd_sub::eventsPending() { return false; }

uint64_t Vadd_sub::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vadd_sub::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vadd_sub___024root___eval_final(Vadd_sub___024root* vlSelf);

VL_ATTR_COLD void Vadd_sub::final() {
    Vadd_sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vadd_sub::hierName() const { return vlSymsp->name(); }
const char* Vadd_sub::modelName() const { return "Vadd_sub"; }
unsigned Vadd_sub::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vadd_sub::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vadd_sub___024root__trace_init_top(Vadd_sub___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadd_sub___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_sub___024root*>(voidSelf);
    Vadd_sub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vadd_sub___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vadd_sub___024root__trace_register(Vadd_sub___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadd_sub::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vadd_sub::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vadd_sub___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
