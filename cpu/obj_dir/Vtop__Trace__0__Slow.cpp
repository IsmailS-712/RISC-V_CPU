// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBit(c+95,"trigger", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+96+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->declBus(c+128,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBit(c+95,"trigger", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+96+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->declBus(c+128,"data_out", false,-1, 7,0);
    tracep->declBus(c+66,"PC", false,-1, 31,0);
    tracep->declBus(c+67,"incPC", false,-1, 31,0);
    tracep->declBus(c+68,"instr", false,-1, 31,0);
    tracep->declBus(c+69,"rs1", false,-1, 4,0);
    tracep->declBus(c+70,"rs2", false,-1, 4,0);
    tracep->declBus(c+71,"rd", false,-1, 4,0);
    tracep->declBus(c+68,"Imm", false,-1, 31,0);
    tracep->declBit(c+79,"PCsrc", false,-1);
    tracep->declBit(c+80,"Resultsrc", false,-1);
    tracep->declBit(c+81,"MemWrite", false,-1);
    tracep->declBus(c+82,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+72,"ALUsrc", false,-1);
    tracep->declBus(c+83,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+129,"RegWrite", false,-1);
    tracep->declBit(c+84,"reg_jump", false,-1);
    tracep->declBus(c+85,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+73,"Regop1", false,-1, 31,0);
    tracep->declBus(c+74,"Regop2", false,-1, 31,0);
    tracep->declBus(c+86,"ALUout", false,-1, 31,0);
    tracep->declBit(c+87,"EQ", false,-1);
    tracep->declBus(c+130,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+73,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+74,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+82,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+72,"ALUsrc", false,-1);
    tracep->declBus(c+85,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+67,"incPC", false,-1, 31,0);
    tracep->declBus(c+86,"ALUout", false,-1, 31,0);
    tracep->declBit(c+87,"EQ", false,-1);
    tracep->declBus(c+88,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+87,"EQ", false,-1);
    tracep->declBus(c+68,"Instr", false,-1, 31,0);
    tracep->declBit(c+129,"RegWrite", false,-1);
    tracep->declBus(c+89,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+72,"ALUsrc", false,-1);
    tracep->declBus(c+90,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+79,"PCsrc", false,-1);
    tracep->declBit(c+80,"Resultsrc", false,-1);
    tracep->declBit(c+81,"Memwrite", false,-1);
    tracep->declBit(c+84,"reg_jump", false,-1);
    tracep->declBus(c+91,"ALUop", false,-1, 2,0);
    tracep->declBus(c+75,"Op", false,-1, 6,0);
    tracep->declBus(c+76,"funct3", false,-1, 14,12);
    tracep->declBit(c+77,"funct7", false,-1);
    tracep->declBus(c+78,"unused", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+86,"A", false,-1, 31,0);
    tracep->declBit(c+81,"WE", false,-1);
    tracep->declBus(c+74,"WD", false,-1, 31,0);
    tracep->declBit(c+80,"Resultsrc", false,-1);
    tracep->declBus(c+130,"Result", false,-1, 31,0);
    tracep->declBus(c+1,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+66,"A", false,-1, 31,0);
    tracep->declBus(c+68,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+85,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBit(c+79,"PCsrc", false,-1);
    tracep->declBus(c+73,"reg_addr", false,-1, 31,0);
    tracep->declBit(c+84,"reg_jump", false,-1);
    tracep->declBus(c+66,"PC_out", false,-1, 31,0);
    tracep->declBus(c+67,"incPC", false,-1, 31,0);
    tracep->declBus(c+131,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+67,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+132,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+95,"trigger", false,-1);
    tracep->declBus(c+69,"AD1", false,-1, 4,0);
    tracep->declBus(c+70,"AD2", false,-1, 4,0);
    tracep->declBus(c+71,"AD3", false,-1, 4,0);
    tracep->declBit(c+129,"WE3", false,-1);
    tracep->declBus(c+130,"WD3", false,-1, 31,0);
    tracep->declBus(c+73,"RD1", false,-1, 31,0);
    tracep->declBus(c+74,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"a0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+34+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+68,"Imm", false,-1, 31,0);
    tracep->declBus(c+92,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+85,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__data_mem__DOT__RD),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT____Vcellout__register__a0[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT____Vcellout__register__a0[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT____Vcellout__register__a0[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT____Vcellout__register__a0[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT____Vcellout__register__a0[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT____Vcellout__register__a0[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT____Vcellout__register__a0[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT____Vcellout__register__a0[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT____Vcellout__register__a0[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT____Vcellout__register__a0[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT____Vcellout__register__a0[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT____Vcellout__register__a0[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT____Vcellout__register__a0[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT____Vcellout__register__a0[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT____Vcellout__register__a0[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT____Vcellout__register__a0[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT____Vcellout__register__a0[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT____Vcellout__register__a0[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT____Vcellout__register__a0[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT____Vcellout__register__a0[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT____Vcellout__register__a0[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT____Vcellout__register__a0[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT____Vcellout__register__a0[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT____Vcellout__register__a0[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT____Vcellout__register__a0[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT____Vcellout__register__a0[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT____Vcellout__register__a0[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT____Vcellout__register__a0[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT____Vcellout__register__a0[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT____Vcellout__register__a0[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT____Vcellout__register__a0[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT____Vcellout__register__a0[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__register__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+67,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__instr),32);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+72,((0U == (0x60U & vlSelf->top__DOT__instr))));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__Regop1),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__Regop2),32);
    bufp->fullCData(oldp+75,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+76,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+78,(((0x100000U & (vlSelf->top__DOT__instr 
                                            >> 0xbU)) 
                              | ((0xfffe0U & (vlSelf->top__DOT__instr 
                                              >> 0xaU)) 
                                 | (0x1fU & (vlSelf->top__DOT__instr 
                                             >> 7U))))),21);
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__PCsrc));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__Resultsrc));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__MemWrite));
    bufp->fullCData(oldp+82,((7U & (IData)(vlSelf->top__DOT____Vcellout__control__ALUctrl))),3);
    bufp->fullCData(oldp+83,((3U & (IData)(vlSelf->top__DOT____Vcellout__control__ImmSrc))),2);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__reg_jump));
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+87,((0U == vlSelf->top__DOT__ALUout)));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT____Vcellout__control__ALUctrl),4);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT____Vcellout__control__ImmSrc),3);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__control__DOT__ALUop),3);
    bufp->fullCData(oldp+92,((3U & (IData)(vlSelf->top__DOT____Vcellout__control__ImmSrc))),3);
    bufp->fullBit(oldp+93,(vlSelf->clk));
    bufp->fullBit(oldp+94,(vlSelf->rst));
    bufp->fullBit(oldp+95,(vlSelf->trigger));
    bufp->fullIData(oldp+96,(vlSelf->a0[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->a0[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->a0[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->a0[3]),32);
    bufp->fullIData(oldp+100,(vlSelf->a0[4]),32);
    bufp->fullIData(oldp+101,(vlSelf->a0[5]),32);
    bufp->fullIData(oldp+102,(vlSelf->a0[6]),32);
    bufp->fullIData(oldp+103,(vlSelf->a0[7]),32);
    bufp->fullIData(oldp+104,(vlSelf->a0[8]),32);
    bufp->fullIData(oldp+105,(vlSelf->a0[9]),32);
    bufp->fullIData(oldp+106,(vlSelf->a0[10]),32);
    bufp->fullIData(oldp+107,(vlSelf->a0[11]),32);
    bufp->fullIData(oldp+108,(vlSelf->a0[12]),32);
    bufp->fullIData(oldp+109,(vlSelf->a0[13]),32);
    bufp->fullIData(oldp+110,(vlSelf->a0[14]),32);
    bufp->fullIData(oldp+111,(vlSelf->a0[15]),32);
    bufp->fullIData(oldp+112,(vlSelf->a0[16]),32);
    bufp->fullIData(oldp+113,(vlSelf->a0[17]),32);
    bufp->fullIData(oldp+114,(vlSelf->a0[18]),32);
    bufp->fullIData(oldp+115,(vlSelf->a0[19]),32);
    bufp->fullIData(oldp+116,(vlSelf->a0[20]),32);
    bufp->fullIData(oldp+117,(vlSelf->a0[21]),32);
    bufp->fullIData(oldp+118,(vlSelf->a0[22]),32);
    bufp->fullIData(oldp+119,(vlSelf->a0[23]),32);
    bufp->fullIData(oldp+120,(vlSelf->a0[24]),32);
    bufp->fullIData(oldp+121,(vlSelf->a0[25]),32);
    bufp->fullIData(oldp+122,(vlSelf->a0[26]),32);
    bufp->fullIData(oldp+123,(vlSelf->a0[27]),32);
    bufp->fullIData(oldp+124,(vlSelf->a0[28]),32);
    bufp->fullIData(oldp+125,(vlSelf->a0[29]),32);
    bufp->fullIData(oldp+126,(vlSelf->a0[30]),32);
    bufp->fullIData(oldp+127,(vlSelf->a0[31]),32);
    bufp->fullCData(oldp+128,(vlSelf->data_out),8);
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__RegWrite));
    bufp->fullIData(oldp+130,(((IData)(vlSelf->top__DOT__Resultsrc)
                                ? vlSelf->top__DOT__data_mem__DOT__RD
                                : vlSelf->top__DOT__ALUout)),32);
    bufp->fullIData(oldp+131,(((IData)(vlSelf->top__DOT__reg_jump)
                                ? vlSelf->top__DOT__Regop1
                                : (vlSelf->top__DOT__PC 
                                   + vlSelf->top__DOT__ImmOp))),32);
    bufp->fullIData(oldp+132,(((IData)(vlSelf->top__DOT__PCsrc)
                                ? ((IData)(vlSelf->top__DOT__reg_jump)
                                    ? vlSelf->top__DOT__Regop1
                                    : (vlSelf->top__DOT__PC 
                                       + vlSelf->top__DOT__ImmOp))
                                : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
}
