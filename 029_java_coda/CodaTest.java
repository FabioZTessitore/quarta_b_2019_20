/* CodaTest.java */

public class CodaTest {

    public static void main(String[] args)
    {
        Coda q = new Coda();
        int value;

        /*
            head ---> NULL
                       ^
                       |
                      tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* aggiunta di un elemento */
        q.enqueue(1);
        /*
            head ---> 1 ---> NULL
                      ^
                      |
                     tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* aggiunta di un altro elemento */
        q.enqueue(2);
        /*
            head ---> 1 ---> 2 ---> NULL
                             ^
                             |
                            tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* aggiunta di un altro elemento */
        q.enqueue(3);
        /*
            head ---> 1 ---> 2 ---> 3 ---> NULL
                                    ^
                                    |
                                   tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* aggiunta di un altro elemento */
        q.enqueue(4);
        /*
            head ---> 1 ---> 2 ---> 3 ---> 4 ---> NULL
                                           ^
                                           |
                                          tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* rimozione del primo elemento */
        if (!q.isEmpty()) {
            value = q.dequeue();
            System.out.printf("Element: %d\n", value);
        }
        /*
            head ---> 2 ---> 3 ---> 4 ---> NULL
                                    ^
                                    |
                                   tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();

        /* rimozione del primo elemento */
        if (!q.isEmpty()) {
            value = q.dequeue();
            System.out.printf("Element: %d\n", value);
        }
        /*
            head ---> 3 ---> 4 ---> NULL
                             ^
                             |
                            tail
        */
        System.out.printf("IsEmpty? %s\n", q.isEmpty() ? "Yes" : "No");
        q.print();
        System.out.println();
    }
}
