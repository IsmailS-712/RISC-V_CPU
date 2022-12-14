module instr_mem (
    input logic [31:0]               A,
    output logic [31:0]              RD
);

logic [7:0] rom_array[0:27];

initial begin
    $readmemh("instruction.mem", rom_array);
end;

assign RD = {rom_array[A], rom_array[A+1], rom_array[A+2], rom_array[A+3]};

endmodule
