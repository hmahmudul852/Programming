public class PhoneBook
{
	Phone[] phones=new Phone[10];
	{
		for(int i=0;i<10;i++)
			phones[i]=new Phone();
	}
	
	public void add(String name,String number)
	{
		int i;
		for(i=0;i<10;i++)
		{
			if(phones[i].name==null)
			{
				phones[i].name=name;
				phones[i].number=number;
				break;
			}
		}
		if(i==10)
			System.out.println("Sorry! No space left.");
	}
	
	public void update(String name,String number)
	{
		int i;
		for(i=0;i<10;i++)
		{
			if(phones[i].name==null)
				break;
			else if(phones[i].name.equals(name)==true)
			{
				phones[i].number=number;
				break;
			}
		}		
		if(i==10 || phones[i].name==null)
			System.out.println("Sorry! No contacts of this name.");
	}
	
	public void display()
	{
		System.out.println("All contacts:\n");
		for(int i=0;i<10;i++)
			if(phones[i].name!=null)
				phones[i].display();
	}
}
