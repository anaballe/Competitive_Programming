import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class ser1  {

 	public ser1(){
 		JLabel jl1=new JLabel("default text");
  		JLabel jl2=new JLabel("Default text");
  		JLabel jl3=new JLabel();
  		JLabel jl4=new JLabel();
  final JTextField jtf=new JTextField(40);
  String inputLine[] =new String[1];
  		JFrame jfrm=new JFrame("Client Program");
	jfrm.setLayout(new FlowLayout());
	jfrm.setSize(500,600);
	jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	jfrm.add(jl1);
	jfrm.add(jl2);
	jfrm.add(jl3);
	jfrm.add(jl4);
	jfrm.setVisible(true);
    //inputLine ="";
/*try {
System.out.println("Waiting for connection.....");
	jl1.setText("Waiting for connection......");
	
//InetAddress localAddress = InetAddress.getLocalHost();
/*try (Socket clientSocket = new Socket("localhost", 6000);
//for sending from other device use IP Address in place of localAddress
PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()))) { 
System.out.println("Connected to server");
	jl2.setText("Connected to server");
	
//Scanner scanner = new Scanner(System.in);
	//while(true){
//System.out.print("Enter text: ");

  // inputLine = scanner.nextLine();
	jfrm.add(jtf);
	jtf.addActionListener(new ActionListener() {
public void actionPerformed(ActionEvent ae) {
	 inputLine[0]=jtf.getText();
	jl3.setText(inputLine[0]);
	
}
});
//if ("quit".equalsIgnoreCase(inputLine[0])) {
//break;

out.println(inputLine);
String response = br.readLine();
//System.out.println("Server response: " + response);
jl4.setText("Server Response:"+response);
} catch(IOException ex){
	ex.printStackTrace();
}
//}
} catch (IOException ex) {
// Handle exceptions
	ex.printStackTrace();
}


//System.out.print("Yes\n");
*/

}
public static void main(String[] args) {
  SwingUtilities.invokeLater(new Runnable() {
  	public void run(){
  		new ser1();
  	}
  		});

  }
}

