public class Program26
{
	public static void main(String args[])
	{
		for(int i=0;i<10;i++)
		{
			for(int j=i;j<10;j++)
				System.out.print(j);
			
			for(int k=0;k<i;k++)
				System.out.print(k);
			
			System.out.print("\n");
		}
	}
}
