import java.util.Scanner;

public class Program59
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter a date(if u wish u may enter ',' between the day,month, and year):");
		String s=scan.nextLine();
		String[] ar=new String[3];
		int i=0;
		s=s.replace(",", " ");
		s = s.toLowerCase();

      for (String retval: s.split(" ")) 
      {
        ar[i]=retval;
		i++;
      }
      int d=Integer.parseInt(ar[1]),y=Integer.parseInt(ar[2]);
      String m=s.substring(0,3);
      if(y<2000)
		y+=2000;
		if(m.equals("jan"))
			System.out.println(d+"/"+1+"/"+y);
		else if(m.equals("feb"))
			System.out.println(d+"/"+2+"/"+y);
		else if(m.equals("mar"))
			System.out.println(d+"/"+3+"/"+y);
		else if(m.equals("apr"))
			System.out.println(d+"/"+4+"/"+y);
		else if(m.equals("may"))
			System.out.println(d+"/"+5+"/"+y);
		else if(m.equals("jun"))
			System.out.println(d+"/"+6+"/"+y);
		else if(m.equals("jul"))
			System.out.println(d+"/"+7+"/"+y);
		else if(m.equals("aug"))
			System.out.println(d+"/"+8+"/"+y);
		else if(m.equals("sep"))
			System.out.println(d+"/"+9+"/"+y);
		else if(m.equals("oct"))
			System.out.println(d+"/"+10+"/"+y);
		else if(m.equals("nov"))
			System.out.println(d+"/"+11+"/"+y);
		else if(m.equals("dec"))
			System.out.println(d+"/"+12+"/"+y);
	}

}





















