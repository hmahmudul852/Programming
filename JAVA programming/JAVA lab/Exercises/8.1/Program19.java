import java.util.Scanner;

public class Program19
{
	public static void main(String args[])
	{
		int[] ar = new int[1000000];
		int a,cou=0;
		double sum=0;
		System.out.println("Start entering ur values: ");
		Scanner scan=new Scanner(System.in);
		while(true)
		{
			a=scan.nextInt();
			if(a<0)
				break;
			ar[cou]=a;
			sum+=a;
			cou++;
		}
		System.out.println("Values above 90:");
		for(int i=0;i<cou;i++)
			if(ar[i]>=90)
				System.out.print(ar[i]+" ");
		sum=sum/cou;
		System.out.print("\n");
		System.out.printf("Avarage value: %.2f",sum);
	}
}

