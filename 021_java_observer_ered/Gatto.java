// Gatto.java

// L'osservatore

class Gatto extends Observer {
    private String name;

    public Gatto(String name) {
        this.name = name;
    }

    public String verso() {
        return  this.name + " says: meow";
    }

    // update: cosa fare quando il cane notifica un'azione
    // override Observer.update
    public void update() {
        System.out.println(this.verso());
    }
}