import java.util.Scanner;

public class Program23
{
	public static void main(String args[])
	{
		double n;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextDouble();
		n=(double)Math.round(n*100)/100;
		int a=(int)n;
		double x=(n-a)*100;
		
		System.out.println((int)(x/25)+" quater");
		x=x%25;
		System.out.println((int)(x/10)+" dime");
		x=x%10;
		System.out.println((int)(x/5)+" nickel");
		x=x%5;
		System.out.println((int)x+" cent");
		
	}

}



