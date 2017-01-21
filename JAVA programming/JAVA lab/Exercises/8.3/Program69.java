import java.util.Scanner;

public class Program69
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a algebric eqution: ");
		String s=scan.nextLine();
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='(')
			{
				System.out.print("*");
				flag=0;
			}
			else if(Character.isDigit(s.charAt(i))!=true && flag==1 && s.charAt(i)!='(' && s.charAt(i)!=')')
			{
				System.out.print("*");
				flag=0;
			}	
			System.out.print(s.charAt(i));
			if(Character.isDigit(s.charAt(i))==true)
				flag=1;
		}
	}

}























