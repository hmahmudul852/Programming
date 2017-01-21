import java.util.Scanner;
import java.util.Random; 

public class Program33
{
	public static void main(String args[])
	{
		Random random = new Random();
		int a,b,c,d,e,cou=0;
		for(int i=0;i<1000000;i++)
		{
			a=random.nextInt(6-1+1)+1;
			b=random.nextInt(6-1+1)+1;
			c=random.nextInt(6-1+1)+1;
			d=random.nextInt(6-1+1)+1;
			e=random.nextInt(6-1+1)+1;
			if(a==b && b==c && c==d && d==e)
				cou++;
		}
		double per=(100*cou)/1000000.00;
		System.out.printf("%.3f%%\n",per);
		int rolls=1000000/cou;
		System.out.println(rolls+" rolls to get an Yahtzee");
	}

}









