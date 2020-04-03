#include <stdio.h>
#include "lista.h"

/* Una lista concatenata ordinata */

int main()
{
    Lista l;

    lista_init(&l);
    
    lista_stampa(&l);

    lista_inserisci(&l, 3);
    lista_stampa(&l);

    lista_inserisci(&l, 7);
    lista_stampa(&l);

    lista_inserisci(&l, 10);
    lista_stampa(&l);

    lista_inserisci(&l, 2);
    lista_stampa(&l);

    lista_inserisci(&l, 5);
    lista_stampa(&l);

    lista_rimuovi(&l, 2);
    lista_stampa(&l);

    lista_rimuovi(&l, 5);
    lista_stampa(&l);

    lista_rimuovi(&l, 50);

    lista_rimuovi(&l, 10);
    lista_stampa(&l);

    lista_clear(&l);
    
    return 0;
}
