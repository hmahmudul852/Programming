import java.util.Scanner;

public class Program65
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		for(int i=1;i<=s.length();i++)
			System.out.print(s.substring(0,i)+" ");
	}

}




















