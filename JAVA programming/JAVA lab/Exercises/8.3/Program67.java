import java.util.Scanner;

public class Program67
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		for(int k=0;k<s.length();k++)
		{
			
			int i=k;
			while (i < s.length() && !Character.isDigit(s.charAt(i))) i++;
			System.out.print(s.substring(k, i));
			if(i==s.length())
				break;
			int j=i;
			while (j < s.length() && Character.isDigit(s.charAt(j))) j++;
			String s1=s.substring(i,j);
			int a=Integer.parseInt(s1);
			a++;
			System.out.print(a);
			k=j-1;
		}
	}

}





















