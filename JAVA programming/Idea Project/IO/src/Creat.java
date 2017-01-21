import java.io.File;
import java.io.IOException;

/**
 * Created by mahmudul on 1/6/17.
 */
public class Creat {
    public static void main(String[] args) {
        File file=new File("object.txt");
        try {
            boolean fv=file.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
