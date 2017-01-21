import java.util.Scanner;

public class Program44
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a course code: ");
		String s=scan.nextLine();
		int i=s.indexOf(' ');
		String n=s.substring(i+1,s.length());
		int a=Integer.parseInt(n);
		if(a>=100 && a<500)
			System.out.println("The course code is valid");
		else 
			System.out.println("The course is invalid");
	}

}

















