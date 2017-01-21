import java.util.*;
import java.math.*;

public class BigInt
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		BigInteger a,b;
		BigInteger c=new BigInteger("1234567890123456789");
		a=scan.nextBigInteger();
		b=scan.nextBigInteger();
		
		System.out.println(a.add(b));
		System.out.println(c.subtract(b));
		System.out.println(c.multiply(b));
		System.out.println((a.add(b)).divide(c));
	}
}
