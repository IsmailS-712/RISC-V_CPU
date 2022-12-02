module main(
    input logic         Zero,
    input logic [6:0]   op,
    output logic Pcsrc,
    output logic Resultsrc,
    output logic Memwrite,
    output logic Alusrc,
    output logic [1:0] Immsrc,
    output logic RegWrite
    output logic [1:0] Aluop,
);


always_comb begin

    if(op==7'b000011) begin
        RegWrite = 1,
        Immsrc = 2'b00,
        Alusrc = 1,
        Memwrite = 0,
        Resultsrc = 1,
        Pcsrc = 0,
        Aluop = 2'b00,
    end
    else if (op==7'b0100011) begin
        RegWrite = 0,
        Immsrc = 2'b01,
        Alusrc = 1,
        Memwrite = 1,
        //Resultsrc = 1,
        Pcsrc = 0,
        Aluop = 2'b00,
    end
    else if (op==7'b0110011) begin
        RegWrite = 1,
        //Immsrc = 2'b01,
        Alusrc = 0,
        Memwrite = 0,
        Resultsrc = 0,
        Pcsrc = 0,
        Aluop = 2'b10,
    end
    else if (op==7'b1100011) begin
        RegWrite = 0,
        Immsrc = 2'b10,
        Alusrc = 0,
        Memwrite = 0,
        //Resultsrc = 1,
        Pcsrc = Zero,
        Aluop = 2'b01,
    end
end
    
endmodule