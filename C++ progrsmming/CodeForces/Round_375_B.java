import java.util.Scanner;
import java.util.Arrays;
public class Round_375_B
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String s,s2;
		s=scan.nextLine();
		s = s.replace("_", " ");
		StringBuilder b = new StringBuilder(s);
		while(true)
		{
			s=b;
			int b1=s.indexOf('('),b2=s.indexOf(')');
			s2 = s.substring(b1+1, b2);	
			b.delete(b1,b2);
		//System.out.println(b1);
		//System.out.println(b2);
			if(b1==-1)
				break;
		}
		System.out.println(s);
		System.out.println(s2);
	}
	
	

	public static int countWords(String s)
	{
		int wordCount = 0;

		boolean word = false;
		int endOfLine = s.length() - 1;

		for (int i = 0; i < s.length(); i++) 
		{
			if (Character.isLetter(s.charAt(i)) && i != endOfLine) {
				word = true;
			} else if (!Character.isLetter(s.charAt(i)) && word) {
				wordCount++;
				word = false;
			} else if (Character.isLetter(s.charAt(i)) && i == endOfLine) {
				wordCount++;
			}
		}
		return wordCount;
	}



}















