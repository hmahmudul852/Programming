import java.util.Scanner;

public class Program53
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter odd number of letters: ");
		String s=scan.nextLine();
		int l=s.length()/2;
		l=l+1;
		int i,k=l;
		for(i=0;i<l;i++)
		{
			for(int j=0;j<k;j++)
				System.out.print(s.charAt(i));
			k--;
		}
		for(i=l;i<s.length();i++)
		{
			k++;
			for(int j=0;j<=k;j++)
				System.out.print(s.charAt(i));
		}
	}

}



















