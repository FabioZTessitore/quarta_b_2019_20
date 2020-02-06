// Cane.java

// Il soggetto osservato

class Cane {
    // un gatto osserva il cane
    private Gatto osservatore;

    public Cane() {
        this.osservatore = null;
    }

    public void attach(Gatto gatto) {
        this.osservatore = gatto;
    }

    public void detach(Gatto gatto) {
        if (this.osservatore == gatto) {
            this.osservatore = null;
        }
    }

    public String verso() {
        return "woof";
    }

    public void abbaia() {
        System.out.println(this.verso());
        if (this.osservatore != null) {
            this.osservatore.update();
        }
    }
}