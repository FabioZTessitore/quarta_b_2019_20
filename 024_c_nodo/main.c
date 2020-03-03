#include <stdio.h>
#include "nodo.h"

/* Gestione di Nodi per la creazione di una Lista concatenata */

void stampa(Nodo *head);

int main()
{
    Nodo *head = NULL;

    /* stampa lista vuota */
    stampa(head);

    /* creazione di un nuovo nodo */
    Nodo n1;
    n1.val = 3;
    n1.next = NULL;
    /* aggiungiamo n1 alla lista */
    head = &n1;
    /*
        head ---> n1 ---> NULL
    */

    /* stampa lista con un solo nodo */
    stampa(head);

    /* creazione di un secondo nodo */
    Nodo n2;
    n2.val = 7;
    n2.next = NULL;
    /* posiziona n2 in coda */
    n1.next = &n2;
    /*
        head ---> n1 ---> n2 ---> NULL
    */
    stampa(head);

    /* un altro nodo ancora */
    Nodo n3;
    n3.val = 10;
    n3.next = NULL;
    /* inserimento in testa */
    n3.next = head;
    head = &n3;
    /*
        head ---> n3 ---> n1 ---> n2 ---> NULL
    */
    stampa(head);
    
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