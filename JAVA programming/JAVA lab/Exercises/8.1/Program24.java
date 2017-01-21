import java.util.Scanner;

public class Program24
{
	public static void main(String args[])
	{
		System.out.println("Solution of the equation (x^2 - 2*y^2 = 1) are given below inthe form (x,y):");
		for(int i=1;i<100;i++)
			for(int j=1;j<100;j++)
				if((i*i)-(2*j*j)==1)
					System.out.println("("+i+","+j+")");
	}

}






