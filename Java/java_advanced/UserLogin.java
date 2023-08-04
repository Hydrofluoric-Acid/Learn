import java.util.Scanner;

public class UserLogin {
 public static void main(String[] args) {
    User[][] users=new User[7][2];
    Login login_system = new Login(users);
    
    
 }   
}
class User{
    String[] user_fnfo;
    public User(String[] user_info){
        this.user_fnfo=user_info;
    }

}
class Login{
    private User[][] users;
    public Login(User[][] users){
        this.users=users;
    }
    public void startLogin(){
        
        while (true) {
            for (int i = 0; i < 3; i++) {
                System.out.println("Please enter user_name:");
                Scanner check_username=new Scanner(System.in);
                System.out.println("Please enter password:");
                Scanner check_password=new Scanner(System.in);
                for (int j = 0; j < users.length; j++) {
                    if ((check_username.equals(users[j][0]))&&(check_password.equals(users[j][1]))) {
                        System.out.println("login successfully!");
                    }else{
                        System.out.println("error");
                    }
                }
            }
            break;
        }
    }
}
