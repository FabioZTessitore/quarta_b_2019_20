class ObserverTest {
    public static void main(String[] args) {
        // crea un Cane, il soggetto osservato
        Cane cane = new Cane();

        // crea alcuni Gatto, osservatori
        Gatto luna = new Gatto("Luna");
        Gatto tom = new Gatto("Tom");

        // inizialmente i gatti non osservano il cane
        System.out.println("Il cane abbaia ...");
        cane.abbaia();

        // ora i gatti osservano il cane
        System.out.println("\nIl cane abbaia e i gatti osservano ...");
        cane.addObserver(luna);
        cane.addObserver(tom);
        cane.abbaia();

        // tommy non osserva piu'
        System.out.println("\nTom si distrae e non osserva piu' ...");
        cane.deleteObserver(tom);
        cane.abbaia();
    }
}