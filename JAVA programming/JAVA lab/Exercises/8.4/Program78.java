import java.util.ArrayList;

public class Program78
{
	public static void main(String args[])
	{
		ArrayList<Integer> ar = new ArrayList<Integer>();
		ar.add(1);
		int a=2;
		for(int i=0;i<99;i++)
		{
			ar.add(ar.get(i)+(a++));
		}
		
		System.out.print(ar);
	}

}















