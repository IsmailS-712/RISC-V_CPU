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

Main contributor towards: ALU, data_mux, register, [top module](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/5138fdeda56a531efb23420bf7b91e06b50a0719), [pipeline](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/b953bd7cd55512057a190aed103de9051f8dd0a0), [machine codes](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/4eb35946432e881b834bbf67edd5846d753f939f) and [testbenchs](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/34fa499e47b4a5b2ab4fe749d0be4c87122c3cae) for F1 sequence. Also contributed to parts of control - [JAL](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/af91b039d0c4666dc2f4d499690698ce58787ada)/[JALR](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-7/commit/11781d5446aec7a025807a08ffaf6db41b74c149) instructions and testing after combining all seperate modules into top. 

For the Lab4 project I chose to do the ALU part which hasnt changed much since, however the main challenge was *top.sv* as this contained many signals and was a nightmare to debug at first, especially since there were quite a few errors all over, which only showed up after combining the blocks. Testing of top.sv was very helpful in understanding how each block worked as debugging each block required good understanding of what the signals were doing. Understanding the control block was the main part as it was often errors there that caused the processor to not run as expected and as things went along I was almost able to tell exactly what signals to look for when things didnt work out. 

When making the testbench for the vBuddy, the main problem that came up was when pressing the trigger, the signal sent to the processor was so short it often didn't get detected, as the register was clocked. To solve this, I made the testbench hold the signal for a further 10 cycles everytime the trigger was pressed, and now works everytime.

Pipelining was the last part and I chose to make it a single block instead of multiple seperate blocks between each of the stages to make the process neater, especially for the signals like the ones from control which could be delayed up to 3 clock cycles. I also chose to use a simple naming convention where all signals output from pipeline had a *p* prefix added onto the input, which enabled me to quickly go through *top.sv* and reconnected the corresponding blocks. Surprisingly, the pipeline block had minimal errors, however, it did make debugging other parts of the processor much tougher as there were so many signals and they didn't align like before.

During this project I learnt a lot about how to debug the processor using GtkWave, looking for incorrect signals and finding the source. I also learnt a lot about system verilog language and syntax and I felt the number of syntax errors gradually decrease over time. Some mistakes along the way which I would do better next time include misinterpretting how SW and LW work and also logical errors due to not checking my code. 


**Ismail Personal Statement**
 - *Disclaimer: It's gonna take 6mins to read this*

My role in this project was to handle the testing of all modules, the same as in Lab 4. Early on I will admit, I had fallen behind on the labs and did not even start any of them until right before the midterms. I tried to get vBuddy to work but could not get it to recognise the port on my laptop, so I concluded that I would just not use vBuddy at all. This meant that I would not be able to see real-time execution and would rather have to rely on GTKWave for all my results. When each part of my team completed their respected sections of Lab4, I wrote up my own version of their modules so I could learn how each module worked. I started off with PC block, making sure it incremented by 4 so that the correct word address was used when fetching from instruction memory. Since the pc was clocked, I checked to make sure that GTKwave showed the PC incrementing on the rising edge, as well as the next PC input also being calculated then aswell. In the instruction memory, there was no module but there was a .mem file with the machine code of the instructions. I took it upon myself to create the instruction memory module following the lecture slides. I then tested in GTKWave to ensure that whatever address was provided on the A, would map to the correct instruction on RD, since it wasn’t clocked, I used a simple for loop in the testbench to make sure all instructions are read and outputted when they are fetched. After testing these 2 modules, I found that I was significantly more confident in my abilities to use VSCode and in creating testbenches, which I previously could not map my head around. For control.sv, I initially combined what was originally 3 modules into 1 to make it easier to test and find issues. I rigorously tested each instruction from Lab 4, including LW/SW/OR/BEQ and after a lot of tweaking, the correct signals were being outputted. This was done by setting the instruction machine code to what was in Lecture 7. Then I moved to the sign extension block, which for the most part, worked correctly using the ImmSrc signal it received. Throughout this testing, I consulted with my team using WhatsApp on matters I didn’t understand, and also to share my testing when their modules worked. I created a testbench and shell script for each module I tested, as evidenced in Task4 of Lab 4. When it came to this Project, I was tasked with creating the assembly code for the f1 sequence, but I didn’t have the slightest clue how to do it. Our team worked endlessly to get the Reduced RISCV working and once the JAL instruction was added in, and Edward had made the original version of the assembly code, we began testing all together. At this stage, I continued to test the top level module of our CPU to help with bug testing. Once I had fully understood how the assembly code was implemented, I decided to implement the Logical Shift Left function into the ALU and control, which would make our f1 sequence code much more minimal and reduced the total assembly code down from 31 lines to 19 lines, and removing a bug that meant there was no delay before the first f1 light. I have also created a test evidence document, to show that our RISCV processor does indeed execute the F1 starting light sequence. To conclude, I have learnt more than I ever thought I would during this project even after falling behind. What our lecturer said in the first lab was true, he didn’t want us to copy and paste the module and testbench code, but rather to go through it line by line so we would understand. I didn’t understand how testbenches worked, and after writing about 5 of them, they’re straightforward. I didn’t even understand how assembly code was written, but after using my own and testing many different programs, I was able to make a more efficient version. I am grateful to my teammates for being supportive in the few times that we met up and in the WhatsApp group, especially Edward who seemed to have done more than half of this project on his own. In the future, I will try my best to stay on target and do labs on time, so I don’t get time crunched like this time and have to put all my other modules on hold. I will also try to physically attend the labs, because I’ve found that I do not like to ask for help sometimes, but I need to force myself for my own benefit and for the team. My methodology was using trial and error in every part of this project, and whilst it’s time consuming, it is no doubt a great asset to my learning.


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
