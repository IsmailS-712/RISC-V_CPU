// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__data_mem__DOT__RD),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT____Vcellout__register__a0[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT____Vcellout__register__a0[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT____Vcellout__register__a0[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT____Vcellout__register__a0[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT____Vcellout__register__a0[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT____Vcellout__register__a0[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT____Vcellout__register__a0[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT____Vcellout__register__a0[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT____Vcellout__register__a0[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT____Vcellout__register__a0[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT____Vcellout__register__a0[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT____Vcellout__register__a0[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT____Vcellout__register__a0[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT____Vcellout__register__a0[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT____Vcellout__register__a0[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT____Vcellout__register__a0[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT____Vcellout__register__a0[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT____Vcellout__register__a0[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT____Vcellout__register__a0[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT____Vcellout__register__a0[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT____Vcellout__register__a0[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT____Vcellout__register__a0[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT____Vcellout__register__a0[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT____Vcellout__register__a0[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT____Vcellout__register__a0[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT____Vcellout__register__a0[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT____Vcellout__register__a0[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT____Vcellout__register__a0[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT____Vcellout__register__a0[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT____Vcellout__register__a0[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT____Vcellout__register__a0[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT____Vcellout__register__a0[31]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__register__DOT__reg_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+66,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__instr),32);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgBit(oldp+71,((0U == (0x60U & vlSelf->top__DOT__instr))));
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__Regop1),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__Regop2),32);
        bufp->chgCData(oldp+74,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+75,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+77,(((0x100000U & (vlSelf->top__DOT__instr 
                                               >> 0xbU)) 
                                 | ((0xfffe0U & (vlSelf->top__DOT__instr 
                                                 >> 0xaU)) 
                                    | (0x1fU & (vlSelf->top__DOT__instr 
                                                >> 7U))))),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__PCsrc));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__Resultsrc));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__MemWrite));
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__ALUctrl),3);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__ImmSrc),2);
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__reg_jump));
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__ALUout),32);
        bufp->chgBit(oldp+86,((0U == vlSelf->top__DOT__ALUout)));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__control__DOT__ALUop),2);
    }
    bufp->chgBit(oldp+89,(vlSelf->clk));
    bufp->chgBit(oldp+90,(vlSelf->rst));
    bufp->chgIData(oldp+91,(vlSelf->a0[0]),32);
    bufp->chgIData(oldp+92,(vlSelf->a0[1]),32);
    bufp->chgIData(oldp+93,(vlSelf->a0[2]),32);
    bufp->chgIData(oldp+94,(vlSelf->a0[3]),32);
    bufp->chgIData(oldp+95,(vlSelf->a0[4]),32);
    bufp->chgIData(oldp+96,(vlSelf->a0[5]),32);
    bufp->chgIData(oldp+97,(vlSelf->a0[6]),32);
    bufp->chgIData(oldp+98,(vlSelf->a0[7]),32);
    bufp->chgIData(oldp+99,(vlSelf->a0[8]),32);
    bufp->chgIData(oldp+100,(vlSelf->a0[9]),32);
    bufp->chgIData(oldp+101,(vlSelf->a0[10]),32);
    bufp->chgIData(oldp+102,(vlSelf->a0[11]),32);
    bufp->chgIData(oldp+103,(vlSelf->a0[12]),32);
    bufp->chgIData(oldp+104,(vlSelf->a0[13]),32);
    bufp->chgIData(oldp+105,(vlSelf->a0[14]),32);
    bufp->chgIData(oldp+106,(vlSelf->a0[15]),32);
    bufp->chgIData(oldp+107,(vlSelf->a0[16]),32);
    bufp->chgIData(oldp+108,(vlSelf->a0[17]),32);
    bufp->chgIData(oldp+109,(vlSelf->a0[18]),32);
    bufp->chgIData(oldp+110,(vlSelf->a0[19]),32);
    bufp->chgIData(oldp+111,(vlSelf->a0[20]),32);
    bufp->chgIData(oldp+112,(vlSelf->a0[21]),32);
    bufp->chgIData(oldp+113,(vlSelf->a0[22]),32);
    bufp->chgIData(oldp+114,(vlSelf->a0[23]),32);
    bufp->chgIData(oldp+115,(vlSelf->a0[24]),32);
    bufp->chgIData(oldp+116,(vlSelf->a0[25]),32);
    bufp->chgIData(oldp+117,(vlSelf->a0[26]),32);
    bufp->chgIData(oldp+118,(vlSelf->a0[27]),32);
    bufp->chgIData(oldp+119,(vlSelf->a0[28]),32);
    bufp->chgIData(oldp+120,(vlSelf->a0[29]),32);
    bufp->chgIData(oldp+121,(vlSelf->a0[30]),32);
    bufp->chgIData(oldp+122,(vlSelf->a0[31]),32);
    bufp->chgBit(oldp+123,(vlSelf->top__DOT__RegWrite));
    bufp->chgIData(oldp+124,(((IData)(vlSelf->top__DOT__Resultsrc)
                               ? vlSelf->top__DOT__data_mem__DOT__RD
                               : vlSelf->top__DOT__ALUout)),32);
    bufp->chgIData(oldp+125,(((IData)(vlSelf->top__DOT__reg_jump)
                               ? vlSelf->top__DOT__Regop1
                               : (vlSelf->top__DOT__PC 
                                  + vlSelf->top__DOT__ImmOp))),32);
    bufp->chgIData(oldp+126,(((IData)(vlSelf->top__DOT__PCsrc)
                               ? ((IData)(vlSelf->top__DOT__reg_jump)
                                   ? vlSelf->top__DOT__Regop1
                                   : (vlSelf->top__DOT__PC 
                                      + vlSelf->top__DOT__ImmOp))
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
