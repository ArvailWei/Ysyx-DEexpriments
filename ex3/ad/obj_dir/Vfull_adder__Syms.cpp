// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfull_adder__Syms.h"
#include "Vfull_adder.h"
#include "Vfull_adder___024root.h"

// FUNCTIONS
Vfull_adder__Syms::~Vfull_adder__Syms()
{
}

Vfull_adder__Syms::Vfull_adder__Syms(VerilatedContext* contextp, const char* namep, Vfull_adder* modelp)
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
