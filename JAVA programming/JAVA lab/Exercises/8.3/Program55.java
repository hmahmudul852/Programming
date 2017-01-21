import java.util.Scanner;

public class Program55
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		int[] ar=new int[26];
		for(int i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			ar[(int)c-96]++;
		}
		int sum=0;
		for(int i=1;i<26;i++)
			if(ar[i]!=0)
				sum+=(i*ar[i]);
		System.out.println(sum);
	}

}




















