import javax.swing.*;
import java.awt.*;

/**
 * Created by hasan on 12/17/16.
 */
public class AddEventTab {
    SQLiteMain m;
    public AddEventTab() {
        m=new SQLiteMain("eventdb.sqlite");
        m.ReadData();
    }

    public void AddEvent(){
        JFrame frame=new JFrame("Add Event");
        frame.setResizable(false);
        frame.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        frame.setSize(250,300);

        JLabel label1=new JLabel("Event Title : ");
        JLabel label2=new JLabel("Event Time : ");
        JLabel label3=new JLabel("Event Date : ");
        JLabel label4=new JLabel("Event Description : ");

        JTextField field1=new JTextField("",10);
        JTextField field2=new JTextField("",10);
        JTextField field3=new JTextField("",10);

        JTextArea area=new JTextArea("",5,20);

        GhostText ghostText2 = new GhostText(field2, "HH:MM PM/AM");
        GhostText ghostText3 = new GhostText(field3, "DD/MM/YYYY");

        JButton button=new JButton("OK");

        frame.add(label1);
        frame.add(field1);
        frame.add(label2);
        frame.add(field2);
        frame.add(label3);
        frame.add(field3);
        frame.add(label4);
        frame.add(area);
        frame.add(button);

        button.addActionListener(e -> {
            if(!field1.getText().equals("") && !field2.getText().equals("") &&  !field3.getText().equals("")){
                if(CheckDuplicate.Check(field2.getText(),field3.getText())==false) {
                    m.InsertEvent(field1.getText(), field2.getText(), field3.getText(), area.getText());
                    m.ReadData();
                    frame.dispose();
                }
                else
                    JOptionPane.showMessageDialog(frame, "Event time and date clashed");
            }
            else {
                JOptionPane.showMessageDialog(frame, "Please! Input correctly. Input title,time,date atleast.");
            }
        });

        frame.setVisible(true);
    }
}
