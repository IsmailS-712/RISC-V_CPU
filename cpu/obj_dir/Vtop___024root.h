// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*0:0*/ top__DOT__Resultsrc;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*2:0*/ top__DOT__ALUctrl;
    CData/*1:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__reg_jump;
    CData/*1:0*/ top__DOT__control__DOT__ALUop;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__Regop1;
    IData/*31:0*/ top__DOT__Regop2;
    IData/*31:0*/ top__DOT__ALUout;
    IData/*31:0*/ top__DOT__pc__DOT__next_PC;
    IData/*31:0*/ top__DOT__ALU__DOT__ALUop2;
    IData/*31:0*/ top__DOT__data_mem__DOT__RD;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__ALUout;
    VL_OUT(a0[32],31,0);
    VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__register__a0;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__register__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 131072> top__DOT__data_mem__DOT__data_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
