import java.util.Scanner;

public class Program03
{
	public static void main(String args[])
	{
		double w,h;
		System.out.println("Enter ur weight and height:");
		Scanner scan=new Scanner(System.in);
		w=scan.nextDouble();
		h=scan.nextDouble();
		double bmi;
		bmi=(703*w)/(h*h);
		System.out.println("BMI: "+bmi);
	}
	
}

