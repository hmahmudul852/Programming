import java.util.Scanner;

public class Program52
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		s=s.replace(" ","");
		int[] ar=new int[123];
		for(int i=0;i<s.length();i++)
		{
			int x=s.charAt(i);
			ar[x]=1;
		}
		for(int i=97;i<=122;i++)
		{
			if(ar[i]==0)
			{
				System.out.println((char)i);
				break;
			}
			else if(i==122)
				System.out.println("All the alphabes r included in the given string");
		}
	}

}




















