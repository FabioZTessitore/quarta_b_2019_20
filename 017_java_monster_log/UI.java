// UI.java

// User Interface

import java.util.Scanner;

class UI {
    private Scanner scanner;
    private int status;         // 0 - stato iniziale, 1 - game running
    private Game game;

    public UI() {
        this.scanner = new Scanner(System.in);
        this.status = 0;
        this.game = new Game();
    }

    public void run() {
        int scelta;

        if (this.status == 0) {
            scelta = this.menuIniziale();
            if (scelta == 1) {
                this.status = 1;    // Game Running
                this.game.start();
            } else if (scelta == 2) {
                return;             // Exit
            }
        } else {
            scelta = this.menuGioco();
            if (scelta == 1) {
                this.status = this.game.attack();
            } else if (scelta == 2) {
                this.status = this.game.specialAttack();
            } else if (scelta == 3) {
                this.status = this.game.heal();
            } else if (scelta == 4) {
                this.status = 0;
            }

            if (scelta != 4) {
                this.game.printGameData();
            }
        }
        
        this.run();
    }

    private int menuIniziale() {
        int scelta;

        do {
            System.out.println("Scegli:");
            System.out.println("1) Inizia a giocare");
            System.out.println("2) Esci");
            System.out.print("? ");

            scelta = this.scanner.nextInt();
        } while (scelta < 1 || scelta > 2);

        return scelta;
    }

    private int menuGioco() {
        int scelta;

        do {
            System.out.println("Scegli:");
            System.out.println("1) Attacco");
            System.out.println("2) Attacco Speciale");
            System.out.println("3) Riposo");
            System.out.println("4) Resa");
            System.out.print("? ");

            scelta = this.scanner.nextInt();
        } while (scelta < 1 || scelta > 4);

        return scelta;
    }
}