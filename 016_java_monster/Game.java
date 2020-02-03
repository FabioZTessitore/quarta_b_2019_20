class Game {
    private Personaggio human;
    private Personaggio monster;

    public Game() {
        this.human = new Personaggio("Umano");
        this.monster = new Personaggio("Mostro");
    }

    public void start() {
        this.human.reset();
        this.monster.reset();
    }

    public int attack() {
        this.monster.hit();
        if (this.monster.getLife() <= 0) {
            this.win();
            return 0;
        }
        
        this.human.hit();
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public int specialAttack() {
        this.monster.specialHit();
        if (this.monster.getLife() <= 0) {
            this.win();
            return 0;
        }
        
        this.human.specialHit();
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public int heal() {
        this.human.heal();
        this.human.hit();
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public void printGameData() {
        System.out.printf("monster: %d\t\thuman: %d\n", this.monster.getLife(), this.human.getLife());
    }

    public void win() {
        System.out.println("Hai vinto!");
    }

    public void lost() {
        System.out.println("Hai perso!");
    }
}