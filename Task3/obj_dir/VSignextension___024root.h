// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSignextension.h for the primary calling header

#ifndef VERILATED_VSIGNEXTENSION___024ROOT_H_
#define VERILATED_VSIGNEXTENSION___024ROOT_H_  // guard

#include "verilated.h"

class VSignextension__Syms;

class VSignextension___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Immsrc,1,0);
    VL_IN(Imm,31,7);
    VL_OUT(ImmOp,31,0);

    // INTERNAL VARIABLES
    VSignextension__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSignextension___024root(VSignextension__Syms* symsp, const char* name);
    ~VSignextension___024root();
    VL_UNCOPYABLE(VSignextension___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
