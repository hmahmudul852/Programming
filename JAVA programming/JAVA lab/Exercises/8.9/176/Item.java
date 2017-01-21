public class Item
{
	public String name;
	private double price;
	
	public Item(String n,double p)
	{
		name=n;
		price=p;
	}
	
	public String getName()
	{
		return name;
	}
	
	public double getPrice()
	{
		double p=price;
		return p;
	}
	
	public String toString()
	{
		String s=name+" is "+String.format("%.2f",price);
		return s;
	}
	
	public boolean equals(String b)
	{
		return name.equals(b);
	}
}
