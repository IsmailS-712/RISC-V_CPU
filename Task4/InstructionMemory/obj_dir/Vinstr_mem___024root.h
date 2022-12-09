// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstr_mem.h for the primary calling header

#ifndef VERILATED_VINSTR_MEM___024ROOT_H_
#define VERILATED_VINSTR_MEM___024ROOT_H_  // guard

#include "verilated.h"

class Vinstr_mem__Syms;

class Vinstr_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(A,31,0);
    VL_OUT(RD,31,0);
    VlUnpacked<CData/*7:0*/, 28> instr_mem__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vinstr_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstr_mem___024root(Vinstr_mem__Syms* symsp, const char* name);
    ~Vinstr_mem___024root();
    VL_UNCOPYABLE(Vinstr_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
