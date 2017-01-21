
public class SavingAccount extends BankAccount
{
	public int interest=5;
	public double maximumWithdraw;
	public SavingAccount(String n, double b,double max)
	{
		super(n,b,2000);
		maximumWithdraw=max;
	}
	
	public SavingAccount(String n, double b,double min,double max)
	{
		super(n,b,min);
		maximumWithdraw=max;
	}
	
	public double getBalance()
	{
		double a=super.getBalance();
		return (a+(a*interest)/100);
	}
	
	public double getOriginalBalance()
	{
		return super.getBalance();
	}
	
	public void withdraw(double balance)
	{
		if(balance<=maximumWithdraw)
			super.withdraw(balance);
		else
			System.out.println("You cant withdraw more than "+maximumWithdraw);
	}
}
