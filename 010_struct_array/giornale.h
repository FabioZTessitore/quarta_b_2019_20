/* giornale.h */

#ifndef GIORNALE_H
#define GIORNALE_H

#include "pagina.h"

#define GIORNALE_TITLE_SIZE 20
#define GIORNALE_MAX_PAGINE 40

struct giornale {
    char title[GIORNALE_TITLE_SIZE];
    Pagina pagine[GIORNALE_MAX_PAGINE];
    int n_pagine;
};
typedef struct giornale Giornale;

void giornale_init(Giornale *pg);
void giornale_setTitle(Giornale *pg, char title[]);
void giornale_insertPagina(Giornale *pg, Pagina *pp);
void giornale_print(Giornale *pg);

#endif