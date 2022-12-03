module cpu (
    input logic             clk,
    input logic             rst,
    output logic [31:0]     a0 [4:0]
);

//bus from pc.sv
logic [31:0] PC;

//bus from instr_mem.sv
logic [31:0] instr;
logic [4:0] rs1;
logic [4:0] rs2;
logic [4:0] rd;
logic [31:7] Imm;

//bus from controlnew.sv
logic       PCsrc;
logic       Resultsrc;
logic       MemWrite;
logic [2:0] ALUctrl;
logic       ALUsrc;
logic       ImmSrc;
logic       RegWrite;

//bus from signextension.sv
logic [31:0] ImmOp;

//bus from register.sv
logic [31:0] Regop1;
logic [31:0] Regop2;

//bus from ALU.sv
logic [31:0] ALUout;
logic       EQ;

//bus from data_mem_mux.sv
logic [31:0] Result;

assign rs1 = instr[19:15];
assign rs2 = instr[24:20];
assign rd = instr[11:7];
assign Imm = instr[31:7];

pc pc(
    .ImmOp(ImmOp),
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc),
    .PC_out(PC)
);

controlnew control(
    .instr(instr),
    .zero(EQ),
    .Pcsrc(PCsrc),
    .Resultsrc(Resultsrc),
    .MemWrite(MemWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .Immsrc(ImmSrc),
    .RegWrite(RegWrite)
);

Signextension signextend(
    .Imm(Imm),
    .Immsrc(ImmSrc),
    .ImmOp(ImmOp)
);

ALU ALU(
    .ALUop1(Regop1),
    .RegOp2(Regop2),
    .ALUctrl(ALUctrl),
    .ImmOp(ImmOp),
    .ALUsrc(ALUsrc),
    .ALUout(ALUout),
    .EQ(EQ)
);

register register(
    .clk(clk),
    .AD1(rs1),
    .AD2(rs2),
    .AD3(rd),
    .WE3(RegWrite),
    .WD3(Result),
    .RD1(Regop1),
    .RD2(Regop2),
    .a0(a0)
);

data_mem_mux data_mem(
    .clk(clk),
    .A(ALUout),
    .WE(MemWrite),
    .WD(Regop2),
    .Resultsrc(Resultsrc),
    .Result(Result)
);

endmodule
