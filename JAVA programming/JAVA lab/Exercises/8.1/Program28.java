public class Program28
{
	public static void main(String args[])
	{
		int a,b,c,d,e,f,n=3;
		for(a=0;a<n;a++)
		{
			for(b=n;b>a;b--)
				System.out.print(" ");
			for(c=0;c<(b*2)+1;c++)
				System.out.print("*");
			System.out.print("\n");
		}
		for(d=0;d<n;d++)
		{
			for(e=-1;e<=d;e++)
				System.out.print(" ");
			for(f=(n*2)-2;f>(d*2)+1;f--)
				System.out.print("*");
			System.out.print("\n");
		}
	}
}


