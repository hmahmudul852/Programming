import java.util.Scanner;
import java.lang.Math;

public class Dates
{
	public static void main(String args[])
	{
		double y,m,d,p,q,r,s,t;
		Scanner scan=new Scanner(System.in);
		int l;
		l=scan.nextInt();
		for(int i=0;i<l;i++)
		{
			d=scan.nextDouble();
			m=scan.nextDouble();
			y=scan.nextDouble();
			
			p=Math.floor((14-m)/12);
			q=y-p;
			r=q+Math.floor(q/4)-Math.floor(q/100)+Math.floor(q/400);
			s = m+(12*p)-2;
			t=(d+r+Math.floor((31*s)/12))%7;
			if(t==0)
				System.out.println("Sunday");
			if(t==1)
				System.out.println("Monday");
			if(t==2)
				System.out.println("Tuesday");
			if(t==3)
				System.out.println("Wednesday");
			if(t==4)
				System.out.println("Thursday");
			if(t==5)
				System.out.println("Friday");
			if(t==6)
				System.out.println("Saturday");
		}
	}
	
}




