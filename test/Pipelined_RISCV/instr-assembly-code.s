li x10, 17                  #store count value in x10 to make processor wait for 1 second
li x12, 0

start:
    li x20, 0
    bne x31, x0, start
    nop                     #add in 2 nop after every jump instructions to prevent next real instruction from being fetched
    nop

sequence:
    jal x1, count
    nop
    nop
    li x20, 1
    jal x1, count
    nop
    nop
    li x20, 3
    jal x1, count
    nop
    nop
    li x20, 7
    jal x1, count
    nop
    nop
    li x20, 15
    jal x1, count
    nop
    nop
    li x20, 31
    jal x1, count
    nop
    nop
    li x20, 63
    jal x1, count
    nop
    nop
    li x20, 127
    jal x1, count
    nop
    nop
    li x20, 255
    jal x1, count
    nop
    nop
    jalr x0, x11
    nop

count:
    nop
    addi x12, x12, 1
    nop                     #add in 2 nop to ensure x12 has been written to before bne
    nop
    bne x12, x10, count
    nop
    nop
    li x12, 0
    jalr x0, x1
    nop
    nop