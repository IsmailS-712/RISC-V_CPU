// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem.h for the primary calling header

#ifndef VERILATED_VDATA_MEM___024ROOT_H_
#define VERILATED_VDATA_MEM___024ROOT_H_  // guard

#include "verilated.h"

class Vdata_mem__Syms;

class Vdata_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(WE,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(A,31,0);
    VL_IN(WD,31,0);
    VL_OUT(RD,31,0);
    IData/*31:0*/ data_mem__DOT____Vlvbound_h13afd906__0;
    VlUnpacked<IData/*31:0*/, 6> data_mem__DOT__data_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdata_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* name);
    ~Vdata_mem___024root();
    VL_UNCOPYABLE(Vdata_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
