
public class CurrentAccount extends BankAccount
{
	private String tradeLicenceNumber;
	
	public CurrentAccount(String n, double b,String num)
	{
		super(n,b,5000);
		tradeLicenceNumber=num;
	}
	
	public void displayLicance()
	{
		System.out.println(tradeLicenceNumber);
	}
}
