// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister__Syms.h"


void Vregister___024root__trace_chg_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_chg_top_0\n"); );
    // Init
    Vregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister___024root*>(voidSelf);
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregister___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vregister___024root__trace_chg_sub_0(Vregister___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->register__DOT__reg_array[4]),32);
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgCData(oldp+6,(vlSelf->AD1),5);
    bufp->chgCData(oldp+7,(vlSelf->AD2),5);
    bufp->chgCData(oldp+8,(vlSelf->AD3),5);
    bufp->chgBit(oldp+9,(vlSelf->WE3));
    bufp->chgIData(oldp+10,(vlSelf->WD3),32);
    bufp->chgIData(oldp+11,(vlSelf->RD1),32);
    bufp->chgIData(oldp+12,(vlSelf->RD2),32);
    bufp->chgIData(oldp+13,(vlSelf->a0[0]),32);
    bufp->chgIData(oldp+14,(vlSelf->a0[1]),32);
    bufp->chgIData(oldp+15,(vlSelf->a0[2]),32);
    bufp->chgIData(oldp+16,(vlSelf->a0[3]),32);
    bufp->chgIData(oldp+17,(vlSelf->a0[4]),32);
}

void Vregister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root__trace_cleanup\n"); );
    // Init
    Vregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister___024root*>(voidSelf);
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
