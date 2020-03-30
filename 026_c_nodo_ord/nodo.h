/* nodo.h */

#ifndef NODO_H
#define NODO_H

struct nodo {
    int val;
    struct nodo *next;
};
typedef struct nodo Nodo;
typedef struct nodo *NodoPtr;

void nodo_stampa(NodoPtr head);
void nodo_inserisci(NodoPtr *head, int val);
void nodo_rimuovi(NodoPtr *head, int val);
void nodo_clear(NodoPtr *head);

#endif
