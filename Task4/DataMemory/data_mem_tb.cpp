#include "verilated_vcd_c.h"
#include "verilated.h"
#include "Vdata_mem.h"

int main (int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    Vdata_mem* top = new Vdata_mem;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("data_mem.vcd");

    top->clk = 1;
    top->WE = 0;
    top->A = 0;
    top->WD = 0x00000001;

    for (i=0; i<28; i++) {
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }
        top->WE = (i==2);
        top->A = (top->A)+4;

        if (Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}
