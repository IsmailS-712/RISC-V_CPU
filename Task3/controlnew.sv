module controlnew(
    input logic [30:0]       instr,
    input logic zero,
    output logic Pcsrc,
    output logic Resultsrc,
    output logic MemWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [1:0] Immsrc,
    output logic RegWrite
);

logic [1:0] Aluop;
always_comb begin

    main a(zero, instr[6:0], Pcsrc, Resultsrc, MemWrite, ALUsrc,Immsrc,RegWrite,Aluop);

    Alud b(Aluop,instr[5], instr[14:12],instr[15],ALUctrl);
end
    
endmodule
