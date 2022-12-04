// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSignextension__Syms.h"


VL_ATTR_COLD void VSignextension___024root__trace_init_sub__TOP__0(VSignextension___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"Imm", false,-1, 31,7);
    tracep->declBus(c+2,"Immsrc", false,-1, 1,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("Signextension ");
    tracep->declBus(c+1,"Imm", false,-1, 31,7);
    tracep->declBus(c+2,"Immsrc", false,-1, 1,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSignextension___024root__trace_init_top(VSignextension___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root__trace_init_top\n"); );
    // Body
    VSignextension___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSignextension___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSignextension___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSignextension___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSignextension___024root__trace_register(VSignextension___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSignextension___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSignextension___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSignextension___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSignextension___024root__trace_full_sub_0(VSignextension___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSignextension___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root__trace_full_top_0\n"); );
    // Init
    VSignextension___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignextension___024root*>(voidSelf);
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSignextension___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSignextension___024root__trace_full_sub_0(VSignextension___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignextension___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Imm),25);
    bufp->fullCData(oldp+2,(vlSelf->Immsrc),2);
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
}
