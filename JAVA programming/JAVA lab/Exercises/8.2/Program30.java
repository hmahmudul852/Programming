import java.util.Scanner;
import java.util.Random; 

public class Program30
{
	public static void main(String args[])
	{
		Random random = new Random();
		int x;
		for(int i=0;i<100;i++)
		{
			x=random.nextInt(60-50+1)+50;
			System.out.print(x+" ");
		}
	}

}








