// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsign_ext__Syms.h"


void Vsign_ext___024root__trace_chg_sub_0(Vsign_ext___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsign_ext___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_chg_top_0\n"); );
    // Init
    Vsign_ext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_ext___024root*>(voidSelf);
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsign_ext___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsign_ext___024root__trace_chg_sub_0(Vsign_ext___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->Imm),32);
    bufp->chgCData(oldp+1,(vlSelf->ImmSrc),2);
    bufp->chgIData(oldp+2,(vlSelf->ImmOp),32);
}

void Vsign_ext___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_cleanup\n"); );
    // Init
    Vsign_ext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_ext___024root*>(voidSelf);
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
