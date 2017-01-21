import java.io.File;
import java.util.*;

public class WordList
{
	private List<String> words=new ArrayList<String>();
	private String filename;
	
	public WordList(String filename)
	{
		this.filename=filename;
	}
	
	public void openFile()
	{
		try
		{
			Scanner textFile = new Scanner(new File(filename+".txt"));
			while (textFile.hasNextLine())
				words.add(textFile.nextLine());
		}
		catch(Exception e)
		{
			System.out.print("File not found.");
		}
	}
	
	List<String> pal=new ArrayList<String>();
	public void isPalindromes()
	{
		for(int i=0;i<words.size();i++)
		{
			if(cheaqPalindromes(words.get(i))==true)
				pal.add(words.get(i));
		}
	}
	
	public List<String> getPalindromes()
	{
		return pal;
	}
	
	
	
	private boolean cheaqPalindromes(String a)
	{
		if(a.equals(new StringBuilder(a).reverse().toString())==true)
			return true;
		else
			return false;
	}
}
