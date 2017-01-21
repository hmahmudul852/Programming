import java.util.Scanner;

public class Program38
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String s;
		s=scan.nextLine();
		s=s.toLowerCase();
		System.out.println("String converted to lower case: '"+s+"'");
		System.out.println("Length of the string: "+s.length());
		for(int i=0;i<s.length();i++)
		{
			String m = s.substring(i,i+1);
			if(m.equals("z"))
			{
				System.out.println("First occerence of 'z' in the string at: "+(i+1));
				break;
			}
		}
		for(int i=0;i<3;i++)
		{
			String m = s.substring(i,i+1);
			System.out.print(m);
		}
		System.out.print("\n");
		for(int i=s.length()-1;i>s.length()-4;i--)
		{
			String m = s.substring(i,i+1);
			System.out.print(m);
		}
	}

}












