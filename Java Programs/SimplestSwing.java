//	SimplestSwing.java
//package	com.jdojo.swing;
import	javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.Container;
public	class	SimplestSwing	{
 public	static	void	main(String[]	args)	{
	//	Create	a	frame
JFrame	frame	=	new	JFrame("Simplest	Swing");
//	Display	the	frame
frame.setBounds(50,50,500,600);
Container contentPane=frame.getContentPane();
JButton closeButton =new JButton("Close");
contentPane.add(closeButton);

// frame.getContentPane().add(new	JButton("Close"));
 frame.setVisible(true);
 frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

								 }
}
