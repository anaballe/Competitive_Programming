import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/* <applet code ="JButtonDemo" width =400 height =500>
 </applet>
*/
public class JButtonDemo extends JApplet implements ActionListener,ItemListener {
 JLabel jlab;
 JLabel jlab1;
 JLabel jlab2;
 JToggleButton jtbn;
 public void init() {
  try{
   SwingUtilities.invokeAndWait(new Runnable() {
    public void run() {
      makeGUI();
    }
   });
   }
  catch(Exception e) {
   System.out.println("an error has occured "+ e);
   }
 }
 private void makeGUI()
 {
 setLayout(new FlowLayout());
 ImageIcon anand =new ImageIcon("2016021012.jpg");
 JButton jb=new JButton(anand);
 jb.setActionCommand("Anand_for_MMMUT");
 jb.addActionListener(this);
 add(jb);

 ImageIcon anand1 =new ImageIcon("anand1.jpg");
 JButton jb1 =new JButton(anand1);
 jb1.setActionCommand("Anand_in_Kushinagar");
 jb1.addActionListener(this);
 add(jb1);
 
 jlab1 =new  JLabel("Button is off");
 // to create a  toggle button
 jtbn =new JToggleButton("On/Off");
 jtbn.addItemListener(new ItemListener() {
  public void itemStateChanged(ItemEvent ie) {
   if(jtbn.isSelected())
    jlab1.setText("Button is on");
   else
    jlab1.setText("Button is off");
   }
   });
 
 
 jlab = new JLabel("choose the image of Anand");
 add(jlab);

 add(jtbn);
 add(jlab1);

 jlab2 =new JLabel("select the language");
 JCheckBox cb =new JCheckBox("anand studies C");
 cb.addItemListener(this);
 add(cb);
 cb =new JCheckBox("anand studies Java");
 cb.addItemListener(this);
 add(cb);
 
 add(jlab2);

 }
 public void actionPerformed(ActionEvent ae)
 {
 jlab.setText("You selected "+ ae.getActionCommand());
 }
 public void itemStateChanged(ItemEvent ie) {
  JCheckBox cb =(JCheckBox)ie.getItem();
  if(cb.isSelected())
   jlab2.setText(cb.getText() + " is selected");
  else
   jlab2.setText(cb.getText() +"is cleared ");
 }
}
