import java.sql.*;

/**
 * Created by hasan on 12/2/16.
 */
public class SQLiteConnection {
    Connection connection=null;
    Statement statement;

    public SQLiteConnection(String dbname)
    {
        try
        {
            connection = DriverManager.getConnection("jdbc:sqlite:"+this.getClass().getResource(dbname));
            statement = connection.createStatement();
            statement.setQueryTimeout(30);
            System.out.println("Database connection successful!");
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }

    void StopConnection()
    {
        try
        {
            if(connection != null)
                connection.close();
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }

    void InsertData(String insertQuerry)
    {
        try
        {
            statement.executeUpdate(insertQuerry);
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }
    void UpdateData(String updateQuerry)
    {
        try
        {
            statement.executeUpdate(updateQuerry);
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }
    void DeleteData(String deleteQuerry)
    {
        try
        {
            statement.executeUpdate(deleteQuerry);
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }
    }

    ResultSet ReadData(String readQuerry)
    {
        ResultSet rs=null;

        try
        {
            rs = statement.executeQuery(readQuerry);
        }
        catch (SQLException e)
        {
            System.err.println(e.getMessage());
        }

        return rs;
    }
}
