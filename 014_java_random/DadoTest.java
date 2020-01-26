// DadoTest.java

// Generazione di numeri pseudo-casuali

/* Compilazione ed esecuzione:
$ javac Dado.java DadoTest.java
$ java DadoTest
*/

class DadoTest {
    public static void main(String[] args) {
        // Crea un dado a 6 facce
        Dado dado = new Dado(6);
        
        dado.lancia();
        System.out.println(dado);
    }
}