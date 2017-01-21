import java.io.Serializable;

/**
 * Created by mahmudul on 1/6/17.
 */
public class Student implements Serializable {
    String name,id;

    public Student(String name, String id) {
        this.name = name;
        this.id = id;
    }

    public void display(){
        System.out.println("Name: "+name+"\nID: "+id);
    }
}
