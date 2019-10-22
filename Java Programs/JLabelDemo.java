import java.awt.*;
import javax.swing.*;
/* <applet code ="JLabelDemo" width =250 height =150> 
   </applet>
*/
 
public class JLabelDemo extends JApplet{
 
 public void init(){
  try{
   SwingUtilities.invokeAndWait(new Runnable(){
    public void run() {
     makeGUI();
     }
   }
 );
}
catch(Exception exc) {
 System.out.println("Cant create because of " +  exc);
 }
}
private void makeGUI() {
 // create a  icon
 ImageIcon ii =new ImageIcon("anand1.jpg");
 // create a label
 JLabel jl =new JLabel("Anand",ii,JLabel.CENTER	) ;
 // add the label to the content pane
 add(jl);
}
}
