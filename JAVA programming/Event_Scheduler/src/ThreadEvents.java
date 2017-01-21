import java.util.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

public class ThreadEvents implements Runnable
{
    final long timeInterval = 60*1000;
    private Thread theThread;


    public void start()
    {
        if (theThread == null)
        {
            System.out.println("Thread has been started");
            theThread = new Thread(this);
            theThread.start();
        }
    }

    @Override
    public void run()
    {
        while(true)
        {
            DateFormat dateFormat = new SimpleDateFormat("hh:mm a dd/MM/yyyy");
            Date date = new Date();
            String td = dateFormat.format(date);
//            System.out.println(td);
            for (int i = 0; i <SQLiteMain.list.size(); i++) {

                int eid = SQLiteMain.list.get(i).getId();
                String ename = SQLiteMain.list.get(i).getTitle();
                String edate = SQLiteMain.list.get(i).getDate();
                String etime = SQLiteMain.list.get(i).getTime();
                String edetails = SQLiteMain.list.get(i).getDescription();

                EventData ev=new EventData(eid,ename,edate,etime,edetails);

                String etd=ev.getDate()+" "+ev.getTime();

//                System.out.println(etd+"\t"+td);

                if(td.equals(etd)==true)
                {
                    new NotifyEventTab("Title : "+ev.getTitle()+"\n"+"Decription : "+ev.getDescription());
                    System.out.println("Now you have an event.");
                    System.out.println(ev.getDescription());
                }
            }

            try {
                Thread.sleep(timeInterval);
            }
            catch (InterruptedException e)
            {
                e.printStackTrace();
            }
        }
    }
}