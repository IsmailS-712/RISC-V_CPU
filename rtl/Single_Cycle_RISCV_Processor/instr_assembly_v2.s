li x10, 20
li x12, 0
addi x13, x0, 0xff 

trigger:
    li x20, 0
    bne x31, x0, trigger

sequence:
    jal x1, count
    slli x20, x20, 1
    bne x20, x13, sequence
    jal x1, count
    jalr x0, x0

count:
    addi x12, x12, 1
    bne x12, x10, count
    li x12, 0
    jalr x0, x1
    