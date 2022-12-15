module data_mem (
    input logic             clk,
    input logic [31:0]      A,
    input logic             WE,
    input logic [31:0]      WD,
    output logic [31:0]     RD
);

logic [31:0] data_array [32'h1FFFF:32'h0];

always_ff @(posedge clk)
    begin
    if (WE == 1'b1)
        data_array[A] <= WD;
    end
git 
always_comb begin
    RD = data_array[A];
end

endmodule
