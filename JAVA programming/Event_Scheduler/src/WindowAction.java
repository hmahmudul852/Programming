import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

/**
 * Created by mahmudul on 12/30/16.
 */
public class WindowAction extends WindowAdapter {
    EventSchedulerTab es;

    public WindowAction(EventSchedulerTab es) {
        this.es = es;
    }

    @Override
    public void windowClosing(WindowEvent e) {
        es.hideOnSystemTray();
    }
}
