import java.util.Scanner;
import java.util.Random; 

public class Program31
{
	public static void main(String args[])
	{
		Random random = new Random();
		int x;
		for(int i=0;i<50;i++)
		{
			x=random.nextInt(2);
			System.out.print(x);
		}
	}

}









