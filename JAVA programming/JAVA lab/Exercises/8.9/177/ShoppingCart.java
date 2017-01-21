import java.util.List;
import java.util.ArrayList;

public class ShoppingCart
{
	List<Item> cart;
	
	public ShoppingCart()
	{
		cart = new ArrayList<Item>();
	}
	
	public void add(String a,double b)
	{
		cart.add(new Item(a,b));
	}
	
	public double total()
	{
		int a=0;
		for(int i=0;i<cart.size();i++)
			a+=cart.get(i).getPrice();
		return a;
	}
	
	public void removeItems(String a)
	{
		int i=0;
		do
		{
			if(a.equals(cart.get(i).getName())==true)
				cart.remove(i);
			else
				i++;
		}
		while(i<cart.size());
	}
	
	public String toString()
	{
		String s="";
		for(int i=0;i<cart.size();i++)
			s+=cart.get(i).getName()+" is "+cart.get(i).getPrice()+"\n";
		return s;
	}
}
