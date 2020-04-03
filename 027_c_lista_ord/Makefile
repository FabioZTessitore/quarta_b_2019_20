CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o lista.o

main.o: main.c lista.h
lista.o: lista.c lista.h nodo.h

.PHONY: clean
clean:
	rm -f *.o main