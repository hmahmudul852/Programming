public class Program171
{
	public static void main(String[] args)
	{
		BankAccount acc=new BankAccount("Hasan",100000,3);
		System.out.println(acc.getName());
		System.out.println(acc.getAmount());
		System.out.println(acc.getInterestRate());
		acc.applyInterest();
		System.out.println(acc.getAmount());
	}
}

