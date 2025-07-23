# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -std=c99 -g -MMD

# All .c files in your project
SRCS = main_instruction_encoder.c parser.c registers.c utils.c instructions_encoder_R_format.c

# Corresponding .o files (object files)
OBJS = $(SRCS:.c=.o)

# Dependency files (for automatic header tracking)
DEPS = $(SRCS:.c=.d)

# Output binary
TARGET = riscv_encoder

# Default target
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile each .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Include dependency files if they exist
-include $(DEPS)

# Clean junk
clean:
	rm -f *.o *.d $(TARGET)
