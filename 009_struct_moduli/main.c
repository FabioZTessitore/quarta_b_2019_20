/* Codice 009 */

/* Un punto del piano cartesiano */

/* Strutturare un programma in moduli */

/* Compilazione, link ed esecuzione:

$ make
$ ./main

*/

#include <stdio.h>
#include "punto.h"

int main()
{
    /* Creazione di un punto */
    Punto P = { 0, 0 };
    /* e' equivalente ad assegnare singolarmente:
     * P.x = 0;
     * P.y = 0;
     */
    
    /* stampa le coordinate del punto */
    punto_print(&P);

    /* modifica le coordinate del punto e ristampa */
    punto_setX(&P, 3.2);
    punto_setY(&P, 2.7);
    punto_print(&P);

    /* sposta il punto di un'unita' sull'asse x e due sull'asse y */
    punto_move(&P, 1., 2.);
    punto_print(&P);

    return 0;
}