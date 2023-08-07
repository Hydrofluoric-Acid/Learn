import java.util.ArrayList;
import java.util.Scanner;

public class ATMsystem {
	public static void main(String[] args) {

	}

}

class User {
	protected String name, gender, password, account;
	Double credit_limit;
	public User() {

	}
	public String get_name(){
		return name;
	}
	public String get_account(){
		return account;
	}
}

class UserSystem {
	private ArrayList<User> users = new ArrayList<>();
	private User user;
	Scanner sc = new Scanner(System.in);

	public UserSystem() {

	}

	public void openAccount() {
		System.out.println("请输入您的账户名称：");
		user.name = sc.nextLine();
		System.out.println("请输入您的性别：");
		user.gender = sc.nextLine();
		System.out.println("请输入您的账户密码：");
		user.password = sc.nextLine();
		System.out.println("请输入您的确认密码：");
		user.password = sc.nextLine();
		System.out.println("请输入您的取现额度：");
		user.credit_limit = sc.nextDouble();
		System.out.println("恭喜您，" + user.name + "开户成功，您的卡号是：" + user.account);
		users.add(user);

	}

	public void loginSystem() {
		System.out.println("==系统登录==");
		System.out.println("");
		String preAccount = sc.nextLine();
		System.out.println("");
		String prePassword = sc.nextLine();
		for (User user : users) {
			if (preAccount.equals(user.account) && prePassword.equals(user.password)) {
				this.operateSystem();
			}
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
					break;
			}
		}
	}
}
