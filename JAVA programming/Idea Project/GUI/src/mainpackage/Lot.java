package mainpackage;

import javax.swing.*;
import java.awt.*;

/**
 * Created by hasan on 11/17/16.
 */
public class Lot {
        {
            JFrame f = new JFrame("Java frame");
            f.setSize(400, 500);
            //f.setBounds(50,50,200,200);
            f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            Container content = f.getContentPane();
            content.setLayout(new FlowLayout(FlowLayout.LEADING, 10, 20));

            JLabel n = new JLabel("Hello JLabel");
            JLabel n1 = new JLabel("Hello JLabel");
            JLabel n2 = new JLabel("Hello JLabel");

            content.add(n);
            content.add(n1);
            content.add(n2);

            f.setVisible(true);

        }
    }
