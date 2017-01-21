public class Main 
{
	public static void main(String[] args) 
	{
		Empty e=new Empty();
		
		//This method returns the object of type Class.
		System.out.println(e.getClass());
		
		//This method returns a hash code value for this object.
		System.out.println(e.hashCode());
		
		//This method returns if the objects are equal or not.
		System.out.println(e.equals(e));
		
		//This method returns a string representation of the object.
		System.out.println(e.toString());
		
	}
}
