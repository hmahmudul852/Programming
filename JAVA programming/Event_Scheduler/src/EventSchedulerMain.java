import javax.swing.*;

/**
 * Created by hasan on 12/15/16.
 */
public class EventSchedulerMain extends JFrame{
    public static void main(String[] args) {
        EventSchedulerTab e=new EventSchedulerTab();
        e.EventScheduler();
        new ThreadEvents().start();
    }
}
