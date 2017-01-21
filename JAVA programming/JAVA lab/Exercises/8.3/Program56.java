import java.util.Scanner;

public class Program56
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		int sum=0;
		
      for (String retval: s.split(";")) 
      {
         sum+=Integer.parseInt(retval);
      }
      System.out.println(sum);
	}

}




















