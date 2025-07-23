#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "registers.h"



typedef struct {
    bool valid;
    char* error_message_to_display;
    unsigned int rs2;
    unsigned int rs1;
    unsigned int rd;
    char instruction[10];

} Instruction;




// Handle all the preprocessing and parsing of the line string from the input file and parses it into tokens
// so that we can retrieve all the arguments needed for the instruction encoder to output machine code

// helper function in preprocessing to trim all leading and trailing whitespace characters and newlines etc and given clean string

void trim_whitespaces(char *str){
    // trim leading space

    char *start = str;
    while(isspace((unsigned char)*start)){
        start++;
    }

    // trim trailing space

    char *end = start + strlen(start) - 1;
    while(end > start && isspace((unsigned char)*end)){
        end--;
    }

    *(end+1) = '\0';

    if(start != str){
        memmove(str , start , strlen(start)+1);
    }

}

Instruction preprocess_and_parse_instruction(const char* line){

    Instruction result;
    result.valid = false;
    result.error_message_to_display = "";



    if(line == NULL || strlen(line) == 0){
        result.error_message_to_display = "Invalid input line of zero length!";
        return result;

    }

    // make a mutable copy of line of the input file

    char buffer[100];
    strncpy(buffer , line , sizeof(buffer));
    buffer[sizeof(buffer)-1] = '\0';

    // now trim whitespaces of the buffer copy

    trim_whitespaces(buffer);

    // skip comment lines of assembly code

    if(buffer[0] == ';' || buffer[0] == '#' || (buffer[0] == '/' && buffer[1] == '/')){
        result.error_message_to_display = "This is a comment so skipped!";
        return result;
    }

    // tokenize the buffer

    char *token = strtok(buffer , " ,\t\n");
    if(token == NULL){
        result.error_message_to_display = "Not able to parse correctly! Try again!";
        return result;
    }

    strncpy(result.instruction , token , sizeof(result.instruction));

    result.instruction[sizeof(result.instruction)-1] = '\0';
    
    // parse and extract destination register

    token = strtok(NULL , " ,\t\n");
    if(token == NULL){
        
        result.error_message_to_display = "Not able to parse correctly! Try again!";
        return result;
    }
    result.rd = get_register_number(token);

    // parse and  extract first register

    token = strtok(NULL , " ,\t\n");
    if(token == NULL){
        
        result.error_message_to_display = "Not able to parse correctly! Try again!";
        return result;
    }
    result.rs1 = get_register_number(token);


    // parse and extract second register

    token = strtok(NULL , " ,\t\n");
    if(token == NULL){
        
        result.error_message_to_display = "Not able to parse correctly! Try again!";
        return result;
    }
    result.rs2 = get_register_number(token);

    result.valid = true;
    

    return result;


}


#endif

