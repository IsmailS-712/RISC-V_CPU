// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class Vregister__Syms;

class Vregister___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(AD1,4,0);
    VL_IN8(AD2,4,0);
    VL_IN8(AD3,4,0);
    VL_IN8(WE3,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(WD3,31,0);
    VL_OUT(RD1,31,0);
    VL_OUT(RD2,31,0);
    IData/*31:0*/ register__DOT____Vlvbound_h1f17ddc1__0;
    VL_OUT(a0[5],31,0);
    VlUnpacked<IData/*31:0*/, 5> register__DOT__reg_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* name);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
