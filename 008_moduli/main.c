/* Codice 008 */

/* Lancio di un dado */

/* Strutturare un programma in moduli */

#include <stdio.h>
#include "dado.h"

int main()
{
    int faccia;

    /* inizializza il modulo dado */
    dado_init();

    /* lancia un dado */
    faccia = dado_roll();

    printf("Dado: %d\n", faccia);

    return 0;
}
