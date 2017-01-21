import java.util.Scanner;

public class Program09
{
	public static void main(String args[])
	{
		int i;
		Scanner scan=new Scanner(System.in);
		System.out.print("How many items: ");
		i=scan.nextInt();
		if(i<10)
			System.out.println((i*12)+"$ please");
		else if(i>=10 && i<100)
			System.out.println((i*10)+"$ please");
		else if(i>=100)
			System.out.println((i*7)+"$ please");
	}
	
}
