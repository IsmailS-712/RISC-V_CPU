#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vtop *top = new Vtop;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("RISC-V");

    // initialize simulation input
    vbdSetMode(1);
    int count = 0;
    top->trigger = 1;
    // run simulation for many clock cycles
    for (i = 0; i < 5000; i++)
    {

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk); // unit is in ps
            top->clk = !top->clk;
            top->eval();
        }

        if (vbdFlag() and (count > 10))
        {
            top->trigger = 0;
            count = 0;
        }
        if (count == 10)
            top->trigger = 1;

        vbdBar(top->data_out);
        vbdCycle(count);
        count++;

        if (Verilated::gotFinish())
            exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}
