public class BaseCommission extends Commission
{
	private double base;
	
	public BaseCommission(String n,double p,double s,double r)
	{
		super(n,p,s);
		base=r;
	}
	
	public String getName()
	{
		return super.name;
	}
	
	public void setBase(double s)
	{
		base=s;
	}
	
	public double getBase()
	{
		return base;
	}
	
	public double getSalary()
	{
		return (base+(getRate()*getSale()/100));
	}
}
