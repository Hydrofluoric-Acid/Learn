public class SearchingAlgorithm {
    public static void main(String[] args) {
        int[] arr = { 7, 23, 79, 81, 103, 127, 131, 147 };
        System.out.print(Search(arr, 81));
    }

    public static int Search(int[] arr, int data) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int middle = (right + left) / 2;
            if (data < arr[middle]) {
                left = middle + 1;
            } else if (data > arr[middle]) {
                right = middle - 1;
            } else {
                return middle;
            }
        }
        return -1;
    }
}
