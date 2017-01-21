import java.util.Scanner;

public class Input
{
	public static void main(String argc[])
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		
		String name,adr;
		int age;
		double cgpa;
		
		System.out.print("Enter ur name: ");
		name=scans.nextLine();
		System.out.print("Enter ur adress: ");
		adr=scans.nextLine();
		System.out.print("Enter ur age: ");
		age=scan.nextInt();
		System.out.print("Enter ur cgpa: ");
		cgpa=scan.nextDouble();
		
		System.out.print("Name: "+name+"\nAdress: "+adr+"\nAge: "+age+"\nCGPA: "+cgpa);
		
	}
}
