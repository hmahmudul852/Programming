public class Program172
{
	public static void main(String[] args)
	{
		BankAccount acc=new BankAccount("Juan De Hattatime",1000,3);
		acc.applyInterest();
		System.out.println(acc.getAmount());
		acc.setInterestRate(2);
		acc.applyInterest();
		System.out.println(acc.getAmount());
	}
}


