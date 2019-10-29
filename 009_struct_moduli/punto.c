/* punto.c */

#include <stdio.h>
#include "punto.h"

void punto_print(Punto *P)
{
    printf("(%.1f, %.1f)\n", P->x, P->y);
}

void punto_setX(Punto *P, double newX)
{
    P->x = newX;
}

void punto_setY(Punto *P, double newY)
{
    P->y = newY;
}

void punto_move(Punto *P, double dx, double dy)
{
    P->x += dx;
    P->y += dy;
}