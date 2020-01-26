// Dado.java

import java.util.Random;

class Dado {
    private int faccia;
    private int nFacce;
    private Random random;

    public Dado(int nFacce) {
        this.nFacce = nFacce;
        this.random = new Random();
    }

    public void lancia() {
        this.faccia = 1 + random.nextInt(this.nFacce);
    }

    /*
    public int getFaccia() {
        return this.faccia;
    }
    */

    public String toString() {
        return ">" + Integer.toString(this.faccia) + "<";
    }
}