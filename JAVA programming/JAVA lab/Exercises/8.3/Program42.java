import java.util.Scanner;

public class Program42
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a string:");
		String s=scan.nextLine();
		s=s.toLowerCase();
		s = s.replace("?", "");
		s = s.replace("!", "");
		s = s.replace("\"", "");
		s = s.replace(".", "");
		s = s.replace(",", "");
		s = s.replace(";", "");
		s = s.replace(":", "");
		System.out.println(s);
	}

}
















