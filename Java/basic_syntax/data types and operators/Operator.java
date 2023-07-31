public class Operator {
    public static void main(String[] args) {
        // /除，两个整数相除结果还是整数
        int a = 1;
        int b = 2;
        int c = a / b;
        System.out.println(c);

        // %取余

        // 自增自减运算符
        // ++ --放在变量前面或后面，对变量自加或自减操作
        int d = 1;
        int e = d++;
        System.out.println(e);
        int f = ++d;
        System.out.println(f);
        System.out.println(d);

        // 扩展赋值运算符+= -= *= /= %=
        // a+=b a = (type a)(a+b)
        byte x = 30;
        byte y = 20;
        // x=x+y; 两个byte相加，会自动转换成int类型
        x += y;// 正确
        System.out.println(x);

        // 关系运算符
        // & | !略
        // ^异或运算符，结果相同返回false否则为true
        // &&左边为false。右边不执行，||左边为true则右边不执行
        int g = 10;
        int h = 0;
        int i = 1;
        // System.out.println(g > 11 & ++h>1);
        System.out.println(g > 11 && ++h > 1);
        System.out.println(h);

        // System.out.println(g > 1 || --i<12);
        System.out.println(g > 1 || --i < 12);
        System.out.println(i);

        // 三元运算符 关系表达式? 值1 : 值2;
        // 关系表达式值为true,则值1否则值2
        System.out.println(g > h ? g : h);
        System.out.println(g < h ? g : h);

        //运算符优先级问题在实际中很少考虑，通常使用括号
    }
}
