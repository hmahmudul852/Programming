public class Main
{
	public static void main(String[] args)
	{
		SingleTonClass A=SingleTonClass.objectCreationMethod();
		SingleTonClass B=SingleTonClass.objectCreationMethod();
		SingleTonClass C=SingleTonClass.objectCreationMethod();
		
		A.display();
		A.displaya();
		B.display();
	}
}
