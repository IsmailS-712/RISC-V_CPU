***Group 7***
Members:
Mihir, Edward, Ismail, Liu


From **Lab 4**, our team split the work into the following parts:
1) Program Counter and related adders. **[MIHIR]**
2) The Register File, ALU and the related MUX. **[EDWARD]**
3) The Control Unit, the Sign-extension Unit and the instruction memory. **[LIU]**
4) The testbench and verification of the design working via gtkWave and Vbuddy (where appropriate). **[ISMAIL]**

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
|testbench (reference program)|x|| | |
|testing|+|+|x|+|

*"x" Principal Contributer
"+" Helped*

**Mihir Personal Statement**


**Edward Personal Statement**
Main contributor towards: ALU, data_mux, register, top module (5138fdeda56a531efb23420bf7b91e06b50a0719), pipeline (https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/b953bd7cd55512057a190aed103de9051f8dd0a0), machine codes (https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/4eb35946432e881b834bbf67edd5846d753f939f) and testbenchs (https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/34fa499e47b4a5b2ab4fe749d0be4c87122c3cae) for F1 sequence. Also contributed to parts of control - JAL/JALR (https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/af91b039d0c4666dc2f4d499690698ce58787ada) instructions and testing after combining all seperate modules into top. During this project I learnt a lot about how to debug the processor using GtkWave, looking for incorrect signals and finding the source. I also learnt a lot about how addressing worked in a processor. Some mistakes along the way which I would do better next time include misinterpretting how SW and LW work and also syntax errors due to not checking my code. 

**Ismail Personal Statement**


**Liu Personal Statement**

**The F1 Sequence Program on RISC-V**

*doit-vbuddy.sh* is the script to simulate the processor on the vBuddy and *doit.sh* is a similar script used to quickly view and debug the processor on gtkWave.

The machine hex dump for the pipelined F1 sequence is located in *instruction.hex*. The corresponding machine code is located in *instr-assembly-code.s*.
The first line stores a number in register 10, which corresponds to the number of cycles we make the processor wait, so that the next light turns on after around 1 second. This should be changed according to the device. 

**Module Layout**
![Alt text](Module-layout.png?raw=true "layout")
