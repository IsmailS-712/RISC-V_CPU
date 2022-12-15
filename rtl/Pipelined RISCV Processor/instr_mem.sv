module instr_mem (
    input logic [31:0]      A,
    output logic [31:0]     RD
);

logic [31:0] rom_array [32'hBFC00FFF:32'hBFC00000];

initial begin
    $readmemh("instruction.hex", rom_array);
end;

assign RD = rom_array[(A/4)];

endmodule
