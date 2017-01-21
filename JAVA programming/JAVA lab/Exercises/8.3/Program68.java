import java.util.Scanner;

public class Program68
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		for(int i=0;i<s.length();i+=2)
			System.out.print(s.charAt(i));
		for(int i=1;i<s.length();i+=2)
			System.out.print(s.charAt(i));
	}

}






















