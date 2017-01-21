public class Program176
{
	public static void main(String[] args)
	{
		Item p=new Item("Potato",20); 
		Item p2=new Item("Potato",40); 
		Item o=new Item("Onion",20);
		
		System.out.println(p.getName()); 
		System.out.println(p.getPrice()); 
		System.out.println(p.equals(p2.getName()));
		System.out.println(p.equals(o.getName()));
		System.out.println(p.toString());
		
		 
	}
}
