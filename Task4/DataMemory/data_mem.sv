module data_mem (
    input logic                     clk,
    input logic                     WE,
    input logic [31:0]              A,
    input logic [31:0]              WD,
    output logic [31:0]             RD
);

logic [31:0] data_array [5:0];

initial begin
    $readmemh("data.hex", data_array);
end;

always_ff @ (posedge clk) begin
    if (WE)     data_array[(A/4)] <= WD;
    else        RD <= data_array[(A/4)];
end

endmodule
