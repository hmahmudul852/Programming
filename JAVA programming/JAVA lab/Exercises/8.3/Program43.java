import java.util.Scanner;

public class Program43
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string of 5 charecter: ");
		String s=scan.nextLine();
		StringBuilder myName = new StringBuilder(s);
		myName.setCharAt(2, '!');
		System.out.println(myName);
	}

}
















