import java.util.Random;

public class Card
{
	Random random = new Random();
	
	private String[] suit=new String[5];
	private int[]	value=new int[5]; 
	private String[] s=new String[5];
	
	{
		for(int i=0;i<5;i++)
		{
			value[i]= random.nextInt(14-2+1) + 2;
		
			int x=random.nextInt(4);
			if(x==0)
				suit[i]="Spades";
			else if(x==1)
				suit[i]="Hearts";
			else if(x==2)
				suit[i]="Clubs";
			else if(x==3)
				suit[i]="Diomonds";
			
			s[i] = value[i] + " of " + suit[i];
			s[i] = s[i].replace("11", "jack");
			s[i] = s[i].replace("12", "queen");
			s[i] = s[i].replace("13", "king");
			s[i] = s[i].replace("14", "ace");
		}
			
	}
	
	public void display()
	{
		for(int i=0;i<5;i++)
			System.out.println(s[i]);
	}
	
	public void Equals()
	{
		if(suit[0].equals(suit[1])==true && suit[1].equals(suit[2])==true && suit[2].equals(suit[3])==true && suit[3].equals(suit[4])==true)
			System.out.println("The hand is a flush");
		else
			System.out.println("The hand is not a flush");
	}
	
}

