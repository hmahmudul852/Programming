public class Program181
{
	public static void main(String[] args)
	{
		Vector v=new Vector(1,5,9);
		
		System.out.println(v.toString());
		System.out.printf("%.2f\n",v.length());
		System.out.println(v.add("{3,5,7}"));
		System.out.println(Vector.add("1,4,7","3,6,9"));
		
	}
}
