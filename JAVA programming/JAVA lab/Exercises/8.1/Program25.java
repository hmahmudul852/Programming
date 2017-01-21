import java.util.Scanner;

public class Program25
{
	public static void main(String args[])
	{
		int n,cou=0;
		double ans;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a value of n:");
		n=scan.nextInt();
		for(int i=1;i<7;i++)
			for(int j=1;j<7;j++)
				for(int k=1;k<7;k++)
					for(int l=1;l<7;l++)
					{
						if(i+j==n)
							cou++;
						if(i+k==n)
							cou++;
						if(i+l==n)
							cou++;
						if(j+k==n)
							cou++;
						if(j+l==n)
							cou++;
						if(k+l==n)
							cou++;
					}
		ans=(cou*100)/1636.00;
		System.out.printf("%.1f%%",ans);
	}

}


