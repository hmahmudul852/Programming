import java.util.Scanner;

public class Program63
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		System.out.print("Enter ur SAT marks: ");
		int m=scan.nextInt();
		int flag=0;
		if(m>=530)
			flag=1;
		else if(m<=520)
		{
			System.out.print("Have u passed the math placement test(y/n): ");
			char p=scans.next(".").charAt(0);;
			if(p=='y')
				flag=1;
		}
		if(flag==1)
		{
			System.out.println("Choose among this courses:\n");
			System.out.println("Math, CS, and Science majors take Math 247 (Calculus)\n");
			System.out.println("Education majors take Math 108\n");
			System.out.println("Everyone else takes Math 105 (Stats)\n");
		}
		else if(flag==0)
		{
			System.out.println("Choose between this courses:\n");
			System.out.println("Math, CS, and Science majors take Math 102\n");
			System.out.println("Education majors take Math 101\n");
		}
	}

}




















