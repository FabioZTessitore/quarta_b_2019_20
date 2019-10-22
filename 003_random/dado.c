/* Codice 003 */

/* Lancio di un dado */

/* Estrazione di numeri pseudo casuali */

/* Compilazione, link ed esecuzione:

$ gcc -c dado.c -o dado.o
$ gcc dado.o -o dado
$ ./dado

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* inizializzazione del sistema di generazione di numeri pseudo casuali */
void random_init();

/* estrazione di un numero casuale compreso tra min (incluso) e max (escluso) */
int random_between(int min, int max);

/* lancio di un dado a 6 facce */
int dado_lancia();

int main()
{
    int faccia;

    /* prima di utilizzare il generatore di numeri
    pseudo casuali bisogna inizializzarlo
    impostando un seme. */
    random_init();

    printf("Lancio di un dado a 6 facce\n\n");

    printf("Lancio ...\n\n");
    faccia = dado_lancia();

    printf("%d\n", faccia);

    return 0;
}

void random_init()
{
    srand( (unsigned)time(NULL) );
}

int random_between(int min, int max)
{
    return min + rand() % (max - min);
}

int dado_lancia()
{
    return random_between(1, 7);
}