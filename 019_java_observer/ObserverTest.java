class ObserverTest {
    public static void main(String[] args) {
        // crea un Cane, il soggetto osservato
        Cane cane = new Cane();

        // crea un Gatto, l'osservatore
        Gatto gatto = new Gatto();

        // inizialmente il gatto non osserva il cane
        System.out.println("Il cane abbaia ...");
        cane.abbaia();

        // ora il gatto osserva il cane
        System.out.println("\nIl cane abbaia e il gatto osserva ...");
        cane.attach(gatto);
        cane.abbaia();
    }
}