// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_mem__Syms.h"


void Vdata_mem___024root__trace_chg_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdata_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_top_0\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdata_mem___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdata_mem___024root__trace_chg_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->data_mem__DOT__data_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->data_mem__DOT__data_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->data_mem__DOT__data_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->data_mem__DOT__data_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->data_mem__DOT__data_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->data_mem__DOT__data_array[5]),32);
    }
    bufp->chgBit(oldp+6,(vlSelf->clk));
    bufp->chgBit(oldp+7,(vlSelf->WE));
    bufp->chgIData(oldp+8,(vlSelf->A),32);
    bufp->chgIData(oldp+9,(vlSelf->WD),32);
    bufp->chgIData(oldp+10,(vlSelf->RD),32);
}

void Vdata_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_cleanup\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
