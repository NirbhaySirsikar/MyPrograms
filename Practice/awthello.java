import java.awt.*;
import java.awt.event.*;

import javax.crypto.AEADBadTagException;

class awthello implements ActionListener {
    Label l1 = new Label();

    awthello() {
        Frame f = new Frame();
        f.setSize(500, 500);
        Button b = new Button("Click me");
        b.setBounds(200, 100, 50, 50);
        f.add(b);
        b.addActionListener(this);
        f.add(l1);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent ae) {
        l1.setText("Button checked");
    }

    public static void main(String[] args) {
        awthello a = new awthello();
    }
}
