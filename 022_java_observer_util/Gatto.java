// Gatto.java

// L'osservatore

import java.util.Observer;
import java.util.Observable;

class Gatto implements Observer {
    private String name;

    public Gatto(String name) {
        this.name = name;
    }

    public String verso() {
        return  this.name + " says: meow";
    }

    // update: cosa fare quando il cane notifica un'azione
    // override Observer.update
    public void update(Observable o, Object obj) {
        System.out.println(this.verso());
    }
}