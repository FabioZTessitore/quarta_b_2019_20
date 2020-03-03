#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

/* Gestione di Nodi per la creazione di una Lista concatenata */

void stampa(Nodo *head);
void inserisciCoda(Nodo **head, int val);
void inserisciTesta(Nodo **head, int val);
void inserisciDopo(Nodo **head, int val, int key);
void clear(Nodo **head);

int main()
{
    Nodo *head = NULL;
    stampa(head);

    inserisciCoda(&head, 3);
    /*
        head ---> 3 ---> NULL
    */
    stampa(head);

    inserisciDopo(&head, 7, 3);
    /*
        head ---> 3 ---> 7 ---> NULL
    */
    stampa(head);

    inserisciTesta(&head, 10);
    /*
        head ---> 10 ---> 3 ---> 7 ---> NULL
    */
    stampa(head);

    clear(&head);
    
    return 0;
}


void stampa(Nodo *head)
{
    Nodo *temp;

    temp = head;
    while (temp != NULL) {
        printf("%d ---> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void inserisciCoda(Nodo **head, int val)
{
    Nodo *t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = NULL;

    if (*head == NULL) {
        *head = t;
        return;
    }

    Nodo *temp = *head;

    while (temp != NULL) {
        if (temp->next == NULL) {
            temp->next = t;
            return;
        }
        temp = temp->next;
    }
}

void inserisciTesta(Nodo **head, int val) {
    Nodo *t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = *head;

    *head = t;
}

void inserisciDopo(Nodo **head, int val, int key)
{
    while (*head != NULL && (*head)->val != key) {
        *head = (*head)->next;
    }

    /* key non trovato */
    if (*head == NULL) return;

    printf("ok\n");
    printf("head is: %d\n", (*head)->val);

    Nodo *t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = (*head)->next;

    (*head)->next = t;
}

void clear(Nodo **head)
{
    Nodo *temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        free(temp);
    }
}