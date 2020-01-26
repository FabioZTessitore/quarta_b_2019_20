class ListaStudentiTest {
    public static void main(String[] args) {
        System.out.println("Gestione Lista Studenti\n");
        System.out.println("Inserisce quattro alunni nella classe,");
        System.out.println("stampa il riepilogo");
        System.out.println("e la media dei voti\n");

        ListaStudenti listaStudenti = new ListaStudenti(4);

        listaStudenti.inserisciStudente("Mario", "Rossi", 6);
        listaStudenti.inserisciStudente("Andrea", "Bianchi", 8);
        listaStudenti.inserisciStudente("Laura", "Verdi", 7);
        listaStudenti.inserisciStudente("Marco", "Gialli", 4);

        listaStudenti.riepilogoClasse();

        double media = listaStudenti.calcolaMedia();
        System.out.println("\nLa media della classe: " + media);
    }
}