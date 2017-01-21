import javax.swing.*;
import java.awt.*;

/**
 * Created by hasan on 12/16/16.
 */
public class DeleteEventTab {
    SQLiteMain m;
    public DeleteEventTab() {
        m=new SQLiteMain("eventdb.sqlite");
        m.ReadData();
    }

    public void DeleteEvent(){
        JFrame frame=new JFrame("Delete Event");
        frame.setResizable(false);
        frame.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        frame.setSize(200,120);
        JLabel label=new JLabel("Event ID : ");
        frame.add(label);
        JTextField field=new JTextField("",10);
        frame.add(field);
        JButton button=new JButton("OK");
        frame.add(button);
        button.addActionListener(e -> {
            if (!field.getText().equals("") && Integer.parseInt(field.getText()) > 0) {
                int a=Integer.parseInt(field.getText());
                if(IDValidity.Validity(a)) {
                        m.DeleteEvent(Integer.parseInt(field.getText()));
                        m.ReadData();
                        frame.dispose();
                } else
                    JOptionPane.showMessageDialog(frame, "This ID doesn't exist. Enter a valid id");
            }
            else JOptionPane.showMessageDialog(frame,"Please! Input correctly. Input ID atleast and id greater than 0." );
        });
        frame.setVisible(true);
    }
}
