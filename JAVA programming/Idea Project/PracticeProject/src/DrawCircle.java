import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

/**
 * Created by hasan on 11/25/16.
 */
public class DrawCircle extends JFrame{
    public int x,y;
    public DrawCircle()
    {
        setSize(400,400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setVisible(true);
        addMouseListener(new MouseAdapter() {
            public void mouseClicked(MouseEvent e) {
                x=e.getX();
                y=e.getY();
                System.out.println(x+" "+y);
                repaint();
            }
        });
    }
    public static void main(String a[]){
        new DrawCircle();
    }

    public void paint(Graphics g) {
        g.drawOval(x-15,y-15,30,30);
    }
}
