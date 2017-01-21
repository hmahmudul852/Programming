
import javax.swing.JFrame;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class Counter {

	public static void main(String[] args) {
		JFrame frame=new JFrame("My Counter");
		frame.setSize(400,200);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLayout(new FlowLayout());
		JLabel lable=new JLabel("Counter");
		frame.add(lable);
		JTextField text=new JTextField("0",10);
		frame.add(text);
		text.setEditable(false);
		JButton up=new JButton("CountUP");
		frame.add(up);
		up.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int cou=Integer.parseInt(text.getText());
				cou++;
				text.setText(String.valueOf(cou));
			}}
		);
		JButton down=new JButton("CountDOWN");
		frame.add(down);
		down.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int cou=Integer.parseInt(text.getText());
				cou--;
				text.setText(String.valueOf(cou));
			}}
		);
		JButton re=new JButton("Reset");
		frame.add(re);
		re.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				text.setText("0");
			}}
		);
		frame.setVisible(true);
		
	}

}
