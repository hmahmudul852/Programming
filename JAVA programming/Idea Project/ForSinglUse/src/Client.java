import java.io.*;
import java.net.Socket;

public class Client {
	public static void main(String[] args) {
		try {
			Socket s = new Socket("192.168.0.105", 2224);
//			System.out.println("Connection sucessful");
			BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));

			String message;
			while((message = in.readLine()) != null) System.out.println(message);

			in.close();
			s.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}