import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Fream extends JFrame {
	static final Menu menu = new Menu();
	static final Circle circle = new Circle();
	static final CircleTimer circleTimer = new CircleTimer();
	static final Counter counter = new Counter();
	static final CheckBox checkbox = new CheckBox();
	
	public Fream() {
		setTitle("Assignment");
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(640, 480);
		
		
		add(menu);
		add(counter);
		counter.setVisible(false);
		add(circle);
		circle.setVisible(false);
		add(circleTimer);
		circleTimer.setVisible(false);
		add(checkbox);
		checkbox.setVisible(false);
		
		
		
		setVisible(true);
	}
}
