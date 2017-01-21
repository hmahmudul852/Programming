import java.awt.Color;
import java.awt.Component;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.Random;

import javax.swing.JButton;
import javax.swing.JPanel;

public class Circle extends JPanel implements MouseListener {
	int x, y;
    JButton btnMainMenu = new  JButton();

    public Circle() {
    	setLayout(null);
		setSize(640, 430);
		
        addMouseListener(this);
		
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

    public void mouseClicked(MouseEvent e) {
        x = e.getX();
        y = e.getY();
        repaint();
    }

	public void mouseEntered(MouseEvent e) {
	}

	public void mouseExited(MouseEvent e) {
	}

	public void mousePressed(MouseEvent e) {
	}

	public void mouseReleased(MouseEvent e) {
	}
}