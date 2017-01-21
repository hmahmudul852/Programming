public class SingleTonClass
{
	private static SingleTonClass obj=null;
	private static int c=0;
	private SingleTonClass(){}
	
	public static SingleTonClass objectCreationMethod()
	{
		if(obj==null && c<1)
		{
			obj = new SingleTonClass();
			c++;
		}
		else
			obj=null;
			
		return obj;
	}
	public void display()
	{
		System.out.println("Singleton class Example");
	}
	public void displaya()
	{
		System.out.println("Singleton class Example 2");
	}
}
