import javax.swing.*;
import java.awt.*;

/**
 * Created by mahmudul on 12/25/16.
 */
public class EventSchedulerTab {
    Image trayImage;
    SystemTray sysTray;
    PopupMenu menu;
    MenuItem exit;
    MenuItem open;
    TrayIcon trayIcon;
    ImageIcon img;
    JFrame frame;

    SQLiteMain m;
    public EventSchedulerTab() {
        m=new SQLiteMain("eventdb.sqlite");
        m.ReadData();

        img=new ImageIcon(this.getClass().getResource("main_icon.png"));
        frame = new JFrame("Event Scheduler");
    }

    public void EventScheduler() {
        frame.setResizable(false);
        frame.setLayout(new GridLayout(3,2,10,10));
        frame.setLocationRelativeTo(null);
        frame.setSize(300, 450);
        frame.setIconImage(img.getImage());

        Icon warnIcon1 = new ImageIcon(this.getClass().getResource("add.png"));
        Icon warnIcon2 = new ImageIcon(this.getClass().getResource("update.png"));
        Icon warnIcon3 = new ImageIcon(this.getClass().getResource("delete.png"));
        Icon warnIcon4 = new ImageIcon(this.getClass().getResource("display.png"));
        Icon warnIcon6 = new ImageIcon(this.getClass().getResource("about.png"));
        Icon warnIcon5 = new ImageIcon(this.getClass().getResource("exit.png"));

        JButton button1=new JButton("Add Event",warnIcon1);
        button1.setVerticalTextPosition(SwingConstants.BOTTOM);
        button1.setHorizontalTextPosition(SwingConstants.CENTER);
        JButton button2=new JButton("Update Event",warnIcon2);
        button2.setVerticalTextPosition(SwingConstants.BOTTOM);
        button2.setHorizontalTextPosition(SwingConstants.CENTER);
        JButton button3=new JButton("Delete Event",warnIcon3);
        button3.setVerticalTextPosition(SwingConstants.BOTTOM);
        button3.setHorizontalTextPosition(SwingConstants.CENTER);
        JButton button4=new JButton("Display Event",warnIcon4);
        button4.setVerticalTextPosition(SwingConstants.BOTTOM);
        button4.setHorizontalTextPosition(SwingConstants.CENTER);
        JButton button5=new JButton("Exit",warnIcon5);
        button5.setVerticalTextPosition(SwingConstants.BOTTOM);
        button5.setHorizontalTextPosition(SwingConstants.CENTER);
        JButton button6=new JButton("About",warnIcon6);
        button6.setVerticalTextPosition(SwingConstants.BOTTOM);
        button6.setHorizontalTextPosition(SwingConstants.CENTER);

//        JButton button1=new JButton("Add Event");
//        JButton button2=new JButton("Update Event");
//        JButton button3=new JButton("Delete Event");
//        JButton button4=new JButton("Display Event");
//        JButton button5=new JButton("Exit");
//        JButton button6=new JButton("About");

        frame.add(button1);
        frame.add(button2);
        frame.add(button3);
        frame.add(button4);
        frame.add(button6);
        frame.add(button5);

        button1.addActionListener(e -> {
            AddEventTab t=new AddEventTab();
            t.AddEvent();
        });

        button2.addActionListener(e -> {
            UpdateEventTab u=new UpdateEventTab();
            u.UpdateEvent();
        });

        button3.addActionListener(e -> {
            DeleteEventTab de=new DeleteEventTab();
            de.DeleteEvent();
        });

        button4.addActionListener(e -> {
            DisplayEventTab di=new DisplayEventTab();
            di.DisplayTab();
        });

        button5.addActionListener(e -> {
            this.hideOnSystemTray();
            frame.dispose();
        });

        button6.addActionListener(e -> {
            JOptionPane.showMessageDialog(frame,"Developer : Mahmudul Hasan\n\nID : 011 152 185\n\nDescription : This is a project \nfor Object Oriented Programming \nLabratory (CSI 212). This app helps \nyou to keep track of all of your \nevents and notify you when its time.");
        });

        frame.setVisible(true);
        frame.addWindowListener(new WindowAction(this));
    }

    public void hideOnSystemTray(){
        //check to see if system tray is supported on OS
        if(SystemTray.isSupported()){
            sysTray=SystemTray.getSystemTray();
            trayImage=Toolkit.getDefaultToolkit().getImage(this.getClass().getResource("tray.png"));

            menu=new PopupMenu();
            exit=new MenuItem("Exit");
            open=new MenuItem("Open");

            menu.add(open);
            menu.add(exit);

            open.addActionListener(e -> {
                this.sysTray.remove(this.trayIcon);
                this.frame.setVisible(true);
            });

            exit.addActionListener(e -> {
                System.exit(0);
            });

            trayIcon=new TrayIcon(trayImage,"Event Scheduler",menu);

            try{
                sysTray.add(trayIcon);
            }catch (Exception e){
                System.out.println(e.getMessage());
            }
        }
    }
}
