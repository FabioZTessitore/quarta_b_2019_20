import javax.swing.JFrame;

class ConverterTest {
    public static void main(String[] args) {
        Converter converter = new Converter("Converter feet/mt");

        converter.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        converter.setSize(400, 180);
        converter.setVisible(true);
    }
}