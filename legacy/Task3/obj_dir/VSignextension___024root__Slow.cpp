// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignextension.h for the primary calling header

#include "verilated.h"

#include "VSignextension__Syms.h"
#include "VSignextension___024root.h"

void VSignextension___024root___ctor_var_reset(VSignextension___024root* vlSelf);

VSignextension___024root::VSignextension___024root(VSignextension__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSignextension___024root___ctor_var_reset(this);
}

void VSignextension___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSignextension___024root::~VSignextension___024root() {
}
