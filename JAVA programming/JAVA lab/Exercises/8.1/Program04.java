import java.util.Scanner;

public class Program04
{
	public static void main(String args[])
	{
		int a;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter how many credits u have taken: ");
		a=scan.nextInt();
		if(a>=0 && a<=23)
			System.out.println("Freashmen");
		else if(a>=24 && a<=53)
			System.out.println("Sophomores");
		else if(a>=54 && a<=83)
			System.out.println("Juniors");
		else if(a>=84)
			System.out.println("Seniors");
	}
	
}

