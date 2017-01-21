import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by hasan on 12/15/16.
 */
public class SQLiteMain {
    public static List<EventData> list=new ArrayList<EventData>();

    public List<EventData> getLs() {
        return list;
    }

    public void setLs(List<EventData> ls) {
        this.list = list;
    }

    private SQLiteConnection data;

    public SQLiteMain(String dbname) {
        data=new SQLiteConnection(dbname);
    }

    public void ReadData(){
        List<EventData> ls=new ArrayList<EventData>();
        try{
            ResultSet resultSet = data.ReadData("SELECT * FROM event_tbl");
            while (resultSet.next())
            {
                ls.add(new EventData(resultSet.getInt("id"),resultSet.getString("title"),resultSet.getString("time"),resultSet.getString("date"),resultSet.getString("description")));
            }
        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
        list=ls;
    }

    public void InsertEvent(String title, String time, String date, String description)
    {
        data.InsertData("insert into event_tbl(title,time,date,description) values('"+title+"','"+time+"','"+date+"','"+description+"')");
    }
    public void UpdateEvent(int id, String title, String time, String date, String description)
    {
        data.UpdateData("update event_tbl set title='"+title+"',time='"+time+"',date='"+date+"',description='"+description+"' where event_tbl.id ="+id);
    }
    public void DeleteEvent(int id)
    {
        data.DeleteData("delete from event_tbl where id ="+id);
    }

    public void printAllData(){
        for(int i=0;i<list.size();i++) {
            System.out.println("");
            System.out.println(list.get(i).getId());
            System.out.println(list.get(i).getTitle());
            System.out.println(list.get(i).getTime());
            System.out.println(list.get(i).getDate());
            System.out.println(list.get(i).getDescription());
            System.out.println("");
        }
    }
}
