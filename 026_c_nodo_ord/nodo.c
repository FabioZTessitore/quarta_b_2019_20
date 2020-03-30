/* nodo.c */

#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void nodo_stampa(NodoPtr current)
{
    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

void nodo_inserisci(NodoPtr *head, int val)
{
    NodoPtr current = *head;
    NodoPtr prev = NULL;

    NodoPtr temp = malloc(sizeof(Nodo));
    temp->val = val;
    temp->next = NULL;

    /* cerca l'ultimo nodo con valore minore di quello da inserire */
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        /* inserisce in testa */
        temp->next = *head;
        *head = temp;
    } else {
        /* inserisce dopo prev */
        prev->next = temp;
        temp->next = current;
    }
}

void nodo_rimuovi(NodoPtr *head, int val)
{
    NodoPtr current = *head;
    NodoPtr prev = NULL;
    NodoPtr temp = NULL;

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

    /* se l'elemento da rimuovere e' il primo */
    if (prev == NULL) {
        printf("L'elemento da eliminare e' in testa, elimina\n");
        /* *head punta al primo elemento, quello da eliminare */
        temp = *head;           /* copia il puntatore, per poter eliminare il nodo dopo */
        *head = (*head)->next;  /* *head ora punta al successivo */
        free(temp);             /* pulisce */
        return;
    }

    /* L'elemento da eliminare e' prev->next */
    printf("L'elemento da eliminare non e' in testa, elimina\n");
    temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void nodo_clear(NodoPtr *head)
{
    NodoPtr temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        
        printf("Cleaning node with value %d\n", temp->val);
        free(temp);
    }
}
