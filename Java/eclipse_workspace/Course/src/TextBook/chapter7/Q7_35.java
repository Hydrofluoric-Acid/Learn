package TextBook.chapter7;

import java.util.Scanner;

public class Q7_35 {

	public static void main(String[] args) {
		int[][] board = new int[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				board[i][j] = 0;
			}
		}
		printBoard(board);
		Scanner sc = new Scanner(System.in);
		for (int i = 0; i < 9; i++) {
			System.out.printf("Enter a row (0, 1, 0r 2) for player %s:", (i % 2 == 0 ? "X" : "O"));
			int x = sc.nextInt();
			System.out.printf("Enter a column (0, 1, 0r 2) for player %s:", (i % 2 == 0 ? "X" : "O"));
			int y = sc.nextInt();
			board[x][y] = (i % 2 == 0 ? 1 : 2);
			System.out.println("------------");
			printBoard(board);
			if (check('X', board)) {
				System.out.print("X player won");
				break;
			} else if (check('O', board)) {
				System.out.print("O player won");
				break;
			}
			if (!check('X', board) && !check('O', board) && i == 8) {
				System.out.print("tie");
			}

		}
	}

	public static void printBoard(int[][] board) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				System.out.printf("| %s ", (board[j][k] == 0 ? " " : (board[j][k] == 1 ? "X" : "O")));
			}
			System.out.println("|");
			System.out.println("------------");
		}
	}

	public static boolean check(char c, int[][] board) {
		int g = (c == 'X' ? 1 : 2);
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == g && board[i][1] == g && board[i][2] == g) {
				return true;
			}
			if (board[0][i] == g && board[1][i] == g && board[2][i] == g) {
				return true;
			}
		}
		if (board[0][0] == g && board[1][1] == g && board[2][2] == g) {
			return true;
		}
		if (board[2][0] == g && board[1][1] == g && board[0][2] == g) {
			return true;
		}
		return false;
	}
}
