# Exec name and obj files
EXEC = bin/chess
SRC = $(wildcard src/*.cpp)
OBJ = obj/main.o obj/Chess.o obj/Board.o obj/Piece.o

# Compilation parameters
CC = g++
CFLAGS = -ggdb -Wall -std=c++11
LDFLAGS = -ggdb

.PHONY = all dirs clean

all: $(EXEC)

# Linking
$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

# Compilation before linking
obj/main.o: src/Chess.h src/Board.h src/Piece.h

obj/Chess.o: src/Board.h src/Piece.h

obj/Board.o: src/Piece.h

obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning
clean:
	rm -f obj/* bin/*
