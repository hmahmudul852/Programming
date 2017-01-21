import java.util.Scanner;

public class Program70
{
	public static void main(String args[])
	{
		String s="abcdefghijklmnopqrstuvwxyz";
		int l1=26,l2=26;
		for(int i=0;i<26;i++)
		{
			System.out.print(s.substring(i,l1));
			System.out.println(s.substring(0,i));
		}
	}

}






















