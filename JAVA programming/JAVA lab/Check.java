import javax.swing.*;
import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.awt.event.KeyEvent;

/**
 * Created by hasan on 11/25/16.
 */
public class Check{
    public static void main(String[] args) {
		JCheckBox chinButton;
		JButton c;
        
        JFrame frame=new JFrame("Counter");
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new FlowLayout());
        frame.setSize(500,200);

        chinButton = new JCheckBox("Chin");
        con.add(chinButton);

        c=new JButton("Check");
        con.add(c);

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
        
        frame.setVisible(true);
    }
}
