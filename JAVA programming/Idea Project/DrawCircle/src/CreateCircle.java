import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.Timer;

public class CreateCircle extends JFrame
{
    public int x=0,y=50;
    public CreateCircle()
    {
        setSize(1000,100);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setVisible(true);

        ActionListener taskPerformer = new ActionListener() {
            public void actionPerformed(ActionEvent evt) {
                x+=20;
                System.out.println(x+" "+y);
                repaint();
            }
        };

        Timer timer = new Timer(20, taskPerformer);
        timer.start();
    }
    public static void main(String a[]){
        new CreateCircle();
    }

    public void paint(Graphics g) {
        g.drawOval(x-15,y-15,30,30);
    }
}

