/* lista.c */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "nodo.h"

void lista_init(Lista * l)
{
    l->head = NULL;
    l->counter = 0;
}

void lista_stampa(Lista * l)
{
    Nodo *current = l->head;

    printf("[%d] ", l->counter);

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void lista_inserisci(Lista *l, int val)
{
    Nodo *current = l->head;
    Nodo *prev = NULL;

    Nodo *temp = malloc(sizeof(Nodo));
    temp->val = val;
    temp->next = NULL;

    /* cerca l'ultimo nodo con valore minore di quello da inserire */
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        /* inserisce in testa */
        temp->next = l->head;
        l->head = temp;
    } else {
        /* inserisce dopo prev */
        prev->next = temp;
        temp->next = current;
    }

    l->counter++;
}

void lista_rimuovi(Lista *l, int val)
{
    Nodo *current = l->head;
    Nodo *prev = NULL;
    Nodo *temp = NULL;

    /* cerca l'ultimo nodo con valore minore di quello da rimuovere */
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    /* se l'elemento non e' stato trovato */
    if (current == NULL) {
        printf("rimuovi(): elemento %d non trovato, non faccio nulla\n", val);
        return;
    }

    printf("rimuovi(): elemento %d trovato, vediamo cosa fare\n", val);
    l->counter--;

    /* se l'elemento da rimuovere e' il primo */
    if (prev == NULL) {
        printf("L'elemento da eliminare e' in testa, elimina\n");
        /* *head punta al primo elemento, quello da eliminare */
        temp = l->head;           /* copia il puntatore, per poter eliminare il nodo dopo */
        l->head = l->head->next;  /* *head ora punta al successivo */
        free(temp);               /* pulisce */
        return;
    }

    /* L'elemento da eliminare e' prev->next */
    printf("L'elemento da eliminare non e' in testa, elimina\n");
    temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void lista_clear(Lista *l)
{
    Nodo *temp;
    Nodo *current = l->head;

    while (current != NULL) {
        temp = current;    
        current = current->next;
        
        printf("Cleaning node with value %d\n", temp->val);
        free(temp);
    }

    l->head = NULL;
    l->counter = 0;
}