public class Rectangle
{
	private double height;
	private double width;
	
	public Rectangle(double height,double width)
	{
		this.height=height;
		this.width=width;
	}
	
	public Rectangle()
	{
		this(1,1);
	}
	
	public double area()
	{
		return height*width;
	}
}


