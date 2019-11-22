CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o giornale.o pagina.o articolo.o string.o

main.o: main.c giornale.h pagina.h articolo.h
giornale.o: giornale.c giornale.h pagina.h string.h
pagina.o: pagina.c pagina.h articolo.h
articolo.o: articolo.c articolo.h string.h
string.o: string.c string.h