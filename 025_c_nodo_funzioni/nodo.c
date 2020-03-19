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

void nodo_inserisciCoda(NodoPtr *head, int val)
{
    if (*head == NULL) {
        nodo_inserisciTesta(head, val);
        return;
    }

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = NULL;

    NodoPtr temp = *head;

    /* cerca la fine della lista */
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nuovoNodo;
}

void nodo_inserisciTesta(NodoPtr *head, int val) {
    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = *head;

    *head = nuovoNodo;
}

void nodo_inserisciDopo(NodoPtr head, int val, int key)
{
    while (head != NULL && head->val != key) {
        head = head->next;
    }

    /* key non trovato */
    if (head == NULL) return;

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = head->next;

    head->next = nuovoNodo;
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
