import java.util.*;
import java.math.*;

public class B_Fractions
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		
		int z=scan.nextInt();
		BigInteger a,b,g;
		for(int i=0;i<z;i++)
		{
			a = scan.nextBigInteger();
            scan.next();
            b = scan.nextBigInteger();
			g=a.gcd(b);
			System.out.println(a.divide(g)+" / "+b.divide(g));
		}
	}
}
