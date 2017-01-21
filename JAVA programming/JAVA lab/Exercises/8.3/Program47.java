import java.util.Scanner;

public class Program47
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string that contains the letter 'a': ");
		String s=scan.nextLine();
		int i=s.indexOf('a');
		String n=s.substring(0,i+1);
		String m=s.substring(i+1,s.length());
		System.out.println(n);
		System.out.println(m);
	}

}


















