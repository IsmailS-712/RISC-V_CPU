module ALU #(
    input logic [31:0]      ALUop1,
    input logic [31:0]      ALUop2,
    input logic [2:0]       ALUctrl,
    output logic [31:0]     ALUout,
    output logic            EQ,
    output logic            Zero

);

always_comb 
case (ALUctrl) 
3'b000: ALUout = ALUop1 + ALUop2; //ADD
3'b001: ALUout = ALUop1 - ALUop2; //SUB
3'b010: ALUout = ALUop1 & ALUop2; //AND
3'b011: ALUout = ALUop1 | ALUop2; //OR
3'b101: if (ALUop1 < ALUop2) //SLT
            ALUout = 1;
        if (ALUop1 >= ALUop2)
            ALUout = 0;
default: ALUout = 32'b0;
if (ALUout == 32'b0)
    Zero = 1;
else
    Zero = 0;

endcase

endmodule
