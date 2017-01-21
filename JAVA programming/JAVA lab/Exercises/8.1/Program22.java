import java.util.Scanner;
import java.util.Random; 

public class Program22
{
	public static void main(String args[])
	{
		char c;
		int me=0,com=0;
		Scanner scan=new Scanner(System.in);
		System.out.print("If u chose rock press 'r'\nIf u chose paper press 'p'\nIf u chose scissors press 's'\nThe game is of 5 rounds\n");
		for(int i=0;i<5;i++)
		{
			c = scan.next().charAt(0);
			Random random = new Random();
			int x=random.nextInt(3);
			if(c=='r' && x==1)
				com++;
			else if(c=='r' && x==2)
				me++;
			else if(c=='p' && x==0)
				me++;
			else if(c=='p' && x==2)
				com++;
			else if(c=='s' && x==0)
				com++;
			else if(c=='s' && x==1)
				me++;
		}
		if(me>com)
			System.out.print("You win! u beat the computer");			
		else if(me<com)
			System.out.print("You lose! computer beats the u");
		else if(me==com)
			System.out.print("It's a tie! no one wins");
	}

}






