import java.util.Scanner;

public class Program49
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		s=s.replace(' ','*');
		StringBuilder myName = new StringBuilder(s);
		for(int i=0;i<s.length();i+=5)
			myName.setCharAt(i, '!');
		String n=myName.toString()+myName.toString()+myName.toString();
		System.out.println(n);
	}

}


















