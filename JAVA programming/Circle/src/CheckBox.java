import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JCheckBox;

public class CheckBox extends JPanel {
    JButton btnMainMenu = new  JButton();
    JCheckBox chckbxCheckBox = new JCheckBox("Check Box");
    JButton btnNewButton = new JButton("Uncheckd");
    
	public CheckBox() {
		setSize(640, 430);
		setLayout(null);
		
		chckbxCheckBox.setBounds(265, 169, 99, 23);
		add(chckbxCheckBox);
		btnNewButton.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				if(chckbxCheckBox.isSelected()) {chckbxCheckBox.setSelected(false); btnNewButton.setText("Uncheckd");}
				else {chckbxCheckBox.setSelected(true); btnNewButton.setText("Checkd");}
			}
		});
		
		btnNewButton.setBounds(265, 213, 99, 23);
		add(btnNewButton);
		
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
