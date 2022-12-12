module data_mem (
    input logic                     clk,
    input logic                     WE,
    input logic [31:0]              A,
    input logic [31:0]              WD,
    output logic [31:0]             RD,
);

logic [31:0] data_array [20'h1FFFF:0];

initial begin
    $readmemh("data.mem", data_array);
end;

always_ff @ (posedge clk)
    if (WE)     data_array[(A/4)] <= WD;
    else        RD <= data_array[(A/4)];

endmodule
