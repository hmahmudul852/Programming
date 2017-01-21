import java.util.*;

public class Driver
{
	public static void main(String[] args)
	{
		Vector[] v=new Vector[100];
		List<String> s=new ArrayList<String>();
		Random random = new Random();
		for(int i=0;i<100;i++)
		{
			v[i]=(new Vector(random.nextInt(5-1+1)+1,random.nextInt(5-1+1)+1,random.nextInt(5-1+1)+1));
			s.add(v[i].toString());
		}
		System.out.println(s);
		System.out.println(v[99].getX());
		System.out.printf("%.2f\n",v[1].length());
		System.out.println(v[50].add("{3,5,7}"));
		System.out.println(Vector.add("1,4,7","3,6,9"));
	}
}
