# Nodo

## Creazione di funzioni per la gestione di nodi di una struttura dati dinamica

### Disciplina: *Informatica*

### Periodo: **19-28 Marzo 2020**

Si scrivano delle funzioni per la gestione dei nodi di una struttura dati dinamica. In particolare delle funzioni per l'aggiunta di un nuovo nodo
in testa alla lista, in coda alla lista, dopo un valore prescelto.

```c
void nodo_inserisciCoda(NodoPtr *head, int val);
void nodo_inserisciTesta(NodoPtr *head, int val);
void nodo_inserisciDopo(NodoPtr head, int val, int key);
```

Si noti la presenza del tipo `NodoPtr` definito come `struct nodo *` e che nel caso dell'inserimento in coda e in testa, `head` viene passato per riferimento.

#### L'allocazione dinamica

Affinché una funzione possa creare un nodo e inserirlo nella lista, non è possibile allocare la memoria in maniera automatica.
Bisogna utilizzare, invece, l'allocazione dinamica.

```c
NodoPtr nuovoNodo = malloc(sizeof(Nodo));
```

In questo modo, il nuovo nodo non andrà distrutto al termine della funzione.

Al termine del programma, tutta la memoria allocata dinamicamente deve essere rilasciata. Si costruisca, allora, una funzione:

```c
void nodo_clear(NodoPtr *head);
```

con il compito di liberare la memoria allocata per i singoli nodi.

#### Soluzioni

Una possibile soluzione è riportata all'indirizzo https://github.com/fabioztessitore/quarta_b_2019_20.git nella sezione **025_c_nodo_funzioni**