import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/* <applet code ="App1" width="600" height ="700"></applet> */
public class App1 extends Applet{
Label l1,l2,l3;
TextField t1,t2;
Button b1,b2,b3,b4;
public void init()
{
l1=new Label("First Number");
l2=new Label("Second Number");
l3=new Label();
t1=new TextField();
t2=new TextField();
b1 =new Button("Add");
b2 =new Button("Subtract");
b3 =new Button("Multiply");
b4 =new Button("Divide");

setLayout(null);
l1.setBounds(30,50,100,20);
t1.setBounds(150,50,100,20);
l2.setBounds(30,100,100,20);
t2.setBounds(150,100,100,20);
b1.setBounds(100,150,80,20);
b2.setBounds(180,150,80,20);
b3.setBounds(260,150,80,20);
b4.setBounds(340,150,80,20);
l3.setBounds(30,200,80,20);
add(t1);
add(l1);
add(t2);
add(l2);
add(b1);
add(b2);
add(b3);
add(b4);
add(l3);
b1.addActionListener(new Sum());
b2.addActionListener(new Difference());
b3.addActionListener(new Multiply());
b4.addActionListener(new Divide());
}
public class Sum implements ActionListener
{
public void actionPerformed(ActionEvent e)
{
	int a,b,s=0;
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	s=a+b;
	l3.setText("Sum is "+s);
}
}
public class Difference implements ActionListener
{
public void actionPerformed(ActionEvent e)
{
	int a,b,s=0;
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	s=a-b;
	l3.setText("Sum is "+s);
}
}
public class Multiply implements ActionListener
{
public void actionPerformed(ActionEvent e)
{
	int a,b,s=0;
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	s=a*b;
	l3.setText("Sum is "+s);
}
}
public class Divide implements ActionListener
{
public void actionPerformed(ActionEvent e)
{
	double a,b,s=0;
	a=Double.parseDouble(t1.getText());
	b=Double.parseDouble(t2.getText());
	s=a/b;
	l3.setText("Sum is "+s);
}
}
}