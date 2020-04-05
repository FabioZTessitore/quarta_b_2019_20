/* lista.java */

class Lista {
    private Nodo head;
    private int counter;

    public Lista() {
        this.counter = 0;
        this.head = null;
    }

    public void stampa()
    {
        Nodo current = this.head;

        System.out.printf("[%d] ", this.counter);

        while (current != null) {
            System.out.printf("%d ---> ", current.val);
            current = current.next;
        }
        System.out.printf("NULL\n");
    }

    public void inserisci(int val)
    {
        Nodo current = this.head;
        Nodo prev = null;

        Nodo temp = new Nodo(val);

        /* cerca l'ultimo nodo con valore minore di quello da inserire */
        while (current != null && current.val < val) {
            prev = current;
            current = current.next;
        }

        if (prev == null) {
            /* inserisce in testa */
            temp.next = this.head;
            this.head = temp;
        } else {
            /* inserisce dopo prev */
            prev.next = temp;
            temp.next = current;
        }

        this.counter++;
    }

    public void rimuovi(int val)
    {
        Nodo current = this.head;
        Nodo prev = null;
        Nodo temp = null;

        /* cerca l'ultimo nodo con valore minore di quello da rimuovere */
        while (current != null && current.val < val) {
            prev = current;
            current = current.next;
        }

        /* se l'elemento non e' stato trovato */
        if (current == null) {
            System.out.printf("rimuovi(): elemento %d non trovato, non faccio nulla\n", val);
            return;
        }

        System.out.printf("rimuovi(): elemento %d trovato, vediamo cosa fare\n", val);
        this.counter--;

        /* se l'elemento da rimuovere e' il primo */
        if (prev == null) {
            System.out.printf("L'elemento da eliminare e' in testa, elimina\n");
            /* head punta al primo elemento, quello da eliminare */
            this.head = this.head.next;  /* *head ora punta al successivo */
            return;
        }

        /* L'elemento da eliminare e' prev->next */
        System.out.printf("L'elemento da eliminare non e' in testa, elimina\n");
        prev.next = prev.next.next;
    }
};