import java.util.Scanner;

public class Program45
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter any formula: ");
		String s=scan.nextLine();
		int o=0,c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='(')
				o++;
			if(s.charAt(i)==')')
				c++;
		}
		if(o==c)
			System.out.println("The formula has same number of opening and closing parentheses");
		else
			System.out.println("The formula doesn't has same number of opening and closing parentheses");
	}

}

















