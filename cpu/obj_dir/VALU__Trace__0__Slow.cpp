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
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+124+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+124+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->declBus(c+100,"PC", false,-1, 31,0);
    tracep->declBus(c+101,"instr", false,-1, 31,0);
    tracep->declBus(c+102,"rs1", false,-1, 4,0);
    tracep->declBus(c+103,"rs2", false,-1, 4,0);
    tracep->declBus(c+104,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"Imm", false,-1, 31,0);
    tracep->declBit(c+112,"PCsrc", false,-1);
    tracep->declBit(c+113,"Resultsrc", false,-1);
    tracep->declBit(c+114,"MemWrite", false,-1);
    tracep->declBus(c+115,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+116,"ALUsrc", false,-1);
    tracep->declBus(c+117,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+118,"RegWrite", false,-1);
    tracep->declBus(c+119,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+105,"Regop1", false,-1, 31,0);
    tracep->declBus(c+106,"Regop2", false,-1, 31,0);
    tracep->declBus(c+156,"ALUout", false,-1, 31,0);
    tracep->declBus(c+161,"test", false,-1, 31,0);
    tracep->declBit(c+157,"EQ", false,-1);
    tracep->declBus(c+158,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+105,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+106,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+115,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+116,"ALUsrc", false,-1);
    tracep->declBus(c+119,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+156,"ALUout", false,-1, 31,0);
    tracep->declBit(c+157,"EQ", false,-1);
    tracep->declBus(c+120,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+157,"EQ", false,-1);
    tracep->declBus(c+101,"Instr", false,-1, 31,0);
    tracep->declBit(c+118,"RegWrite", false,-1);
    tracep->declBus(c+115,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+116,"ALUsrc", false,-1);
    tracep->declBus(c+117,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+112,"PCsrc", false,-1);
    tracep->declBit(c+113,"Resultsrc", false,-1);
    tracep->declBit(c+114,"Memwrite", false,-1);
    tracep->declBus(c+121,"ALUop", false,-1, 1,0);
    tracep->declBus(c+107,"Op", false,-1, 6,0);
    tracep->declBus(c+108,"funct3", false,-1, 14,12);
    tracep->declBit(c+109,"funct7", false,-1);
    tracep->declBus(c+110,"unused", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+161,"A", false,-1, 31,0);
    tracep->declBit(c+114,"WE", false,-1);
    tracep->declBus(c+106,"WD", false,-1, 31,0);
    tracep->declBit(c+113,"Resultsrc", false,-1);
    tracep->declBus(c+158,"Result", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+33+i*1,"data_array", true,(i+-1), 31,0);
    }
    tracep->declBus(c+35,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+100,"A", false,-1, 31,0);
    tracep->declBus(c+101,"RD", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+119,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+112,"PCsrc", false,-1);
    tracep->declBus(c+100,"PC_out", false,-1, 31,0);
    tracep->declBus(c+159,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+111,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+160,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+102,"AD1", false,-1, 4,0);
    tracep->declBus(c+103,"AD2", false,-1, 4,0);
    tracep->declBus(c+104,"AD3", false,-1, 4,0);
    tracep->declBit(c+118,"WE3", false,-1);
    tracep->declBus(c+158,"WD3", false,-1, 31,0);
    tracep->declBus(c+105,"RD1", false,-1, 31,0);
    tracep->declBus(c+106,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"a0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+101,"Imm", false,-1, 31,0);
    tracep->declBus(c+117,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+119,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__instr_mem__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__instr_mem__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__instr_mem__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__instr_mem__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__instr_mem__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__instr_mem__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__instr_mem__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__instr_mem__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__instr_mem__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__instr_mem__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__instr_mem__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__instr_mem__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__instr_mem__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__instr_mem__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__instr_mem__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__instr_mem__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__instr_mem__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__instr_mem__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__instr_mem__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__instr_mem__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__instr_mem__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__instr_mem__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__instr_mem__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__instr_mem__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__instr_mem__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__instr_mem__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__instr_mem__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__instr_mem__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__instr_mem__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__instr_mem__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__instr_mem__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__instr_mem__DOT__rom_array[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__data_mem__DOT__data_array[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__data_mem__DOT__data_array[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__data_mem__DOT__RD),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT____Vcellout__register__a0[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT____Vcellout__register__a0[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT____Vcellout__register__a0[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT____Vcellout__register__a0[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT____Vcellout__register__a0[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT____Vcellout__register__a0[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT____Vcellout__register__a0[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT____Vcellout__register__a0[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT____Vcellout__register__a0[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT____Vcellout__register__a0[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT____Vcellout__register__a0[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT____Vcellout__register__a0[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT____Vcellout__register__a0[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT____Vcellout__register__a0[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT____Vcellout__register__a0[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT____Vcellout__register__a0[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT____Vcellout__register__a0[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT____Vcellout__register__a0[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT____Vcellout__register__a0[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT____Vcellout__register__a0[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT____Vcellout__register__a0[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT____Vcellout__register__a0[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT____Vcellout__register__a0[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT____Vcellout__register__a0[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT____Vcellout__register__a0[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT____Vcellout__register__a0[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT____Vcellout__register__a0[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT____Vcellout__register__a0[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT____Vcellout__register__a0[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT____Vcellout__register__a0[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT____Vcellout__register__a0[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT____Vcellout__register__a0[31]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__register__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__instr),32);
    bufp->fullCData(oldp+102,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+103,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+104,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__Regop1),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__Regop2),32);
    bufp->fullCData(oldp+107,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+108,((7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+109,((1U & (vlSelf->top__DOT__instr 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+110,(((0x100000U & (vlSelf->top__DOT__instr 
                                             >> 0xbU)) 
                               | ((0xfffe0U & (vlSelf->top__DOT__instr 
                                               >> 0xaU)) 
                                  | (0x1fU & (vlSelf->top__DOT__instr 
                                              >> 7U))))),21);
    bufp->fullIData(oldp+111,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__PCsrc));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__Resultsrc));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__MemWrite));
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__ALUctrl),3);
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__ALUsrc));
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__ImmSrc),2);
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__RegWrite));
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__control__DOT__ALUop),2);
    bufp->fullBit(oldp+122,(vlSelf->clk));
    bufp->fullBit(oldp+123,(vlSelf->rst));
    bufp->fullIData(oldp+124,(vlSelf->a0[0]),32);
    bufp->fullIData(oldp+125,(vlSelf->a0[1]),32);
    bufp->fullIData(oldp+126,(vlSelf->a0[2]),32);
    bufp->fullIData(oldp+127,(vlSelf->a0[3]),32);
    bufp->fullIData(oldp+128,(vlSelf->a0[4]),32);
    bufp->fullIData(oldp+129,(vlSelf->a0[5]),32);
    bufp->fullIData(oldp+130,(vlSelf->a0[6]),32);
    bufp->fullIData(oldp+131,(vlSelf->a0[7]),32);
    bufp->fullIData(oldp+132,(vlSelf->a0[8]),32);
    bufp->fullIData(oldp+133,(vlSelf->a0[9]),32);
    bufp->fullIData(oldp+134,(vlSelf->a0[10]),32);
    bufp->fullIData(oldp+135,(vlSelf->a0[11]),32);
    bufp->fullIData(oldp+136,(vlSelf->a0[12]),32);
    bufp->fullIData(oldp+137,(vlSelf->a0[13]),32);
    bufp->fullIData(oldp+138,(vlSelf->a0[14]),32);
    bufp->fullIData(oldp+139,(vlSelf->a0[15]),32);
    bufp->fullIData(oldp+140,(vlSelf->a0[16]),32);
    bufp->fullIData(oldp+141,(vlSelf->a0[17]),32);
    bufp->fullIData(oldp+142,(vlSelf->a0[18]),32);
    bufp->fullIData(oldp+143,(vlSelf->a0[19]),32);
    bufp->fullIData(oldp+144,(vlSelf->a0[20]),32);
    bufp->fullIData(oldp+145,(vlSelf->a0[21]),32);
    bufp->fullIData(oldp+146,(vlSelf->a0[22]),32);
    bufp->fullIData(oldp+147,(vlSelf->a0[23]),32);
    bufp->fullIData(oldp+148,(vlSelf->a0[24]),32);
    bufp->fullIData(oldp+149,(vlSelf->a0[25]),32);
    bufp->fullIData(oldp+150,(vlSelf->a0[26]),32);
    bufp->fullIData(oldp+151,(vlSelf->a0[27]),32);
    bufp->fullIData(oldp+152,(vlSelf->a0[28]),32);
    bufp->fullIData(oldp+153,(vlSelf->a0[29]),32);
    bufp->fullIData(oldp+154,(vlSelf->a0[30]),32);
    bufp->fullIData(oldp+155,(vlSelf->a0[31]),32);
    bufp->fullIData(oldp+156,(((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                             ? (vlSelf->top__DOT__Regop1 
                                                < vlSelf->top__DOT__ALU__DOT__ALUop2)
                                             : 0U))
                                : ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                    ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? (vlSelf->top__DOT__Regop1 
                                           | vlSelf->top__DOT__ALU__DOT__ALUop2)
                                        : (vlSelf->top__DOT__Regop1 
                                           & vlSelf->top__DOT__ALU__DOT__ALUop2))
                                    : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? (vlSelf->top__DOT__Regop1 
                                           - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                        : (vlSelf->top__DOT__Regop1 
                                           + vlSelf->top__DOT__ALU__DOT__ALUop2))))),32);
    bufp->fullBit(oldp+157,((0U == ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                     ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelf->top__DOT__Regop1 
                                                  < vlSelf->top__DOT__ALU__DOT__ALUop2)
                                                  : 0U))
                                     : ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                         ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                             ? (vlSelf->top__DOT__Regop1 
                                                | vlSelf->top__DOT__ALU__DOT__ALUop2)
                                             : (vlSelf->top__DOT__Regop1 
                                                & vlSelf->top__DOT__ALU__DOT__ALUop2))
                                         : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                             ? (vlSelf->top__DOT__Regop1 
                                                - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                             : (vlSelf->top__DOT__Regop1 
                                                + vlSelf->top__DOT__ALU__DOT__ALUop2)))))));
    bufp->fullIData(oldp+158,(((IData)(vlSelf->top__DOT__Resultsrc)
                                ? vlSelf->top__DOT__data_mem__DOT__RD
                                : vlSelf->top__DOT__test)),32);
    bufp->fullIData(oldp+159,((vlSelf->top__DOT__PC 
                               + vlSelf->top__DOT__ImmOp)),32);
    bufp->fullIData(oldp+160,(((IData)(vlSelf->top__DOT__PCsrc)
                                ? (vlSelf->top__DOT__PC 
                                   + vlSelf->top__DOT__ImmOp)
                                : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__test),32);
}
