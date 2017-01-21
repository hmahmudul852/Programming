import java.util.Scanner;

public class Program05
{
	public static void main(String args[])
	{
		double p,v,r;
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter the voltage and resistance:");
		v=scan.nextDouble();
		r=scan.nextDouble();
		p=(v*v)/r;
		if(p>=1000.00)
			System.out.println("Warning! Power range is crossing the limit");
		else
			System.out.println(p);

	}

}
