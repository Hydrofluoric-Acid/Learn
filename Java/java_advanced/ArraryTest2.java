import java.util.Arrays;

public class ArraryTest2 {
    public static void main(String[] args) {
        Students[] students = new Students[4];
        students[0] = new Students("蜘蛛精", 169.5, 23);
        students[1] = new Students("紫霞", 163.8, 26);
        students[2] = new Students("紫霞", 163.8, 26);
        students[3] = new Students("至尊宝", 167.5, 24);

        // 1、public static void sort(类型[] arr)：对数组进行排序。
		Arrays.sort(students);
		System.out.println(Arrays.toString(students));
    }
}
class Students implements Comparable<Students>{
    private String name;
    private double height;
    private int age;
    public Students(String string, double d, int i) {
    }
    @Override
    public int compareTo(Students o) {
       return this.age-o.age;
    }
    @Override
     public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", height=" + height +
                ", age=" + age +
                '}';
    }
}//Student类实现comparable接口，同时重写compareto方法，Arrays会根据compareTo方法返回的返回值来确定值的关系
