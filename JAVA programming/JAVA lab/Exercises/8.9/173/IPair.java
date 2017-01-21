public class IPair
{
	private int x;
	private int y;
	
	public IPair(int x,int y)
	{
		this.x=x;
		this.y=y;
	} 
	
	public void setX(int x) 
	{
       this.x=x;
    }

    public double getX() 
    {
       return x;
    }
	
	public void setY(int y) 
	{
       this.y=y;
    }

    public double getY() 
    {
       return y;
    }
    
    public String toString()
	{
		return "("+x+","+y+")";
	}

    public boolean equals(IPair obj)
	{
		if(getX()==obj.getX() && getY()==obj.getY())
			return true;
		else 
			return false;
	}
}
