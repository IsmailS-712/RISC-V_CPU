module control(
    input logic         EQ,
    input logic [31:0]  Instr,
    output logic        RegWrite,
    output logic [2:0]  ALUctrl,
    output logic        ALUsrc,
    output logic [1:0]  ImmSrc,
    output logic        PCsrc,
    output logic        Resultsrc,
    output logic        Memwrite
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
        //jump:
        //7'b1??????: -whatever jump signals-
        default: ALUsrc = 0;
    endcase


always_latch
    if (Op == 7'b0000011) begin  // Opcode = lw "Load Word"
        ALUop = 2'b00;
        ImmSrc = 2'b00;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 1;
    end

    else if (Op == 7'b0100011) begin // Opcode = sw "Store Word"
        ALUop = 2'b00;
        ImmSrc = 2'b01;
        PCsrc = 0;
        Memwrite = 1;
        RegWrite = 0;
    end

    else if (Op == 7'b0110011) begin // Opcode = R-type 
        ALUop = 2'b10;
        ImmSrc = 0;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 0;
    end

    else if (Op == 7'b1100011) begin // Opcode = BEQ
        ALUop = 2'b01;
        ImmSrc = 2'b10;
        PCsrc = ~EQ;
        Memwrite = 0;
    end

    else if (Op == 7'b1100011) begin // Opcode = BNE
        ALUop = 2'b01;
        ImmSrc = 2'b10;
        PCsrc = EQ;
        Memwrite = 0;
    end
    else ALUop = 2'b00;


always_latch

    if (ALUop == 2'b00)
        ALUctrl = 3'b000; // ADD (LW/SW)

    else if (ALUop == 2'b01)
        ALUctrl = 3'b001; // SUBTRACT (BNE)

    else if (ALUop == 2'b10)

        if (funct3 == 3'b010)
            ALUctrl = 3'b101; // SET LESS THAN

        else if (funct3 == 3'b110)
            ALUctrl = 3'b011; // OR

        else if (funct3 == 3'b111)
            ALUctrl = 3'b010; // AND

        else if (funct3 == 3'b000)

            if(funct7 == 1 && Op[5] == 1)
                ALUctrl = 3'b001; // SUBTRACT
                
            else
                ALUctrl = 3'b000; // ADD

endmodule
