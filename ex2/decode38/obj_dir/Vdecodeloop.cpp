// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecodeloop.h"
#include "Vdecodeloop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecodeloop::Vdecodeloop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecodeloop__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecodeloop::Vdecodeloop(const char* _vcname__)
    : Vdecodeloop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecodeloop::~Vdecodeloop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecodeloop___024root___eval_debug_assertions(Vdecodeloop___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecodeloop___024root___eval_static(Vdecodeloop___024root* vlSelf);
void Vdecodeloop___024root___eval_initial(Vdecodeloop___024root* vlSelf);
void Vdecodeloop___024root___eval_settle(Vdecodeloop___024root* vlSelf);
void Vdecodeloop___024root___eval(Vdecodeloop___024root* vlSelf);

void Vdecodeloop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecodeloop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecodeloop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecodeloop___024root___eval_static(&(vlSymsp->TOP));
        Vdecodeloop___024root___eval_initial(&(vlSymsp->TOP));
        Vdecodeloop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecodeloop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecodeloop::eventsPending() { return false; }

uint64_t Vdecodeloop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecodeloop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecodeloop___024root___eval_final(Vdecodeloop___024root* vlSelf);

VL_ATTR_COLD void Vdecodeloop::final() {
    Vdecodeloop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecodeloop::hierName() const { return vlSymsp->name(); }
const char* Vdecodeloop::modelName() const { return "Vdecodeloop"; }
unsigned Vdecodeloop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdecodeloop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdecodeloop___024root__trace_init_top(Vdecodeloop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecodeloop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecodeloop___024root*>(voidSelf);
    Vdecodeloop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdecodeloop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdecodeloop___024root__trace_register(Vdecodeloop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecodeloop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdecodeloop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdecodeloop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
