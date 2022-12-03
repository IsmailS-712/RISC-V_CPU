// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "verilated.h"

#include "Vregister___024root.h"

VL_ATTR_COLD void Vregister___024root___settle__TOP__0(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0[4U] = vlSelf->register__DOT__reg_array
        [4U];
    vlSelf->a0[3U] = vlSelf->register__DOT__reg_array
        [3U];
    vlSelf->a0[2U] = vlSelf->register__DOT__reg_array
        [2U];
    vlSelf->a0[1U] = vlSelf->register__DOT__reg_array
        [1U];
    vlSelf->a0[0U] = vlSelf->register__DOT__reg_array
        [0U];
    vlSelf->RD1 = ((4U >= (7U & (IData)(vlSelf->AD1)))
                    ? vlSelf->register__DOT__reg_array
                   [(7U & (IData)(vlSelf->AD1))] : 0U);
    vlSelf->RD2 = ((4U >= (7U & (IData)(vlSelf->AD2)))
                    ? vlSelf->register__DOT__reg_array
                   [(7U & (IData)(vlSelf->AD2))] : 0U);
}

VL_ATTR_COLD void Vregister___024root___eval_initial(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vregister___024root___eval_settle(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_settle\n"); );
    // Body
    Vregister___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vregister___024root___final(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___final\n"); );
}

VL_ATTR_COLD void Vregister___024root___ctor_var_reset(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->AD1 = VL_RAND_RESET_I(5);
    vlSelf->AD2 = VL_RAND_RESET_I(5);
    vlSelf->AD3 = VL_RAND_RESET_I(5);
    vlSelf->WE3 = VL_RAND_RESET_I(1);
    vlSelf->WD3 = VL_RAND_RESET_I(32);
    vlSelf->RD1 = VL_RAND_RESET_I(32);
    vlSelf->RD2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->a0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->register__DOT____Vlvbound_h1f17ddc1__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
