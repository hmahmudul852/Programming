import java.util.Scanner;

public class Program61
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter name: ");
		String s=scan.nextLine();
		int i=s.indexOf(" ");
		String s1=s.substring(0,i);
		System.out.print("\n");
		System.out.print("Dear "+s+",\n\n"+"I am pleased to offer you our new Platinum Plus Rewards card\n"+
						 "at a special introductory APR of 47.99%. "+s1+", an offer\n"+
						 "like this does not come along every day, so I urge you to call\n"+
						 "now toll-free at 1-800-314-1592. We cannot offer such a low\n"+
						 "rate for long, "+s1+", so call right away.");
	}

}





















