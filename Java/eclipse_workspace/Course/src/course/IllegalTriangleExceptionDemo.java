package course;

public class IllegalTriangleExceptionDemo {

	public static void main(String[] args) {
		double a=1.0,b=2.0,c=1.5,d=5;
		try {
			Triangle t1=new Triangle(a,b,c);
			System.out.println(t1.toString());
		}catch(IllegalTriangleException e) {
			e.printStackTrace();
		}
		try {
			Triangle t2=new Triangle(a,b,d);
			System.out.println(t2.toString());
		}catch(IllegalTriangleException e) {
			e.printStackTrace();
		}
	}

}
class IllegalTriangleException extends Exception{
	public IllegalTriangleException() {
		super();
	}
	public IllegalTriangleException(String message) {
		super(message);
	}
}
class Triangle{
	private double side1,side2,side3;
	public Triangle() {
		
	}
	public Triangle(double side1,double side2,double side3) throws IllegalTriangleException{
		if(side1+side2<side3||side1+side3<side2||side2+side3<side1) {
			throw new IllegalTriangleException();
		}
		this.side1=side1;
		this.side2=side2;
		this.side3=side3;
	}
	public String toString() {
		return "Triangle "+side1+" "+side2+" "+side3;
	}
}