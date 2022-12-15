module control(
    input logic [31:0]  Instr,
    output logic        RegWrite,
    output logic [2:0]  ALUctrl,
    output logic        ALUsrc,
    output logic [2:0]  ImmSrc,
    output logic        Resultsrc,
    output logic        Memwrite,
    output logic        reg_jump,
    output logic        jump,
    output logic        branch
);

logic [1:0]     ALUop;
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
    if (Op == 7'b0000011) begin  // Opcode = lw "Load Word"
        ALUop = 2'b00;
        jump = 0;
        branch = 0;
        Memwrite = 0;
        Resultsrc = 1;
        reg_jump = 0;
        ImmSrc = 3'b000;
    end

    else if (Op == 7'b0100011) begin // Opcode = sw "Store Word"
        ALUop = 2'b00;
        ImmSrc = 3'b100;
        jump = 0;
        branch = 0;
        Memwrite = 1;
        RegWrite = 0;
        reg_jump = 0;
        Resultsrc = 0;
        ALUsrc = 1;
    end

    else if (Op == 7'b0110011 | Op == 7'b0010011) begin // Opcode = R-type or li "load immediate"
        ALUop = 2'b10;
        ImmSrc = 3'b000;
        jump = 0;
        branch = 0;
        Memwrite = 0;
        Resultsrc = 0;
        reg_jump = 0;
    end

    else if (Op == 7'b0110111) begin // Opcode = LUI
        ALUop = 2'b01;
        ImmSrc = 3'b000;
        jump = 0;
        branch = 0;
        Memwrite = 0;
        Resultsrc = 0;
        reg_jump = 0;
    end

    else if ((Op == 7'b1100011) & (funct3 == 3'b001)) begin // Opcode = BNE
        ALUop = 2'b01;
        ImmSrc = 3'b010;
        jump = 0;
        branch = 1;
        Memwrite = 0;
        reg_jump = 0;
        Resultsrc = 0;
    end
    else if (Op == 7'b1101111) begin // JAL
        ALUop = 2'b11;
        ImmSrc = 3'b011;
        jump = 1;
        Memwrite = 0;
        RegWrite = 1;
        reg_jump = 0;
        Resultsrc = 0;
    end
    else if (Op == 7'b1100111) begin // JALR
        ALUop = 2'b11;
        jump = 1;
        Memwrite = 0;
        RegWrite = 1;
        reg_jump = 1;
        Resultsrc = 0;
    end
    else begin
        ALUop = 2'b00;
        jump = 0;
        reg_jump = 0;
        Resultsrc = 0;
    end



always_latch
    if (ALUop == 2'b00)
        ALUctrl = 3'b000; // SW/LW

    else if (ALUop == 2'b01)
        ALUctrl = 3'b001; // SUBTRACT (BNE/BEQ)
    
    else if (ALUop == 2'b11)
        ALUctrl = 3'b111; //JAL
    
    else if (ALUop == 2'b10)

        if (funct3 == 3'b110)
            ALUctrl = 3'b011; // OR
        
        else if (funct3 == 3'b010)
            ALUctrl = 3'b101; //SLT

        else if (funct3 == 3'b111)
            ALUctrl = 3'b010; // AND

        else if (funct3 == 3'b000)

            if(funct7 == 1 && Op[5] == 1)
                ALUctrl = 3'b001; // SUBTRACT
                
            else
                ALUctrl = 3'b000; // ADD

endmodule
