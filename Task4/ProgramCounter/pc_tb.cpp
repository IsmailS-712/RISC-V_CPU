#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vpc.h"

int main (int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vpc* top = new Vpc;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("pc.vcd");

    top->ImmOp = 0;
    top->clk = 1;
    top->rst = 1;
    top->PCsrc = 0;

    for (i=0; i<300; i++) {
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        top->rst = (i==10);
        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
