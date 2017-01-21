import java.util.List; 
import java.util.ArrayList;

public class Bank
{
	private List<BankAccount> e=new ArrayList<BankAccount>();
	
	public void addEmployee(String name,String id,String joiningDate,String mobile,String address,String rank,double salary,String bankId)
	{
		e.add(new BankAccount(name,id,joiningDate,mobile,address,rank,salary,bankId));
	}
	
	public int totalEmployee()
	{
		return e.size();
	}
	
	public double totalSalary()
	{
		int s=0;
		for(int i=0;i<e.size();i++)
			s+=e.get(i).getSalary();
		return s;
	}
	
	public String getRank(String id)
	{
		int i;
		for(i=0;i<e.size();i++)
			if(id.equals(e.get(i).getId()))
				break;
		if(i!=e.size())
			return e.get(i).getRank();
		else
			return "No employee of this Id. Please! insert a valid Id.";
	}
	
	public void annualBonus(double percentage)
	{
		for(int i=0;i<e.size();i++)
			e.get(i).setSalary(e.get(i).getSalary()+(e.get(i).getSalary()*percentage)/100);
	}
	
	public void sixMonthBonus(String id)
	{
		
		int i;
		for(i=0;i<e.size();i++)
			if(id.equals(e.get(i).getId()))
				break;
		if(i!=e.size())
			e.get(i).setSalary(e.get(i).getSalary()+(e.get(i).getSalary()*50)/100);
		else
			System.out.println("No employee of this Id. Please! insert a valid Id.");
	}
}
