import java.util.Scanner;
import java.util.Random; 

public class Program34
{
	public static void main(String args[])
	{
		Random random = new Random();
		double max=10.0,min=0.0;
		double range = max - min;
		double scaled = random.nextDouble() * range;
		double shifted = scaled + min;
		System.out.printf("%.2f",shifted);
	}

}










