import java.util.Scanner;

public class Program48
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.next();
		System.out.print("How many times do u want to see it: ");
		int j=scan.nextInt();
		String n="";
		for(int i=0;i<j;i++)
			n+=s;
		System.out.println(n);
	}

}



















