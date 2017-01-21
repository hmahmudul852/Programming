package Calculator;

import javax.swing.*;
import java.awt.*;
import java.awt.geom.Arc2D;
import java.time.Year;

/**
 * Created by hasan on 11/24/16.
 */
public class Calculator {
    public static void main(String[] args) {
        JFrame frame=new JFrame("Calculator");
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new FlowLayout());
        frame.setSize(200,500);
        frame.setResizable(false);

        JLabel x=new JLabel("X = ");
        con.add(x);
        JTextField xi=new JTextField("",5);
        con.add(xi);

        JLabel y=new JLabel("Y = ");
        con.add(y);
        JTextField yi=new JTextField("",5);
        con.add(yi);

        JLabel r=new JLabel("Result = ");
        con.add(r);
        JTextField ri=new JTextField("",5);
        con.add(ri);
        ri.setEditable(false);

        JButton plus=new JButton("Plus");
        con.add(plus);
        plus.addActionListener(e -> {
            double a= Double.parseDouble(xi.getText());
            double b= Double.parseDouble(yi.getText());
            double res=a+b;
            ri.setText(String.valueOf(res));
        });
        frame.setVisible(true);
    }
}
