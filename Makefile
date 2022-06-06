CC := clang
STD := c99
LFLAGS := -Wall
CFLAGS := -I. -Isrc/ -Wall -Wextra -pedantic -std=${STD}

SRC:=src
OBJ:=obj
BIN:=kilo.elf

SRCS :=$(SRC)/main.c
OBJS :=$(OBJ)/main.o

all: CFLAGS += -g -O0
all: $(BIN)

release: CFLAGS += -Os
release: $(BIN)

.PHONY: clean
clean:
	rm obj/*.o $(BIN)

# For Compiling OBJ/* To Binary
$(BIN): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $@

# For Compiling src/*.c
$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
