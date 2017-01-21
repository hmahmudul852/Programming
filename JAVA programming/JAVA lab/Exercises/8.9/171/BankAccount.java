public class BankAccount
{
	private double amount;
	private double interestRate;
	private String name;
	
	public BankAccount(String name,double amount,double interestRate)
	{
		this.amount=amount;
		this.interestRate=interestRate;
		this.name=name;
	} 
	
	public void setAmount(double amount) 
	{
       this.amount = amount;
    }

    public double getAmount() 
    {
       return amount;
    }
    
	public void setInterestRate(double interestRate) 
	{
       this.interestRate = interestRate;
    }

    public double getInterestRate() 
    {
       return interestRate;
    }
    
	public void setName(String name) 
	{
       this.name = name;
    }

    public String getName() 
    {
       return name;
    }
    
    public void applyInterest()
    {
		amount=amount+((amount*interestRate)/100);
	}
}
