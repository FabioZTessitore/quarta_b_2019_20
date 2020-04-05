/* ListaTest.java */

public class ListaTest {

    public static void main(String[] args)
    {
        Lista l = new Lista();

        l.stampa();

        l.inserisci(3);
        l.stampa();

        l.inserisci(7);
        l.stampa();

        l.inserisci(10);
        l.stampa();

        l.inserisci(2);
        l.stampa();

        l.inserisci(5);
        l.stampa();

        l.rimuovi(2);
        l.stampa();

        l.rimuovi(5);
        l.stampa();

        l.rimuovi(50);

        l.rimuovi(10);
        l.stampa();
    }
}
