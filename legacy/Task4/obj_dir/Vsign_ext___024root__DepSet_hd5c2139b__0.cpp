// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_ext.h for the primary calling header

#include "verilated.h"

#include "Vsign_ext___024root.h"

VL_INLINE_OPT void Vsign_ext___024root___combo__TOP__0(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ImmOp = ((2U & (IData)(vlSelf->ImmSrc))
                      ? ((1U & (IData)(vlSelf->ImmSrc))
                          ? vlSelf->Imm : (((- (IData)(
                                                       (vlSelf->Imm 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->Imm 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->Imm 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->Imm 
                                                       >> 7U))))))
                      : ((1U & (IData)(vlSelf->ImmSrc))
                          ? (((- (IData)((vlSelf->Imm 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->Imm 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->Imm 
                                                >> 7U))))
                          : (((- (IData)((vlSelf->Imm 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->Imm 
                                          >> 0x14U))));
}

void Vsign_ext___024root___eval(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval\n"); );
    // Body
    Vsign_ext___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vsign_ext___024root___eval_debug_assertions(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ImmSrc & 0xfcU))) {
        Verilated::overWidthError("ImmSrc");}
}
#endif  // VL_DEBUG
