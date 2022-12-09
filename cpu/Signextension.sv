module Signextension(
    input logic [31:7]        Imm,
    //input logic [11:0]       Imm_imm,
    input logic [1:0]        Immsrc,
    output logic [31:0]      ImmOp
);
//assign [11:0] Imm;
always_comb begin
    case(Immsrc) 
        2'b00:
            ImmOp = {{20{Imm[31]}},Imm[31:20]};
        2'b01:
            ImmOp = {{20{Imm[31]}},Imm[31:25],Imm[11:7]};
        2'b10:
            ImmOp = {{20{Imm[31]}},Imm[7],Imm[30:25],Imm[11:8],1'b0};
        2'b11:
            ImmOp = {{13{Imm[31]}},Imm[19:12],Imm[20],Imm[30:21]};
    endcase
end
endmodule
