import javax.swing.*;
import java.awt.*;
import java.util.*;

/**
 * Created by hasan on 12/17/16.
 */
public class UpdateEventTab {
    SQLiteMain m;
    public UpdateEventTab() {
        m=new SQLiteMain("eventdb.sqlite");
        m.ReadData();
    }

    public void UpdateEvent(){
        JFrame frame=new JFrame("Update Event");
        frame.setResizable(false);
        frame.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        frame.setSize(250,300);

        JLabel label=new JLabel("Event ID : ");
        JLabel label1=new JLabel("Event Title : ");
        JLabel label2=new JLabel("Event Time : ");
        JLabel label3=new JLabel("Event Date : ");
        JLabel label4=new JLabel("Event Description : ");

        JTextField field=new JTextField("",11);
        JTextField field1=new JTextField("",10);
        JTextField field2=new JTextField("",10);
        JTextField field3=new JTextField("",10);

        JTextArea area=new JTextArea("",5,20);

        GhostText ghostText2 = new GhostText(field2, "HH:MM PM/AM");
        GhostText ghostText3 = new GhostText(field3, "DD/MM/YYYY");

        JButton button=new JButton("OK");

        frame.add(label);
        frame.add(field);
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
            if(!field.getText().equals("") && Integer.parseInt(field.getText()) > 0) {
                int a=Integer.parseInt(field.getText());
                String title = null, time = null, date = null, des = null;
                java.util.List<EventData> ls = SQLiteMain.list;
                for (int i = 0; i < ls.size(); i++) {
                    if (ls.get(i).getId() == a) {
                        title = ls.get(i).getTitle();
                        time = ls.get(i).getTime();
                        date = ls.get(i).getDate();
                        des = ls.get(i).getDescription();
//                        System.out.println(title + time + date + des);
                        break;
                    }
                }
                if (IDValidity.Validity(a)) {
                    if (!field1.getText().equals(""))
                        title = field1.getText();
                    if (!field2.getText().equals("HH:MM PM/AM"))
                        time = field2.getText();
                    if (!field3.getText().equals("DD/MM/YYYY"))
                        date = field3.getText();
                    if (!area.getText().equals(""))
                        des = area.getText();
                    if (CheckDuplicate.Check(field2.getText(), field3.getText()) == false) {
                        m.UpdateEvent(Integer.parseInt(field.getText()), title, time, date, des);
                        m.ReadData();
                        frame.dispose();
                    } else
                        JOptionPane.showMessageDialog(frame, "Event time and date clashed");
                } else
                    JOptionPane.showMessageDialog(frame, "This ID doesn't exist. Enter a valid id");
            }
            else JOptionPane.showMessageDialog(frame, "Please! Input correctly. Input ID atleast and id greater than 0.");
        });

        frame.setVisible(true);
    }
}
