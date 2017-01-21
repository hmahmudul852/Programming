import java.util.*;
public class Round_735_A
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		
		int n,k;
		n=scan.nextInt();
		k=scan.nextInt();
		String s;
		s=scans.nextLine();
		
		int g,t,flag=0;
		g=s.indexOf('G');
		t=s.indexOf('T');
		if(g<t)
		{
			for(int i=g+k;i<n;i+=k)
			{
				char a=s.charAt(i);
				char T=s.charAt(t);
				if(a==T)
				{
					flag=1;
					break;
				}
				else if(a=='#')
					break;
			}
		}
		else
		{
			for(int i=g-k;i==0;i-=k)
			{
				char a=s.charAt(i);
				char T=s.charAt(t);
				if(a==T)
				{
					flag=1;
					break;
				}
				else if(a=='#')
					break;
			}
		}
		if(flag==1)
			System.out.println("YES");
		else
			System.out.println("NO");
	}
}
