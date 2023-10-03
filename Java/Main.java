import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.regex.Pattern;

/**
 * Main
 */
public class Main {
  public static void main(String[] args) {
    System.out.println(isBase64("/#Lf8Xyn/H"));
  
  }
  public static boolean isBase64(String str) {
    String base64Pattern = "^([A-Za-z0-9+/]{4})*([A-Za-z0-9+/]{4}|[A-Za-z0-9+/]{3}=|[A-Za-z0-9+/]{2}==)$";
    return Pattern.matches(base64Pattern, str);
}

  }

  