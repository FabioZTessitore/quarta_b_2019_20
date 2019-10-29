/* punto.h */

#ifndef PUNTO_H
#define PUNTO_H

/* definizione di un nuovo tipo:
 *
 * un punto del piano cartesiano
 */
struct punto {
    double x;
    double y;
};

/* creazione di un sinonimo per 'struct punto' */
typedef struct punto Punto;

/* prototipi di funzioni che lavorano con variabili di tipo Punto */
void punto_print(Punto *P);
void punto_setX(Punto *P, double newX);
void punto_setY(Punto *P, double newY);
void punto_move(Punto *P, double dx, double dy);

#endif