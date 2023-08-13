public class Test4 {
    public static void main(String[] args) {
        String[] index = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };
        String str="12,A"; 
        for (int i = 0; i < 6; i++) {
            str.replace(index[i+9],Integer.toString(i+10));
        }
        System.out.println(str);
    }
}
