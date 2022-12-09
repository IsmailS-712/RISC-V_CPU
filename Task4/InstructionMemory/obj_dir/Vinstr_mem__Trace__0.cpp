// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstr_mem__Syms.h"


void Vinstr_mem___024root__trace_chg_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinstr_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_chg_top_0\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vinstr_mem___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vinstr_mem___024root__trace_chg_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->instr_mem__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->instr_mem__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->instr_mem__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->instr_mem__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->instr_mem__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->instr_mem__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->instr_mem__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->instr_mem__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->instr_mem__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->instr_mem__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->instr_mem__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->instr_mem__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->instr_mem__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->instr_mem__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->instr_mem__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->instr_mem__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->instr_mem__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->instr_mem__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->instr_mem__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->instr_mem__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->instr_mem__DOT__rom_array[20]),8);
        bufp->chgCData(oldp+21,(vlSelf->instr_mem__DOT__rom_array[21]),8);
        bufp->chgCData(oldp+22,(vlSelf->instr_mem__DOT__rom_array[22]),8);
        bufp->chgCData(oldp+23,(vlSelf->instr_mem__DOT__rom_array[23]),8);
        bufp->chgCData(oldp+24,(vlSelf->instr_mem__DOT__rom_array[24]),8);
        bufp->chgCData(oldp+25,(vlSelf->instr_mem__DOT__rom_array[25]),8);
        bufp->chgCData(oldp+26,(vlSelf->instr_mem__DOT__rom_array[26]),8);
        bufp->chgCData(oldp+27,(vlSelf->instr_mem__DOT__rom_array[27]),8);
    }
    bufp->chgIData(oldp+28,(vlSelf->A),32);
    bufp->chgIData(oldp+29,(vlSelf->RD),32);
}

void Vinstr_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_cleanup\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
