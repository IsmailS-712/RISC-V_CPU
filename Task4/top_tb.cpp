#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

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

    // initialize simulation input

    // run simulation for many clock cycles
    for (i = 0; i < 300; i++)
    {

        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk); // unit is in ps
            // top->clk = !top->clk;
            top->eval();
        }
        // change input stimuli
        //==Step 1: Loadable Counter==
        // top->rst = vbdFlag(); // read the flag register to reset it, after the button is pressed and ARMED
        // top->en = (i > 4);

        // Step 2: Single Stepping
        top->zero = 0;
        top->instr = 31'b if (Verilated::gotFinish())
            exit(0);
    }

    tfp->close();
    exit(0);
}
