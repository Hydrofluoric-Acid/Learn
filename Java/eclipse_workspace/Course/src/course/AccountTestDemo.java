package course;

import java.util.Date;

public class AccountTestDemo {

	public static void main(String[] args) {
		// 构造储蓄账户
		SavingAccount testAccount = new SavingAccount(620000000000000000L, "张三", new Date(124, 1, 1, 12, 00, 52), 1, 1920.54,
				0.035, "12345678", "提瓦特大陆", 1000.0, 0.028);
		//计算月利息
		System.out.println(testAccount.calInterest());
		//更改利率后计算月利息
		SavingAccount.setInterestRate(0.0298);
		System.out.println(testAccount.calInterest());
		//输出账户信息
		testAccount.printAccountInfo();
		//修改密码
		testAccount.updatePassword( "123456", "123456789");
		testAccount.updatePassword("12345678", "123rty@@@");
	}
	

}

class Account {
	private final long account;
	private String name;
	private Date date;
	private long id;
	private double credit;

	public Account(long account, String name, Date date, long id, double credit) {
		this.account = account;
		this.name = name;
		this.date = date;
		this.id = id;
		this.credit = credit;

	}

	public long getAccount() {
		return this.account;
	}

	public String getName() {
		return this.name;
	}

	public Date getDate() {
		return this.date;
	}

	public long getId() {
		return this.id;
	}

	public double getCredit() {
		return this.credit;
	}
}

class SavingAccount extends Account {
	private static double interestOfYear;
	private String password;
	private String address;
	private double minCredit;
	private double interestRate;

	public SavingAccount(long account, String name, Date date, long id, double credit, double interestOfYear,
			String password, String address, double minCredit, double interestRate) {
		super(account, name, date, id, credit);
		this.interestOfYear = interestOfYear;
		this.password = password;
		this.address = address;
		this.minCredit = minCredit;
		this.interestRate = interestRate;
	}

	public double calInterest() {
		return this.getCredit() * SavingAccount.interestOfYear / 12.0;
	}

	public static void setInterestRate(double interest) {
		SavingAccount.interestOfYear = interest;
	}

	public void printAccountInfo() {
		System.out.print(this.getAccount() + " " + this.getName() + "" + this.getDate() + " " + this.getId() + " "
				+ this.getCredit() + "\n");
	}

	public void updatePassword(String oldPassword, String newPassword) {
		if (this.password == oldPassword) {
			this.password = newPassword;
			System.out.println("修改成功！");
		}else System.out.println("修改失败！");
	}
}
