import java.util.Scanner;

public class Program50
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a height: ");
		String s=scan.nextLine();
		for (String retval: s.split(" "))
		{
			StringBuilder r = new StringBuilder(retval);
			r.setCharAt(0,Character.toString(r.charAt(0)).toUpperCase().charAt(0));
			System.out.print(r.toString()+" ");
		}
	}

}



















