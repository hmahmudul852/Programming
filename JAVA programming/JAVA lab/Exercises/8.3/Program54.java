import java.util.Scanner;

public class Program54
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		for(int i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			if(c=='a')
				System.out.print("z");
			else if(c==' ')
				System.out.print(" ");
			else
				System.out.print((char)(c-1));
			
		}
	}

}



















