#include <stdio.h>
#include "nodo.h"

/* Gestione di Nodi per la creazione di una Lista concatenata */

int main()
{
    NodoPtr head = NULL;
    nodo_stampa(head);

    nodo_inserisciCoda(&head, 3);
    /*
        head ---> 3 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisciDopo(head, 7, 3);
    /*
        head ---> 3 ---> 7 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisciTesta(&head, 10);
    /*
        head ---> 10 ---> 3 ---> 7 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisciDopo(head, 8, 3);
    /*
        head ---> 10 ---> 3 --> 8 ---> 7 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisciCoda(&head, 9);
    /*
        head ---> 10 ---> 3 --> 8 ---> 7 ---> 9 --> NULL
    */
    nodo_stampa(head);

    nodo_clear(&head);
    
    return 0;
}
