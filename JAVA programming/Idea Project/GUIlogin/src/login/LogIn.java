package login;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import static com.sun.deploy.uitoolkit.ToolkitStore.dispose;

/**
 * Created by hasan on 11/18/16.
 */
public class LogIn {
    public static void main(String[] args) {
        JFrame frame=new JFrame("Log In");
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new FlowLayout());
        frame.setSize(250,110);
        frame.setResizable(false);
        JLabel n=new JLabel("Username : ");
        con.add(n);
        JTextField na=new JTextField("",10);
        con.add(na);
        JLabel p=new JLabel("Password : ");
        con.add(p);
        JTextField pa=new JTextField("",10);
        con.add(pa);
        JButton li=new JButton("Log In");
        con.add(li);
        li.addActionListener(e -> {
            if(na.getText().equals("h")==true && pa.getText().equals("9")==true) {
                int a= JOptionPane.showOptionDialog(null, "Username & Password is correct.","", JOptionPane.OK_CANCEL_OPTION, JOptionPane.INFORMATION_MESSAGE, null, null, null);
               if(a==JOptionPane.OK_OPTION)
               {
                   JFrame z=new JFrame("Main Window");
                   z.setSize(400,500);
                   z.setVisible(true);
                   try {
                       frame.hide();
                   } catch (Exception e1) {
                       e1.printStackTrace();
                   }
               }
            }
            else{
                int a= JOptionPane.showOptionDialog(null, "Username & Password is not correct.","", JOptionPane.OK_CANCEL_OPTION, JOptionPane.INFORMATION_MESSAGE, null, null, null);
            }
        });
        JButton c=new JButton("Cancle");
        con.add(c);
        c.addActionListener(e -> {
            System.exit(0);
        });
        frame.setVisible(true);
    }
}
