module top (
    input logic             clk,
    input logic             rst,
    input logic             trigger,
    output logic [31:0]     a0 [31:0],
    output logic [7:0]      data_out
);

//pc.sv outputs
logic [31:0] PC;
logic [31:0] incPC;
logic [31:0] Result;

pc pc(
    .clk(clk),
    .rst(rst),
    .PCsrc(pPCsrc),
    .PC_out(PC),
    .incPC(incPC),
    .branch_PC(branch_PC),
    .Resultsrc(pResultsrc),
    .A(p2ALUout),
    .RD(pRD),
    .Result(Result)
);


//instr_mem.sv outputs
logic [31:0] instr;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;
logic [31:0] Imm;

instr_mem instr_mem(
    .A(PC),
    .RD(instr)
);


//control.sv outputs
logic       Resultsrc;
logic       Memwrite;
logic [2:0] ALUctrl;
logic       ALUsrc;
logic [2:0] ImmSrc;
logic       RegWrite;
logic       reg_jump;
logic       jump;
logic       branch;

control control(
    .Instr(pinstr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .Resultsrc(Resultsrc),
    .Memwrite(Memwrite),
    .reg_jump(reg_jump),
    .jump(jump),
    .branch(branch)
);


//sign_ext.sv outputs
logic [31:0] ImmOp;

sign_ext signextend(
    .Imm(Imm),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);


//register.sv outputs
logic [31:0] RD1;
logic [31:0] RD2;

register register(
    .clk(clk),
    .AD1(rs1),
    .AD2(rs2),
    .AD3(prd),
    .WE3(pRegWrite),
    .WD3(Result),
    .RD1(RD1),
    .RD2(RD2),
    .a0(a0),
    .trigger(trigger)
);


//ALU.sv outputs
logic [31:0] ALUout;
logic        EQ;
logic [31:0] branch_PC;

ALU ALU(
    .ALUop1(pRD1),
    .RegOp2(pRD2),
    .ALUctrl(pALUctrl),
    .ImmOp(pImmOp),
    .ALUsrc(pALUsrc),
    .ALUout(ALUout),
    .incPC(incPC),
    .EQ(EQ),
    .reg_jump(preg_jump),
    .PC(pPC),
    .branch_PC(branch_PC)
);


//data_mem.sv outputs
logic [31:0] RD;

data_mem data_mem(
    .clk(clk),
    .A(pALUout),
    .WE(pMemwrite),
    .WD(p2RD2),
    .RD(RD)
);


//instruction bus outputs
assign rs1 = pinstr[19:15];
assign rs2 = pinstr[24:20];
assign rd = pinstr[11:7];
assign Imm = pinstr[31:0];

//data_out bus
assign data_out[0] = a0[20][0];
assign data_out[1] = a0[20][1];
assign data_out[2] = a0[20][2];
assign data_out[3] = a0[20][3];
assign data_out[4] = a0[20][4];
assign data_out[5] = a0[20][5];
assign data_out[6] = a0[20][6];
assign data_out[7] = a0[20][7];

//pipeline outputs
logic [31:0] pPC;
logic [31:0] pinstr;
logic        pRegWrite;
logic        pResultsrc;
logic        pMemwrite;
logic        pPCsrc;
logic [2:0]  pALUctrl;
logic        pALUsrc;
logic        preg_jump;
logic [31:0] pRD1;
logic [31:0] pRD2;
logic [31:0] p2RD2;
logic [31:0] pImmOp;
logic [4:0]  prd;
logic [31:0] pALUout;
logic [31:0] p2ALUout;
logic [31:0] pRD;

pipeline pipline (
    .clk(clk),
    .PC(PC),
    .pPC(pPC),
    .instr(instr),
    .pinstr(pinstr),
    .RegWrite(RegWrite),
    .pRegWrite(pRegWrite),
    .Resultsrc(Resultsrc),
    .pResultsrc(pResultsrc),
    .Memwrite(Memwrite),
    .pMemwrite(pMemwrite),
    .pPCsrc(pPCsrc),
    .ALUctrl(ALUctrl),
    .pALUctrl(pALUctrl),
    .ALRsrc(ALUsrc),
    .pALUsrc(pALUsrc),
    .reg_jump(reg_jump),
    .preg_jump(preg_jump),
    .jump(jump),
    .branch(branch),
    .RD1(RD1),
    .pRD1(pRD1),
    .RD2(RD2),
    .pRD2(pRD2),
    .p2RD2(p2RD2),
    .ImmOp(ImmOp),
    .pImmOp(pImmOp),
    .rd(rd),
    .prd(prd),
    .ALUout(ALUout),
    .pALUout(pALUout),
    .p2ALUout(p2ALUout),
    .RD(RD),
    .pRD(pRD),
    .EQ(EQ)
);
endmodule
