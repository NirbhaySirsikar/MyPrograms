import java.awt.Frame;

import java.awt.*;
class AWTDemo {
    AWTDemo(){
        Frame f = new Frame();
        f.setSize(500,500);
        Button b = new Button("click me!!");
        b.setBounds(100,100,100,50);
        f.add(b);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String[] args) {
        AWTDemo obj = new AWTDemo();
    }
    
}
