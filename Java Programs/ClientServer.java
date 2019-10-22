import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class ClientServer{
	 public static void main(String[] args) {
	 	JFrame	frame	=	new	JFrame("Simplest	Swing");
	 	JLabel jlabel1 = new JLabel("Default Text");
	 	JLabel jlabel2 = new JLabel("Default Text");
		//	Display	the	frame
		frame.setBounds(50,50,500,600);
		Container contentPane=frame.getContentPane();
		contentPane.add(jlabel1);
		contentPane.add(jlabel2);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}