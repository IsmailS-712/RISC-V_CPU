module instr_mem (
    input logic                      Mem_inc,
    input logic [31:0]               A,
    output logic [31:0]              RD
);

logic [31:0] rom_array[0:31];

initial begin
    $readmemh("instruction.mem", rom_array);
end;

always_latch@(posedge Mem_inc)
    if (Mem_inc) RD <= rom_array [A];
endmodule
