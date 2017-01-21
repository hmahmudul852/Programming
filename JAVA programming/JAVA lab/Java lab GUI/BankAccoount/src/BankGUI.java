import javax.swing.JFrame;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import java.util.List;
import java.util.ArrayList;

public class BankGUI 
{
	public static void main(String[] args) 
	{
		List<SavingAccount> sa=new ArrayList<SavingAccount>();
		List<StudentAccount> st=new ArrayList<StudentAccount>();
		List<CurrentAccount> cu=new ArrayList<CurrentAccount>();
		
		JFrame frame=new JFrame("Bank Account");
		frame.setSize(260,300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLayout(new FlowLayout());
		JButton sav=new JButton("Saving Account");
		frame.add(sav);
		JButton stu=new JButton("Student Account");
		frame.add(stu);
		JButton cur=new JButton("Current Account");
		frame.add(cur);
		sav.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				
			}}
		);
		stu.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				
			}}
		);
		cur.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				
			}}
		);
		frame.setVisible(true);
	}

}
