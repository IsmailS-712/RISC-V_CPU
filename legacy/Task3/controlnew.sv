module controlnew(
    input logic [30:0]       instr,
    input logic zero,
    output logic PCsrc,
    output logic Resultsrc,
    output logic MemWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [1:0] Immsrc,
    output logic RegWrite
);

logic [1:0] Aluop;


    main a(zero, instr[6:0], PCsrc, Resultsrc, MemWrite, ALUsrc,Immsrc,RegWrite,Aluop);

    Alud b(Aluop,instr[5], instr[14:12],instr[15],ALUctrl);
<<<<<<< HEAD
=======

>>>>>>> 616fb35abc1695417ea9b887cc3530fdf89d1f39
    
endmodule