// Cane.java

// Il soggetto osservato

class Cane extends Subject {

    public Cane() {
        super();
    }

    public String verso() {
        return "woof";
    }

    public void abbaia() {
        System.out.println(this.verso());
        for (Observer osservatore : super.getOsservatori()) {
            osservatore.update();
        }
    }
}