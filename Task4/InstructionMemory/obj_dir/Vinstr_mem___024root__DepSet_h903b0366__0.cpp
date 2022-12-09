// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstr_mem.h for the primary calling header

#include "verilated.h"

#include "Vinstr_mem___024root.h"

VL_INLINE_OPT void Vinstr_mem___024root___combo__TOP__0(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->RD = ((((0x1bU >= (0x1fU & vlSelf->A)) ? 
                    vlSelf->instr_mem__DOT__rom_array
                    [(0x1fU & vlSelf->A)] : 0U) << 0x18U) 
                  | ((((0x1bU >= (0x1fU & ((IData)(1U) 
                                           + vlSelf->A)))
                        ? vlSelf->instr_mem__DOT__rom_array
                       [(0x1fU & ((IData)(1U) + vlSelf->A))]
                        : 0U) << 0x10U) | ((((0x1bU 
                                              >= (0x1fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->A)))
                                              ? vlSelf->instr_mem__DOT__rom_array
                                             [(0x1fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->A))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x1bU 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->A)))
                                               ? vlSelf->instr_mem__DOT__rom_array
                                              [(0x1fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->A))]
                                               : 0U))));
}

void Vinstr_mem___024root___eval(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval\n"); );
    // Body
    Vinstr_mem___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vinstr_mem___024root___eval_debug_assertions(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
