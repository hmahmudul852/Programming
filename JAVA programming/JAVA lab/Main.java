import java.util.*;

public class Main 
{	
	Main()
	{
		ActionListener action = new ActionListener()
		{
			Timer timer = new Timer(20, this);
			timer.setInitialDelay(0);
			timer.start();
		};
	}
	public static void main(String[] args)
	{
		
	}
}

