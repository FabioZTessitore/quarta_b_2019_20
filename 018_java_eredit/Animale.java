class Animale {
    private String name;

    public Animale() {
        this.name = "noname";
    }

    // overload del costruttore
    public Animale(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    public String verso() {
        return "aaaarghhhh";
    }

    public String toString() {
        return "Animale generico: " + this.name + " --- " + this.verso();
    }
}