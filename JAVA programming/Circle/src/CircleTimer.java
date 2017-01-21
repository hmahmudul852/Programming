import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

import javax.swing.Timer;

import javax.swing.JButton;
import javax.swing.JPanel;

public class CircleTimer extends JPanel {
	
	int x, y;
    JButton btnMainMenu = new  JButton();
	
	public CircleTimer() {
		setLayout(null);
		setSize(640, 430);
		
		x=y=0;
		ActionListener increase = new ActionListener() {
            public void actionPerformed(ActionEvent evt) {
                x+=30;
                if(x>=630) {x=0; y+=30;}
                if(y>=430) y=0;
                repaint();
            }
        };

        Timer timer = new Timer(100, increase);
        timer.start();
        
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
	
	public void paintComponent(Graphics g) {
    	super.paintComponent(g);
    	
    	Random r = new Random();
        g.setColor(new Color(r.nextInt(256), r.nextInt(256), r.nextInt(256)));
        g.fillOval(x, y, 30, 30);
    }
}
