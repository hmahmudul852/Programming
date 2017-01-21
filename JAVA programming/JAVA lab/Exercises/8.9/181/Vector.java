public class Vector
{
	private int x,y,z;
	
	public Vector(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	
	public int getX()
	{
		return x;
	}
	
	public int getY()
	{
		return y;
	}
	
	public int getZ()
	{
		return z;
	}
	
	public String toString()
	{
		String s="<"+x+","+y+","+z+">";
		return s;
	}
	
	public double length()
	{
		return Math.sqrt((double)(x*x+y*y+z*z));
	}
	
	public String add(String w)
	{
		int[] ar=new int[3];
		for(int i=0,j=0;i<w.length();i++)
		{
			if(Character.isDigit(w.charAt(i))==true)
			{
				ar[j]=Integer.parseInt(w.substring(i,i+1));
				j++;
			}
		}
		
		ar[0]+=x;
		ar[1]+=y;
		ar[2]+=z;
		
		String s="{"+ar[0]+","+ar[1]+","+ar[2]+"}";
		return s;
	}
	
	public static String add(String w,String v)
	{
		int[] ar=new int[3];
		int[] a=new int[3];
		for(int i=0,j=0;i<w.length();i++)
		{
			if(Character.isDigit(w.charAt(i))==true)
			{
				ar[j]=Integer.parseInt(w.substring(i,i+1));
				a[j]=Integer.parseInt(v.substring(i,i+1));
				j++;
			}
		}
		
		String s="{"+(ar[0]+a[0])+","+(ar[1]+a[1])+","+(ar[2]+a[2])+"}";
		return s;
	}
	
	
}
