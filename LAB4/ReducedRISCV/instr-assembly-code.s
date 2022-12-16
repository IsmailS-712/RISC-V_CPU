li x10, 99
li x12, 0

start:
    li x20, 0
    bne x31, x0, start

sequence:
    li x20, 1
    jal x1, count
    li x20, 3
    jal x1, count
    li x20, 7
    jal x1, count
    li x20, 15
    jal x1, count
    li x20, 31
    jal x1, count
    li x20, 63
    jal x1, count
    li x20, 127
    jal x1, count
    li x20, 255
    jal x1, count
    jalr x0, x11

count:
    addi x12, x12, 1
    bne x12, x10, count
    li x12, 0
    jalr x0, x1