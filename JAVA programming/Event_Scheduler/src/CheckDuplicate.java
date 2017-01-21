import java.util.ArrayList;
import java.util.List;

/**
 * Created by mahmudul on 12/25/16.
 */
public class CheckDuplicate {
    static List<EventData> ls=SQLiteMain.list;
    public static boolean Check(String time,String date){
       String ch=time+" "+date;
       for(int i=0;i<ls.size();i++){
           if(ch.equals(ls.get(i).getTime()+" "+ls.get(i).getDate())==true)
               return true;
       }
       return false;
    }
}
