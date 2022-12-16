module sign_ext (
    input logic [31:0]      Imm,
    input logic [2:0]       ImmSrc,
    output logic [31:0]     ImmOp
);

logic [6:0]     unused;
assign unused = Imm[6:0];

always_comb begin
    case(ImmSrc) 
        3'b000:
            ImmOp = {{20{Imm[31]}},Imm[31:20]}; //lw
        3'b001:
            ImmOp = {{Imm[31:12]}, 12'b0};   //LUI
        3'b010:
            ImmOp = {{20{Imm[31]}},Imm[7],Imm[30:25],Imm[11:8],1'b0}; //beq bne
        3'b011:
            ImmOp = {{12{Imm[31]}},Imm[19:12],Imm[20],Imm[30:21],1'b0}; //JAL
        3'b100:
            ImmOp = {{20{Imm[31]}},Imm[31:25],Imm[11:7]}; //sw
        default:
            ImmOp = {32'b0};
    endcase
end

endmodule
