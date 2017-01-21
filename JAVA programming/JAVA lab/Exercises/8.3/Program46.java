import java.util.Scanner;

public class Program46
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a height: ");
		String s=scan.nextLine();
		int i=s.indexOf('\'');
		int j=s.indexOf('"');
		String f=s.substring(0,i),in=s.substring(i+1,j);
		int a=Integer.parseInt(f);
		int b=Integer.parseInt(in);
		int sum=a*12+b+4;
		System.out.print((sum/12)+"'"+(sum%12)+"\"");
	}

}


















