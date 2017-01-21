import java.io.BufferedReader;
import java.io.FileReader;

/**
 * Created by mahmudul on 1/6/17.
 */
public class Read2 {
    public static void main(String[] args) {
        try {
            BufferedReader reader=new BufferedReader(new FileReader("file.txt"));
            int br=reader.read();
            String br2=reader.readLine();
            while(br != -1){
                System.out.print((char)br);
                br=reader.read();
            }
            System.out.println("");
            while(br2!=null){
                System.out.println(br2);
                br2=reader.readLine();
            }
            reader.close();
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
