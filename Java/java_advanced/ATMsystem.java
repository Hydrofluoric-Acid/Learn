import java.util.ArrayList;
import java.util.Scanner;

public class ATMsystem {
	public static void main(String[] args) {
		ArrayList<User> users = new ArrayList<>();
		User user1 = new User("zs", "nan", "123456", "12345678");
		users.add(user1);
		UserSystem user_system = new UserSystem(users);
		user_system.start();
	}

}

class User {
	protected String name, gender, password, account;
	Double credit_limit;

	public User(String name, String gender, String password, String account) {
		this.name = name;
		this.gender = gender;
		this.password = password;
		this.account = account;
	}

	public String get_name() {
		return name;
	}

	public String get_account() {
		return account;
	}
}

class UserSystem {
	ArrayList<User> users = new ArrayList<>();
	protected User user;
	Scanner sc = new Scanner(System.in);

	public UserSystem() {

	}

	public UserSystem(ArrayList<User> users) {
		this.users = users;
	}

	public void openAccount() {
		user = new User("", "", "", "");
		while (true) {
			String account_temp = sc.nextLine();
			System.out.println("请输入您的账户名称：");
			if (account_temp.length() == 16) {
				user.name = account_temp;
				break;
			}
		}
		while (true) {
			System.out.println("请输入您的性别：");
			String temp = sc.nextLine();
			if ((temp=="男") || (temp.equals("女")) ){
				user.gender = temp;
				break;
			}
		}
		while (true) {
			System.out.println("请输入您的账户密码：");
			String password_temp1 = sc.nextLine();
			System.out.println("请输入您的确认密码：");
			String password_temp2 = sc.nextLine();
			if (password_temp1.equals(password_temp2)) {
				user.password = password_temp1;
				break;
			}
		}
		while (true) {
			Double credit_limit_temp = sc.nextDouble();
			System.out.println("请输入您的取现额度：");
			if (credit_limit_temp > 0) {
				user.credit_limit = credit_limit_temp;
				break;
			}

		}
		System.out.println("恭喜您，" + user.name + "开户成功，您的卡号是：" + user.account);
		users.add(user);
	}

	public void loginSystem() {
		while (true) {
			System.out.println("==系统登录==");
			System.out.println("请输入您的登录卡号：");
			String preAccount = sc.nextLine();
			sc.nextLine();
			System.out.println("请输入登录密码：");
			String prePassword = sc.nextLine();
			System.out.println(users.size());
			for (User user : users) {
				if (preAccount != null && preAccount.equals(user.account)) {

					if (prePassword.equals(user.password)) {
						this.operateSystem();
						break;
					} else {
						System.out.println("密码或账号输入错误，请重试");
					}
				}

			}
			break;
		}

	}

	public void operateSystem() {
		while (true) {
			switch (sc.nextInt()) {
				case 1:

					break;
				case 21:

					break;
				case 3:

					break;
				case 4:

					break;
				case 5:

					break;
				case 6:

					break;
				case 7:

					break;
				default:
					break;
			}
		}

	}

	public void start() {
		System.out.println("===欢迎您进入ATM系统===\n1、用户登录\n2、用户开户\n请选择：");
		while (true) {
			int command = sc.nextInt();
			switch (command) {
				case 1:
					this.loginSystem();
					break;
				case 2:
					this.openAccount();
					break;
				default:

					System.out.println("请输入正确的指令");
					break;
			}
		}
	}
}
