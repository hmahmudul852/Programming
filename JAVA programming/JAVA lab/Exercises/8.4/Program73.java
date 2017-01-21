import java.util.Random;
 
public class Program73
{
	public static void main(String args[])
	{
		int[] ar=new int[100];
		Random random = new Random();

		for(int i=0;i<100;i++)
		{
			ar[i]=random.nextInt(2);
			System.out.print(ar[i]);

		}
	}

}













