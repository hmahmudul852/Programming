import java.util.Scanner;

public class Program57
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a date: ");
		String s=scan.nextLine();
		String su=s.substring(0,2);
		String sb=s.substring(3,5);
		if(su.equals("01")==true)
			System.out.println("January "+sb);
		else if(su.equals("02")==true)
			System.out.println("February "+sb);
		else if(su.equals("03")==true)
			System.out.println("March "+sb);
		else if(su.equals("04")==true)
			System.out.println("April "+sb);
		else if(su.equals("05")==true)
			System.out.println("May "+sb);
		else if(su.equals("06")==true)
			System.out.println("June "+sb);
		else if(su.equals("07")==true)
			System.out.println("July "+sb);
		else if(su.equals("08")==true)
			System.out.println("August "+sb);
		else if(su.equals("09")==true)
			System.out.println("September "+sb);
		else if(su.equals("10")==true)
			System.out.println("October "+sb);
		else if(su.equals("11")==true)
			System.out.println("November "+sb);
		else if(su.equals("12")==true)
			System.out.println("December "+sb);
	}

}





















