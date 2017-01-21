
public class Numbers 
{
private int num;
	
	public Numbers(int num)
	{
		this.num=num;
	}
	
	public	void showFibonacci()
	{
		long[] ar = new long[1000000];
		ar[0]=0;
		ar[1]=1;
		for(int i=2;i<num;i++)
			ar[i]=ar[i-1]+ar[i-2];
		for(int i=0;i<num;i++)
			System.out.print(ar[i]+" ");
		System.out.print("\n\n");
	}
	
	public void showPyramid()
	{
		int n=num;
		if(n>9)
			n=9;
		int s=n;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<s-i;j++)
				System.out.print(" ");
			for(int k=1;k<=i;k++)
				System.out.print(k);
			for(int l=i-1;l>=1;l--)
				System.out.print(l);
			System.out.print("\n");
		}
		System.out.print("\n\n");
	}
	public boolean checkNumber()
	{
		if(num%2==0)
			return true;
		else
			return false;
	}
	public void setNum(int num)
	{
		this.num=num;
	}
}
