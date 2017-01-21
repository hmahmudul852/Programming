import javax.swing.JOptionPane;

public class NotifyEventTab
{
    NotifyEventTab(String msg)
    {
        JOptionPane.showMessageDialog(null,msg,"Event Notification", JOptionPane.PLAIN_MESSAGE);
    }
}