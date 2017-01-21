public class Car
{
	private String brand;
	private String color;
	private int milage;
	
	public Car(String brand,String color,int milage)
	{
		this.brand=brand;
		this.color=color;
		this.milage=milage;
	}
	
	public String getBrand()
	{
		return this.brand;
	}
	
	public void setBrand(String brand)
	{
		this.brand=brand;
	}
	
	public void Accelerate()
	{
		System.out.print(color+" color "+brand+" is running in "+milage+" kmh");
		for(int i=0;i<10000;i++)
			System.out.print(".");
	}
	
	public void Break()
	{
		System.out.print("STOP!");
		for(int i=0;i<100;i++)
			System.out.print("!");
	}
}
