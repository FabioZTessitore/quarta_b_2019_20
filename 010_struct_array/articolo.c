/* articolo.c */

#include <stdio.h>
#include "articolo.h"
#include "string.h"

void articolo_init(Articolo *pa)
{
    pa->title[0] = '\0';
    pa->text[0] = '\0';
}

void articolo_setTitle(Articolo *pa, char title[])
{
    string_safeCopy(pa->title, title, ARTICOLO_TITLE_SIZE);
}

void articolo_setText(Articolo *pa, char text[])
{
    string_safeCopy(pa->text, text, ARTICOLO_TEXT_SIZE);
}

void articolo_print(Articolo *pa)
{
    printf("%s\n", pa->title);
    printf("---\n");
    printf("%s\n\n", pa->text);
}

void articolo_copy(Articolo *pdst, Articolo *psrc)
{
    string_safeCopy(pdst->title, psrc->title, ARTICOLO_TITLE_SIZE);
    string_safeCopy(pdst->text, psrc->text, ARTICOLO_TEXT_SIZE);
}