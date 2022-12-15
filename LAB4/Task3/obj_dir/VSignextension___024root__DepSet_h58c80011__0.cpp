// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignextension.h for the primary calling header

#include "verilated.h"

#include "VSignextension___024root.h"

VL_INLINE_OPT void VSignextension___024root___combo__TOP__0(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ImmOp = ((2U & (IData)(vlSelf->Immsrc))
                      ? ((1U & (IData)(vlSelf->Immsrc))
                          ? (((- (IData)((1U & (vlSelf->Imm 
                                                >> 0x18U)))) 
                              << 0x13U) | ((0x7f800U 
                                            & (vlSelf->Imm 
                                               << 6U)) 
                                           | ((0x400U 
                                               & (vlSelf->Imm 
                                                  >> 3U)) 
                                              | (0x3ffU 
                                                 & (vlSelf->Imm 
                                                    >> 0xeU)))))
                          : (((- (IData)((1U & (vlSelf->Imm 
                                                >> 0x18U)))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelf->Imm 
                                            << 0xbU)) 
                                          | ((0x7e0U 
                                              & (vlSelf->Imm 
                                                 >> 0xdU)) 
                                             | (0x1eU 
                                                & vlSelf->Imm)))))
                      : ((1U & (IData)(vlSelf->Immsrc))
                          ? (((- (IData)((1U & (vlSelf->Imm 
                                                >> 0x18U)))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->Imm 
                                            >> 0xdU)) 
                                          | (0x1fU 
                                             & vlSelf->Imm)))
                          : (((- (IData)((1U & (vlSelf->Imm 
                                                >> 0x18U)))) 
                              << 0xcU) | (0xfffU & 
                                          (vlSelf->Imm 
                                           >> 0xdU)))));
}

void VSignextension___024root___eval(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___eval\n"); );
    // Body
    VSignextension___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VSignextension___024root___eval_debug_assertions(VSignextension___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Imm & 0xfe000000U))) {
        Verilated::overWidthError("Imm");}
    if (VL_UNLIKELY((vlSelf->Immsrc & 0xfcU))) {
        Verilated::overWidthError("Immsrc");}
}
#endif  // VL_DEBUG
