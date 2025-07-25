// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODE__SYMS_H_
#define VERILATED_VENCODE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vencode.h"

// INCLUDE MODULE CLASSES
#include "Vencode___024root.h"

// SYMS CLASS (contains all model state)
class Vencode__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vencode* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vencode___024root              TOP;

    // CONSTRUCTORS
    Vencode__Syms(VerilatedContext* contextp, const char* namep, Vencode* modelp);
    ~Vencode__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
