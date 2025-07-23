#include "registers.h"
#include "utils.h"
#include "instructions_encoder_R_format.h"
#include "parser.h"

#include <stdio.h>

int main(int argc , char* argv[]){
    // handle case when comamnd line arguments are not used appropriately

    if(argc != 3){
        fprintf(stderr , "Usage: %s <input_file_name> <output_file_name>" , argv[0]);
        return 1;
    }

    FILE *infile = fopen(argv[1] , "r");

    if(!infile){
        fprintf(stderr , "Cannot open input file mentioned. Please try again.");
        return 1;
    }

    FILE *outfile = fopen(argv[2] , "a");
    if(!outfile){
        fprintf(stderr , "Cannot open or create mentioned output file. Please try again.");
        fclose(infile);
        return 1;
    }

    char line[256];
    int line_number = 1;

    while(fgets(line , sizeof(line) , infile)){

        Instruction instruct = preprocess_and_parse_instruction(line);
        if(!instruct.valid){

            fprintf(stderr , "Line %d: %s Skipping Line : \"%s\"\n");

        }else {
            char* machine_code = "";
            char* instruction = instruct.instruction;
            unsigned int rd = instruct.rd;
            unsigned int rs2 = instruct.rs2;
            unsigned int rs1 = instruct.rs1;
            machine_code = instruction_encoder_r_format(instruction,rs2 , rs1 , rd);


            fprintf(outfile , "%s\n" , machine_code);

        }
        line_number++;

    }

    fclose(infile);
    fclose(outfile);
    printf("Assembly successful. Output written to %s\n", argv[2]);

    return 0;

    
}
