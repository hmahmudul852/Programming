import java.util.Scanner;

public class Program40
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String l1="10.",l2="192.168.",l3="172.16.",s;
		s=scan.nextLine();
		String s1=s.substring(0,3),s2=s.substring(0,8),s3=s.substring(0,7);
		if(l1.equals(s1) || l2.equals(s2) || l3.equals(s3))
			System.out.println("Local adress");
		else
			System.out.println("Not a local adress");
	}

}














