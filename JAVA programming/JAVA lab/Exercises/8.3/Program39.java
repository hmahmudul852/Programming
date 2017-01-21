import java.util.Scanner;

public class Program39
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String s;
		s=scan.nextLine();
		s=s.toLowerCase();
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			String m = s.substring(i,i+1);
			if(m.equals("a") || m.equals("e") || m.equals("i") || m.equals("o") || m.equals("u"))
			{
				flag=1;
				System.out.println("Yes! the string contains vowel");
				break;
			}
		}
		if(flag==0)
			System.out.println("No! the string doesn't contains vowel");
	}

}













