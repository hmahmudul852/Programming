import java.util.Scanner;
import java.util.Random; 

public class Program37
{
	public static void main(String args[])
	{
		Random random = new Random();
		int com;
		while(true)
		{
			com=random.nextInt(10-1+1)+1;
			System.out.print(com+" ");
			if(com==6)
				break;
			
		}
	}

}











