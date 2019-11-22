/* pagina.h */

#ifndef PAGINA_H
#define PAGINA_H

#include "articolo.h"

#define PAGINA_MAX_ARTICOLI 3

struct pagina {
    Articolo articoli[PAGINA_MAX_ARTICOLI];
    int n_articoli;
};
typedef struct pagina Pagina;

void pagina_init(Pagina *pp);
void pagina_insertArticolo(Pagina *pp, Articolo *pa);
void pagina_print(Pagina *pp);
void pagina_copy(Pagina *pdst, Pagina *psrc);

#endif