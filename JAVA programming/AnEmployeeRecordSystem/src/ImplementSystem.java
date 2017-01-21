import java.util.Scanner;

public class ImplementSystem 
{
	public static void main(String[] args) 
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		
		SalariedList s=new SalariedList();
		HourlyList h=new HourlyList();
		CommissionList c=new CommissionList();
		BaseCommissionList bc=new BaseCommissionList();
		
		
		while(true)
		{
			System.out.println("\n\nFor Salaried employee press '1'.");
			System.out.println("For Hourly employee press '2'.");
			System.out.println("For Commission employee press '3'.");
			System.out.println("For Base Commission employee press '4'.");
			System.out.println("To exit press '0'.\n\n");
			
			int a=scan.nextInt();
			
			while(a==1)
			{
				System.out.println("\nFor adding employee to the list press \"a\".");
				System.out.println("For checking a specific employee salary press \"ss\".");
				System.out.println("For checking all employees salary press \"as\".");
				System.out.println("For setting the rate of a specific employee press \"sr\".");
				System.out.println("For setting the rate of all employee press \"ar\".");
				System.out.println("For increasing the rate of a specific employee press \"si\".");
				System.out.println("To go back to the main menu press \"#\".\n");
				
				String b=scans.nextLine();
				
				if(b.equals("a")==true)
				{
					System.out.println("Enter a new name and his/her salary");
					s.addEmployee(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("ss")==true)
				{
					System.out.print("Enter his/her name: ");
					s.findEmployeeSalary(scans.nextLine());
				}
				else if(b.equals("as")==true)
				{
					System.out.println("All salaried employees");
					s.allEmployeeSalary();
				}
				else if(b.equals("sr")==true)
				{
					System.out.println("Enter his/her name and new monthly rate");
					s.setEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("ar")==true)
				{
					System.out.print("Enter new monthly rate: ");
					s.setAllEmployeeRate(scan.nextDouble());
				}
				else if(b.equals("si")==true)
				{
					System.out.println("Enter his/her name and the increase monthly rate percentage");
					s.increaseEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("#")==true)
					break;
			}
			
			while(a==2)
			{
				System.out.println("\nFor adding employee to the list press \"a\".");
				System.out.println("For checking a specific employee salary press \"ss\".");
				System.out.println("For checking all employees salary press \"as\".");
				System.out.println("For setting the rate of a specific employee press \"sr\".");
				System.out.println("For setting the rate of all employee press \"ar\".");
				System.out.println("For increasing the rate of a specific employee press \"si\".");
				System.out.println("To go back to the main menu press \"#\".\n");
				
				String b=scans.nextLine();
				
				if(b.equals("a")==true)
				{
					System.out.println("Enter a new name, his/her worked hour and hourly rate");
					h.addEmployee(scans.nextLine(),scan.nextInt(),scan.nextDouble());
				}
				else if(b.equals("ss")==true)
				{
					System.out.print("Enter his/her name: ");
					h.findEmployeeSalary(scans.nextLine());
				}
				else if(b.equals("as")==true)
				{
					System.out.println("All hourly employees");
					h.allEmployeeSalary();
				}
				else if(b.equals("sr")==true)
				{
					System.out.println("Enter his/her name and new hourly rate");
					h.setEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("ar")==true)
				{
					System.out.print("Enter new hourly rate: ");
					h.setAllEmployeeRate(scan.nextDouble());
				}
				else if(b.equals("si")==true)
				{
					System.out.println("Enter his/her name and the increase hourly rate percentage");
					h.increaseEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("#")==true)
					break;
			}
			
			while(a==3)
			{
				System.out.println("\nFor adding employee to the list press \"a\".");
				System.out.println("For checking a specific employee salary press \"ss\".");
				System.out.println("For checking all employees salary press \"as\".");
				System.out.println("For setting the rate of a specific employee press \"sr\".");
				System.out.println("For setting the rate of all employee press \"ar\".");
				System.out.println("For increasing the rate of a specific employee press \"si\".");
				System.out.println("To go back to the main menu press \"#\".\n");
				
				String b=scans.nextLine();
				
				if(b.equals("a")==true)
				{
					System.out.println("Enter a new name, his/her percentage and sale");
					c.addEmployee(scans.nextLine(),scans.nextDouble(),scan.nextDouble());
				}
				else if(b.equals("ss")==true)
				{
					System.out.print("Enter his/her name: ");
					c.findEmployeeSalary(scans.nextLine());
				}
				else if(b.equals("as")==true)
				{
					System.out.println("All commission employees");
					c.allEmployeeSalary();
				}
				else if(b.equals("sr")==true)
				{
					System.out.println("Enter his/her name and new commission percentage");
					c.setEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("ar")==true)
				{
					System.out.print("Enter new commission percentage: ");
					c.setAllEmployeeRate(scan.nextDouble());
				}
				else if(b.equals("si")==true)
				{
					System.out.println("Enter his/her name and the increase commission percentage");
					c.increaseEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("#")==true)
					break;
			}
			
			while(a==4)
			{
				System.out.println("\nFor adding employee to the list press \"a\".");
				System.out.println("For checking a specific employee salary press \"ss\".");
				System.out.println("For checking all employees salary press \"as\".");
				System.out.println("For setting the rate of a specific employee press \"sr\".");
				System.out.println("For setting the rate of all employee press \"ar\".");
				System.out.println("For increasing the rate of a specific employee press \"si\".");
				System.out.println("To go back to the main menu press \"#\".\n");
				
				String b=scans.nextLine();
				
				if(b.equals("a")==true)
				{
					System.out.println("Enter a new name, his/her percentage, sale and rate");
					bc.addEmployee(scans.nextLine(),scans.nextDouble(),scan.nextDouble(),scan.nextDouble());
				}
				else if(b.equals("ss")==true)
				{
					System.out.print("Enter his/her name: ");
					bc.findEmployeeSalary(scans.nextLine());
				}
				else if(b.equals("as")==true)
				{
					System.out.println("All commission employees");
					bc.allEmployeeSalary();
				}
				else if(b.equals("sr")==true)
				{
					System.out.println("Enter his/her name and new commission percentage");
					bc.setEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("ar")==true)
				{
					System.out.print("Enter new commission percentage: ");
					bc.setAllEmployeeRate(scan.nextDouble());
				}
				else if(b.equals("si")==true)
				{
					System.out.println("Enter his/her name and the increase commission percentage");
					bc.increaseEmployeeRate(scans.nextLine(),scan.nextDouble());
				}
				else if(b.equals("#")==true)
					break;
			}
			
			if(a==0)
				break;
		}
	}
}
