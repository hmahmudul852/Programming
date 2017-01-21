public class Salaried extends Employee
{
	private double rate;
	
	public Salaried(String n,double r)
	{
		super(n);
		rate=r;
	}
	
	public String getName()
	{
		return super.name;
	}
	
	public void setRate(double s)
	{
		rate=s;
	}
	
	
	public void inccreaseRate(double a)
	{
		rate=rate+(rate*a)/100;
	}
	
	public double getSalary()
	{
		return rate;
	}
}
