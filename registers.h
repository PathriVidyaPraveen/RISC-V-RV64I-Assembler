#ifndef REGSITERS_H
#define REGISTERS_H
#include <stdlib.h>
#include <string.h>

// Function to get the register number from its name
int get_register_number(const char *reg) {
    
    // If the register name starts with 'x' (e.g., x1, x5, etc.)
    if (reg[0] == 'x') {
        // Convert the part after 'x' to an integer and return
        int reg_num = atoi(&reg[1]);  // atoi converts the string (e.g., "5") to an integer
        return reg_num;
    }

    // Check if the register is a special alias (e.g., zero, ra, sp, etc.)
    else {
        if (strcmp(reg, "zero") == 0) {
            return 0;  // Register 'zero' corresponds to register number 0
        }

        else if (strcmp(reg, "ra") == 0) {
            return 1;  // Register 'ra' (return address) corresponds to register number 1
        }

        else if (strcmp(reg, "sp") == 0) {
            return 2;  // Register 'sp' (stack pointer) corresponds to register number 2
        }

        else if (strcmp(reg, "tp") == 0) {
            return 3;  // Register 'tp' (temporary pointer) corresponds to register number 3
        }

        else if (strcmp(reg, "gp") == 0) {
            return 4;  // Register 'gp' (global pointer) corresponds to register number 4
        }

        else if (strcmp(reg, "tp") == 0) {
            return 3;  // Register 'tp' (temporary pointer) corresponds to register number 3
        }

        else if (strcmp(reg, "t0") == 0) {
            return 5;  // Register 't0' corresponds to register number 5
        }

        else if (strcmp(reg, "t1") == 0) {
            return 6;  // Register 't1' corresponds to register number 6
        }

        else if (strcmp(reg, "t2") == 0) {
            return 7;  // Register 't2' corresponds to register number 7
        }

        else if (strcmp(reg, "s0") == 0 || strcmp(reg, "fp") == 0) {
            return 8;  // Register 's0' or 'fp' (frame pointer) corresponds to register number 8
        }

        else if (strcmp(reg, "s1") == 0) {
            return 9;  // Register 's1' corresponds to register number 9
        }

        else if (strcmp(reg, "a0") == 0) {
            return 10; // Register 'a0' corresponds to register number 10
        }

        else if (strcmp(reg, "a1") == 0) {
            return 11; // Register 'a1' corresponds to register number 11
        }

        else if (strcmp(reg, "a2") == 0) {
            return 12; // Register 'a2' corresponds to register number 12
        }

        else if (strcmp(reg, "a3") == 0) {
            return 13; // Register 'a3' corresponds to register number 13
        }

        else if (strcmp(reg, "a4") == 0) {
            return 14; // Register 'a4' corresponds to register number 14
        }

        else if (strcmp(reg, "a5") == 0) {
            return 15; // Register 'a5' corresponds to register number 15
        }

        else if (strcmp(reg, "a6") == 0) {
            return 16; // Register 'a6' corresponds to register number 16
        }

        else if (strcmp(reg, "a7") == 0) {
            return 17; // Register 'a7' corresponds to register number 17
        }

        else if (strcmp(reg, "s2") == 0) {
            return 18; // Register 's2' corresponds to register number 18
        }

        else if (strcmp(reg, "s3") == 0) {
            return 19; // Register 's3' corresponds to register number 19
        }

        else if (strcmp(reg, "s4") == 0) {
            return 20; // Register 's4' corresponds to register number 20
        }

        else if (strcmp(reg, "s5") == 0) {
            return 21; // Register 's5' corresponds to register number 21
        }

        else if (strcmp(reg, "s6") == 0) {
            return 22; // Register 's6' corresponds to register number 22
        }

        else if (strcmp(reg, "s7") == 0) {
            return 23; // Register 's7' corresponds to register number 23
        }

        else if (strcmp(reg, "s8") == 0) {
            return 24; // Register 's8' corresponds to register number 24
        }

        else if (strcmp(reg, "s9") == 0) {
            return 25; // Register 's9' corresponds to register number 25
        }

        else if (strcmp(reg, "s10") == 0) {
            return 26; // Register 's10' corresponds to register number 26
        }

        else if (strcmp(reg, "s11") == 0) {
            return 27; // Register 's11' corresponds to register number 27
        }

        else if (strcmp(reg, "t3") == 0) {
            return 28; // Register 't3' corresponds to register number 28
        }

        else if (strcmp(reg, "t4") == 0) {
            return 29; // Register 't4' corresponds to register number 29
        }

        else if (strcmp(reg, "t5") == 0) {
            return 30; // Register 't5' corresponds to register number 30
        }

        else if (strcmp(reg, "t6") == 0) {
            return 31; // Register 't6' corresponds to register number 31
        }

        // If none of the registers matched, return -1 (invalid register)
        else {
            return -1;  // Invalid register
        }
    }
}

#endif
