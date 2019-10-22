import javax.swing.*;
/* <applet code ="JTabbedPaneDemo" width =500 height =600>
   </applet>
*/
public class JTabbedPaneDemo extends JApplet {
 public void init() {
  try {
   SwingUtilities.invokeAndWait(new Runnable() {
     public void run() {
      makeGUI();
     }
   });
  }
  catch(Exception e)
   {
   System.out.println("Cant create because of "+ e);
   }
 }
 private void makeGUI() {
  JTabbedPane jtp =new JTabbedPane();
  jtp.addTab("cities",new CitiesPanel());
  jtp.addTab("colors",new ColorsPanel());
  jtp.addTab("flavours",new FlavoursPanel());
  add(jtp);
 }
}
class CitiesPanel extends JPanel {
 public CitiesPanel() {
  JButton b1=new JButton("New York");
  add(b1);
  JButton b2=new JButton("Lucknow");
  add(b2);
  JButton b3= new JButton("Patna");
  add(b3);
 }
}
class ColorsPanel extends JPanel {
 public ColorsPanel() {
  JCheckBox cb1=new JCheckBox("Green");
  add(cb1);
  JCheckBox cb2=new JCheckBox("White");
  add(cb2);
  JCheckBox cb3 =new JCheckBox("Blue");
  add(cb3);
 }
}
class FlavoursPanel extends JPanel {
 public FlavoursPanel() {
  JComboBox jcb =new JComboBox();
  jcb.addItem("Vanilla");
  jcb.addItem("Strawberry");
  jcb.addItem("Chocolate");
  add(jcb);
 }
}
