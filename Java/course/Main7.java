/* import java.util.Scanner;
public class Main7 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String s1=sc.nextLine();
        System.out.print("Enter the second string: ");
        String s2=sc.nextLine();
        String res="";
        for(int i=0;i<Math.min(s1.length(),s2.length());i++){
            if(s1.charAt(i)==s2.charAt(i)){
                res+=s1.charAt(i);
            }else break;
        }
        if(res==""){
            System.out.println(s1+" and "+s2+" have no common prefix");
        }else{
            System.out.println("The comon prefix is "+res);
        }
    }
} */
import java.util.Scanner;
public class Main7 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String strFirst = sc.nextLine();
        System.out.print("Enter the second string: ");
        String strSecond = sc.nextLine();
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
