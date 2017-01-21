public class Employee
{
	private String name,id,joiningDate,mobile,address,rank;
	private double salary;
	
	public Employee(String name,String id,String joiningDate,String mobile,String address,String rank,double salary)
	{
		this.id=id;
		this.joiningDate=joiningDate;
		this.name=name;
		this.mobile=mobile;
		this.address=address;
		this.rank=rank;
		this.salary=salary;
	}
	
	public void setId(String id)
	{
		this.id=id;
	}
	
	public void setJoiningDate(String joiningDate)
	{
		this.joiningDate=joiningDate;
	}
	
	public void setName(String name)
	{
		this.name=name;
	}
	
	public void setMobile(String mobile)
	{
		this.mobile=mobile;
	}
	
	public void setAddress(String address)
	{
		this.address=address;
	}
	
	public void setRank(String rank)
	{
		this.rank=rank;
	}
	
	public void setSalary(double salary)
	{
		this.salary=salary;
	}
	
	public String getId()
	{
		return id;
	}
	
	public String getJoiningDate()
	{
		return joiningDate;
	}
	
	public String getName()
	{
		return name;
	}
	
	public String getMobile()
	{
		return mobile;
	}
	
	public String getAddress()
	{
		return address;
	}
	
	public String getRank()
	{
		return rank;
	}
	
	public double getSalary()
	{
		return salary;
	}
}



