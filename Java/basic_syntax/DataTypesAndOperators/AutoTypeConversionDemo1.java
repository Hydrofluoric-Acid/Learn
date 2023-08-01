public class AutoTypeConversionDemo1 {
    public static void main(String[] args) {
        //多种数据类型参与运算，其结果以大的数据类型为准
        byte a = 10;
        short b = 20;
        int c = 30;
        long d = 40;
        long e = a + b + c + d;
        int f = a + b + c;
        System.out.println(e);
        System.out.println(f);

        double g = a + b + 1.0;
        System.out.println(g);

        //byte,short,char 三种类型数据在和其他类型数据运算时，都会转换为int类型再运算
        byte h = 110;
        short i = 32767;
        int j = h + i;
        System.out.println(h);
        System.out.println(i);
        System.out.println(j);

        //强制类型转换,强行去除超过位数的位，可能导致数据丢失
        int k = 10;
        byte l = (byte)k;
        System.out.println(l);

        int m = 128;
        byte n = (byte)m;
        System.out.println(n);
    }
}
