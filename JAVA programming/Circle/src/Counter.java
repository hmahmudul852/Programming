import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

public class Counter extends JPanel {
	
	JButton btnMainMenu = new  JButton();
	
	public Counter() {
		setSize(640, 430);
		setLayout(null);
		
		JLabel lblCounter = new JLabel();
		lblCounter.setHorizontalAlignment(SwingConstants.CENTER);
		lblCounter.setBounds(247, 125, 153, 20);
		lblCounter.setText("Counter");
		add(lblCounter);
		
		JTextField text = new JTextField("0", 10);
		text.setBounds(247, 156, 153, 20);
		add(text);
		
		JButton upbutton = new JButton("UP");
		upbutton.setBounds(247, 202, 71, 23);
		add(upbutton);
		
		JButton downbutton = new JButton("DOWN");
		downbutton.setBounds(328, 202, 72, 24);
		add(downbutton);
		
		JButton resetbutton = new JButton("RESET");
		resetbutton.setBounds(247, 251, 153, 23);
		add(resetbutton);
		
		setVisible(true);
		
		upbutton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				text.setText(String.valueOf(Integer.parseInt(text.getText())+1));
			}
		});
		
		downbutton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				if(Integer.parseInt(text.getText())-1 > 0)
				text.setText(String.valueOf(Integer.parseInt(text.getText())-1));
				else text.setText("0");
			}
		});
		
		resetbutton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				text.setText("0");
			}
		});
		
		
		btnMainMenu.setText("Main Menu");
		btnMainMenu.setBounds(265, 396, 152, 23);
		add(btnMainMenu);
		btnMainMenu.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				setVisible(false);
				Fream.menu.setVisible(true);
			}
		});
	}
}
