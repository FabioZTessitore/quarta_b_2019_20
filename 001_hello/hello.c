/* codice 001 */

/* Stampa un saluto */

/* Compilare da terminale Linux:

$ gcc -c hello.c -o hello.o
$ gcc hello.o -o hello
$ ./hello

*/

/* NON e' una libreria, e' un file di intestazione */
#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    return 0;
}