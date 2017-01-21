
public class StudentAccount extends SavingAccount
{
	private String institutionName;
	
	public StudentAccount(String n, double b,String ins)
	{
		super(n,b,100,20000);
		institutionName=ins;
	}
	
	public void displayInstitution()
	{
		System.out.println(institutionName);
	}
}
