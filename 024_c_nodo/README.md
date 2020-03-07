# Nodo

## Familiarizzazione con i nodi di una struttura dati dinamica

### Disciplina: *TPS*

### Periodo: **09-15 Marzo 2020**

Si utilizzi la `struct nodo` vista in classe per costruire una **lista concatenata**. Si creino vari nodi e si colleghino tra loro mediante i puntatori `next`. Infine si scriva una funzione `stampa()` in grado di stampare tutti gli elementi della lista oppure la stringa `NULL` in caso di lista vuota.

Si riporta la `struct nodo` per comodità:

```c
struct nodo {
    int val;
    struct nodo *next;
};
typedef struct nodo Nodo;
```

#### Soluzioni

Una possibile soluzione è riportata all'indirizzo https://github.com/fabioztessitore/quarta_b_2019_20.git nella sezione **024_c_nodo**