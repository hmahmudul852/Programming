import java.util.Scanner;

public class Program58
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a date: ");
		String s=scan.nextLine();
		int[] ar=new int[3];
		int i=0;
		
      for (String retval: s.split("/")) 
      {
        ar[i]=Integer.parseInt(retval);
		i++;
      }
      int d=ar[0],m=ar[1],y=ar[2];
      
      if(y<2000)
		y+=2000;
		if(m==1)
			System.out.println("January "+d+", "+y);
		else if(m==2)
			System.out.println("February "+d+", "+y);
		else if(m==3)
			System.out.println("March "+d+", "+y);
		else if(m==4)
			System.out.println("April "+d+", "+y);
		else if(m==5)
			System.out.println("May "+d+", "+y);
		else if(m==6)
			System.out.println("June "+d+", "+y);
		else if(m==7)
			System.out.println("July "+d+", "+y);
		else if(m==8)
			System.out.println("August "+d+", "+y);
		else if(m==9)
			System.out.println("September "+d+", "+y);
		else if(m==10)
			System.out.println("October "+d+", "+y);
		else if(m==11)
			System.out.println("November "+d+", "+y);
		else if(m==12)
			System.out.println("December "+d+", "+y);
	}

}




















