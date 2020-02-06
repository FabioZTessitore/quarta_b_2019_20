// Cane.java

// Il soggetto osservato

import java.util.Observable;

class Cane extends Observable {
    
    public String verso() {
        return "woof";
    }

    public void abbaia() {
        System.out.println(this.verso());
        setChanged();
        notifyObservers();
    }
}