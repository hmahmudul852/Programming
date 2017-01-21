import java.util.Scanner;

public class BookStore 
{
	Scanner scan = new Scanner(System.in);
	
	Book[] books=new Book[10];
	{
		for(int i=0;i<10;i++)
			books[i]=new Book();
	}
	
	public void sell(String bookTitle, int noOfCopies)
	{
		int i;
		for(i=0;i<10;i++)
		{
			if(books[i].bookTitle==null)
				break;
			
			else if(books[i].bookTitle.equals(bookTitle)==true)
			{
				if(books[i].numOfCopies>=noOfCopies)
				{
					books[i].decrease(noOfCopies);
					break;
				}
				else if(books[i].numOfCopies<noOfCopies)
				{
					System.out.println("Not enough copies. Please! order less.");
					break;	
				}
				else if(books[i].numOfCopies==0)
				{
					System.out.println("This book is out of stock.");
					break;
				}
			}
		}
		if(i==10 || books[i].bookTitle==null)
			System.out.println("Sorry! no books available of this name.");
	}
	
	public void order(String isbn, int noOfCopies)
	{
		int i;
		for(i=0;i<10;i++)
		{
			if(books[i].ISBN==null)
				break;
			else if(books[i].ISBN.equals(isbn)==true)
			{
				books[i].increase(noOfCopies);
				break;
			}
		}
		if(i==10 || books[i].ISBN==null)
		{
			System.out.println("This book is not available to us.");
			for(int j=0;j<10;j++)
			{
				if(books[j].ISBN==null)
				{
					System.out.print("Enter book name: ");
					String n=scan.nextLine();
					books[j].bookTitle=n;
					System.out.print("Enter author name: ");
					String a=scan.nextLine();
					books[j].author=a;
					books[j].ISBN=isbn;
					books[i].numOfCopies=noOfCopies;
					break;
				}
			}
		}
			
	}
	
	public void display()
	{
		for(int j=0;j<10;j++)
		{
			if(books[j].bookTitle==null)
				break;
			books[j].display();
		}
	}
	
}
