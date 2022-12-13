module control(
    input logic         EQ,
    input logic [31:0]  Instr,
    output logic        RegWrite,
    output logic [3:0]  ALUctrl,
    output logic        ALUsrc,
    output logic [2:0]  ImmSrc,
    output logic        PCsrc,
    output logic        Resultsrc,
    output logic        Memwrite,
    output logic        reg_jump
);

logic [2:0]     ALUop;
logic [6:0]     Op;
logic [14:12]   funct3;
logic           funct7;
logic [20:0]    unused;

assign Op = Instr[6:0];
assign funct3 = Instr[14:12];
assign funct7 = Instr[30];
assign unused = {Instr[31], Instr[29:15], Instr[11:7]};

always_comb
    casez(Op)
        7'b0??????: RegWrite = 1; //for most instructions, if 1st opcode bit is 0, they write to register
        default: RegWrite = 0;
    endcase
    //need multiple casez
always_comb
    casez(Op)
        7'b00?????: ALUsrc = 1; //for most instructions, if 2nd opcode bit is 0 then it uses immediates
        default: ALUsrc = 0;
    endcase


always_latch
    if (Op == 7'b0000011) begin  // Opcode = lw or lbu
        ALUop = 3'b000;
        ImmSrc = 3'b000;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 1;
        reg_jump = 0;
    end
   

    else if (Op == 7'b0100011) begin // Opcode = sw or sb
        ALUop = 3'b000;
        ImmSrc = 3'b001;
        PCsrc = 0;
        Memwrite = 1;
        RegWrite = 0;
        reg_jump = 0;
    end

    else if (Op == 7'b0110011 | Op == 7'b0010011) begin // Opcode = R-type or li "load immediate"
        ALUop = 3'b010;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 0;
        reg_jump = 0;
    end

    else if (Op == 7'b1100011) begin // Opcode = BEQ
        ALUop = 3'b001;
        ImmSrc = 3'b010;
        PCsrc = ~EQ;
        Memwrite = 0;
        reg_jump = 0;
    end

    else if (Op == 7'b1100011) begin // Opcode = BNE
        ALUop = 3'b001;
        ImmSrc = 3'b010;
        PCsrc = EQ;
        Memwrite = 0;
        reg_jump = 0;
    end
    else if (Op == 7'b1101111) begin // JAL
        ALUop = 3'b011;
        ImmSrc = 3'b011;
        PCsrc = 1;
        Memwrite = 0;
        RegWrite = 1;
        reg_jump = 0;
    end
    else if (Op == 7'b1100111) begin // JALR
        ALUop = 3'b011;
        PCsrc = 1;
        Memwrite = 0;
        RegWrite = 1;
        reg_jump = 1;
    end
    if (Op == 7'b0110111) begin  // Opcode = LUI
        ALUop = 3'b111;
        ImmSrc = 3'b111;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 1;
        reg_jump = 0;
        RegWrite = 1;
    end
    else begin
        ALUop = 3'b000;
        PCsrc = 0;
        reg_jump = 0;
    end



always_latch

    if (ALUop == 3'b000)
        if(funct3==3'b010)
            ALUctrl = 4'b0000; // ADD (LW/SW)
        else if (funct3==3'b100)
            ALUctrl = 4'b0110; //LBU load byte unsigend
        else if (funct3==3'b00)
            ALUctrl = 4'b0100;  //SB store byte 
    else if (ALUop == 3'b001)
        ALUctrl = 4'b0001; // SUBTRACT (BNE/BEQ)
    
    else if (ALUop == 3'b011)
        ALUctrl = 4'b0111; //JAL
    
    else if (ALUop == 3'b010)

        if (funct3 == 3'b010)
            ALUctrl = 4'b0101; // SET LESS THAN

        else if (funct3 == 3'b110)
            ALUctrl = 4'b0011; // OR

        else if (funct3 == 3'b111)
            ALUctrl = 4'b0010; // AND

        else if (funct3 == 3'b000)

            if(funct7 == 1 && Op[5] == 1)
                ALUctrl = 4'b0001; // SUBTRACT
                
            else
                ALUctrl = 4'b0000; // ADD
        else if (ALUop == 3'b111) 
            ALUctrl = 4'b1111;  //LUI
endmodule