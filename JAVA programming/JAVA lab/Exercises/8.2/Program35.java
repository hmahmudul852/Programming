import java.util.Scanner;
import java.util.Random; 

public class Program35
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		Random random = new Random();
		int com,point=100,gus;
		while(true)
		{
			com=random.nextInt(10-1+1)+1;
			System.out.print("Guess a number between 1 to 10: ");
			gus=scan.nextInt();
			if(com==gus)
				point+=100;
			else if(com<gus)
				point-=20;
			else if(com>gus)
				point-=10;
			System.out.println("Computer guessed "+com+"\nUr final point "+point);
			if(point>=200)
			{
				System.out.println("\n\nYou won! u beat the machine");
				break;
			}
			else if(point<=0)
			{
				System.out.println("\n\nYou lose! machine beats u, u looser!");
				break;
			}
		}
	}

}










