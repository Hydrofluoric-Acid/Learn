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


    }
}
