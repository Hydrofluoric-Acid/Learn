package course;

import java.util.Scanner;

public class MergeArray {
    public static void main(String[] args) {
        System.out.print("Enter list1 size and contents:");
        Scanner sc = new Scanner(System.in);
        int size1 = sc.nextInt();
        int[] list1 = new int[size1];
        for (int i = 0; i < size1; i++) {
            list1[i] = sc.nextInt();
        }
        System.out.print("Enter list2 size and contents:");
        int size2 = sc.nextInt();
        int[] list2 = new int[size2];
        for (int i = 0; i < size2; i++) {
            list2[i] = sc.nextInt();
        }
        int[] result = merge(list1, list2);
        System.out.print("The merged list is ");
        for (int i : result) {
            System.out.print(i + " ");
        }
        sc.close();
    }

    public static int[] merge(int[] list1, int[] list2) {
        int size1 = list1.length, size2 = list2.length;
        int[] result = new int[size1 + size2];
        int k = 0, i = 0, j = 0;
        for (; i < size1 && j < size2; k++) {
            if (list1[i] < list2[j]) {
                result[k] = list1[i++];
            } else {
                result[k] = list2[j++];
            }
        }
        if (i != size1) {
            for (; i < size1; i++) {
                result[k++] = list1[i];
            }
        } else if (j != size2) {
            for (; j < size2; j++) {
                result[k++] = list2[j];
            }
        }
        return result;
    }
}
