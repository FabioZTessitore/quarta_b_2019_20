class ListaStudenti {
    private Studente[] studenti;
    private int nStudenti;
    private int maxStudenti;

    public ListaStudenti(int maxStudenti) {
        this.maxStudenti = maxStudenti;
        this.nStudenti = 0;
        this.studenti = new Studente[this.maxStudenti];
    }

    public void inserisciStudente(String nome, String cognome, int voto) {
        if (this.nStudenti >= this.maxStudenti) {
            return;
        }

        Studente studente = new Studente(nome, cognome, voto);
        this.studenti[this.nStudenti] = studente;
        this.nStudenti++;
    }

    public void riepilogoClasse() {
        int i;
        for (i = 0; i < this.nStudenti; i++) {
            System.out.println(this.studenti[i]);
        }
    }

    public double calcolaMedia() {
        int i;
        int sommaVoti = 0;
        double media = 0.;

        for (i = 0; i < this.nStudenti; i++) {
            sommaVoti += this.studenti[i].getVoto();
        }

        media = (double)sommaVoti / (double)this.nStudenti;

        return media;
    }
}