// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol__Syms.h"


VL_ATTR_COLD void Vcontrol___024root__trace_init_sub__TOP__0(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"EQ", false,-1);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ALUop", false,-1, 1,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+8,"PCsrc", false,-1);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+1,"EQ", false,-1);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ALUop", false,-1, 1,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+8,"PCsrc", false,-1);
    tracep->declBus(c+9,"Op", false,-1, 6,0);
    tracep->declBus(c+10,"funct3", false,-1, 14,12);
    tracep->declBit(c+11,"funct7", false,-1);
    tracep->declBus(c+12,"unused", false,-1, 20,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcontrol___024root__trace_init_top(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_init_top\n"); );
    // Body
    Vcontrol___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol___024root__trace_register(Vcontrol___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcontrol___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcontrol___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcontrol___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_top_0\n"); );
    // Init
    Vcontrol___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol___024root*>(voidSelf);
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol___024root__trace_full_sub_0(Vcontrol___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->EQ));
    bufp->fullIData(oldp+2,(vlSelf->Instr),32);
    bufp->fullBit(oldp+3,(vlSelf->RegWrite));
    bufp->fullCData(oldp+4,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+5,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+6,(vlSelf->ALUop),2);
    bufp->fullCData(oldp+7,(vlSelf->ImmSrc),2);
    bufp->fullBit(oldp+8,(vlSelf->PCsrc));
    bufp->fullCData(oldp+9,((0x7fU & vlSelf->Instr)),7);
    bufp->fullCData(oldp+10,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->fullBit(oldp+11,((1U & (vlSelf->Instr >> 0x1eU))));
    bufp->fullIData(oldp+12,(((0x100000U & (vlSelf->Instr 
                                            >> 0xbU)) 
                              | ((0xfffe0U & (vlSelf->Instr 
                                              >> 0xaU)) 
                                 | (0x1fU & (vlSelf->Instr 
                                             >> 7U))))),21);
}
