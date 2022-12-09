module instr_mem (
    input logic [31:0]      A,
    output logic [31:0]     RD
);

logic [31:0] rom_array [(2**32)-1:0];

initial begin
    $readmemh("instruction.mem", rom_array);
end;

assign RD = rom_array[A];

endmodule
