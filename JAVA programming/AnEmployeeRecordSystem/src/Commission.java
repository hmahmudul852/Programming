public class Commission extends Employee
{
	private double percent;
	private double sale;
	
	public Commission(String n,double p,double s)
	{
		super(n);
		percent=p;
		sale=s;
	}
	
	public String getName()
	{
		return super.name;
	}
	
	public void setRate(double a)
	{
		percent=a;
	}
	
	public double getRate()
	{
		return percent;
	}
	
	public void setSale(double a)
	{
		sale=a;
	}
	
	public double getSale()
	{
		return sale;
	}
	
	public void inccreaseRate(double a)
	{
		percent+=((percent*a)/100);
	}
	
	public double getSalary()
	{
		return (percent*sale)/100;
	}
	
	
	
}
