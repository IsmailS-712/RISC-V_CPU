// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsign_ext.h"
#include "Vsign_ext__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsign_ext::Vsign_ext(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsign_ext__Syms(contextp(), _vcname__, this)}
    , ImmSrc{vlSymsp->TOP.ImmSrc}
    , Imm{vlSymsp->TOP.Imm}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsign_ext::Vsign_ext(const char* _vcname__)
    : Vsign_ext(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsign_ext::~Vsign_ext() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsign_ext___024root___eval_initial(Vsign_ext___024root* vlSelf);
void Vsign_ext___024root___eval_settle(Vsign_ext___024root* vlSelf);
void Vsign_ext___024root___eval(Vsign_ext___024root* vlSelf);
#ifdef VL_DEBUG
void Vsign_ext___024root___eval_debug_assertions(Vsign_ext___024root* vlSelf);
#endif  // VL_DEBUG
void Vsign_ext___024root___final(Vsign_ext___024root* vlSelf);

static void _eval_initial_loop(Vsign_ext__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsign_ext___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsign_ext___024root___eval_settle(&(vlSymsp->TOP));
        Vsign_ext___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsign_ext::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsign_ext::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsign_ext___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsign_ext___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsign_ext::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsign_ext::final() {
    Vsign_ext___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsign_ext::hierName() const { return vlSymsp->name(); }
const char* Vsign_ext::modelName() const { return "Vsign_ext"; }
unsigned Vsign_ext::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsign_ext::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsign_ext___024root__trace_init_top(Vsign_ext___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsign_ext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_ext___024root*>(voidSelf);
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsign_ext___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsign_ext___024root__trace_register(Vsign_ext___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsign_ext::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsign_ext___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
