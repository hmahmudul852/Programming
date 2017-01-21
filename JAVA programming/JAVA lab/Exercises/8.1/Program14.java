import java.util.Scanner;
import java.lang.Math;

public class Program14
{
	public static void main(String args[])
	{
		int a;
		System.out.print("Enter a value: ");
		Scanner scan=new Scanner(System.in);
		a=scan.nextInt();
		double sum=0;
		for(int i=1;i<=a;i++)
		{
			sum+=1/i;
		}
		sum=sum-Math.log(a);
		System.out.print(sum);
	}
	
}



