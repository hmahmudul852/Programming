import java.util.Scanner;
import java.util.Random; 

public class Program29
{
	public static void main(String args[])
	{
		Random random = new Random();
		int x,y,ans;
		x=random.nextInt(50-1+1)+1;
		y=random.nextInt(5-2+1)+2;
		ans=(int)Math.pow(x,y);
		System.out.println(ans);
	}

}







