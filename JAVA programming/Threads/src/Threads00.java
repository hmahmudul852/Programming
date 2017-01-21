/**
 * Created by hasan on 12/1/16.
 */
public class Threads00 extends Thread
{
    public void run()
    {
        System.out.println("Thread is running.");
    }

    public static void main(String[] args)
    {
        Threads00 a=new Threads00();
        a.start();
    }
}
