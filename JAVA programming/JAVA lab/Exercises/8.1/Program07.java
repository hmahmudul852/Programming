import java.util.Scanner;

public class Program07
{
	public static void main(String args[])
	{
		double[] ar = new double[10];
		double sum=0;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter 10 numbers:");
		for(int i=0;i<10;i++)
		{
			ar[i]=scan.nextDouble();
			sum+=ar[i];
		}
		sum=sum/10;
		System.out.println(sum);

	}

}

