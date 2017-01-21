public class Program177
{
	public static void main(String[] args)
	{
		ShoppingCart shop=new ShoppingCart();
		
		shop.add("potato",20);
		shop.add("onion",30);
		shop.add("garlic",40);
		shop.add("garlic",40);
		shop.add("cabbage",25);
		shop.add("leaf",23);
		
		System.out.println(shop.total());
		System.out.println(shop.toString());
		shop.removeItems("garlic");
		System.out.println(shop.toString());
	}
}
