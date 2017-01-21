public class Program178
{
	public static void main(String[] args)
	{
		RestaurantCheck r=new RestaurantCheck("17","Sonic the Hedgehog",6,23.14);
		r.printcheck();
		System.out.printf("Total: $%.2f",r.calculateTotal());
	}
}
