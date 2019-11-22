#include "pagina.h"
#include "articolo.h"

void pagina_init(Pagina *pp)
{
    pp->n_articoli = 0;
}

void pagina_insertArticolo(Pagina *pp, Articolo *pa)
{
    int last = pp->n_articoli;

    if (last > PAGINA_MAX_ARTICOLI) {
        return;
    }

    articolo_copy(&(pp->articoli[last]), pa);
    pp->n_articoli++;
}

void pagina_print(Pagina *pp)
{
    int i;

    for (i = 0; i < pp->n_articoli; i++) {
        articolo_print(&(pp->articoli[i]));
    }
}

void pagina_copy(Pagina *pdst, Pagina *psrc)
{
    int i;

    pdst->n_articoli = psrc->n_articoli;

    for (i = 0; i < psrc->n_articoli; i++) {
        articolo_copy(&(pdst->articoli[i]), &(psrc->articoli[i]));
    }
}