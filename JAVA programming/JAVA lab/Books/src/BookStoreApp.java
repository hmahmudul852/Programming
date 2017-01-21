import java.util.Scanner;

public class BookStoreApp {

	public static void main(String[] args) {
		BookStore shop=new BookStore();
		Scanner scans = new Scanner(System.in);
		Scanner scan = new Scanner(System.in);
		while(true)
		{
			System.out.println("\nPress 1 to display all books\n"+"Press 2 to order a new book\n"+"Press 3 to sell a book\n"+"Press 0 to exit\n");
			int a;
			a=scan.nextInt();
			if(a==1)
			{
				System.out.println("All books:");
				System.out.println("\n");
				shop.display();
			}
			if(a==2)
			{
				System.out.println("Enter name and num of copies");
				String n=scans.nextLine();
				int b=scan.nextInt();
				shop.sell(n,b);
			}
			if(a==3)
			{
				System.out.println("Enter ISBN and num of copies");
				String n=scans.nextLine();
				int b=scan.nextInt();
				shop.order(n,b);
			}
			if(a==0)
				break;
				
		}
		

	}

}
