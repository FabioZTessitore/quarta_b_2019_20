/* dado.c */

#include "dado.h"
#include "random.h"

void dado_init()
{
    random_init();
}

int dado_roll()
{
    return random_between(1, 7);
}