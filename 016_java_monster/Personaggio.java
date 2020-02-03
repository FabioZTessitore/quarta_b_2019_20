import java.util.Random;

class Personaggio {
    private String name;
    private int life;
    private int minAttack;
    private int maxAttack;
    private double specialFactor;
    private Random r;

    public Personaggio(String name) {
        this.name = name;
        this.r = new Random();
        this.minAttack = 5;
        this.maxAttack = 10;
        this.specialFactor = 1.5;
        this.life = 0;
    }

    public void reset() {
        this.life = 100;
    }

    private int damage() {
        return this.minAttack + this.r.nextInt(this.maxAttack-this.minAttack);
    }

    public int getLife() {
        return this.life;
    }

    public void hit() {
        this.life -= this.damage();
    }

    public void specialHit() {
        this.life -= (int)(this.specialFactor * this.damage());
    }

    public void heal() {
        this.life += 10;
        if (this.life > 100) {
            this.life = 100;
        } 
    }
}