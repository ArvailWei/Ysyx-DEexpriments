// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRANDOM_NUM__SYMS_H_
#define VERILATED_VRANDOM_NUM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrandom_num.h"

// INCLUDE MODULE CLASSES
#include "Vrandom_num___024root.h"

// SYMS CLASS (contains all model state)
class Vrandom_num__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrandom_num* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrandom_num___024root          TOP;

    // CONSTRUCTORS
    Vrandom_num__Syms(VerilatedContext* contextp, const char* namep, Vrandom_num* modelp);
    ~Vrandom_num__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
