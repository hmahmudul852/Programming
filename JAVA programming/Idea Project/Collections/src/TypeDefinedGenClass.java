/**
 * Created by mahmudul on 1/7/17.
 */
public class TypeDefinedGenClass <T>{
    private T t;
    public T get(){
        return this.t;
    }

    public void set(T t1){
        this.t=t1;
    }

    public static void main(String[] args) {
        TypeDefinedGenClass<String> type = new TypeDefinedGenClass<>();
        type.set("Hasan");
        System.out.println(type.get());

        TypeDefinedGenClass st = new TypeDefinedGenClass<>();
        st.set(new Student("abc",123));
        System.out.println(st.get());
    }
}
