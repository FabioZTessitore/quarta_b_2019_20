/* articolo.h */

#ifndef ARTICOLO_H
#define ARTICOLO_H

#define ARTICOLO_TITLE_SIZE 40
#define ARTICOLO_TEXT_SIZE 1024

struct articolo {
    char title[ARTICOLO_TITLE_SIZE];
    char text[ARTICOLO_TEXT_SIZE];
};
typedef struct articolo Articolo;

void articolo_init(Articolo *pa);
void articolo_setTitle(Articolo *pa, char title[]);
void articolo_setText(Articolo *pa, char text[]);
void articolo_print(Articolo *pa);
void articolo_copy(Articolo *pdst, Articolo *psrc);

#endif