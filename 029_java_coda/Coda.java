/* coda.java */

class Coda {
    private Nodo head;
    private Nodo tail;
    private int counter;

    public Coda() {
        this.counter = 0;
        this.head = null;
        this.tail = null;
    }

    public boolean isEmpty() {
        return this.counter == 0;
    }

    public int size() {
        return this.counter;
    }

    public void print()
    {
        Nodo current = this.head;

        System.out.printf("[%d] ", this.size());

        while (current != null) {
            System.out.printf("%d ---> ", current.val);
            current = current.next;
        }
        System.out.printf("NULL\n");
    }

    public void enqueue(int val)
    {
        Nodo temp = new Nodo(val);

        this.counter++;

        if (this.head == null) {
            this.head = temp;
        } else {
            this.tail.next = temp;
        }

        this.tail = temp;
    }

    /* Attenzione: puo' essere invocata solo se la coda non e' vuota */
    public int dequeue()
    {
        int value;

        value = this.head.val;

        this.head = this.head.next;

        if (this.head == null) {
            this.tail = null;
        }

        this.counter--;

        return value;
    }
};