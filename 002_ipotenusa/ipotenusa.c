/* Codice 002 */

/* Calcola l'ipotenusa di un triangolo rettangolo */

/* Utilizzo della libreria matematica */

/* Compilazione, link ed esecuzione:

$ gcc -c ipotenusa.c -o ipotenusa.o
$ gcc ipotenusa.o -o ipotenusa -lm
$ ./ipotenusa

*/

#include <stdio.h>
#include <math.h>

double ipotenusa(double cateto1, double cateto2);

int main()
{
    double risultato;

    risultato = ipotenusa(3., 4.);

    printf("Risultato: %lf", risultato);

    return 0;
}

double ipotenusa(double cateto1, double cateto2)
{
    return sqrt(cateto1*cateto1 + cateto2*cateto2);
}
