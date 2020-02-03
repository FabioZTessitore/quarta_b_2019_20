import java.util.ArrayList;

class AnimaliTest {
    public static void main(String[] args) {
        // crea un generico Animale senza nome
        Animale animaleAnonimo = new Animale();
        System.out.println(animaleAnonimo);

        // crea un generico Animale con nome
        Animale animaleGenerico = new Animale("Bob");
        System.out.println(animaleGenerico);

        // crea un Gatto
        Gatto gatto = new Gatto("Giorgio");
        System.out.println(gatto);

        // crea una lista di animali (inizialmente vuota)
        ArrayList<Animale> animali = new ArrayList<Animale>();
        // aggiunge alcuni animali alla lista
        animali.add( new Cane("Daisy") );
        animali.add( new Cane("Luna") );
        animali.add( new Gatto("Max") );
        animali.add( new Gatto("Teo") );

        System.out.println("\n\nLa lista di Animali contiene " + animali.size() + " elementi");
        for (Animale animale : animali) {
            System.out.println(animale);
        }
    }
}