import java.util.Scanner;

public class Program62
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter some text: ");
		String s=scan.nextLine();
		s = s.toLowerCase();
		String s1="darn",s2="dang",s3="frickin",s4="heck",s5="shoot",s6="****";
		s=s.replaceAll("darn","****");
		s=s.replaceAll("dang","****");
		s=s.replaceAll("frickin","*******");
		s=s.replaceAll("heck","****");
		s=s.replaceAll("shoot","*****");
		System.out.print("\n");
		System.out.println(s);
		
	}

}






















