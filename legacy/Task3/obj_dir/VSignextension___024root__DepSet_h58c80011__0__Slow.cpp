// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignextension.h for the primary calling header

#include "verilated.h"

#include "VSignextension___024root.h"

VL_ATTR_COLD void VSignextension___024root___eval_initial(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___eval_initial\n"); );
}

void VSignextension___024root___combo__TOP__0(VSignextension___024root* vlSelf);

VL_ATTR_COLD void VSignextension___024root___eval_settle(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___eval_settle\n"); );
    // Body
    VSignextension___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSignextension___024root___final(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___final\n"); );
}

VL_ATTR_COLD void VSignextension___024root___ctor_var_reset(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Imm = VL_RAND_RESET_I(25);
    vlSelf->Immsrc = VL_RAND_RESET_I(2);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
}
