class Game {
    private Personaggio human;
    private Personaggio monster;
    private Log logger;

    public Game() {
        this.human = new Personaggio("Umano");
        this.monster = new Personaggio("Mostro");
        this.logger = new Log();
    }

    public void start() {
        this.human.reset();
        this.monster.reset();
        this.logger.log("Start the Game");
    }

    public int attack() {
        int damage;
        
        damage = this.monster.hit();
        this.logger.log(this.monster.getName() + " hit with damage " + damage);
        if (this.monster.getLife() <= 0) {
            this.win();
            return 0;
        }
        
        damage = this.human.hit();
        this.logger.log(this.human.getName() + " hit with damage " + damage);
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public int specialAttack() {
        int damage;

        damage = this.monster.specialHit();
        this.logger.log(this.monster.getName() + " hit with damage " + damage);
        if (this.monster.getLife() <= 0) {
            this.win();
            return 0;
        }
        
        damage = this.human.specialHit();
        this.logger.log(this.human.getName() + " hit with damage " + damage);
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public int heal() {
        int damage;
        int heal;

        heal = this.human.heal();
        this.logger.log(this.human.getName() + " heal " + heal);
        damage = this.human.hit();
        this.logger.log(this.human.getName() + " hit with damage " + damage);
        if (this.human.getLife() <= 0) {
            this.lost();
            return  0;
        }

        return 1;
    }

    public void printGameData() {
        this.logger.log(this.monster.getName() + " (monster): " + this.monster.getLife() + "\t\t" +
                        this.human.getName() + " (human): " + this.human.getLife());
    }

    public void win() {
        this.logger.log("Hai vinto!");
    }

    public void lost() {
        this.logger.log("Hai perso!");
    }
}