import java.util.Random;
import java.util.ArrayList;

public class Program74
{
	public static void main(String args[])
	{
		ArrayList<Integer> ar = new ArrayList<Integer>();
		Random random = new Random();

		for(int i=0;i<100;i++)
			ar.add(random.nextInt(2));
		
		System.out.print(ar);
	}

}














