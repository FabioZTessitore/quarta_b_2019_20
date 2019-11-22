/* string.c */

#include <string.h>
#include "string.h"

void string_safeCopy(char dst[], char src[], int dstSize)
{
    strncpy(dst, src, dstSize);
    dst[dstSize-1] = '\0';
}