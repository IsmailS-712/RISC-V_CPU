module ALU (
    input logic [31:0]      ALUop1,
    input logic [31:0]      RegOp2,
    input logic [2:0]       ALUctrl,
    input logic             ALUsrc,
    input logic [31:0]      ImmOp,
    input logic [31:0]      incPC,
    output logic [31:0]     ALUout,
    output logic            EQ
);

logic [31:0]      ALUop2;

assign ALUop2 = ALUsrc ? ImmOp : RegOp2;

always_comb 
    case (ALUctrl)
    3'b000: ALUout = ALUop1 + ALUop2; //ADD
    3'b001: ALUout = ALUop1 - ALUop2; //SUB
    3'b010: ALUout = ALUop1 & ALUop2; //AND
    3'b011: ALUout = ALUop1 | ALUop2; //OR
    3'b100: ALUout = (ALUop1 << ALUop2) + 1'b1; //SLL
    3'b101: ALUout = {{31{1'b0}},(ALUop1 < ALUop2)}; // SLT
    3'b111: ALUout = incPC; // calculate (PC + 4) for JAL
    default: ALUout = 32'b0;
    endcase

assign EQ = (ALUout == 32'b0);
endmodule
