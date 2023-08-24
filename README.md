***RISC-V CPU Coursework***
---------------------------------------------------------------------------------------------------------------
From **Lab 4**, our team split the work into the following parts:
1) Program Counter and related adders. **[MIHIR]**
2) The Register File, ALU and the related MUX. **[EDWARD]**
3) The Control Unit, the Sign-extension Unit and the instruction memory. **[LIU]**
4) The testbench and verification of the design working via gtkWave and Vbuddy. **[ISMAIL]**

**Group Contribution Table**
|module|Mihir|Edward|Ismail|Liu|
|:-----|:---:|:----:|:----:|:-:|
|pc.sv|x| | | |
|instr_mem.sv|+| |x| |
|control.sv| | |+|x|
|sign_ext.sv| | |+|x|
|register.sv| |x| | |
|ALU.sv| |x| | |
|data_mem.sv| |x| | |
|top.sv| |x| | |
|pipeline.sv| |x| | |
|machine code (f1 sequence)|+|x|x| |
|testbench (f1 sequence)| |x| | |
|testbench (reference program)|x| | | |
|testing|+|x|x|+|

*"x" Principal Contributer
"+" Helped*

---------------------------------------

**The F1 Sequence Program on RISC-V**

*doit-vbuddy.sh* is the script to simulate the processor on the vBuddy and *doit.sh* is a similar script used to quickly view and debug the processor on gtkWave.

The machine hex dump for the pipelined F1 sequence is located in *instruction.hex*. The corresponding machine code is located in *instr-assembly-code.s*.
The first line stores a number in register 10, which corresponds to the number of cycles we make the processor wait, so that the next light turns on after around 1 second. This should be changed according to the device. 

**Module Layout**
![Alt text](Module-layout.png?raw=true "layout")
