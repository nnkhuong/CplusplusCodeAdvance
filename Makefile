CXX = g++
CXXFLAGS = -Wall -g
SRC = main.cpp
OBJ = main.o
BIN = main

all: $(BIN)
$(BIN): $(SRC)
        $(CXX) $(CXXFLAGS) -c $(SRC)
        $(CXX) $(CXXFLAGS) -o $(BIN) $(OBJ) 

.PHONY: clean
clean:
        rm -f $(OBJ) $(BIN)
