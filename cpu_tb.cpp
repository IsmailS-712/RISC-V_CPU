#include "VALU.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env)
{
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    VALU *top = new VALU;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("ALU.vcd");

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
        top->ALUop1 = 12;
        top->ALUop2 = 13;
        top->ALUctrl = 5;
        if (Verilated::gotFinish())
            exit(0);
    }

    tfp->close();
    exit(0);
}
