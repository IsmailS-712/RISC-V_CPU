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
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"trigger", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+123+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->declBus(c+155,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"trigger", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+123+i*1,"a0", true,(i+0), 31,0);
    }
    tracep->declBus(c+155,"data_out", false,-1, 7,0);
    tracep->declBus(c+115,"PC", false,-1, 31,0);
    tracep->declBus(c+116,"incPC", false,-1, 31,0);
    tracep->declBus(c+1,"Result", false,-1, 31,0);
    tracep->declBus(c+117,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"Imm", false,-1, 31,0);
    tracep->declBit(c+6,"Resultsrc", false,-1);
    tracep->declBit(c+7,"Memwrite", false,-1);
    tracep->declBus(c+8,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+9,"ALUsrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBit(c+12,"reg_jump", false,-1);
    tracep->declBit(c+13,"jump", false,-1);
    tracep->declBit(c+14,"branch", false,-1);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+16,"RD1", false,-1, 31,0);
    tracep->declBus(c+17,"RD2", false,-1, 31,0);
    tracep->declBus(c+118,"ALUout", false,-1, 31,0);
    tracep->declBit(c+119,"EQ", false,-1);
    tracep->declBus(c+18,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+19,"RD", false,-1, 31,0);
    tracep->declBus(c+20,"pPC", false,-1, 31,0);
    tracep->declBus(c+5,"pinstr", false,-1, 31,0);
    tracep->declBit(c+21,"pRegWrite", false,-1);
    tracep->declBit(c+22,"pResultsrc", false,-1);
    tracep->declBit(c+23,"pMemwrite", false,-1);
    tracep->declBit(c+156,"pPCsrc", false,-1);
    tracep->declBus(c+24,"pALUctrl", false,-1, 2,0);
    tracep->declBit(c+25,"pALUsrc", false,-1);
    tracep->declBit(c+26,"preg_jump", false,-1);
    tracep->declBus(c+27,"pRD1", false,-1, 31,0);
    tracep->declBus(c+28,"pRD2", false,-1, 31,0);
    tracep->declBus(c+29,"p2RD2", false,-1, 31,0);
    tracep->declBus(c+30,"pImmOp", false,-1, 31,0);
    tracep->declBus(c+31,"prd", false,-1, 4,0);
    tracep->declBus(c+32,"pALUout", false,-1, 31,0);
    tracep->declBus(c+33,"p2ALUout", false,-1, 31,0);
    tracep->declBus(c+34,"pRD", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+27,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+28,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+24,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+25,"ALUsrc", false,-1);
    tracep->declBus(c+30,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+116,"incPC", false,-1, 31,0);
    tracep->declBus(c+118,"ALUout", false,-1, 31,0);
    tracep->declBit(c+119,"EQ", false,-1);
    tracep->declBit(c+26,"reg_jump", false,-1);
    tracep->declBus(c+20,"PC", false,-1, 31,0);
    tracep->declBus(c+18,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+35,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+5,"Instr", false,-1, 31,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBus(c+8,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+9,"ALUsrc", false,-1);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+6,"Resultsrc", false,-1);
    tracep->declBit(c+7,"Memwrite", false,-1);
    tracep->declBit(c+12,"reg_jump", false,-1);
    tracep->declBit(c+13,"jump", false,-1);
    tracep->declBit(c+14,"branch", false,-1);
    tracep->declBus(c+36,"ALUop", false,-1, 1,0);
    tracep->declBus(c+37,"Op", false,-1, 6,0);
    tracep->declBus(c+38,"funct3", false,-1, 14,12);
    tracep->declBit(c+39,"funct7", false,-1);
    tracep->declBus(c+40,"unused", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBus(c+32,"A", false,-1, 31,0);
    tracep->declBit(c+23,"WE", false,-1);
    tracep->declBus(c+29,"WD", false,-1, 31,0);
    tracep->declBus(c+19,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+115,"A", false,-1, 31,0);
    tracep->declBus(c+117,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+156,"PCsrc", false,-1);
    tracep->declBus(c+18,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+115,"PC_out", false,-1, 31,0);
    tracep->declBus(c+116,"incPC", false,-1, 31,0);
    tracep->declBit(c+22,"Resultsrc", false,-1);
    tracep->declBus(c+33,"A", false,-1, 31,0);
    tracep->declBus(c+34,"RD", false,-1, 31,0);
    tracep->declBus(c+1,"Result", false,-1, 31,0);
    tracep->declBus(c+116,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+157,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipline ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBus(c+115,"PC", false,-1, 31,0);
    tracep->declBus(c+20,"pPC", false,-1, 31,0);
    tracep->declBus(c+117,"instr", false,-1, 31,0);
    tracep->declBus(c+5,"pinstr", false,-1, 31,0);
    tracep->declBit(c+11,"RegWrite", false,-1);
    tracep->declBit(c+21,"pRegWrite", false,-1);
    tracep->declBit(c+6,"Resultsrc", false,-1);
    tracep->declBit(c+22,"pResultsrc", false,-1);
    tracep->declBit(c+7,"Memwrite", false,-1);
    tracep->declBit(c+23,"pMemwrite", false,-1);
    tracep->declBit(c+156,"pPCsrc", false,-1);
    tracep->declBus(c+8,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+24,"pALUctrl", false,-1, 2,0);
    tracep->declBit(c+9,"ALRsrc", false,-1);
    tracep->declBit(c+25,"pALUsrc", false,-1);
    tracep->declBit(c+12,"reg_jump", false,-1);
    tracep->declBit(c+26,"preg_jump", false,-1);
    tracep->declBit(c+13,"jump", false,-1);
    tracep->declBit(c+14,"branch", false,-1);
    tracep->declBit(c+119,"EQ", false,-1);
    tracep->declBus(c+16,"RD1", false,-1, 31,0);
    tracep->declBus(c+27,"pRD1", false,-1, 31,0);
    tracep->declBus(c+17,"RD2", false,-1, 31,0);
    tracep->declBus(c+28,"pRD2", false,-1, 31,0);
    tracep->declBus(c+29,"p2RD2", false,-1, 31,0);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+30,"pImmOp", false,-1, 31,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+31,"prd", false,-1, 4,0);
    tracep->declBus(c+118,"ALUout", false,-1, 31,0);
    tracep->declBus(c+32,"pALUout", false,-1, 31,0);
    tracep->declBus(c+33,"p2ALUout", false,-1, 31,0);
    tracep->declBus(c+19,"RD", false,-1, 31,0);
    tracep->declBus(c+34,"pRD", false,-1, 31,0);
    tracep->declBus(c+41,"PC_d", false,-1, 31,0);
    tracep->declBit(c+42,"RegWrite_d1", false,-1);
    tracep->declBit(c+43,"RegWrite_d2", false,-1);
    tracep->declBit(c+44,"Resultsrc_d1", false,-1);
    tracep->declBit(c+45,"Resultsrc_d2", false,-1);
    tracep->declBit(c+46,"Memwrite_d", false,-1);
    tracep->declBit(c+47,"pjump", false,-1);
    tracep->declBit(c+48,"pbranch", false,-1);
    tracep->declBus(c+49,"rd_d1", false,-1, 4,0);
    tracep->declBus(c+50,"rd_d2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+122,"trigger", false,-1);
    tracep->declBus(c+2,"AD1", false,-1, 4,0);
    tracep->declBus(c+3,"AD2", false,-1, 4,0);
    tracep->declBus(c+31,"AD3", false,-1, 4,0);
    tracep->declBit(c+21,"WE3", false,-1);
    tracep->declBus(c+1,"WD3", false,-1, 31,0);
    tracep->declBus(c+16,"RD1", false,-1, 31,0);
    tracep->declBus(c+17,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"a0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+83+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+5,"Imm", false,-1, 31,0);
    tracep->declBus(c+10,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+15,"ImmOp", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(((IData)(vlSelf->top__DOT__pResultsrc)
                              ? vlSelf->top__DOT__pRD
                              : vlSelf->top__DOT__p2ALUout)),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelf->top__DOT__pinstr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->top__DOT__pinstr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->top__DOT__pinstr 
                                      >> 7U))),5);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__pinstr),32);
    bufp->fullBit(oldp+6,((3U == (0x7fU & vlSelf->top__DOT__pinstr))));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__Memwrite));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ALUctrl),3);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ALUsrc));
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+12,(((3U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                            & ((0x23U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                               & ((~ ((0x33U == (0x7fU 
                                                 & vlSelf->top__DOT__pinstr)) 
                                      | (0x13U == (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)))) 
                                  & ((0x37U != (0x7fU 
                                                & vlSelf->top__DOT__pinstr)) 
                                     & ((~ (IData)(
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__pinstr)))) 
                                        & ((0x6fU != 
                                            (0x7fU 
                                             & vlSelf->top__DOT__pinstr)) 
                                           & (0x67U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__pinstr))))))))));
    bufp->fullBit(oldp+13,(((3U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                            & ((0x23U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                               & ((~ ((0x33U == (0x7fU 
                                                 & vlSelf->top__DOT__pinstr)) 
                                      | (0x13U == (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)))) 
                                  & ((0x37U != (0x7fU 
                                                & vlSelf->top__DOT__pinstr)) 
                                     & ((~ (IData)(
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__pinstr)))) 
                                        & ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__pinstr)) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__pinstr))))))))));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__branch));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__register__DOT__reg_array
                             [(0x1fU & (vlSelf->top__DOT__pinstr 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__RD2),32);
    bufp->fullIData(oldp+18,(((IData)(vlSelf->top__DOT__preg_jump)
                               ? vlSelf->top__DOT__pRD1
                               : (vlSelf->top__DOT__pPC 
                                  + vlSelf->top__DOT__pImmOp))),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__data_mem__DOT__data_array
                             [(0x1ffffU & vlSelf->top__DOT__pALUout)]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__pPC),32);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__pRegWrite));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__pResultsrc));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__pMemwrite));
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__pALUctrl),3);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__pALUsrc));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__preg_jump));
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__pRD1),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__pRD2),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__p2RD2),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__pImmOp),32);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__prd),5);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__pALUout),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__p2ALUout),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__pRD),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__control__DOT__ALUop),2);
    bufp->fullCData(oldp+37,((0x7fU & vlSelf->top__DOT__pinstr)),7);
    bufp->fullCData(oldp+38,((7U & (vlSelf->top__DOT__pinstr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__pinstr 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+40,(((0x100000U & (vlSelf->top__DOT__pinstr 
                                            >> 0xbU)) 
                              | ((0xfffe0U & (vlSelf->top__DOT__pinstr 
                                              >> 0xaU)) 
                                 | (0x1fU & (vlSelf->top__DOT__pinstr 
                                             >> 7U))))),21);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__pipline__DOT__PC_d),32);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__pipline__DOT__RegWrite_d1));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__pipline__DOT__RegWrite_d2));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__pipline__DOT__Resultsrc_d1));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__pipline__DOT__Resultsrc_d2));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__pipline__DOT__Memwrite_d));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__pipline__DOT__pjump));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__pipline__DOT__pbranch));
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__pipline__DOT__rd_d1),5);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__pipline__DOT__rd_d2),5);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT____Vcellout__register__a0[0]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT____Vcellout__register__a0[1]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT____Vcellout__register__a0[2]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT____Vcellout__register__a0[3]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT____Vcellout__register__a0[4]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT____Vcellout__register__a0[5]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT____Vcellout__register__a0[6]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT____Vcellout__register__a0[7]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT____Vcellout__register__a0[8]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT____Vcellout__register__a0[9]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT____Vcellout__register__a0[10]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT____Vcellout__register__a0[11]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT____Vcellout__register__a0[12]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT____Vcellout__register__a0[13]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT____Vcellout__register__a0[14]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT____Vcellout__register__a0[15]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT____Vcellout__register__a0[16]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT____Vcellout__register__a0[17]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT____Vcellout__register__a0[18]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT____Vcellout__register__a0[19]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT____Vcellout__register__a0[20]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT____Vcellout__register__a0[21]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT____Vcellout__register__a0[22]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT____Vcellout__register__a0[23]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT____Vcellout__register__a0[24]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT____Vcellout__register__a0[25]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT____Vcellout__register__a0[26]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT____Vcellout__register__a0[27]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT____Vcellout__register__a0[28]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT____Vcellout__register__a0[29]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT____Vcellout__register__a0[30]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT____Vcellout__register__a0[31]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__register__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+116,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__instr_mem__DOT__rom_array
                              [(0xfffU & (vlSelf->top__DOT__PC 
                                          >> 2U))]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+119,((0U == vlSelf->top__DOT__ALUout)));
    bufp->fullBit(oldp+120,(vlSelf->clk));
    bufp->fullBit(oldp+121,(vlSelf->rst));
    bufp->fullBit(oldp+122,(vlSelf->trigger));
    bufp->fullIData(oldp+123,(vlSelf->a0[0]),32);
    bufp->fullIData(oldp+124,(vlSelf->a0[1]),32);
    bufp->fullIData(oldp+125,(vlSelf->a0[2]),32);
    bufp->fullIData(oldp+126,(vlSelf->a0[3]),32);
    bufp->fullIData(oldp+127,(vlSelf->a0[4]),32);
    bufp->fullIData(oldp+128,(vlSelf->a0[5]),32);
    bufp->fullIData(oldp+129,(vlSelf->a0[6]),32);
    bufp->fullIData(oldp+130,(vlSelf->a0[7]),32);
    bufp->fullIData(oldp+131,(vlSelf->a0[8]),32);
    bufp->fullIData(oldp+132,(vlSelf->a0[9]),32);
    bufp->fullIData(oldp+133,(vlSelf->a0[10]),32);
    bufp->fullIData(oldp+134,(vlSelf->a0[11]),32);
    bufp->fullIData(oldp+135,(vlSelf->a0[12]),32);
    bufp->fullIData(oldp+136,(vlSelf->a0[13]),32);
    bufp->fullIData(oldp+137,(vlSelf->a0[14]),32);
    bufp->fullIData(oldp+138,(vlSelf->a0[15]),32);
    bufp->fullIData(oldp+139,(vlSelf->a0[16]),32);
    bufp->fullIData(oldp+140,(vlSelf->a0[17]),32);
    bufp->fullIData(oldp+141,(vlSelf->a0[18]),32);
    bufp->fullIData(oldp+142,(vlSelf->a0[19]),32);
    bufp->fullIData(oldp+143,(vlSelf->a0[20]),32);
    bufp->fullIData(oldp+144,(vlSelf->a0[21]),32);
    bufp->fullIData(oldp+145,(vlSelf->a0[22]),32);
    bufp->fullIData(oldp+146,(vlSelf->a0[23]),32);
    bufp->fullIData(oldp+147,(vlSelf->a0[24]),32);
    bufp->fullIData(oldp+148,(vlSelf->a0[25]),32);
    bufp->fullIData(oldp+149,(vlSelf->a0[26]),32);
    bufp->fullIData(oldp+150,(vlSelf->a0[27]),32);
    bufp->fullIData(oldp+151,(vlSelf->a0[28]),32);
    bufp->fullIData(oldp+152,(vlSelf->a0[29]),32);
    bufp->fullIData(oldp+153,(vlSelf->a0[30]),32);
    bufp->fullIData(oldp+154,(vlSelf->a0[31]),32);
    bufp->fullCData(oldp+155,(vlSelf->data_out),8);
    bufp->fullBit(oldp+156,(((IData)(vlSelf->top__DOT__pipline__DOT__pjump) 
                             | ((IData)(vlSelf->top__DOT__pipline__DOT__pbranch) 
                                & (0U != vlSelf->top__DOT__ALUout)))));
    bufp->fullIData(oldp+157,((((IData)(vlSelf->top__DOT__pipline__DOT__pjump) 
                                | ((IData)(vlSelf->top__DOT__pipline__DOT__pbranch) 
                                   & (0U != vlSelf->top__DOT__ALUout)))
                                ? ((IData)(vlSelf->top__DOT__preg_jump)
                                    ? vlSelf->top__DOT__pRD1
                                    : (vlSelf->top__DOT__pPC 
                                       + vlSelf->top__DOT__pImmOp))
                                : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
}
