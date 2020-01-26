// PointTest.java

// Costruttore e rappresentazione sotto forma di stringa degli oggetti

/* Compilazione ed esecuzione:
$ javac Point.java PointTest.java
$ java PointTest
*/

class PointTest {
    public static void main(String[] args) {
        Point p = new Point(3., 4.);

        double d = p.distanceFromOrigin();

        // Invece di scrivere:
        // System.out.printf("P: (%f, %f)\n", P.getX(), P.getY());
        //
        // lasciamo che sia il punto a dire qual e' la propria rappresentazione
        // (chiama automaticamente toString())
        System.out.println(p);

        System.out.printf("Distanza: %f\n", d);
    }
}