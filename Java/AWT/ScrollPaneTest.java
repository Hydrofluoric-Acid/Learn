import java.awt.*;

public class ScrollPaneTest {
    public static void main(String[] args) {
        Frame f = new Frame("test window");
        ScrollPane sp = new ScrollPane(ScrollPane.SCROLLBARS_ALWAYS);
        sp.add(new TextField(20));
        sp.add(new Button("click me"));
        f.add(sp);
        f.setBounds(60, 60, 500, 240);
        f.setVisible(true);
    }
}
