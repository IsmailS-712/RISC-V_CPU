// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSignextension.h"
#include "VSignextension__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSignextension::VSignextension(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSignextension__Syms(contextp(), _vcname__, this)}
    , Immsrc{vlSymsp->TOP.Immsrc}
    , Imm{vlSymsp->TOP.Imm}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSignextension::VSignextension(const char* _vcname__)
    : VSignextension(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSignextension::~VSignextension() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSignextension___024root___eval_initial(VSignextension___024root* vlSelf);
void VSignextension___024root___eval_settle(VSignextension___024root* vlSelf);
void VSignextension___024root___eval(VSignextension___024root* vlSelf);
#ifdef VL_DEBUG
void VSignextension___024root___eval_debug_assertions(VSignextension___024root* vlSelf);
#endif  // VL_DEBUG
void VSignextension___024root___final(VSignextension___024root* vlSelf);

static void _eval_initial_loop(VSignextension__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSignextension___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSignextension___024root___eval_settle(&(vlSymsp->TOP));
        VSignextension___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSignextension::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSignextension::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSignextension___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSignextension___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VSignextension::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSignextension::final() {
    VSignextension___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSignextension::hierName() const { return vlSymsp->name(); }
const char* VSignextension::modelName() const { return "VSignextension"; }
unsigned VSignextension::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSignextension::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSignextension___024root__trace_init_top(VSignextension___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSignextension___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignextension___024root*>(voidSelf);
    VSignextension__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSignextension___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSignextension___024root__trace_register(VSignextension___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSignextension::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSignextension___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
