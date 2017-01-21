
public class Name 
{
    public static void main(String[] args)
    {
		String s="11:48 am";
		int i=s.indexOf(":"),j;
		
		System.out.println(i);
		System.out.println(s.substring(0,i));
		System.out.println(s.substring(i,s.length()-2));
		j=s.indexOf("a");
		if(j>1)
			j=j;
		else
			j=s.indexOf("p");
		System.out.println(s.substring(j,j+2));
		//int time=Integer.parseInt(a);
		
    }
    
}
