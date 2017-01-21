import java.util.Random;
 
public class Program77
{
	public static void main(String args[])
	{
		int[] ar=new int[50];
		Random random = new Random();

		for(int i=0;i<50;i++)
		{
			ar[i]=random.nextInt((100-1+1)+1);
			ar[i]=ar[i]*ar[i];
			System.out.print(ar[i]+",");

		}
	}

}














