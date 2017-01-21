import java.util.Scanner;

public class Program64
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		String r="";
		for (int i=s.length()-1;i>=0;i--)
			r=r+s.charAt(i);
		if(s.equals(r)==true)
			System.out.println("The string is palindrome");
		else
			System.out.println("The string isn't palindrome");
	}

}





















