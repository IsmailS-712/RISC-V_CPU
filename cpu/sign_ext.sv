module sign_ext (
    input logic [31:0]      Imm,
    input logic [1:0]       ImmSrc,
    output logic [31:0]     ImmOp
);

always_comb begin
    case(ImmSrc) 
        2'b00:
            ImmOp = {{20{Imm[31]}},Imm[31:20]}; //lw
        2'b01:
            ImmOp = {{Imm[31:12]}, 12'b0};   //LUI
        2'b10:
            ImmOp = {{20{Imm[31]}},Imm[7],Imm[30:25],Imm[11:8],1'b0}; //beq bne
        2'b11:
            ImmOp = {{12{Imm[31]}},Imm[19:12],Imm[20],Imm[30:21],1'b0}; //JAL
        default:
            ImmOp = {32'b0};
    endcase
end

endmodule
