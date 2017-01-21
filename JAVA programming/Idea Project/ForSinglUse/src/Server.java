import java.net.*;
import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Server {

	public static void main(String[] args) throws InterruptedException {
		try {
			ServerSocket ss = new ServerSocket(2224);
			Socket s = ss.accept();
			PrintWriter out = new PrintWriter(s.getOutputStream(), true);
			BufferedReader file = new BufferedReader(new FileReader("score.txt"));

			String message;
			while( (message=file.readLine()) != null) {
				List<Integer> ls=new ArrayList<Integer>();
				for (String retval: message.split(" ")) {
					ls.add(Integer.parseInt(retval));
//					System.out.println(retval);
				}
				if(ls.size()==4)
					ls.add(0);
				Collections.sort(ls);
				Collections.reverse(ls);
				double avg=ls.get(1)+ls.get(2)+ls.get(3)+ls.get(4);
				avg=avg/4.0;
				out.println("0"+ls.get(0)+" "+avg+" ");
			}

			out.close();
			s.close();
			ss.close();
			file.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
