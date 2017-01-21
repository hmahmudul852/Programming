import java.util.Scanner;
import java.util.Random; 

public class Random_num
{
	public static void main(String args[])
	{
		int b=6,e=100;
		
		for(int i=0;i<10;i++)
		{
			Random random = new Random();
			int x=random.nextInt(e-b+1)+b;
			System.out.println(x);
		}
	}
}
