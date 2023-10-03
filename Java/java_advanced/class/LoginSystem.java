import java.util.Scanner;

public class LoginSystem {
    public static void main(String[] args) {
        User[] users = new User[7];
        Login loginSystem = new Login(users);

        users[0] = new User("itheima", "123456");
        loginSystem.startLogin();
    }
}

class User {
    String username;
    String password;

    public User(String username, String password) {
        this.username = username;
        this.password = password;
    }
}

class Login {
    private User[] users;

    public Login(User[] users) {
        this.users = users;
    }

    public void startLogin() {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 3; i++) {
            System.out.println("Please enter username:");
            String checkUsername = scanner.nextLine();

            System.out.println("Please enter password:");
            String checkPassword = scanner.nextLine();

            boolean loginSuccessful = false;

            for (int j = 0; j < users.length; j++) {
                // User user = users[j];
                if (users[j] != null && users[j].username.equals(checkUsername)
                        && users[j].username.equals(checkPassword)) {
                    loginSuccessful = true;
                    break;
                }
            }

            if (loginSuccessful) {
                System.out.println("Login successfully!");
                break;
            } else {
                System.out.println("Login failed!");
            }
        }
    }
}
