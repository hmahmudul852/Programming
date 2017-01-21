
import java.util.Scanner;

public class Program60
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		String s=scan.nextLine();
		String[] ar=new String[2];
		int i=0;
		for (String retval: s.split("'")) 
		{
			ar[i]=retval;
			i++;
			if(i==2)
				break;
		}
		int j=ar[0].indexOf('d'),l=ar[0].length();
		int d,m,se;
		d=Integer.parseInt(ar[0].substring(0,j));
		m=Integer.parseInt(ar[0].substring(j+1,l));
		se=Integer.parseInt(ar[1]);
		double sum=d+(m/60.0)+(se/3600.0);
		System.out.printf("%.2f\n",sum);
	}

}




















