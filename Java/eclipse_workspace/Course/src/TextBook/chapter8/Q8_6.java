package TextBook.chapter8;

import java.util.Scanner;

public class Q8_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double[][] a = new double[4][4], b = new double[4][4], result = new double[4][4];
		System.out.print("Enter matrix1: ");
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {
				a[i][j] = sc.nextDouble();
			}
		}
		System.out.print("Enter matrix2: ");
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {
				b[i][j] = sc.nextDouble();
			}
		}
		result = multiplyMatrix(a, b);
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", a[1][i]);
		System.out.print("     ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", b[1][i]);
		System.out.print("     ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", result[1][i]);
		System.out.println();
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", a[2][i]);
		System.out.print("  *  ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", b[2][i]);
		System.out.print("  =  ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", result[2][i]);
		System.out.println();
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", a[3][i]);
		System.out.print("     ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", b[3][i]);
		System.out.print("     ");
		for (int i = 1; i <= 3; i++)System.out.printf("%5.1f", result[3][i]);
		System.out.println();
	}

	public static double[][] multiplyMatrix(double[][] a, double[][] b) {
		double[][] result = new double[4][4];
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {
				result[i][j] = 0;
				for (int k = 1; k <= 3; k++) {
					result[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		return result;
	}

}
