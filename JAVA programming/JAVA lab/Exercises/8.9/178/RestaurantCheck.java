public class RestaurantCheck
{
	private double subTotal,salesTaxPercent;
	private String tableNumber,serverName;
	
	public RestaurantCheck(String a,String b,double c,double d)
	{
		tableNumber=a;
		serverName=b;
		salesTaxPercent=c;
		subTotal=d;
	}
	
	public double getSubTotal()
	{
		double a=subTotal;
		return a;
	}
	
	public void setSubTotal(double a)
	{
		subTotal=a;
	}
	
	public double getSalesTaxPercent()
	{
		double a=salesTaxPercent;
		return a;
	}
	
	public void setSalesTaxPercent(double a)
	{
		salesTaxPercent=a;
	}
	
	public String getTableNumber()
	{
		String a=tableNumber;
		return a;
	}
	
	public void setTableNumber(String a)
	{
		tableNumber=a;
	}
	
	public String getServerName()
	{
		String a=serverName;
		return a;
		
	}
	
	public void setServerName(String a)
	{
		serverName=a;
	}
	
	public double calculateTotal()
	{
		return (subTotal*(salesTaxPercent+100))/100;
	}
	
	public void printcheck()
	{
		System.out.println("Table Number: "+tableNumber);
		System.out.println("Server: "+serverName);
		System.out.printf("Sales tax: %.1f%%\n",salesTaxPercent);
		System.out.printf("Subtotal: $%.2f\n",subTotal);
	}
}
