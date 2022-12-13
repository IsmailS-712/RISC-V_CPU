// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "verilated.h"

#include "Vdata_mem___024root.h"

VL_INLINE_OPT void Vdata_mem___024root___sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__data_mem__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__data_mem__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__data_mem__DOT__data_array__v0;
    // Body
    __Vdlyvset__data_mem__DOT__data_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->WE)))) {
        vlSelf->RD = ((5U >= (7U & (vlSelf->A >> 2U)))
                       ? vlSelf->data_mem__DOT__data_array
                      [(7U & (vlSelf->A >> 2U))] : 0U);
    }
    if (vlSelf->WE) {
        vlSelf->data_mem__DOT____Vlvbound_h13afd906__0 
            = vlSelf->WD;
        if ((5U >= (7U & (vlSelf->A >> 2U)))) {
            __Vdlyvval__data_mem__DOT__data_array__v0 
                = vlSelf->data_mem__DOT____Vlvbound_h13afd906__0;
            __Vdlyvset__data_mem__DOT__data_array__v0 = 1U;
            __Vdlyvdim0__data_mem__DOT__data_array__v0 
                = (7U & (vlSelf->A >> 2U));
        }
    }
    if (__Vdlyvset__data_mem__DOT__data_array__v0) {
        vlSelf->data_mem__DOT__data_array[__Vdlyvdim0__data_mem__DOT__data_array__v0] 
            = __Vdlyvval__data_mem__DOT__data_array__v0;
    }
}

void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdata_mem___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG
