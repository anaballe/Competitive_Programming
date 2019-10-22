import java.applet.Applet;
import java.awt.*;
/*<applet code="MyApplet1" width="200" height="200"></applet>*/
public class MyApplet1 extends Applet
{
	
	public void paint(Graphics g)
	{
		g.drawOval(70,50,100,110);
		g.drawOval(90,90,15,10);
		g.drawOval(150,90,15,10);
		g.drawOval(92,90,5,5);
		g.drawOval(152,90,5,5);
		g.drawLine(130,100,130,120);
		g.drawLine(130,120,122,112);
		g.drawArc(118,128,20,12,190,170);
	}
}