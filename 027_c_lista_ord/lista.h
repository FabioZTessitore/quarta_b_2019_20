/* lista.h */

#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

struct lista {
    Nodo *head;
    int counter;
};
typedef struct lista Lista;

void lista_init(Lista *l);
void lista_stampa(Lista *l);
void lista_inserisci(Lista *l, int val);
void lista_rimuovi(Lista *l, int val);
void lista_clear(Lista *l);

#endif