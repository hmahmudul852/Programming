import java.util.Scanner;

public class Program08
{
	public static void main(String args[])
	{
		int s,e;
		Scanner scan=new Scanner(System.in);
		System.out.print("When does ur shift starts: ");
		s=scan.nextInt();
		System.out.print("When does ur shift ends: ");
		e=scan.nextInt();
		if(e>s)
			System.out.println((e-s)*5.5);
		else if(s>e)
			System.out.println(((24-s)+e)*5.5);
	}
	
}


