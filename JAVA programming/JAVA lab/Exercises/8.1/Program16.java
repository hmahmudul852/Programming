import java.util.Scanner;

public class Program16
{
	public static void main(String args[])
	{
		double[] ar = new double[1000000];
		ar[0]=1;
		ar[1]=2;
		ar[2]=3;
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextInt();
		for(int i=3;i<n;i++)
			ar[i]=(ar[i-1]+ar[i-2]+ar[i-3])/3;
		for(int i=0;i<n;i++)
			System.out.printf("%.3f ",ar[i]);

	}

}



