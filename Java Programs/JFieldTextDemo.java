import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/* <applet code ="JFieldTextDemo" width =300 height =500>
   </applet>
*/

public class JFieldTextDemo extends JApplet {
 JTextField jtf;

 public void init() {
  try{
   SwingUtilities.invokeAndWait(new Runnable() {
     public void run() {
      makeGUI();
      }
      });
     }
  catch(Exception e) {
   System.out.println("cant create because of "+ e);
   }
  }

private void makeGUI () {
  setLayout(new FlowLayout());
  jtf =new JTextField("anand",35);
  add(jtf);
  jtf.addActionListener(new ActionListener() {
   public void actionPerformed(ActionEvent ae) {
    showStatus(jtf.getText());
   }
   });
  }
}
