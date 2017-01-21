import java.util.Random;
import java.util.ArrayList;
import java.util.List;

public class Program174
{
	public static void main(String[] args)
	{
		Random random = new Random();
		List<IPair> lis=new ArrayList<IPair>();
		for(int i=0;i<10;i++)
		{
			int x=random.nextInt(10-1+1)+1;
			int y=random.nextInt(10-1+1)+1;
			lis.add(new IPair(x,y));
		}
		System.out.println(lis);
		
		IPair ab=new IPair(3,4);
		
		for(int i=0;i<lis.size();i++)
			if(lis.get(i).equals(ab)==true)
				System.out.println("YES!");
	}
}



