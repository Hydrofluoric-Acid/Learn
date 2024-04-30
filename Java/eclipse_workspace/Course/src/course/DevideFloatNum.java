package course;

import java.util.Scanner;

public class DevideFloatNum {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("");
		try {
			float f = sc.nextFloat();
			System.out.println(f + "的整数部分为：" + (int) f);
			System.out.print(f + "的小数部分为：");
			String s = String.valueOf(f);
			if (s.charAt(0) == '-') {
				System.out.print("-");
			}
			System.out.print("0.");
			for (int i = s.indexOf('.') + 1; i < s.length(); i++) {
				System.out.print(s.charAt(i));
			}
		} catch (java.util.InputMismatchException e) {
			System.out.println("输入浮点数格式错误");
		}
	}
}
