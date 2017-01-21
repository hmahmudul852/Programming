import java.util.*;

public class Round_208_A
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		String s=scan.nextLine();
		s= s.replace("WUB"," ");
		s=s.trim();
		String a="";
		for (String retval: s.split(" ")) 
			a+=retval+" ";
		a=a.trim();
		System.out.println(a);
	}
}
