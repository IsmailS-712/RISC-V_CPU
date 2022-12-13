module data_mem_mux (
    input logic               clk,
    input logic [31:0]      A,
    input logic             WE,
    input logic [31:0]      WD,
    input logic             Resultsrc,
    output logic [31:0]     Result
);

logic [31:0] data_array [32'h1FFFF:0];
logic [31:0] RD;

always_ff @(posedge clk)
    begin
    if (WE)
        data_array[A] <= WD;
    RD <= data_array[A];
    end

always_comb
    assign Result = Resultsrc ? RD : A;

endmodule
