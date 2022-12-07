// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsign_ext__Syms.h"


VL_ATTR_COLD void Vsign_ext___024root__trace_init_sub__TOP__0(Vsign_ext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"Imm", false,-1, 31,0);
    tracep->declBus(c+2,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("sign_ext ");
    tracep->declBus(c+1,"Imm", false,-1, 31,0);
    tracep->declBus(c+2,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vsign_ext___024root__trace_init_top(Vsign_ext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_init_top\n"); );
    // Body
    Vsign_ext___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsign_ext___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_ext___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_ext___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsign_ext___024root__trace_register(Vsign_ext___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsign_ext___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsign_ext___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsign_ext___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsign_ext___024root__trace_full_sub_0(Vsign_ext___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsign_ext___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_full_top_0\n"); );
    // Init
    Vsign_ext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_ext___024root*>(voidSelf);
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsign_ext___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsign_ext___024root__trace_full_sub_0(Vsign_ext___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Imm),32);
    bufp->fullCData(oldp+2,(vlSelf->ImmSrc),2);
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
}
