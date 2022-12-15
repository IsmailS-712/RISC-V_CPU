// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister.h"
#include "Vregister__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregister::Vregister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregister__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , AD1{vlSymsp->TOP.AD1}
    , AD2{vlSymsp->TOP.AD2}
    , AD3{vlSymsp->TOP.AD3}
    , WE3{vlSymsp->TOP.WE3}
    , WD3{vlSymsp->TOP.WD3}
    , RD1{vlSymsp->TOP.RD1}
    , RD2{vlSymsp->TOP.RD2}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregister::Vregister(const char* _vcname__)
    : Vregister(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregister::~Vregister() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregister___024root___eval_initial(Vregister___024root* vlSelf);
void Vregister___024root___eval_settle(Vregister___024root* vlSelf);
void Vregister___024root___eval(Vregister___024root* vlSelf);
#ifdef VL_DEBUG
void Vregister___024root___eval_debug_assertions(Vregister___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister___024root___final(Vregister___024root* vlSelf);

static void _eval_initial_loop(Vregister__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregister___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregister___024root___eval_settle(&(vlSymsp->TOP));
        Vregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vregister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vregister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vregister::final() {
    Vregister___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregister::hierName() const { return vlSymsp->name(); }
const char* Vregister::modelName() const { return "Vregister"; }
unsigned Vregister::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vregister::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vregister___024root__trace_init_top(Vregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister___024root*>(voidSelf);
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vregister___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vregister___024root__trace_register(Vregister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vregister::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vregister___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
