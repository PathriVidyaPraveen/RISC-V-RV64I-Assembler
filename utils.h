#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// #define concat(s1, s2) \
//     ({ \
//         char* _tmp_result = malloc(strlen(s1) + strlen(s2) + 1); \
//         if (!_tmp_result) { \
//             fprintf(stderr, "Memory allocation failed\n"); \
//             exit(1); \
//         } \
//         strcpy(_tmp_result, s1); \
//         strcat(_tmp_result, s2); \
//         free((void*)(s1)); \
//         _tmp_result; \
//     })



// typedef struct {
//     bool valid;
//     unsigned int rs2;
//     unsigned int rs1;
//     unsigned int rd;
//     char instruction[10];

// } Instruction;



// Define an enum that maps 4-bit binary strings to their hexadecimal equivalent
typedef enum {
    BINARY_0000 = 0,
    BINARY_0001 = 1,
    BINARY_0010 = 2,
    BINARY_0011 = 3,
    BINARY_0100 = 4,
    BINARY_0101 = 5,
    BINARY_0110 = 6,
    BINARY_0111 = 7,
    BINARY_1000 = 8,
    BINARY_1001 = 9,
    BINARY_1010 = 10, // A
    BINARY_1011 = 11, // B
    BINARY_1100 = 12, // C
    BINARY_1101 = 13, // D
    BINARY_1110 = 14, // E
    BINARY_1111 = 15  // F

} BinaryToHex;

char* get_hexadecimal_num_from_binary(const char* binary){

    static char hex_string[9];
    int len = strlen(binary);
    int hex_index = 0;

    // output to stderr console about the binary string
    if(len%4 != 0){
        fprintf(stderr, "Error: Binary number length is not a multiple of 4\n");
        return NULL;
    }

    // Process each 4-bit chunk of the binary string
    for (int i = 0; i < len; i += 4) {
        char chunk[5] = {0};  // Temporary 4-bit string, 5 for null-terminator
        strncpy(chunk, &binary[i], 4);

        // Convert 4-bit binary chunk to hexadecimal using enum
        BinaryToHex bin_to_hex;
        if (strcmp(chunk, "0000") == 0) {
            bin_to_hex = BINARY_0000;
        }
        else if (strcmp(chunk, "0001") == 0){
             bin_to_hex = BINARY_0001;
        }
        else if (strcmp(chunk, "0010") == 0){
             bin_to_hex = BINARY_0010;
        }
        else if (strcmp(chunk, "0011") == 0){
             bin_to_hex = BINARY_0011;
        }
        else if (strcmp(chunk, "0100") == 0) {
            bin_to_hex = BINARY_0100;
        }

        else if (strcmp(chunk, "0101") == 0) {
            bin_to_hex = BINARY_0101;
        }
        else if (strcmp(chunk, "0110") == 0) {
            bin_to_hex = BINARY_0110;
        }
        else if (strcmp(chunk, "0111") == 0) {
            bin_to_hex = BINARY_0111;
        }
        else if (strcmp(chunk, "1000") == 0) {
            bin_to_hex = BINARY_1000;
        }
        else if (strcmp(chunk, "1001") == 0) {
            bin_to_hex = BINARY_1001;
        }
        else if (strcmp(chunk, "1010") == 0) {
            bin_to_hex = BINARY_1010;
        }
        else if (strcmp(chunk, "1011") == 0) {
            bin_to_hex = BINARY_1011;
        }
        else if (strcmp(chunk, "1100") == 0) {
            bin_to_hex = BINARY_1100;
        }
        else if (strcmp(chunk, "1101") == 0) {
            bin_to_hex = BINARY_1101;
        }
        else if (strcmp(chunk, "1110") == 0) {
            bin_to_hex = BINARY_1110;
        }
        else if (strcmp(chunk, "1111") == 0) {
            bin_to_hex = BINARY_1111;
        }
        else {
            // If chunk is invalid
            fprintf(stderr, "Error: Invalid binary chunk: %s\n", chunk);
            return NULL;
        }
        // add each character of chunk using the loop
        hex_string[hex_index++] = "0123456789ABCDEF"[bin_to_hex];

    }

        
        // null terminator added
        hex_string[hex_index] = '\0';

        return hex_string;


}



// Returns a 5-bit binary string corresponding to the integer from 0 to 31
const char* get_binary_string_from_int(unsigned int num) 
{
    switch(num) 
    {
        case 0:  return "00000";
        case 1:  return "00001";
        case 2:  return "00010";
        case 3:  return "00011";
        case 4:  return "00100";
        case 5:  return "00101";
        case 6:  return "00110";
        case 7:  return "00111";
        case 8:  return "01000";
        case 9:  return "01001";
        case 10: return "01010";
        case 11: return "01011";
        case 12: return "01100";
        case 13: return "01101";
        case 14: return "01110";
        case 15: return "01111";
        case 16: return "10000";
        case 17: return "10001";
        case 18: return "10010";
        case 19: return "10011";
        case 20: return "10100";
        case 21: return "10101";
        case 22: return "10110";
        case 23: return "10111";
        case 24: return "11000";
        case 25: return "11001";
        case 26: return "11010";
        case 27: return "11011";
        case 28: return "11100";
        case 29: return "11101";
        case 30: return "11110";
        case 31: return "11111";
        default:
        {
            fprintf(stderr, "Error: Invalid register number %u. Must be between 0 and 31.\n", num);
            return NULL;
        }
    }
}


char* concat(const char* s1, const char* s2) {
    char* result = (char*)malloc(strlen(s1) + strlen(s2) + 1); // +1 for '\0'
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}



#endif