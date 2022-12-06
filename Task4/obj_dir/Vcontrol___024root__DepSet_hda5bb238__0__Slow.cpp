// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_ATTR_COLD void Vcontrol___024root___settle__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ImmSrc = 0U;
    vlSelf->ALUop = 0U;
    vlSelf->ALUsrc = (3U == (0x7fU & vlSelf->Instr));
    vlSelf->RegWrite = (3U == (0x7fU & vlSelf->Instr));
    vlSelf->PCsrc = ((3U == (0x7fU & vlSelf->Instr)) 
                     & (IData)(vlSelf->EQ));
    if ((0U == (IData)(vlSelf->ALUop))) {
        vlSelf->ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelf->ALUop))) {
        vlSelf->ALUctrl = 1U;
    } else if ((2U == (IData)(vlSelf->ALUop))) {
        if ((2U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ALUctrl = 5U;
        } else if ((6U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ALUctrl = 2U;
        } else if ((0U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ALUctrl = ((IData)((0x40000020U 
                                        == (0x40000020U 
                                            & vlSelf->Instr)))
                                ? 1U : 0U);
        }
    }
}

VL_ATTR_COLD void Vcontrol___024root___eval_initial(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vcontrol___024root___eval_settle(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_settle\n"); );
    // Body
    Vcontrol___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcontrol___024root___final(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___final\n"); );
}

VL_ATTR_COLD void Vcontrol___024root___ctor_var_reset(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->Instr = VL_RAND_RESET_I(32);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ALUop = VL_RAND_RESET_I(2);
    vlSelf->ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
}
