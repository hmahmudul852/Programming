import java.util.*;

public class E_Substring_Frequency
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		int t=scan.nextInt();
		int cs=0;
		for(int j=0;j<t;j++)
		{
			cs++;
			String a=scans.nextLine();
			String b=scans.nextLine();
			int cou=0;
			for(int i=0;i<=a.length()-b.length();i++)
				if(b.equals(a.substring(i,i+b.length())))
					cou++;

			System.out.printf("Case %d: %d\n",cs,cou);
		}
	} 
}
