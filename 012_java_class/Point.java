// Point.java

class Point {
    // attributi (privati)
    private double x;
    private double y;

    // metodi (pubblici)
    public void init(double newX, double newY) {
        this.x = newX;
        this.y = newY;
    }

    public void setX(double newX) {
        this.x = newX;
    }

    public void setY(double newY) {
        this.y = newY;
    }

    public double distanceFromOrigin() {
        return Math.sqrt(this.x*this.x + this.y*this.y);
    }
}