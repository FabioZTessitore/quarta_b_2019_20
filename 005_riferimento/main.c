/* Codice 005 */

/* Scambio */

/* Passaggio per riferimento */

/* Compilazione, link ed esecuzione:

$ gcc -c main.c -o main.o
$ gcc main.o -o main
$ ./main

*/

void stampa_indirizzi(int a, int *pb);
void swap(int *pa, int *pb);

#include <stdio.h>

int main()
{
    /* due variabili intere */
    int a = 3, b = 7;

    /* stampa l'indirizzo di a e b */
    printf("indirizzo di a: %p\n", (void *)&a);
    printf("indirizzo di b: %p\n", (void *)&b);

    putchar('\n');

    /* passa una variabile per valore e l'altra per riferimeno */
    stampa_indirizzi(a, &b);

    putchar('\n');

    /* scambia il valore delle variabili tramite una funzione */
    printf("Prima dello scambio:\n");
    printf("a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("Dopo lo scambio:\n");
    printf("a: %d, b: %d\n", a, b);
    
    return 0;
}

void stampa_indirizzi(int a, int *pb)
{
    printf("In stampa_indirizzi()\n");
    printf("indirizzo di a (parametro locale): %p\n", (void *)&a);
    printf("valore di pb (contiene l'indirizzo di b): %p\n", (void *)pb);   /* NOTA: non c'e' & */
}

void swap(int *pa, int *pb)
{
    int temp = *pa;

    *pa = *pb;

    *pb = temp;
}