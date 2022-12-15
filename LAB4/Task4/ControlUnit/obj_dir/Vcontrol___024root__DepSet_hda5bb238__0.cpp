// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vcontrol__ConstPool__TABLE_h867b1fb7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcontrol__ConstPool__TABLE_he22b48e5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcontrol__ConstPool__TABLE_he3ca740a_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vcontrol__ConstPool__TABLE_hf3656107_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcontrol__ConstPool__TABLE_h216be136_0;

VL_INLINE_OPT void Vcontrol___024root___combo__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___combo__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->EQ) << 7U) | (0x7fU 
                                                   & vlSelf->Instr));
    vlSelf->ALUop = Vcontrol__ConstPool__TABLE_h867b1fb7_0
        [__Vtableidx1];
    vlSelf->RegWrite = Vcontrol__ConstPool__TABLE_he22b48e5_0
        [__Vtableidx1];
    vlSelf->ALUsrc = Vcontrol__ConstPool__TABLE_he3ca740a_0
        [__Vtableidx1];
    vlSelf->ImmSrc = Vcontrol__ConstPool__TABLE_hf3656107_0
        [__Vtableidx1];
    vlSelf->PCsrc = Vcontrol__ConstPool__TABLE_h216be136_0
        [__Vtableidx1];
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

void Vcontrol___024root___eval(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval\n"); );
    // Body
    Vcontrol___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
