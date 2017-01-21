import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JPanel;

public class Menu extends JPanel {
	
	public Menu() {
		setLayout(null);
		setSize(640, 430);
		
		JButton btnCircle = new JButton("Draw Circle");
		btnCircle.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				setVisible(false);
				Fream.circle.setVisible(true);
			}
		});
		btnCircle.setBounds(199, 128, 208, 23);
		add(btnCircle);
		
		JButton btnCircleTimer = new JButton("Draw Circle Timer");
		btnCircleTimer.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				setVisible(false);
				Fream.circleTimer.setVisible(true);
			}
		});
		btnCircleTimer.setBounds(199, 177, 208, 23);
		add(btnCircleTimer);
		
		JButton btncounter = new JButton("Counter");
		btncounter.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				setVisible(false);
				Fream.counter.setVisible(true);
			}
		});
		btncounter.setBounds(199, 226, 208, 23);
		add(btncounter);
		
		JButton btnChackBox = new JButton("Chack Box");
		btnChackBox.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				setVisible(false);
				Fream.checkbox.setVisible(true);
			}
		});
		btnChackBox.setBounds(199, 270, 208, 23);
		add(btnChackBox);
	}
}