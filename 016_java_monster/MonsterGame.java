// MonsterGame.java

// Un semplice gioco

/* Compilazione ed esecuzione:
$ javac MonsterGame.java UI.java Game.java Personaggio.java
$ java MonsterGame
*/

class MonsterGame {
    public static void main(String[] args) {
        UI ui = new UI();
        ui.run();
    }
}