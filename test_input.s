# Sample RISC-V Assembly Program
# Testing R-type instructions

add x5, x1, x2       # x5 = x1 + x2
sub x6, x3, x4       # x6 = x3 - x4

and x7, x5, x6       # x7 = x5 & x6
or x8, x7, x0        # x8 = x7 | x0

# Invalid instruction (should trigger warning)
mul x9, x1, x2       

# Another valid one
add x10, x11, x12

# Extra whitespace and tabs
    sub     x13,   x14, x15    

# Blank line below:


# Program end
