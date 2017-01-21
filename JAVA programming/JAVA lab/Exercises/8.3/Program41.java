import java.util.Scanner;

public class Program41
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String n,g,a;
		System.out.print("Name: ");
		n=scan.nextLine();
		System.out.print("Gender(male/female): ");
		g=scan.next();
		System.out.print("Adress(formal/informal): ");
		a=scan.next();
		int i;
		i=n.indexOf(' ');
		String fn=n.substring(0,i),ln=n.substring(i+1,n.length());
		if(a.equals("informal"))
			System.out.print("Hello "+fn);
		else
		{
			if(g.equals("male"))
				System.out.print("Hello Mr. "+ln);
			else
				System.out.print("Hello Ms. "+ln);
		}
			
	}

}














