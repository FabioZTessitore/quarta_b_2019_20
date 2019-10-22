/* Codice 004 */

/* Lancio di un dado e conteggio delle occorrenze */

/* Utilizzo di vettori */

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

/* simulazione del lancio di un dado N volte */
void simulazione(int occorrenze[], int size);

/* stampa le occorrenze */
void stampa_occorrenze(int occorrenze[], int size);

/* cerca il massimo */
int massimo(int occorrenze[], int size);

/* stampa istogramma */
void stampa_istogramma(int n);

int main()
{
    int occorrenze[7] = { 0 };  /* primo elemento non utilizzato */

    /* prima di utilizzare il generatore di numeri
    pseudo casuali bisogna inizializzarlo
    impostando un seme. */
    random_init();

    printf("Lancio di un dado a 6 facce\n\n");

    printf("Inizio simulazione ...\n\n");

    simulazione(occorrenze, 7);

    stampa_occorrenze(occorrenze, 7);

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

void simulazione(int occorrenze[], int size)
{
    int N = 10000;  /* numero di lanci */
    int faccia;
    int i;

    for (i = 0; i < N; i++) {
        faccia = dado_lancia();
        occorrenze[faccia]++;
    }
}

void stampa_occorrenze(int occorrenze[], int size)
{
    int i;

    /* stampa '#' per una lunghezza massima di 70 caratteri */
    int scala = massimo(occorrenze, size) / 70;

    /* il primo elemento di occorrenze NON e' utilizzato */
    for (i = 1; i < size; i++) {
        printf("%d) %d    ", i, occorrenze[i]);
        stampa_istogramma(occorrenze[i]/scala);        
    }
}

int massimo(int occorrenze[], int size)
{
    int m = occorrenze[0];
    int i;

    for (i = 1; i < size; i++) {
        if (occorrenze[i] > m) {
            m = occorrenze[i];
        }
    }

    return m;
}

void stampa_istogramma(int n)
{
    int i;

    for (i = 0; i < n; i++) putchar('#');

    putchar('\n');
}