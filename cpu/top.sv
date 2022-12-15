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

pc pc(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .PC_out(PC),
    .incPC(incPC),
    .branch_PC(branch_PC)
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
logic       PCsrc;
logic       Resultsrc;
logic       MemWrite;
logic [2:0] ALUctrl;
logic       ALUsrc;
logic [2:0] ImmSrc;
logic       RegWrite;
logic       reg_jump;

control control(
    .EQ(EQ),
    .Instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .PCsrc(PCsrc),
    .ImmSrc(ImmSrc),
    .Resultsrc(Resultsrc),
    .Memwrite(MemWrite),
    .reg_jump(reg_jump)
);


//sign_ext.sv outputs
logic [31:0] ImmOp;

sign_ext signextend(
    .Imm(Imm),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);


//register.sv outputs
logic [31:0] Regop1;
logic [31:0] Regop2;

register register(
    .clk(clk),
    .AD1(rs1),
    .AD2(rs2),
    .AD3(rd),
    .WE3(RegWrite),
    .WD3(Result),
    .RD1(Regop1),
    .RD2(Regop2),
    .a0(a0),
    .trigger(trigger)
);


//ALU.sv outputs
logic [31:0] ALUout;
logic        EQ;
logic [31:0] branch_PC;

ALU ALU(
    .ALUop1(Regop1),
    .RegOp2(Regop2),
    .ALUctrl(ALUctrl),
    .ImmOp(ImmOp),
    .ALUsrc(ALUsrc),
    .ALUout(ALUout),
    .incPC(incPC),
    .EQ(EQ),
    .reg_jump(reg_jump),
    .PC(PC),
    .branch_PC(branch_PC)
);


//data_mem_mux.sv outputs
logic [31:0] Result;

data_mem_mux data_mem(
    .clk(clk),
    .A(ALUout),
    .WE(MemWrite),
    .WD(Regop2),
    .Resultsrc(Resultsrc),
    .Result(Result)
);


//instruction bus outputs
assign rs1 = instr[19:15];
assign rs2 = instr[24:20];
assign rd = instr[11:7];
assign Imm = instr[31:0];

//data_out bus
assign data_out[0] = a0[20][0];
assign data_out[1] = a0[20][1];
assign data_out[2] = a0[20][2];
assign data_out[3] = a0[20][3];
assign data_out[4] = a0[20][4];
assign data_out[5] = a0[20][5];
assign data_out[6] = a0[20][6];
assign data_out[7] = a0[20][7];

endmodule
