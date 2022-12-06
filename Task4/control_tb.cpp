#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vcontrol.h"

int main (int argc, char **argv, char **env) {
    int i;

    Verilated::commandArgs(argc, argv);
    Vcontrol* top = new Vcontrol;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("control.vcd");

    top->Instr = 0xFFC4A303;
    top->EQ = 0;

    for (i=0; i<300; i++) {
        tfp->dump (2*i);
        top->eval();

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
