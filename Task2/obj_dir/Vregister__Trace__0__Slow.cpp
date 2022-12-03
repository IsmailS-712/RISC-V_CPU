// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister__Syms.h"


VL_ATTR_COLD void Vregister___024root__trace_init_sub__TOP__0(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBus(c+7,"AD1", false,-1, 4,0);
    tracep->declBus(c+8,"AD2", false,-1, 4,0);
    tracep->declBus(c+9,"AD3", false,-1, 4,0);
    tracep->declBit(c+10,"WE3", false,-1);
    tracep->declBus(c+11,"WD3", false,-1, 31,0);
    tracep->declBus(c+12,"RD1", false,-1, 31,0);
    tracep->declBus(c+13,"RD2", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+14+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBus(c+7,"AD1", false,-1, 4,0);
    tracep->declBus(c+8,"AD2", false,-1, 4,0);
    tracep->declBus(c+9,"AD3", false,-1, 4,0);
    tracep->declBit(c+10,"WE3", false,-1);
    tracep->declBus(c+11,"WD3", false,-1, 31,0);
    tracep->declBus(c+12,"RD1", false,-1, 31,0);
    tracep->declBus(c+13,"RD2", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+14+i*1,"a0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vregister___024root__trace_init_top(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_init_top\n"); );
    // Body
    Vregister___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregister___024root__trace_register(Vregister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregister___024root__trace_full_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_full_top_0\n"); );
    // Init
    Vregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister___024root*>(voidSelf);
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregister___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregister___024root__trace_full_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->register__DOT__reg_array[4]),32);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullCData(oldp+7,(vlSelf->AD1),5);
    bufp->fullCData(oldp+8,(vlSelf->AD2),5);
    bufp->fullCData(oldp+9,(vlSelf->AD3),5);
    bufp->fullBit(oldp+10,(vlSelf->WE3));
    bufp->fullIData(oldp+11,(vlSelf->WD3),32);
    bufp->fullIData(oldp+12,(vlSelf->RD1),32);
    bufp->fullIData(oldp+13,(vlSelf->RD2),32);
    bufp->fullIData(oldp+14,(vlSelf->a0[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->a0[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->a0[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->a0[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->a0[4]),32);
}
