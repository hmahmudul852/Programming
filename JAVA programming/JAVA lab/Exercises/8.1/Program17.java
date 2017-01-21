import java.util.Scanner;

public class Program17
{
	public static void main(String args[])
	{
		int n,pro=1;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextInt();
		for(int i=2;i<=n;i++)
			pro*=i;
		System.out.print(pro);

	}

}




