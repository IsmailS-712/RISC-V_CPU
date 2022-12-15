module pipeline (
    input logic         clk,

    //PC
    input logic [31:0]  PC,
    output logic [31:0] pPC,

    input logic [31:0]  instr,
    output logic [31:0] pinstr,

    //control signals
    input logic         RegWrite,
    output logic        pRegWrite,

    input logic         Resultsrc,
    output logic        pResultsrc,

    input logic         Memwrite,
    output logic        pMemwrite,

    output logic        pPCsrc,

    input logic [2:0]   ALUctrl,
    output logic [2:0]  pALUctrl,

    input logic         ALRsrc,
    output logic        pALUsrc,

    input logic         reg_jump,
    output logic        preg_jump,

    input logic         jump,

    input logic         branch,

    input logic         EQ,

    //register + signextension
    input logic [31:0]  RD1,
    output logic [31:0] pRD1,

    input logic [31:0]  RD2,
    output logic [31:0] pRD2,
    output logic [31:0] p2RD2,

    input logic [31:0]  ImmOp,
    output logic [31:0] pImmOp,

    input logic [4:0]   rd,
    output logic [4:0]  prd,

    //ALU + branch
    input logic [31:0]  ALUout,
    output logic [31:0] pALUout,
    output logic [31:0] p2ALUout,
 
    //data memory
    input logic [31:0]  RD,
    output logic [31:0] pRD
);

//for storing signals that are delayed by more than 1 clock
//PC
logic [31:0] PC_d;

//control
logic RegWrite_d1;
logic RegWrite_d2;

logic Resultsrc_d1;
logic Resultsrc_d2;

logic Memwrite_d;

logic pjump;
logic pbranch;

//register + signextension
logic [4:0] rd_d1;
logic [4:0] rd_d2;

//ALU + branch

//data memory

always_ff @(posedge clk)begin
    //PC
    pPC <= PC_d;
    PC_d <= PC;

    pinstr <= instr;

    //control
    pRegWrite <= RegWrite_d2;
    RegWrite_d2 <= RegWrite_d1;
    RegWrite_d1 <= RegWrite;

    pResultsrc <= Resultsrc_d2;
    Resultsrc_d2 <= Resultsrc_d1;
    Resultsrc_d1 <= Resultsrc;

    pMemwrite <= Memwrite_d;
    Memwrite_d <= Memwrite;

    pALUctrl <= ALUctrl;

    pALUsrc <= ALRsrc;

    preg_jump <= reg_jump;

    pjump <= jump;

    pbranch <= branch;

    //register + signextension
    pRD1 <= RD1;

    pRD2 <= RD2;

    p2RD2 <= pRD2;
    pRD2 <= RD2;
        
    pImmOp <= ImmOp;

    prd <= rd_d2;
    rd_d2 <= rd_d1;
    rd_d1 <= rd;

    //ALU + branch
    p2ALUout <= pALUout;
    pALUout <= ALUout;

    //data memory
    pRD <= RD;
end

always_comb 
    assign pPCsrc = (pjump | (pbranch & EQ));

endmodule
