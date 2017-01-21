import java.io.*;

/**
 * Created by mahmudul on 1/6/17.
 */
public class ObjectIO {
    public static void main(String[] args) {
        try{
            ObjectOutputStream stream=new ObjectOutputStream(new FileOutputStream("object.txt"));
            ObjectInputStream stream1=new ObjectInputStream(new FileInputStream("object.txt"));
            Student s=new Student("Hasan","011 152 185");
            stream.writeObject(s);
            Student s1=(Student) stream1.readObject();
            s1.display();
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
