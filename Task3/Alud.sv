module Alud(
    input logic [1:0]   Aluop,
    input logic    op5,
    input logic [2:0]   Func3,
    input logic Func5,
    output logic [2:0] ALUctrl
    //output logic ImmSrc,
    //output logic PCsrc
);


always_comb begin

    case(Aluop)
        2'b00:
            ALUctrl = 3'b000;
        2'b01:
            ALUctrl = 3'b001;
        2'b10:
            case(Func3)
                3'b010:
                    ALUctrl = 3'b101;
                3'b110:
                    ALUctrl = 3'b011;
                3'b111:
                    ALUctrl = 3'b010;
                3'b000:
                    if(Func5 == 1 & op5 == 1)
                        ALUctrl = 3'b001;
                    else
                        ALUctrl = 3'b000;
            endcase

    endcase
    
    
end
    
endmodule
