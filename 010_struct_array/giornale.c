#include <stdio.h>
#include "giornale.h"
#include "pagina.h"
#include "string.h"

void giornale_init(Giornale *pg)
{
    pg->n_pagine = 0;
}

void giornale_setTitle(Giornale *pg, char title[])
{
    string_safeCopy(pg->title, title, GIORNALE_TITLE_SIZE);
}

void giornale_insertPagina(Giornale *pg, Pagina *pp)
{
    int last = pg->n_pagine;

    if (last > GIORNALE_MAX_PAGINE) {
        return;
    }

    pagina_copy(&(pg->pagine[last]), pp);
    pg->n_pagine++;
}

void giornale_print(Giornale *pg)
{
    int i;

    printf("--- %s ---\n", pg->title);

    for (i = 0; i < pg->n_pagine; i++) {
        printf("Pagina #%d\n", i+1);
        pagina_print(&(pg->pagine[i]));
    }
}