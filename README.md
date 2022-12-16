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
|testing|+|x|x|+|

*"x" Principal Contributer
"+" Helped*

**Mihir Personal Statement**


**Edward Personal Statement**
Main contributor towards: ALU, data_mux, register, [top module](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/5138fdeda56a531efb23420bf7b91e06b50a0719), [pipeline](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/b953bd7cd55512057a190aed103de9051f8dd0a0), [machine codes](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/4eb35946432e881b834bbf67edd5846d753f939f) and [testbenchs](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/34fa499e47b4a5b2ab4fe749d0be4c87122c3cae) for F1 sequence. Also contributed to parts of control - [JAL](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/af91b039d0c4666dc2f4d499690698ce58787ada)/[JALR](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/11781d5446aec7a025807a08ffaf6db41b74c149) instructions and testing after combining all seperate modules into top. During this project I learnt a lot about how to debug the processor using GtkWave, looking for incorrect signals and finding the source. I also learnt a lot about how addressing worked in a processor. Some mistakes along the way which I would do better next time include misinterpretting how SW and LW work and also syntax errors due to not checking my code. 

**Ismail Personal Statement**


**Liu Personal Statement**
My task in this final project was to build the control unit and sign-extension module.
About control unit:     
During building this block, I take a deep glimpse of how the control block work. Since first time I divided it into two block, Main decoder and Alu decoder, I have a much better understanding of how this module works exactly.
On the way of building the control unit, I had a couple of problems that I had to solve (solved in the end, of course). When I first tried to build the control unit, I split the two blocks as I mentioned before. But when I tested the final unit, the combination of the two modules often led to errors due to carelessness and inadvertence. In a modification, my team and I combined the Main decoder and the ALU decoder (a way to reduce the number of errors I found in Lab4), and although the number of lines of code may have increased, it also reduced the number of inadvertent code errors in combining the two modules. Secondly, when analyzing all the operations, my team and I found that RegWrite was always 1 when the first bit of op was 0 and ALUsrc was always 1 when the first two bits of op were 00, so we went ahead and made two determinations and assigned values to RegWrite and ALUsrc, which simplified the number of lines that needed to be executed in the subsequent code. I made a mistake in defining and assigning values to ALUctrl. As our program needed a total of 9 operations, which was greater than the 8 different values that the 3-bit ALUctrl could provide, I took the liberty of changing the ALuctrl to 4-bit data. However, during testing, I found that due to a lack of communication with the group and my careful thinking, the ALUctrl was still three digits in the ALU unit for which the group was responsible, so our program did not run successfully. After discussing with the group, I found that although there were 9 different operations, several of them were consistent for the subsequent ALU processing, so only a 3bits ALUctrl was needed. Also the same to ImmSrc data set, thinking that the different operations corresponded to different ImmSrcs, but after being reminded of this by the team and checking myself, I also changed the ImmSrc to 2bits (but later it was proved that 3bit version was right). Another mistake is that if I had written BEQ before BNE, then the conditional judgment statement for BNE would never have been executed. Therefore, to separate the two types of operations, we place the condition for the judgment of Funct3, which is part of the ALU decoder, before the Main decoder, so that the BEQ and BNE can be separated.     
About sign-extension:     
In this block, I learnt that in order to get a right instruction with same bit length, a signal-extension block is needed. Otherwise, the signal can’t be read by the Instruction memory.  
There are some mistakes and things that can be improved in the first time I wrote this block. At first, I used 2bit ImmSrc which comes from lab4. However, I found that 2bit is not enough. It has LW, LUI, BEQ and BNE, JAL, SW, 5 different instructions, so we need at least 3bit ImmSrc to represent all the instructions. After I changed it to 3bit, I discussed it with my groupmates. But during the discussion, we came to the wrong conclusion that instructions related to store operation would not come through sign-extension. At that version, we just let the Immsrc back to 2bit. Luckily, we finally found that the first version of RISC-V sign-extension is right, which means that we need 3bit Immsrc and SW will go through sign-extension block. 

**The F1 Sequence Program on RISC-V**

*doit-vbuddy.sh* is the script to simulate the processor on the vBuddy and *doit.sh* is a similar script used to quickly view and debug the processor on gtkWave.

The machine hex dump for the pipelined F1 sequence is located in *instruction.hex*. The corresponding machine code is located in *instr-assembly-code.s*.
The first line stores a number in register 10, which corresponds to the number of cycles we make the processor wait, so that the next light turns on after around 1 second. This should be changed according to the device. 

**Module Layout**
![Alt text](Module-layout.png?raw=true "layout")
