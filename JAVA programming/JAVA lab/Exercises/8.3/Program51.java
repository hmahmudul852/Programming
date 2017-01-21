import java.util.Scanner;

public class Program51
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		Scanner scans=new Scanner(System.in);
		System.out.print("How many email adress do u wanna enter: ");
		int n=scan.nextInt();
		String[] s=new String[n];
		for(int i=0;i<n;i++)
			s[i]=scans.nextLine();
		String st="@email.college.edu";
		String te="@college.edu";
		int stu=0,tea=0;
		for(int i=0;i<n;i++)
		{
			int a=s[i].indexOf(st);
			int b=s[i].indexOf(te);
			if(a>=0)
				stu++;
			if(b>=0)
				tea++;
		}
		System.out.println(stu+" students email");
		System.out.println(tea+" teachers email");
	}

}




















