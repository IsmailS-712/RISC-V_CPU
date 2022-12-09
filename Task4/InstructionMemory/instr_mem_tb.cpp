#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vinstr_mem.h"

int main (int argc, char **argv, char **env) {
    int i;

    Verilated::commandArgs(argc, argv);

    Vinstr_mem* top = new Vinstr_mem;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("instr_mem.vcd");

    top->A = 0;

    for (i=0; i<28; i++) {
        tfp->dump (2*i);
        top->eval();
        top->A = (top->A)+4;

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
