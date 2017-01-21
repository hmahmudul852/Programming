import javax.swing.*;
import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.KeyEvent;

/**
 * Created by hasan on 11/25/16.
 */
public class Check extends JFrame{
    JCheckBox chinButton;
    JButton c;
    public Check()
    {
        setSize(200,200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new FlowLayout());
        setVisible(true);

        chinButton = new JCheckBox("Chin");
        chinButton.setMnemonic(KeyEvent.VK_C);
        add(chinButton);

        c=new JButton("Check");
        add(c);

        c.addActionListener(e -> {
            if(((JButton) e.getSource()).getName().equals("Check")==true){
                c.setName("Check");
                chinButton.setSelected(false);
            }
            else{
                c.setName("Uncheck");
                chinButton.setSelected(true);
            }
        });
    }
    public static void main(String[] args) {
        new Check();
    }
}
