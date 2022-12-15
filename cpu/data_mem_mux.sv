module data_mem_mux (
    input logic               clk,
    input logic [31:0]      A,
    input logic             WE,
    input logic [31:0]      WD,
    input logic             Resultsrc,
    output logic [31:0]     Result
);

logic [31:0] data_array [32'h1FFFF:32'h0];
logic [31:0] RD;

always_ff @(posedge clk)
    begin
    if (WE == 1'b1)
        data_array[A] <= WD;
    end

always_comb begin
    RD = data_array[A];
    Result = Resultsrc ? RD : A;
end

endmodule
