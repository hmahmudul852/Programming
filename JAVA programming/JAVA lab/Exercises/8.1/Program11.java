import java.util.Scanner;

public class Program11
{
	public static void main(String args[])
	{
		double a,x=2.0;
		Scanner scan=new Scanner(System.in);
		a=scan.nextDouble();
		for(int i=0;i<50;i++)
		{
			x=(x+(a/x))/2;
		}
		System.out.print(x);
	}
	
}


