#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vsign_ext.h"

int main (int argc, char **argv, char **env) {
    int i;

    Verilated::commandArgs(argc, argv);
    Vsign_ext* top = new Vsign_ext;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("sign_ext.vcd");

    top->Imm = 0xFE420AE3;
    top->ImmSrc = 2;

    for (i=0; i<300; i++) {
        tfp->dump (2*i);
        top->eval();

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}