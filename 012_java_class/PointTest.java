// PointTest.java

// Crea ed utilizza un oggetto Point

/* Compilazione ed esecuzione:
$ javac Point.java PointTest.java
$ java PointTest
*/

class PointTest {
    public static void main(String[] args) {
        // Crea un nuovo Punto e imposta le coordinate
        Point p = new Point();
        p.init(3., 4.);

        // calcola la distanza dall'origine
        double d = p.distanceFromOrigin();
        System.out.printf("Distanza: %f\n", d);

        // sposta il punto e ricalcola
        p.setX(8.3);
        p.setY(-2.1);
        d = p.distanceFromOrigin();
        System.out.printf("Nuova distanza: %f\n", d);
    }
}