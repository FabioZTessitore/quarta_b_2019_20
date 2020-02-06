import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JButton;
import javax.swing.JTextField;
import java.awt.GridLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;


class Converter extends JFrame {
    private double feet;
    private double meters;
    private JLabel mtLabel;
    private JTextField feetTextField;

    public Converter(String title) {
        super(title);

        this.feet = this.meters = 0.;
        this.mtLabel = new JLabel("");

        // 3 righe, 3 colonne, spazio di 5px tra righe e colonne
        GridLayout gridLayout = new GridLayout(3, 3, 5, 5);

        this.setLayout(gridLayout);

        this.feetTextField = new JTextField(10);

        JButton calculateButton = new JButton("Calculate");
        calculateButton.addActionListener( new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                double feet = Double.parseDouble( feetTextField.getText() );
                mtLabel.setText( String.format("%.2f", feet * .3048) );
            }
        });

        this.add( new JPanel() );
        this.add( this.feetTextField );
        this.add( new JLabel("feet") );
        this.add( new JLabel("is equivalent to") );
        this.add( this.mtLabel );
        this.add( new JLabel("meters") );
        this.add( new JPanel() );
        this.add( new JPanel() );
        this.add( calculateButton );
    }
}