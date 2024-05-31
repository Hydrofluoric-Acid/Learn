package TextBook.chapter11;

import java.util.Calendar;
import java.util.GregorianCalendar;

public class Q11_2 {

	public static void main(String[] args) {

		MyDate hireDate = new MyDate(2023, 5, 27);
		MyDate officeHours = new MyDate(2023, 5, 27);

		// 创建 Student 对象
		Student student = new Student("Alice", "123 College St", "555-0001", "alice@university.edu",
				Constants.GRADETWO);
		System.out.println(student);

		// 创建 Faculty 对象
		Faculty faculty = new Faculty("Dr. Smith", "456 University Rd", "555-0002", "smith@university.edu",
				"Office 101", 90000, hireDate, officeHours, 1);
		System.out.println(faculty);

		// 创建 Staff 对象
		Staff staff = new Staff("Jane Doe", "789 Admin Ln", "555-0003", "jane.doe@university.edu", "Office 202", 50000,
				hireDate, "Manager");
		System.out.println(staff);

	}

}

final class Constants {
	public static final Integer GRADEONE = 1;
	public static final Integer GRADETWO = 2;
	public static final Integer GRADETHREE = 3;
	public static final Integer GRADEFOUR = 4;
}

class Person {
	private String name;
	private String address;
	private String phone;
	private String email;

	public Person() {

	}

	public Person(String name, String address, String phone, String email) {
		this.name = name;
		this.address = address;
		this.phone = phone;
		this.email = email;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public String getPhone() {
		return phone;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	@Override
	public String toString() {
		return "Person{" + "name='" + name + '\'' + ", address='" + address + '\'' + ", phone='" + phone + '\''
				+ ", email='" + email + '\'' + '}';
	}

}

class Student extends Person {
	private Integer status;

	public Student() {

	}

	public Student(String name, String address, String phone, String email, Integer status) {
		super(name, address, phone, email);
		this.status = status;
	}
}

class Employee extends Person {
	private String office;
	private double salary;
	private MyDate date;

	public Employee() {
		super();
	}

	// 带参数的构造函数
	public Employee(String name, String address, String phone, String email, String office, double salary,
			MyDate date) {
		super(name, address, phone, email);
		this.office = office;
		this.salary = salary;
		this.date = date;
	}

	// office 属性的 getter 方法
	public String getOffice() {
		return office;
	}

	// office 属性的 setter 方法
	public void setOffice(String office) {
		this.office = office;
	}

	// salary 属性的 getter 方法
	public double getSalary() {
		return salary;
	}

	// salary 属性的 setter 方法
	public void setSalary(double salary) {
		this.salary = salary;
	}

	// date 属性的 getter 方法
	public MyDate getDate() {
		return date;
	}

	// date 属性的 setter 方法
	public void setDate(MyDate date) {
		this.date = date;
	}

	// 重写的 toString 方法
	@Override
	public String toString() {
		return "Employee{" + "name='" + getName() + '\'' + ", address='" + getAddress() + '\'' + ", phone='"
				+ getPhone() + '\'' + ", email='" + getEmail() + '\'' + ", office='" + office + '\'' + ", salary="
				+ salary + ", date=" + date + '}';
	}
}

class Faculty extends Employee {
	private MyDate officeHours;
	private Integer rank;

	public Faculty() {
		super();
	}

	public Faculty(String name, String address, String phone, String email, String office, double salary,
			MyDate hireDate, MyDate officeHours, Integer rank) {
		super(name, address, phone, email, office, salary, hireDate);
		this.officeHours = officeHours;
		this.rank = rank;
	}

	public MyDate getOfficeHours() {
		return officeHours;
	}

	public void setOfficeHours(MyDate officeHours) {
		this.officeHours = officeHours;
	}

	public Integer getRank() {
		return rank;
	}

	public void setRank(Integer rank) {
		this.rank = rank;
	}

	@Override
	public String toString() {
		return "Faculty{" + "name='" + getName() + '\'' + ", address='" + getAddress() + '\'' + ", phone='" + getPhone()
				+ '\'' + ", email='" + getEmail() + '\'' + ", office='" + getOffice() + '\'' + ", salary=" + getSalary()
				+ ", hireDate=" + getDate() + ", officeHours=" + officeHours + ", rank=" + rank + '}';
	}
}

class Staff extends Employee {
	private String jobTitle;

	public Staff() {
		super();
	}

	public Staff(String name, String address, String phone, String email, String office, double salary, MyDate hireDate,
			String jobTitle) {
		super(name, address, phone, email, office, salary, hireDate);
		this.jobTitle = jobTitle;
	}

	public String getJobTitle() {
		return jobTitle;
	}

	public void setJobTitle(String jobTitle) {
		this.jobTitle = jobTitle;
	}

	@Override
	public String toString() {
		return "Staff{" + "name='" + getName() + '\'' + ", address='" + getAddress() + '\'' + ", phone='" + getPhone()
				+ '\'' + ", email='" + getEmail() + '\'' + ", office='" + getOffice() + '\'' + ", salary=" + getSalary()
				+ ", hireDate=" + getDate() + ", jobTitle='" + jobTitle + '\'' + '}';
	}
}

class MyDate {
	private int year;
	private int month;
	private int day;

	public MyDate() {
		Calendar calendar = new GregorianCalendar();
		this.year = calendar.get(Calendar.YEAR);
		this.month = calendar.get(Calendar.MONTH);
		this.day = calendar.get(Calendar.DAY_OF_MONTH);
	}

	public MyDate(long elapsedTime) {
		setDate(elapsedTime);
	}

	public MyDate(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}

	public int getYear() {
		return year;
	}

	public int getMonth() {
		return month;
	}

	public int getDay() {
		return day;
	}

	public void setDate(long elapsedTime) {
		Calendar calendar = new GregorianCalendar();
		calendar.setTimeInMillis(elapsedTime);
		this.year = calendar.get(Calendar.YEAR);
		this.month = calendar.get(Calendar.MONTH);
		this.day = calendar.get(Calendar.DAY_OF_MONTH);
	}

	@Override
	public String toString() {
		return "MyDate{" + "year=" + year + ", month=" + month + ", day=" + day + '}';
	}
}