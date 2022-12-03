// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+2,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+3,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+6,"ALUout", false,-1, 31,0);
    tracep->declBit(c+7,"EQ", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+1,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+2,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+3,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+6,"ALUout", false,-1, 31,0);
    tracep->declBit(c+7,"EQ", false,-1);
    tracep->declBus(c+8,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ALUop1),32);
    bufp->fullIData(oldp+2,(vlSelf->RegOp2),32);
    bufp->fullCData(oldp+3,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+4,(vlSelf->ALUsrc));
    bufp->fullIData(oldp+5,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+6,(vlSelf->ALUout),32);
    bufp->fullBit(oldp+7,(vlSelf->EQ));
    bufp->fullIData(oldp+8,(vlSelf->ALU__DOT__ALUop2),32);
}
