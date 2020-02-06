// Cane.java

// Il soggetto osservato

import java.util.ArrayList;

class Cane {
    // un gatto osserva il cane
    private ArrayList<Gatto> osservatori;

    public Cane() {
        this.osservatori = new ArrayList<Gatto>();
    }

    public void attach(Gatto gatto) {
        this.osservatori.add(gatto);
    }

    public void detach(Gatto gatto) {
        this.osservatori.remove(gatto);
    }

    public String verso() {
        return "woof";
    }

    public void abbaia() {
        System.out.println(this.verso());
        for (Gatto osservatore : this.osservatori) {
            osservatore.update();
        }
    }
}