public class Hourly extends Employee
{
	private double rate;
	private double hour;
	
	public Hourly(String n,double h,double r)
	{
		super(n);
		hour=h;
		rate=r;
	}
	
	public String getName()
	{
		return super.name;
	}
	
	public void setHour(double h)
	{
		hour=h;
	}
	
	public double getHour()
	{
		return hour;
	}
	
	public void setRate(double s)
	{
		rate=s;
	}
	
	public double getRate()
	{
		return rate;
	}
	
	public void inccreaseRate(double a)
	{
		rate=rate+(rate*a)/100;
	}
	
	public double getSalary()
	{
		double s=rate*hour;
		return s;
	}
}
