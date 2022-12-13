module pc (
    input logic [31:0] ImmOp,
    input logic        clk,
    input logic        rst,
    input logic        PCsrc,
    input logic [31:0] reg_addr,
    input logic         reg_jump,
    output logic [31:0] PC_out,
    output logic [31:0] incPC
);

logic [31:0] branch_PC;
logic [31:0] inc_PC; 
logic [31:0] next_PC;

assign branch_PC = reg_jump ? reg_addr : PC_out + ImmOp;
assign inc_PC    = PC_out + 32'b100;
assign incPC    = PC_out + 32'b100;
assign next_PC   = PCsrc ? branch_PC : inc_PC;

always_ff @(posedge clk, posedge rst) 
    if (rst) PC_out <= 32'b0;
    else     PC_out <= next_PC;

endmodule
