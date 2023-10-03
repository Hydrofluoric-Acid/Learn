

public class UserLogin {
    public static void main(String[] args) {
        User[] users = new User[7];
        Login login_system = new Login(users);

        users[0] = new User("itheima", "123456");
        login_system.startLogin();

    }
}

class User {
    String user_name;
    String password;

    public User(String user_name, String password) {
        this.user_name = user_name;
        this.password = password;
    }
}

class Login {
    private User[] users;

    public Login(User[] users) {
        this.users = users;
    }

    public void startLogin() {

        while (true) {
            Scanner scanner = new Scanner(System.in);
            for (int i = 0; i < 3; i++) {
                System.out.println("Please enter user_name:");
                String check_username = scanner.nextLine();
                System.out.println("Please enter password:");
                String check_password = scanner.nextLine();
                for (int j = 0; j < users.length; j++) {
                    if (users[j] != null && users[j].equals(check_username) && users[j].equals(check_password)) {
                        System.out.println("login successfully!");
                        break;
                    } else {
                        System.out.println("Login failed!");
                    }
                }
            }
            break;
        }
    }
}
