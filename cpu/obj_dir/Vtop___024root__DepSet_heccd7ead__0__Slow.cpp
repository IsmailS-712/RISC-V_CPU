// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_ha91ebcc3__0;
    // Body
    __Vtemp_ha91ebcc3__0[0U] = 0x2e686578U;
    __Vtemp_ha91ebcc3__0[1U] = 0x74696f6eU;
    __Vtemp_ha91ebcc3__0[2U] = 0x74727563U;
    __Vtemp_ha91ebcc3__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 32, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_ha91ebcc3__0)
                 ,  &(vlSelf->top__DOT__instr_mem__DOT__rom_array)
                 , 3217031168, ~0ULL);
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h873c5a41_0;
extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_he70e622c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h93943be8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h23eff050_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h9bdefb87_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h81fb005b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hf23309df_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h0947e088_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT____Vcellout__register__a0[0x1fU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1fU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1eU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1eU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1dU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1dU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1cU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1cU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1bU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1bU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1aU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1aU];
    vlSelf->top__DOT____Vcellout__register__a0[0x19U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x19U];
    vlSelf->top__DOT____Vcellout__register__a0[0x18U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x18U];
    vlSelf->top__DOT____Vcellout__register__a0[0x17U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x17U];
    vlSelf->top__DOT____Vcellout__register__a0[0x16U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x16U];
    vlSelf->top__DOT____Vcellout__register__a0[0x15U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x15U];
    vlSelf->top__DOT____Vcellout__register__a0[0x14U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x14U];
    vlSelf->top__DOT____Vcellout__register__a0[0x13U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x13U];
    vlSelf->top__DOT____Vcellout__register__a0[0x12U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x12U];
    vlSelf->top__DOT____Vcellout__register__a0[0x11U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x11U];
    vlSelf->top__DOT____Vcellout__register__a0[0x10U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x10U];
    vlSelf->top__DOT____Vcellout__register__a0[0xfU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xfU];
    vlSelf->top__DOT____Vcellout__register__a0[0xeU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xeU];
    vlSelf->top__DOT____Vcellout__register__a0[0xdU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xdU];
    vlSelf->top__DOT____Vcellout__register__a0[0xcU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xcU];
    vlSelf->top__DOT____Vcellout__register__a0[0xbU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xbU];
    vlSelf->top__DOT____Vcellout__register__a0[0xaU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xaU];
    vlSelf->top__DOT____Vcellout__register__a0[9U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [9U];
    vlSelf->top__DOT____Vcellout__register__a0[8U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [8U];
    vlSelf->top__DOT____Vcellout__register__a0[7U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [7U];
    vlSelf->top__DOT____Vcellout__register__a0[6U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [6U];
    vlSelf->top__DOT____Vcellout__register__a0[5U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [5U];
    vlSelf->top__DOT____Vcellout__register__a0[4U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [4U];
    vlSelf->top__DOT____Vcellout__register__a0[3U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [3U];
    vlSelf->top__DOT____Vcellout__register__a0[2U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [2U];
    vlSelf->top__DOT____Vcellout__register__a0[1U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [1U];
    vlSelf->top__DOT____Vcellout__register__a0[0U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0U];
    vlSelf->top__DOT__instr = vlSelf->top__DOT__instr_mem__DOT__rom_array
        [(0xfffU & (vlSelf->top__DOT__PC >> 2U))];
    vlSelf->a0[0x1fU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1fU];
    vlSelf->a0[0x1eU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1eU];
    vlSelf->a0[0x1dU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1dU];
    vlSelf->a0[0x1cU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1cU];
    vlSelf->a0[0x1bU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1bU];
    vlSelf->a0[0x1aU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1aU];
    vlSelf->a0[0x19U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x19U];
    vlSelf->a0[0x18U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x18U];
    vlSelf->a0[0x17U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x17U];
    vlSelf->a0[0x16U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x16U];
    vlSelf->a0[0x15U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x15U];
    vlSelf->a0[0x14U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x14U];
    vlSelf->a0[0x13U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x13U];
    vlSelf->a0[0x12U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x12U];
    vlSelf->a0[0x11U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x11U];
    vlSelf->a0[0x10U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x10U];
    vlSelf->a0[0xfU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xfU];
    vlSelf->a0[0xeU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xeU];
    vlSelf->a0[0xdU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xdU];
    vlSelf->a0[0xcU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xcU];
    vlSelf->a0[0xbU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xbU];
    vlSelf->a0[0xaU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xaU];
    vlSelf->a0[9U] = vlSelf->top__DOT____Vcellout__register__a0
        [9U];
    vlSelf->a0[8U] = vlSelf->top__DOT____Vcellout__register__a0
        [8U];
    vlSelf->a0[7U] = vlSelf->top__DOT____Vcellout__register__a0
        [7U];
    vlSelf->a0[6U] = vlSelf->top__DOT____Vcellout__register__a0
        [6U];
    vlSelf->a0[5U] = vlSelf->top__DOT____Vcellout__register__a0
        [5U];
    vlSelf->a0[4U] = vlSelf->top__DOT____Vcellout__register__a0
        [4U];
    vlSelf->a0[3U] = vlSelf->top__DOT____Vcellout__register__a0
        [3U];
    vlSelf->a0[2U] = vlSelf->top__DOT____Vcellout__register__a0
        [2U];
    vlSelf->a0[1U] = vlSelf->top__DOT____Vcellout__register__a0
        [1U];
    vlSelf->a0[0U] = vlSelf->top__DOT____Vcellout__register__a0
        [0U];
    vlSelf->top__DOT__RegWrite = (0U == (0x40U & vlSelf->top__DOT__instr));
    vlSelf->top__DOT__Regop1 = vlSelf->top__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__Regop2 = vlSelf->top__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    __Vtableidx1 = (((0U == vlSelf->top__DOT__ALUout) 
                     << 7U) | (0x7fU & vlSelf->top__DOT__instr));
    vlSelf->top__DOT__control__DOT__ALUop = Vtop__ConstPool__TABLE_h873c5a41_0
        [__Vtableidx1];
    if ((2U & Vtop__ConstPool__TABLE_he70e622c_0[__Vtableidx1])) {
        vlSelf->top__DOT__ImmSrc = Vtop__ConstPool__TABLE_h93943be8_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__PCsrc = Vtop__ConstPool__TABLE_h23eff050_0
        [__Vtableidx1];
    if ((8U & Vtop__ConstPool__TABLE_he70e622c_0[__Vtableidx1])) {
        vlSelf->top__DOT__MemWrite = Vtop__ConstPool__TABLE_h9bdefb87_0
            [__Vtableidx1];
    }
    if ((0x10U & Vtop__ConstPool__TABLE_he70e622c_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__Resultsrc = Vtop__ConstPool__TABLE_h81fb005b_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__reg_jump = Vtop__ConstPool__TABLE_hf23309df_0
        [__Vtableidx1];
    if ((0x40U & Vtop__ConstPool__TABLE_he70e622c_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__RegWrite = Vtop__ConstPool__TABLE_h0947e088_0
            [__Vtableidx1];
    }
    vlSelf->data_out = (0xffU & vlSelf->a0[0x14U]);
    if ((0U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        vlSelf->top__DOT__ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        vlSelf->top__DOT__ALUctrl = 1U;
    } else if ((3U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        vlSelf->top__DOT__ALUctrl = 7U;
    } else if ((2U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        if ((2U == (7U & (vlSelf->top__DOT__instr >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 5U;
        } else if ((6U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 2U;
        } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = ((IData)((0x40000020U 
                                                  == 
                                                  (0x40000020U 
                                                   & vlSelf->top__DOT__instr)))
                                          ? 1U : 0U);
        }
    }
    vlSelf->top__DOT__ImmOp = ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->top__DOT__instr) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__instr 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->top__DOT__instr 
                                                 >> 0x14U)))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__instr 
                                                 >> 7U))))))
                                : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instr 
                                            >> 7U))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__instr 
                                        >> 0x14U))));
    vlSelf->top__DOT__pc__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                           ? ((IData)(vlSelf->top__DOT__reg_jump)
                                               ? vlSelf->top__DOT__Regop1
                                               : (vlSelf->top__DOT__PC 
                                                  + vlSelf->top__DOT__ImmOp))
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__PC));
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((0U == (0x60U 
                                                  & vlSelf->top__DOT__instr))
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__Regop2);
    vlSelf->top__DOT__ALUout = ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__PC)
                                         : 0U) : ((1U 
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
                                            + vlSelf->top__DOT__ALU__DOT__ALUop2))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->a0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Resultsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reg_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Regop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Regop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__register__a0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__control__DOT__ALUop = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__data_mem__DOT__data_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__data_mem__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__ALUout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
