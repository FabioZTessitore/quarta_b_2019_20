// Point.java

class Point {
    // attributi (privati)
    private double x;
    private double y;

    // costruttore
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    /*
    public double getX() {
        return this.x;
    }

    public double getY() {
        return this.y;
    }
    */

    // rappresentazione sotto forma di stringa dell'oggetto
    public String toString() {
        return "Punto: (" + this.x + ", " + this.y + ")";
    }

    public double distanceFromOrigin() {
        return Math.sqrt(this.x*this.x + this.y*this.y);
    }
}