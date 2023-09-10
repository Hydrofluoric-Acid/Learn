import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

/**
 * Main
 */
public class Main {

  public static void main(String[] args) {
    ArrayList<String> cardNums=new ArrayList<>(Arrays.asList("A","2","3","4","5","6","7","8","9","10","J","P","K"));
    ArrayList<String> str=new ArrayList<>();
    System.out.println(cardNums.size());
    Collections.shuffle(cardNums);
    str.addAll(0, cardNums);
    for (String string : cardNums) {
      System.out.println(string);
    }
    for (String string : str) {
      System.out.println(string);
    }
        System.out.println(cardNums.size());

  }
}