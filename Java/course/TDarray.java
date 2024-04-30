import java.util.Random;

public class TDarray {

	public static void main(String[] args) {
		Random rand = new Random();
		int[][] arr = new int[4][4];
		for (int i = 0; i < 4; i++, System.out.println()) {
			for (int j = 0; j < 4; j++) {
				int t = rand.nextInt(2);
				System.out.print(t + " ");
				arr[i][j] = t;
			}
		}
		int t = 0, index = 0;
		for (int i = 3; i >= 0; i--) {
			int tmp = 0;
			for (int j = 0; j < 4; j++) {
				if (arr[i][j] == 1)
					tmp++;
			}
			if (tmp >= t) {
				t = tmp;
				index = i;
			}
		}
		System.out.printf("The largest row index:%2d\n", index);
		t = 0;
		for (int j = 3; j >= 0; j--) {
			int tmp = 0;
			for (int i = 0; i < 3; i++) {
				if (arr[i][j] == 1)
					tmp++;
			}
			if (tmp >= t) {
				t = tmp;
				index = j;
			}
		}
		System.out.printf("The largest column index:%2d\n", index);
	}

}
