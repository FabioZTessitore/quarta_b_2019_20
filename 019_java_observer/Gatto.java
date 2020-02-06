// Gatto.java

// L'osservatore

class Gatto {
    public String verso() {
        return  "meow";
    }

    // update: cosa fare quando il cane notifica un'azione
    public void update() {
        System.out.println(this.verso());
    }
}