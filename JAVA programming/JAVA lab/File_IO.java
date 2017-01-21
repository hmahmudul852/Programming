import java.io.*;
import java.nio.file.*;

public class File_IO
{
	public static void main(String[] args) throws IOException
	{
		String text = new String(Files.readAllBytes(Paths.get("infile.txt")));
		PrintWriter output = new PrintWriter(new FileWriter("outfile.txt", true));
		 for (String retval: text.split(",")) 
		 {
			output.println(retval);
		 }
		 output.close();
	}
}
