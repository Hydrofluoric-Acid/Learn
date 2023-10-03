package AWT;

import java.awt.*;

public class FrameTest {
    public static void main(String[] args) {
        Frame f=new Frame("Test");
        Panel p=new Panel();
        p.add(new TextField(20));
        p.add(new Button("click me"));
        f.add(p);
        f.setBounds(30,30,250,120);
        f.setVisible(true);
    }
}
