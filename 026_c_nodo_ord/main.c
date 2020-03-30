#include <stdio.h>
#include "nodo.h"

/* Una lista concatenata ordinata */

int main()
{
    NodoPtr head = NULL;
    /*
        head ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisci(&head, 3);
    /*
        head ---> 3 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisci(&head, 7);
    /*
        head ---> 3 ---> 7 ---> NULL
    */
    nodo_stampa(head);

    nodo_inserisci(&head, 10);
    /*
        head ---> 3 ---> 7 ---> 10 --> NULL
    */
    nodo_stampa(head);

    nodo_inserisci(&head, 2);
    /*
        head ---> 2 ---> 3 ---> 7 ---> 10 --> NULL
    */
    nodo_stampa(head);

    nodo_inserisci(&head, 5);
    /*
        head ---> 2 ---> 3 ---> 5 ---> 7 ---> 10 --> NULL
    */
    nodo_stampa(head);

    nodo_rimuovi(&head, 2);
    /*
        head ---> 3 ---> 5 ---> 7 ---> 10 --> NULL
    */
    nodo_stampa(head);

    nodo_rimuovi(&head, 5);
    /*
        head ---> 3 ---> 7 ---> 10 --> NULL
    */
    nodo_stampa(head);

    /* elemento non presente in lista */
    nodo_rimuovi(&head, 50);

    nodo_rimuovi(&head, 10);
    /*
        head ---> 3 ---> 7 ---> NULL
    */
    nodo_stampa(head);

    nodo_clear(&head);
    
    return 0;
}
