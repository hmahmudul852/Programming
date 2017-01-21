public class Program179
{
	public static void main(String[] args)
	{
		WordList w=new WordList("words");
		
		w.openFile();
		w.isPalindromes();
		System.out.println(w.getPalindromes());
	}

}
