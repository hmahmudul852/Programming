/**
 * Created by mahmudul on 1/7/17.
 */
public class GenericClassObject {
    private Object t;
    public  Object get(){
        return this.t;
    }

    public void set(Object t){
        this.t=t;
    }

    public static void main(String[] args) {
        GenericClassObject type=new GenericClassObject();
        type.set("Pankaj");
        String str= (String) type.get();
        System.out.println(str);

        type.set(new Student("abc",123));
        String str2= (String) type.get();
        System.out.println(str2);
    }
}
