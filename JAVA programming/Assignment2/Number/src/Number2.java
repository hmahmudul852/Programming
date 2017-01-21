
public class Number2 
{

	public static void main(String[] args) 
	{
		Numbers a=new Numbers(5);
		
		a.showFibonacci();
		a.showPyramid();
		System.out.print(a.checkNumber());
		
		a.setNum(85);
		System.out.print("\n\n");
		a.showFibonacci();
		a.showPyramid();
		System.out.print(a.checkNumber());
	}

}
