import java.util.ArrayList;

public class API {
    public static void main(String[] args) {
        //String类，创建方法一，所有Java的字符串字面值，都是字符串对象
        //创建方法二，就是利用String类的构造方法创建String类的对象
        String str=new String();
        System.out.println(str.length());

        String str1=new String("yuqd");
        System.out.println(str1);

        //String str2=new String({"a","b"});  错误
        char[] chars={'a','b'};
        String str2=new String(chars);
        System.out.println(str2);

        //ArrayList表示一种集合
        ArrayList<String> list=new ArrayList<>();
        list.add("a");
        System.out.println(list);
        list.add(str2);
        System.out.println(list);
        list.add(0, "b");
        System.out.println(list);
        System.out.println(list.get(1));
        System.out.println(list.size());
        System.out.println(list.remove(0));
        System.out.println(list.remove("b"));
        System.out.println(list.set(0, "x"));
        

    }
}
