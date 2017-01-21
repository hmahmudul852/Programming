import java.util.Scanner;

public class Program15
{
	public static void main(String args[])
	{
		long[] ar = new long[1000000];
		ar[0]=1;
		ar[1]=1;
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextInt();
		for(int i=2;i<n;i++)
			ar[i]=(2*ar[i-1])+ar[i-2];
		for(int i=0;i<n;i++)
			System.out.print(ar[i]+" ");

	}

}


