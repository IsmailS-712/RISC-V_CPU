// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol___024root__trace_chg_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->EQ));
    bufp->chgIData(oldp+1,(vlSelf->Instr),32);
    bufp->chgBit(oldp+2,(vlSelf->RegWrite));
    bufp->chgCData(oldp+3,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+4,(vlSelf->ALUsrc));
    bufp->chgCData(oldp+5,(vlSelf->ALUop),2);
    bufp->chgCData(oldp+6,(vlSelf->ImmSrc),2);
    bufp->chgBit(oldp+7,(vlSelf->PCsrc));
    bufp->chgCData(oldp+8,((0x7fU & vlSelf->Instr)),7);
    bufp->chgCData(oldp+9,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->chgBit(oldp+10,((1U & (vlSelf->Instr >> 0x1eU))));
    bufp->chgIData(oldp+11,(((0x100000U & (vlSelf->Instr 
                                           >> 0xbU)) 
                             | ((0xfffe0U & (vlSelf->Instr 
                                             >> 0xaU)) 
                                | (0x1fU & (vlSelf->Instr 
                                            >> 7U))))),21);
}

void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_cleanup\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
