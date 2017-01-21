import java.util.Scanner;

public class EvenOdd
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		int a;
		a=scan.nextInt();
		if(a%2==0)
			System.out.println("True");
		else
			System.out.println("False");
	}

}


