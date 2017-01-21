import javax.swing.*;
import java.awt.*;
import java.util.Collections;

/**
 * Created by hasan on 12/17/16.
 */
public class DisplayEventTab {
    SQLiteMain m;
    public DisplayEventTab() {
        m=new SQLiteMain("eventdb.sqlite");
        m.ReadData();
    }

    public void DisplayTab(){
        JFrame frame=new JFrame("Display Event");
        frame.setResizable(false);
        frame.setLayout(new FlowLayout());
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        frame.setSize(500,450);

        JScrollPane pane=new JScrollPane();
        JTable table = new JTable();
        table.setModel(new FinalTableModel(SQLiteMain.list));
        table.getColumnModel().getColumn(0).setPreferredWidth(5);
        table.getColumnModel().getColumn(1).setPreferredWidth(6);
        table.getColumnModel().getColumn(2).setPreferredWidth(6);
        table.getColumnModel().getColumn(3).setPreferredWidth(6);
        Dimension d=new Dimension(500,450);
        pane.setPreferredSize(d);
        pane.setViewportView(table);
        frame.add(pane);
        JButton button=new JButton("OK");
        frame.add(button);
        button.addActionListener(e -> {
            frame.dispose();
        });
        frame.setVisible(true);
    }
}
