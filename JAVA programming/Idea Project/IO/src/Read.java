import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;

/**
 * Created by mahmudul on 1/6/17.
 */
public class Read {
    public static void main(String[] args) {
        try {
            BufferedInputStream stream=new BufferedInputStream(new FileInputStream(new File("file.txt")));
            while(stream.available()>0)
                System.out.print((char)stream.read());
            stream.close();
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
