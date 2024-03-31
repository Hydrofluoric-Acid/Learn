import java.util.Scanner;
public class Main6 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String password=sc.nextLine();
        if(isValidPassword(password)){
            System.out.println("valid passowrd");
        }else System.out.println("Invalid password");
        sc.close();
    }
    public static boolean isValidPassword(String password){
        if(password.length()<8)return false;
        int numCount=0;
        for(int i=0;i<password.length();i++){
            char c=password.charAt(i);
            if(!Character.isLetterOrDigit(c)){
                return false;
            }
            if(Character.isDigit(c))numCount++;
        }
        if(numCount<2)return false;
        return true;
    }
    
    
}
