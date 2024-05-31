package course;

public class CircleDemo {

	public static void main(String[] args) {
		Circle a = new Circle(0, 0, 1);
		Circle b = new Circle(2, 0, 1);
		Circle c = new Circle(3, 0, 6.4);
		Circle d = new Circle(5.2, -1.9, 0.3);
		Circle e = new Circle(0, 0, 1);
		Circle.judge(a, b);
		Circle.judge(a, c);
		Circle.judge(a, d);
		Circle.judge(a, e);
	}
}

class Circle {
	private double ox;
	private double oy;
	private double r;

	public Circle() {
	}
	public Circle(double ox, double oy, double r) {// 构造方法
		this.ox = ox;
		this.oy = oy;
		this.r = r;
	}
	public boolean equals(Circle b) {// 重写equals方法
		if (this.ox == b.ox && this.oy == b.oy && this.r == b.r) {
			return true;
		}
		return false;
	}
	public static void judge(Circle a, Circle b) {// 静态方法judge，判断两圆关系
		if (a.equals(b)) {
			System.out.println("两圆重叠关系");
			return;
		}
		double dis = Math.sqrt((a.ox - b.ox) * (a.ox - b.ox) + (a.oy - b.oy) * (a.oy - b.oy));// 根据圆心坐标与半径进行判断
		if (a.r + b.r == dis) {
			System.out.println("两圆相切关系");
		} else if (a.r + b.r < dis) {
			System.out.println("两圆相离关系");
		} else {
			System.out.println("两圆包含关系");
		}
	}
}