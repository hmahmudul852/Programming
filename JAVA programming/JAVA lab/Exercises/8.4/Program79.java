import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class Program79
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		ArrayList<Integer> ar = new ArrayList<Integer>();
		System.out.println("Enter 10 numbers:");
		for(int i=0;i<10;i++)
		{
			int ab;
			ab=scan.nextInt();
			ar.add(ab);
		}
		System.out.print(Collections.min(ar));
	}

}
















