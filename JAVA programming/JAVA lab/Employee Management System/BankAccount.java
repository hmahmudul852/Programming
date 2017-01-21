public class BankAccount extends Employee
{
	private String bankId,openingDate;
	
	public BankAccount(String name,String id,String joiningDate,String mobile,String address,String rank,double salary,String bankId)
	{
		super(name,id,joiningDate,mobile,address,rank,salary);
		this.bankId=bankId;
		openingDate=joiningDate;
	}
	
	public void setBankId(String bankId)
	{
		this.bankId=bankId;
	}
	
	public String getBankId()
	{
		return bankId;
	}
	
	public void setOpeningDate(String openingDate)
	{
		this.openingDate=openingDate;
	}
	
	public String getOpeningDate()
	{
		return openingDate;
	}
}
