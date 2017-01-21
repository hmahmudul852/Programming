import java.util.Scanner;

public class PhoneBookApp
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		Scanner scans= new Scanner(System.in);
		
		PhoneBook book=new PhoneBook();
		
		while(true)
		{
			System.out.println("\n"+"Enter “1”, to display the records.\n"+"Enter “2”, to add new phone number.\n"+"Enter “3”, to update phone number.\n"+"Enter “0”, to exit the system.\n");
			int a;
			a=scan.nextInt();
			
			if(a==1)
				book.display();
				
			if(a==2)
			{
				System.out.println("To add new contacts enter Name and Phone number:");
				String na=scans.nextLine();
				String nu=scans.nextLine();
				book.add(na,nu);
			}
			if(a==3)
			{
				System.out.println("To update exsisting contacts enter Name and the new Phone number:");
				String na=scans.nextLine();
				String nu=scans.nextLine();
				book.update(na,nu);
			}
			if(a==0)
				break;
		}
	}
}
