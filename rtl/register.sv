module register (
    input logic             clk,
    input logic             trigger,
    input logic [4:0]       AD1,
    input logic [4:0]       AD2,
    input logic [4:0]       AD3,
    input logic             WE3,
    input logic [31:0]      WD3,
    output logic [31:0]     RD1,
    output logic [31:0]     RD2,
    output logic [31:0]     a0 [31:0]
);

logic [31:0] reg_array [31:0];

always_ff @(posedge clk) begin
    if (WE3 == 1'b1)
        reg_array[AD3] <= WD3;
        reg_array[0] <= 32'b0;
        reg_array[31] <= {{31{1'b0}},trigger};
end

always_comb begin
    RD1 = reg_array[AD1];
    RD2 = reg_array[AD2];
    a0 = reg_array;

end

endmodule
