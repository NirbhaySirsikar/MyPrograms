import java.awt.Frame;
import java.awt.event.*;
import java.awt.*;
class AWTDemo1 implements ActionListener{
    Label l = new Label();
    TextField t1 = new TextField();
    TextField t2 = new TextField();
    TextField t3 = new TextField();
    int x,y,sum=0;
    AWTDemo1(){
        Frame f = new Frame();
        f.setSize(500,500);
        Button b = new Button("ADD");
        b.setBounds(50,200,100,50);
        t1.setBounds(50,50,100,50);
        t2.setBounds(200,50,100,50);
        t3.setBounds(350,50,100,50);
        f.add(t1);
        f.add(t2);
        f.add(t3);
        f.add(b);
        b.addActionListener(this);
        f.add(l);

        f.setVisible(true);
    }
    public void actionPerformed(ActionEvent ae)
    {
        String s1 = t1.getText();    
        String s2 = t2.getText();  
        x=Integer.parseInt(s1);
        y=Integer.parseInt(s2);
        sum=x+y;  
        t3.setText(String.valueOf(sum));
    }
    public static void main(String[] args) {
        AWTDemo1 obj = new AWTDemo1();
    }
    
}
