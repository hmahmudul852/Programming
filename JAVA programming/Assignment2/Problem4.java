public class Problem4
{
	public static void main(String args[])
	{
		String[][] a = new String[3][4];
		int b=0;
		for(int i=0;i<3;i++)
		{
			int d=0;
			for(int j=0;j<4;j++)
			{
				a[i][j]=Integer.toString(b)+Integer.toString(d);
				d++;
			}
			b++;
		}
		for(int i=0;i<3;i++)
		{
			System.out.print("|");
			for(int j=0;j<4;j++)
			{
				System.out.print(a[i][j]);
				if(j<4-1)
					System.out.print(" ");
			}
			System.out.print("|");
			System.out.println("");
		}
		
	}

}



