import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/**
 * Created by hasan on 11/17/16.
 */
public class Counter {
    public static void main(String[] args) {
        JFrame frame=new JFrame("Counter");
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new BoxLayout(con,BoxLayout.Y_AXIS));
        frame.setSize(500,200);

        JLabel label=new JLabel("Count:");
        con.add(label);

        JTextField text=new JTextField("0");
        text.setEditable(false);
        con.add(text);

        JButton up=new JButton("CountUP");
        con.add(up);

        up.addActionListener(e -> {
            int cou=Integer.parseInt(text.getText());
            cou++;
            text.setText(String.valueOf(cou));
        });

        JButton down=new JButton("CountDOWN");
        con.add(down);

        down.addActionListener(e -> {
            int cou=Integer.parseInt(text.getText());
            cou--;
            text.setText(String.valueOf(cou));
        });
        frame.setVisible(true);
    }
}
