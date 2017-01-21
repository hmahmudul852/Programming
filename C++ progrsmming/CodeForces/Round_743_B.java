import java.util.*;
import java.math.*;

public class Round_743_B
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int cou=1,n=scan.nextInt();
		BigInteger t,z,temp,k=scan.nextBigInteger();
		t=new BigInteger("2");
		z=new BigInteger("0");
		while(true)
		{
			if(!k.mod(t).equals(z))
				break;
			else
			{
				cou++;
				k=k.divide(t);
			}
		}
		System.out.println(cou);
	}
}
