import java.util.Scanner;

public class Program20
{
	public static void main(String args[])
	{
		int[] ar = new int[1000000];
		int a,cou=0,flag=0;
		System.out.println("Start entering ur values from 1 to 10: ");
		Scanner scan=new Scanner(System.in);
		while(true)
		{
			a=scan.nextInt();
			if(a==5)
				break;
			if(a<=3)
				flag=1;
			ar[cou]=a;
			cou++;
		}
		System.out.println(cou+" number were entered");
		if(flag==1)
			System.out.println("Yes!");
		else if(flag==0)
			System.out.println("No!");
	}
}


