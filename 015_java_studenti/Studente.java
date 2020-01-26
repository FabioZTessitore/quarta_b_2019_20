class Studente {
    private String nome;
    private String cognome;
    int voto;

    public Studente(String nome, String cognome, int voto) {
        this.nome = nome;
        this.cognome = cognome;
        this.voto = voto;
    }

    public int getVoto() {
        return this.voto;
    }

    public String toString() {
        return this.cognome + " - " + this.nome + " -> " + this.voto;
    }
}