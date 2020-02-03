class Gatto extends Animale {
    public Gatto() {
        super("Gatto anonimo");
    }

    public Gatto(String name) {
        super(name);
    }

    // overriding
    public String verso() {
        return "meowww";
    }

    public String toString() {
        return "Gatto: " + this.getName() + " --- " + this.verso();
    }
}