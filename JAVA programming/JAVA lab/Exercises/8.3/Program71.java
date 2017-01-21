import java.util.Scanner;

public class Program71
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		String t,s,e;
		System.out.print("Time: ");
		t=scan.nextLine();
		System.out.print("Starting zone: ");
		s=scan.nextLine();
		System.out.print("End zone: ");
		e=scan.nextLine();
		int pa=4,mo=3,ce=2,ea=1;
		int t1=0,t2=0,tf;
		if(s.equals("Pacific")==true)
			t1=pa;
		else if(s.equals("Mountain")==true)
			t1=mo;
		else if(s.equals("Central")==true)
			t1=ce;
		else if(s.equals("Eastern")==true)
			t1=ea;
		if(e.equals("Pacific")==true)
			t2=pa;
		else if(e.equals("Mountain")==true)
			t2=mo;
		else if(e.equals("Central")==true)
			t2=ce;
		else if(e.equals("Eastern")==true)
			t2=ea;
		tf=t1-t2;
		int i=t.indexOf(":"),j;
		String a=t.substring(0,i);
		String b=t.substring(i,s.length()-2);
		j=t.indexOf("a");
		if(j>1)
			j=j;
		else
			j=s.indexOf("p");
			
		String c=t.substring(j,j+2);
		int time=Integer.parseInt(a);
		time=time+tf;
		int keep=time%12;
		if(keep==time)
			System.out.println(keep+b+" "+c);
		else if(keep==0)
		{
			if(c.equals("am"))
				System.out.println(time+b+" pm");
			else if(c.equals("pm"))
				System.out.println(time+b+" pm");
		}
		else if(keep!=time)
		{
			if(c.equals("am"))
				System.out.println(keep+b+" pm");
			else if(c.equals("pm"))
				System.out.println(keep+b+" pm");
		}
	}

}






















