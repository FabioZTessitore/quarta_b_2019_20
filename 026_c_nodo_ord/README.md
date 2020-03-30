# Nodo

## Creazione di una lista concatenata ordinata

### Disciplina: *Informatica*

### Periodo: **30 Marzo - 03 Aprile 2020**

Una volta presa confidenza con la `struct nodo` e con alcune funzioni che ne fanno uso, passiamo alla creazione di
una lista concatenata ordinata.

Il file `nodo.h` conterrà le funzioni:

```c
void nodo_stampa(NodoPtr head);
void nodo_inserisci(NodoPtr *head, int val);
void nodo_rimuovi(NodoPtr *head, int val);
void nodo_clear(NodoPtr *head);
```

Le uniche funzioni che modificano `head` sono quelle di inserimento e rimozione. In questi casi, quindi, `head` va passato per riferimento.

#### Soluzioni

Una possibile soluzione è riportata all'indirizzo https://github.com/fabioztessitore/quarta_b_2019_20.git nella sezione **026_c_nodo_ord**