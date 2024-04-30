package course;

public class Client {

	public static void main(String[] args) {
		MyInteger integer1=new MyInteger(598),integer2=new MyInteger(697);
		System.out.println("get() "+integer1.get());
		System.out.println("isEven() isOdd() isPrime() "+integer1.isEven()+" "+integer2.isOdd()+" "+integer2.isPrime());
		System.out.println("isEven(int) isOdd(int) isPrime(int) "+MyInteger.isEven(3)+" "+MyInteger.isOdd(3)+" "+MyInteger.isPrime(3));
		System.out.println("isEven(MyInteger) isOdd(MyInteger) isPrime(MyInteger) "+MyInteger.isEven(integer1)+" "+MyInteger.isOdd(integer2)+" "+MyInteger.isPrime(integer2));
		System.out.println("equals(int) "+integer1.equals(987));
		System.out.println("equals(MyInteger) "+integer2.equals(integer1));
		char ch[]={'1','2','3','4','5'};
		System.out.println("parseInt(char[]) "+MyInteger.parseInt(ch));
		System.out.println("parseInt(String) "+MyInteger.parseInt("9566"));
	}

}
class MyInteger{
	private int value;
	public MyInteger(int value) {
		this.value=value;
	}
	public int get() {
		return this.value;
	}
	public boolean isEven() {
		return this.value%2==0?true:false;
	}
	public boolean isOdd() {
		return this.value%2==0?false:true;
	}
	public boolean isPrime() {
		int n=this.value;
		if(n<2)return false;
		for(int i=2;i*i<=n;i++) {
			if(n%i==0)return false;
		}
		return true;
	}
	public static boolean isEven(int value) {
		return value%2==0?true:false;
	}
	public static boolean isOdd(int value) {
		return value%2==0?false:true;
	}
	public static boolean isPrime(int value) {
		if(value<2)return false;
		for(int i=2;i*i<=value;i++) {
			if(value%i==0)return false;
		}
		return true;
	}
	public static boolean isEven(MyInteger integer) {
		return integer.get()%2==0?true:false;
	}
	public static boolean isOdd(MyInteger integer) {
		return integer.get()%2==0?false:true;
	}
	public static boolean isPrime(MyInteger integer) {
		int value=integer.get();
		if(value<2)return false;
		for(int i=2;i*i<=value;i++) {
			if(value%2==0)return false;
		}
		return true;
	}
	public boolean equals(int value) {
		return this.value==value;
	}
	public boolean equals(MyInteger integer) {
		return integer.get()==this.value;
	}
	public static int parseInt(char[] ch) {
		int value=0;
		for(int i=0;i<ch.length;i++) {
			value*=10;
			value+=(ch[i]-'0');
		}
		return value;
	}
	public static int parseInt(String s) {
		int value=0;
		for(int i=0;i<s.length();i++) {
			value*=10;
			value+=(s.charAt(i)-'0');
		}
		return value;
	}
}
