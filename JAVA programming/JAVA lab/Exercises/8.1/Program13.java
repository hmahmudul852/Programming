import java.util.Scanner;

public class Program13
{
	public static void main(String args[])
	{
		int i;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter any year: ");
		i=scan.nextInt();
	
		if(i%100==0)
		{		
			if(i%400==0)
				System.out.println("Yes it's leapyear");
			else if(i%400!=0)
				System.out.println("No it's not leapyear");
		}
		else if(i%4==0)
		{
			System.out.println("Yes it's leapyear");
		}
		else
			System.out.println("No it's not leapyear");
	}
	
}

