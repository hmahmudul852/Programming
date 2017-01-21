import java.util.Scanner;
import java.util.Random; 

public class Program36
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		Random random = new Random();
		int com,point=50,gus;
		for(int i=10;i>1;i--)
		{
			com=random.nextInt(i-1+1)+1;
			System.out.print("Guess a number between 1 to "+i+":");
			gus=scan.nextInt();
			if(gus==0)
			{
				System.out.println("\n\nYou quit the game, but at least u got "+point+"$");
				break;
			}
			if(com==gus)
			{
				System.out.println("\n\nYour and computer guessed the same number");
				System.out.println("You lose! but its not over, now u owe the computer "+point+"$");
				break;
			}
			else if(gus>i)
			{
				System.out.println("You can't cross the limit you have to guess between 1 to "+i+" try again but in range");
				i++;
			}
			else
			{
				point*=2;
				System.out.println("Computer guessed "+com+"\nUr total money "+point);
			}
		}
	}

}











