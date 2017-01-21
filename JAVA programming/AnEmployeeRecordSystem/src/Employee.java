public abstract class Employee 
{
	public String name;
	public Employee(String s)
	{
		name=s;
	}
	public abstract void setRate(double a);
	public abstract void inccreaseRate(double a);
	public abstract double getSalary();
}
