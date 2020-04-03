# Lista

## Creazione di una lista concatenata ordinata

### Disciplina: *Informatica*

### Periodo: **04 Aprile - 09 Aprile 2020**

Una lista concatenata ordinata è stata costruita, ma risulta difficile da implementare e gestire, in parte a causa della presenza di puntatori a puntatori.

Possiamo superare il problema costruendo una nuova struct che incapsula il puntatore `head`:

```c
struct lista {
    Nodo *head;
    int counter;
};
typedef struct lista Lista;
```

In questo modo abbiamo anche la possibilità di aggiungere altri campi, come ad esempio il numero di elementi presenti in lista.

Tutte le funzioni che prima erano definite per un nodo, ora vengono definite per la lista:

```c
void lista_stampa(Lista *l);
void lista_inserisci(Lista *l, int val);
void lista_rimuovi(Lista *l, int val);
void lista_clear(Lista *l);
```

#### Soluzioni

Una possibile soluzione è riportata all'indirizzo https://github.com/fabioztessitore/quarta_b_2019_20.git nella sezione **027_c_lista_ord**