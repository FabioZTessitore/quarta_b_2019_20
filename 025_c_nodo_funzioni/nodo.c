/* nodo.c */

#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void nodo_stampa(NodoPtr head)
{
    NodoPtr temp;

    temp = head;
    while (temp != NULL) {
        printf("%d ---> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void nodo_inserisciCoda(NodoPtr *head, int val)
{
    NodoPtr t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = NULL;

    if (*head == NULL) {
        *head = t;
        return;
    }

    NodoPtr temp = *head;

    while (temp != NULL) {
        if (temp->next == NULL) {
            temp->next = t;
            return;
        }
        temp = temp->next;
    }
}

void nodo_inserisciTesta(NodoPtr *head, int val) {
    NodoPtr t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = *head;

    *head = t;
}

void nodo_inserisciDopo(NodoPtr *head, int val, int key)
{
    while (*head != NULL && (*head)->val != key) {
        *head = (*head)->next;
    }

    /* key non trovato */
    if (*head == NULL) return;

    NodoPtr t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = (*head)->next;

    (*head)->next = t;
}

void nodo_clear(NodoPtr *head)
{
    NodoPtr temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        free(temp);
    }
}
