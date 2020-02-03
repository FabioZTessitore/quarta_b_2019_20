class Cane extends Animale {
    public Cane() {
        super("Cane anonimo");
    }

    public Cane(String name) {
        super(name);
    }

    // overriding
    public String verso() {
        return "woff";
    }

    public String toString() {
        return "Cane: " + this.getName() + " --- " + this.verso();
    }
}