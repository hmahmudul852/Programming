import javax.swing.*;
import java.awt.*;

/**
 * Created by hasan on 11/17/16.
 */
public class Counter {
    public static void main(String[] args) {
        JFrame frame=new JFrame("Counter");
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new FlowLayout());
        frame.setSize(500,200);
        frame.setResizable(false);

        JLabel label=new JLabel("Count:");
        con.add(label);

        JTextField text=new JTextField("0",5);
        con.add(text);

        JCheckBox box=new JCheckBox("Edit Text");
        con.add(box);
        box.setSelected(true);

        box.addItemListener(e -> {
            if(box.isSelected()==true)
                text.setEditable(true);
            else
                text.setEditable(false);
        });
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
