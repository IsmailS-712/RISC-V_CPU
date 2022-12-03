module controlnew(
    input logic [30:0]       instr,
    input logic zero,
    output logic Pcsrc,
    output logic Resultsrc,
    output logic Memwrite,
    output logic [2:0] Aluctrl,
    output logic Alusrc,
    output logic [1:0] Immsrc,
    output logic Regwrite
);

logic [1:0] Aluop;


    main a(zero, instr[6:0], Pcsrc, Resultsrc, Memwrite, Alusrc,Immsrc,RegWrite,Aluop);

    Alud b(Aluop,instr[5], instr[14:12],instr[15],ALUctrl);

    
endmodule