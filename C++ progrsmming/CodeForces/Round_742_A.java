import java.util.Scanner;
import java.math.BigInteger;

public class Round_742_A
{
		public static void main(String[] args)
		{
			Scanner scan=new Scanner(System.in);
			BigInteger l,n;
			BigInteger v=new BigInteger("1378");
			BigInteger k=new BigInteger("10");
			n=scan.nextBigInteger();
			l=v.modPow(n,k);
			System.out.println(l);
		}
}
