public class Book
{
	public String bookTitle;
	public String author;
	public String ISBN;
	public int numOfCopies;
	
	public Book(String bookTitle,String author,String ISBN,int numOfCopies)
	{
		this.bookTitle=bookTitle;
		this.author=author;
		this.ISBN=ISBN;
		this.numOfCopies=numOfCopies;
	}
	
	public Book()
	{
		bookTitle=null;
		author=null;
		ISBN=null;
		numOfCopies=0;
	}
	
	public void decrease(int num)
	{
		numOfCopies-=num;
	}
	
	public void increase(int num)
	{
		numOfCopies+=num;
	}
	
	public void display()
	{
		System.out.println("Book Name: "+bookTitle);
		System.out.println("Author Name: "+author);
		System.out.println("ISBN: "+ISBN);
		System.out.println("Copies: "+numOfCopies);
		System.out.println("");
	}

}
