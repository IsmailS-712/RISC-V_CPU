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
    case(Op)
    7'b0000011: begin // Opcode = lw "Load Word"
        ALUop = 2'b00;
        RegWrite = 1;
        ALUsrc = 1;
        ImmSrc = 2'b00;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 1;
    end

    7'b0100011: begin // Opcode = sw "Store Word"
        ALUop = 2'b00;
        RegWrite = 0;
        ALUsrc = 1;
        ImmSrc = 2'b01;
        PCsrc = 0;
        Memwrite = 1;
    end

    7'b0110011: begin // Opcode = R-type 
        ALUop = 2'b10;
        RegWrite = 1;
        ALUsrc = 0;
        ImmSrc = 0;
        PCsrc = 0;
        Memwrite = 0;
        Resultsrc = 0;
    end

    7'b1100011: begin // Opcode = beq "Branch if Equal"
        ALUop = 2'b01;
        RegWrite = 0;
        ALUsrc = 0;
        ImmSrc = 2'b10;
        PCsrc = EQ && 1;
        Memwrite = 0;
    end

    default: begin
        ALUop = 2'b00;
        RegWrite = 0;
        ALUsrc = 0;
        ImmSrc = 2'b00;
        PCsrc = 0;
    end
    endcase

always_latch

    if (ALUop == 2'b00)
        ALUctrl = 3'b000; // ADD (LW/SW)

    else if (ALUop == 2'b01)
        ALUctrl = 3'b001; // SUBTRACT (BEQ)

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
