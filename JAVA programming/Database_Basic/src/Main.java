import java.sql.ResultSet;
import java.sql.SQLException;

/**
 * Created by hasan on 12/2/16.
 */
public class Main {
    static SQLiteConnection dbmanager;
    public static void ReadContacts() {
        try
        {
            ResultSet resultSet = dbmanager.ReadData("select * from Contact_tab");
            while(resultSet.next())
            {
                int id = resultSet.getInt("ID");
                String name = resultSet.getString("Name");
                String mobile = resultSet.getString("Mobile");

                System.out.println("ID : "+id);
                System.out.println("Name : "+name);
                System.out.println("Mobile : "+mobile);
            }
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }

    public static void InsertContacts(String name,String mobile)
    {
        dbmanager.InsertData("insert into Contact_tab(Name,Mobile) values('"+name+"','"+mobile+"')");
    }
    public static void UpdateContacts(int id,String name,String mobile)
    {
        dbmanager.UpdateData("update Contact_tab set Name='"+name+"',Mobile='"+mobile+"' where Contact_tab.ID ="+id);
    }
    public static void DeleteContacts(int id)
    {
        dbmanager.DeleteData("delete from Contact_tab where ID ="+id);
    }

    public static void main(String[] args) {
        dbmanager = new SQLiteConnection("mydb.sqlite");
//        InsertContacts("Zaka","0122545");
//        UpdateContacts(4,"daba","987654");
        DeleteContacts(1);
        ReadContacts();
    }
}
