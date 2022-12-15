module pc (
    //PC
    input logic        clk,
    input logic        rst,
    input logic        PCsrc,
    input logic  [31:0] branch_PC,
    output logic [31:0] PC_out,
    output logic [31:0] incPC,
    //Resultsrc
    input logic         Resultsrc,
    input logic [31:0]  A,
    input logic [31:0]  RD,
    output logic [31:0] Result
);

//Resultsrc
always_comb
    assign Result = Resultsrc ? RD : A;

//PC
logic [31:0] inc_PC; 
logic [31:0] next_PC;

assign inc_PC    = PC_out + 32'b100;
assign incPC    = PC_out + 32'b100;
assign next_PC   = PCsrc ? branch_PC : inc_PC;

always_ff @(posedge clk, posedge rst) 
    if (rst) PC_out <= 32'hBFC00000;
    else     PC_out <= next_PC + 32'hBFC00000;



endmodule
