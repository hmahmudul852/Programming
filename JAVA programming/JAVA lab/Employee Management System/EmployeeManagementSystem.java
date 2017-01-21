import java.util.Scanner;

public class EmployeeManagementSystem
{
	public static void main(String[] args)
	{
		
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		Bank b=new Bank();
		
		while(true)
		{		
			System.out.println("\n\nTo add employee press 1");
			System.out.println("To know how many employee press 2");
			System.out.println("To know total salary press 3");
			System.out.println("To get rank of a specific employee press 4");
			System.out.println("To give anuual bonus to all employee press 5");
			System.out.println("To give 6 month bonus to a specific employee press 6");
			System.out.println("To exit press 0");
			
			int a=scan.nextInt();
			if(a==1)
			{
				System.out.println("To add a new employee enter his/her Name, Id, Joining Date, Mobile, Address, Rank, Salary, Bank Id.");
				b.addEmployee(scans.nextLine(),scans.nextLine(),scans.nextLine(),scans.nextLine(),scans.nextLine(),scans.nextLine(),scan.nextDouble(),scans.nextLine());
			}
			
			if(a==2)
				System.out.println("There are "+b.totalEmployee()+" employees.");
		
			if(a==3)
				System.out.println("Total salary of all employee = "+b.totalSalary());
				
			if(a==4)
			{
				System.out.println("Enter ID of the employee");
				String id=scans.nextLine();
				System.out.println(b.getRank(id));
			}
			
			if(a==5)
			{
				System.out.println("Enter the percentage u want to increace of salary");
				double z=scan.nextDouble();
				b.annualBonus(z);
			}
			
			if(a==6)
			{
				System.out.println("Enter ID of the employee");
				String id=scans.nextLine();
				b.sixMonthBonus(id);
			}
			
			if(a==0)
				break;
		}
	}
}
