// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrandom_num__Syms.h"
#include "Vrandom_num.h"
#include "Vrandom_num___024root.h"

// FUNCTIONS
Vrandom_num__Syms::~Vrandom_num__Syms()
{
}

Vrandom_num__Syms::Vrandom_num__Syms(VerilatedContext* contextp, const char* namep, Vrandom_num* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
