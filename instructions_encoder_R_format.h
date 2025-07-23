#ifndef INSTRUCTION_ENCODER_R_FORMAT_H
#define INSTRUCTION_ENCODER_R_FORMAT_H


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

// define all the corresponding machine code equivalents of values of opcodes

// this is the R-type instruction format

// |  funct7  |  rs2  |  rs1  | funct3 |  rd   | opcode |
// | 7 bits  | 5 bits| 5 bits| 3 bits | 5 bits| 7 bits |


#define OPCODE_R_FORMAT "0110011"

#define FUNCT3_ADD "000"
#define FUNCT3_SUB "000"
#define FUNCT3_AND "111"
#define FUNCT3_OR "110"
#define FUNCT3_XOR "100"
#define FUNCT3_SLL "001"
#define FUNCT3_SRL "101"
#define FUNCT3_SRA "101"
#define FUNCT3_MUL "000"




#define FUNCT7_ADD "0000000"
#define FUNCT7_SUB "0100000"
#define FUNCT7_AND "0000000"
#define FUNCT7_OR "0000000"
#define FUNCT7_XOR "0000000"
#define FUNCT7_SLL "0000000"
#define FUNCT7_SRL "0000000"
#define FUNCT7_SRA "0100000"
#define FUNCT7_MUL "0000001"




char* ADD(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_ADD);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_ADD);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}


char* SUB(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_SUB);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_SUB);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}

char* AND(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_AND);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_AND);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}


char* OR(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_OR);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_OR);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}



char* XOR(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_XOR);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_XOR);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}

char* SLL(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_SLL);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_SLL);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}




char* SRL(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_SRL);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_SRL);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}




char* SRA(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_SRA);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_SRA);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}




char* MUL(unsigned int rs2, unsigned int rs1, unsigned int rd) {
    const char* rs2_str = get_binary_string_from_int(rs2);  // Must return dynamically allocated string
    const char* rs1_str = get_binary_string_from_int(rs1);
    const char* rd_str = get_binary_string_from_int(rd);

    char* binary_string = concat("", FUNCT7_MUL);
    
    char* temp1 = concat(binary_string, rs2_str);
    free(binary_string);
    binary_string = temp1;

    char* temp2 = concat(binary_string, rs1_str);
    free(binary_string);
    binary_string = temp2;

    char* temp3 = concat(binary_string, FUNCT3_MUL);
    free(binary_string);
    binary_string = temp3;

    char* temp4 = concat(binary_string, rd_str);
    free(binary_string);
    binary_string = temp4;

    char* temp5 = concat(binary_string, OPCODE_R_FORMAT);
    free(binary_string);
    binary_string = temp5;

    char* hexadecimal_string = get_hexadecimal_num_from_binary(binary_string);  // Make sure this allocates new memory

    free(binary_string);
    free((void*)rs2_str);
    free((void*)rs1_str);
    free((void*)rd_str);

    return hexadecimal_string;
}





// main function that uses instruction encoder to call teh corresponding function for encoding

char* instruction_encoder_r_format(char* instruction , unsigned int rs2 , unsigned int rs1 , unsigned int rd){
    if(strcmp(instruction , "add") == 0){
        return ADD(rs2,rs1,rd);
    }else if(strcmp(instruction , "sub") == 0){
        return SUB(rs2,rs1,rd);
    }else if(strcmp(instruction , "and") == 0){
        return AND(rs2,rs1,rd);
    }else if(strcmp(instruction , "or") == 0){
        return OR(rs2,rs1,rd);
    }else if(strcmp(instruction , "xor") == 0){
        return XOR(rs2,rs1,rd);
    }else if(strcmp(instruction , "sll") == 0){
        return SLL(rs2,rs1,rd);
    }else if(strcmp(instruction , "srl") == 0){
        return SRL(rs2,rs1,rd);
    }else if(strcmp(instruction, "sra") == 0){
        return SRA(rs2,rs1,rd);
    }else if(strcmp(instruction, "mul") == 0){
        return MUL(rs2,rs1,rd);
    }else{
        fprintf(stderr, "Error: Please check whether instruction is preprocessed correctly or is a valid instruction of R-format");
        return NULL;
    }
}



#endif

