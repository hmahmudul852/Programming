public class MyScanner
{
	private String data;
	private int location;
	
	public MyScanner(String data)
	{
		this.data=data;
		this.location=0;
	}
	
	public String next()
	{
		int i=0;
		String r="";
		for(i=location;i<data.length();i++)
		{
			if(i==data.length())
				break;
			else if(data.charAt(i)==' ')
				break;
			else
				r+=data.charAt(i);
		}
		
		this.location=i;
		
		return r;
	}
	
	public boolean hasnext()
	{
		if(this.location==data.length())
			return false;
		else
			return true;
	}
}
