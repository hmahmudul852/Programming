import java.util.Scanner;

public class Program21
{
	public static void main(String args[])
	{
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextInt();
		while(true)
		{
			System.out.print(n+" ");
			if(n%2==0)
				n=n/2;
			else if(n==1)
				break;
			else if(n%2!=0)
				n=3*n+1;
		}

	}

}





