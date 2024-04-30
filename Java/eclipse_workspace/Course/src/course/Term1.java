package course;

public class Term1 {

	public static void main(String[] args) {
		Circle c=new Circle(100);
		c.radius=100;
		c.print();
		System.out.println("The area of the circle is "+c.getArea());

	}

}
class Circle{
	double radius;
	static int number=0;
	Circle(double newRadius){
		radius=newRadius;
		number++;
	}
	double getArea() {
		return radius*radius*Math.PI;
	}
	public void print() {
		System.out.println("The No."+number+"Circle's radius is "+radius);
	}
}
