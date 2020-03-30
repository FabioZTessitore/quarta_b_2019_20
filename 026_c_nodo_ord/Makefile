CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o nodo.o

main.o: main.c nodo.h
nodo.o: nodo.c nodo.h

.PHONY: clean
clean:
	rm -f *.o main