import java.util.Random;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Collections;

public class Program76
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		List<Integer> ar = new ArrayList<Integer>();
		Random random = new Random();
		int even=0,flag=0;
		for(int i=0;i<10;i++)
		{
			ar.add(random.nextInt(50-1+1)+1);
			if(ar.get(i)%2==0)
				even++;
			if(ar.get(i)>45)
				flag=1;
		}
		System.out.println(ar);
		System.out.println("Even numver = "+even);
		if(flag==1)
			System.out.println("Yes!");
		else 
			System.out.println("No!");
			
		List<Integer> copy = new ArrayList<Integer>(ar);
		Collections.reverse(copy);
		System.out.println(copy);
		int a;
		System.out.print("Enter any number from 2 to 10: ");
		a=scan.nextInt();
		List<Integer> sub1=new ArrayList<Integer>();
		List<Integer> sub2=new ArrayList<Integer>();
		sub1=ar.subList(0,a);
		sub2=ar.subList(a,ar.size());
		Collections.reverse(sub1);
		List<Integer> newList = new ArrayList<Integer>(sub1);
		newList.addAll(sub2);
		System.out.println(newList);
	}

}















