import java.util.List;
import java.util.ArrayList;


public class HourlyList
{
	private List<Hourly> list=new ArrayList<Hourly>();
	
	public void addEmployee(String n,double h,double r)
	{
		list.add(new Hourly(n,h,r));
	}
	
	public void findEmployeeSalary(String n)
	{
		int i;
		for(i=0;i<list.size();i++)
		{
			if(n.equals(list.get(i).getName())==true)
				break;
		}
		
		if(i<list.size())
			System.out.println(list.get(i).getName()+" salary is "+list.get(i).getSalary()+" taka");
		else
			System.out.println("Sorry! no employee exist of this name.\n");
	}
	
	public void allEmployeeSalary()
	{
		for(int i=0;i<list.size();i++)
			System.out.println(list.get(i).getName()+" salary is "+list.get(i).getSalary()+" taka");
	}
	
	public void setEmployeeRate(String n,double d)
	{
		int i;
		for(i=0;i<list.size();i++)
		{
			if(n.equals(list.get(i).getName())==true)
				break;
		}
		
		if(i<list.size())
			list.get(i).setRate(d);
		else
			System.out.println("Sorry! no employee exist of this name.\n");
	}
	
	public void setAllEmployeeRate(double d)
	{
		for(int i=0;i<list.size();i++)
			list.get(i).setRate(d);
	}
	
	public void increaseEmployeeRate(String n,double d)
	{
		int i;
		for(i=0;i<list.size();i++)
		{
			if(n.equals(list.get(i).getName())==true)
				break;
		}
		
		if(i<list.size())
			list.get(i).inccreaseRate(d);
		else
			System.out.println("Sorry! no employee exist of this name.\n");
	}
}
