// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "verilated.h"

#include "Vregister___024root.h"

VL_INLINE_OPT void Vregister___024root___sequent__TOP__0(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__register__DOT__reg_array__v0;
    // Body
    __Vdlyvset__register__DOT__reg_array__v0 = 0U;
    if (vlSelf->WE3) {
        vlSelf->register__DOT____Vlvbound_h1f17ddc1__0 
            = vlSelf->WD3;
        if ((4U >= (7U & (IData)(vlSelf->AD3)))) {
            __Vdlyvval__register__DOT__reg_array__v0 
                = vlSelf->register__DOT____Vlvbound_h1f17ddc1__0;
            __Vdlyvset__register__DOT__reg_array__v0 = 1U;
            __Vdlyvdim0__register__DOT__reg_array__v0 
                = (7U & (IData)(vlSelf->AD3));
        }
    }
    if (__Vdlyvset__register__DOT__reg_array__v0) {
        vlSelf->register__DOT__reg_array[__Vdlyvdim0__register__DOT__reg_array__v0] 
            = __Vdlyvval__register__DOT__reg_array__v0;
    }
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
}

VL_INLINE_OPT void Vregister___024root___combo__TOP__0(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->RD1 = ((4U >= (7U & (IData)(vlSelf->AD1)))
                    ? vlSelf->register__DOT__reg_array
                   [(7U & (IData)(vlSelf->AD1))] : 0U);
    vlSelf->RD2 = ((4U >= (7U & (IData)(vlSelf->AD2)))
                    ? vlSelf->register__DOT__reg_array
                   [(7U & (IData)(vlSelf->AD2))] : 0U);
}

void Vregister___024root___eval(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vregister___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vregister___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vregister___024root___eval_debug_assertions(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->AD1 & 0xe0U))) {
        Verilated::overWidthError("AD1");}
    if (VL_UNLIKELY((vlSelf->AD2 & 0xe0U))) {
        Verilated::overWidthError("AD2");}
    if (VL_UNLIKELY((vlSelf->AD3 & 0xe0U))) {
        Verilated::overWidthError("AD3");}
    if (VL_UNLIKELY((vlSelf->WE3 & 0xfeU))) {
        Verilated::overWidthError("WE3");}
}
#endif  // VL_DEBUG
