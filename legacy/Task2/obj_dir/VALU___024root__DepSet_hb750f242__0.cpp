// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___combo__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ALU__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                 ? vlSelf->ImmOp : vlSelf->RegOp2);
    vlSelf->ALUout = ((4U & (IData)(vlSelf->ALUctrl))
                       ? ((2U & (IData)(vlSelf->ALUctrl))
                           ? 0U : ((1U & (IData)(vlSelf->ALUctrl))
                                    ? (vlSelf->ALUop1 
                                       < vlSelf->ALU__DOT__ALUop2)
                                    : 0U)) : ((2U & (IData)(vlSelf->ALUctrl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ALUctrl))
                                                   ? 
                                                  (vlSelf->ALUop1 
                                                   | vlSelf->ALU__DOT__ALUop2)
                                                   : 
                                                  (vlSelf->ALUop1 
                                                   & vlSelf->ALU__DOT__ALUop2))
                                               : ((1U 
                                                   & (IData)(vlSelf->ALUctrl))
                                                   ? 
                                                  (vlSelf->ALUop1 
                                                   - vlSelf->ALU__DOT__ALUop2)
                                                   : 
                                                  (vlSelf->ALUop1 
                                                   + vlSelf->ALU__DOT__ALUop2))));
    vlSelf->EQ = (0U == vlSelf->ALUout);
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf8U))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
}
#endif  // VL_DEBUG
