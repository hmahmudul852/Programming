import java.util.Scanner;
import java.util.Random;

public class Program66
{
	public static void main(String args[])
	{
		Random random = new Random();
		for(int i=0;i<50;i++)
			System.out.print((char)(random.nextInt(26)+97));
	}

}





















