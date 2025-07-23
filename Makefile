# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

# Executable name
TARGET = assembler

# Source file
SRC = main_instruction_encoder.c

# Default build rule
all: $(TARGET)

# Compile the main file into executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

# Clean rule
clean:
	rm -f $(TARGET)

.PHONY: all clean
