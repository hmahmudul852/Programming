import javax.swing.*;
import java.awt.*;

public class Calculator {
    static int flag=0;
    public static void main(String[] args) {

        JFrame frame=new JFrame("Calculator");
        frame.setSize(250,220);
        frame.setResizable(false);
        Container con=frame.getContentPane();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        con.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);
        JTextField field=new JTextField("",21);
        JButton res=new JButton("Result: ");
        JTextField result=new JTextField("",13);
        con.add(field);
        con.add(res);
        con.add(result);
        field.setEditable(false);
        result.setEditable(false);
        JPanel panel=new JPanel();
        con.add(panel);
        panel.setSize(300,200);
        panel.setLayout( new GridLayout( 5,4 ) );
        JButton[] button=new JButton[10];
        for(int i=0;i<10;i++)
            button[i]=new JButton( String.valueOf(i));
        JButton ob=new JButton("(");
        JButton cb=new JButton(")");
        JButton del=new JButton("DEL");
        JButton ac=new JButton("AC");
        JButton pl=new JButton("+");
        JButton mi=new JButton("-");
        JButton mu=new JButton("*");
        JButton de=new JButton("/");
        JButton po=new JButton("^");
        JButton dot=new JButton(".");
        panel.add(ob);
        panel.add(cb);
        panel.add(del);
        panel.add(ac);
        panel.add(button[7]);
        panel.add(button[8]);
        panel.add(button[9]);
        panel.add(pl);
        panel.add(button[4]);
        panel.add(button[5]);
        panel.add(button[6]);
        panel.add(mi);
        panel.add(button[1]);
        panel.add(button[2]);
        panel.add(button[3]);
        panel.add(mu);
        panel.add(button[0]);
        panel.add(dot);
        panel.add(po);
        panel.add(de);
        button[0].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"0");
        });
        button[1].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"1");
        });
        button[2].addActionListener(e -> {
            if(flag==1) {
            flag=0;
            field.setText("");
            result.setText("");
            }
            field.setText(field.getText()+"2");
        });
        button[3].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"3");
        });
        button[4].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"4");
        });
        button[5].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"5");
        });
        button[6].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"6");
        });
        button[7].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"7");
        });
        button[8].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"8");
        });
        button[9].addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"9");
        });
        ob.addActionListener(e -> {
            if(flag==1) {
                flag=0;
                field.setText("");
                result.setText("");
            }
            field.setText(field.getText()+"(");
        });
        cb.addActionListener(e -> {
            field.setText(field.getText()+")");
        });
        pl.addActionListener(e -> {
            field.setText(field.getText()+"+");
        });
        mi.addActionListener(e -> {
            field.setText(field.getText()+"-");
        });
        mu.addActionListener(e -> {
            field.setText(field.getText()+"*");
        });
        de.addActionListener(e -> {
            field.setText(field.getText()+"/");
        });
        po.addActionListener(e -> {
            field.setText(field.getText()+"^");
        });
        dot.addActionListener(e -> {
            field.setText(field.getText()+".");
        });
        del.addActionListener(e -> {
            String s=field.getText();
            if(result.getText().length()==0 && s.length()!=0)
                field.setText(s.substring(0,s.length()-1));
        });
        ac.addActionListener(e -> {
            field.setText("");
            result.setText("");
        });
        res.addActionListener(e -> {
            String expression=field.getText();
            PostFixConverter pc = new PostFixConverter(expression);
            PostFixCalculator calc = new PostFixCalculator(pc.getPostfixAsList());
            result.setText(calc.result());
            flag=1;
        });
        panel.setVisible(true);
        frame.setVisible(true);

    }
}
