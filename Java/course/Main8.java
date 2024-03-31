import java.util.Scanner;
public class Main8 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String strFirst = input.nextLine();
        System.out.print("Enter the second string: ");
        String strSecond = input.nextLine();
        String common = "";
        for (int i = 0;i < (strFirst.length() > strSecond.length() ? strSecond.length() : strFirst.length());i++){
            if (strFirst.charAt(i) == strSecond.charAt(i))
                common += strFirst.charAt(i);
        }
        if (common == "")
            System.out.println(strFirst + " and " + strSecond + "have no common prefix");
        else
            System.out.println("The common prefix is " + common);

    }

}
