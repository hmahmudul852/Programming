import java.util.Scanner;
import java.util.Random; 

public class Program32
{
	public static void main(String args[])
	{
		Random random = new Random();
		int x;
		for(int i=0;i<100;i++)
		{
			x=random.nextInt((i+2)-1+1)+1;
			System.out.print(x+" ");
		}
	}

}









