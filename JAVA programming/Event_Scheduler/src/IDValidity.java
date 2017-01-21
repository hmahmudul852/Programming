import java.util.List;

/**
 * Created by mahmudul on 12/26/16.
 */
public class IDValidity {
    static List<EventData> ls=SQLiteMain.list;
    public static boolean Validity(int id){
        for(int i=0;i<ls.size();i++)
            if(ls.get(i).getId()==id) return true;
        return false;
    }
}
