/* Codice 010 */

/* Articolo, Pagina, Giornale */

/* Array di struct */

/* Compilazione, link ed esecuzione:

$ make
$ ./main

*/

#include "articolo.h"
#include "pagina.h"
#include "giornale.h"

int main()
{
    Articolo a1;
    Articolo a2;

    Pagina p;

    Giornale g;

    articolo_init(&a1);
    articolo_init(&a2);

    pagina_init(&p);

    giornale_init(&g);

    articolo_setTitle(&a1, "Articolo 1");
    articolo_setText(&a1, "Testo dell'articolo 1");

    articolo_setTitle(&a2, "Articolo 2");
    articolo_setText(&a2, "Testo dell'articolo 2");

    pagina_insertArticolo(&p, &a1);
    pagina_insertArticolo(&p, &a2);

    giornale_setTitle(&g, "La Gazzetta della Gazzella");
    giornale_insertPagina(&g, &p);

    giornale_print(&g);

    return 0;
}