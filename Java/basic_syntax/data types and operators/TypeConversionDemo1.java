public class TypeConversionDemo1 {
    public static void main(String[] args) {
        byte a = 1;
        System.out.println(a);

        short b = a;
        System.out.println(b);

        int c = b;
        System.out.println(c);

        long d = c;
        System.out.println(d);

        float e = d;
        System.out.println(e);

        double f = e;
        System.out.println(f);
        //byte -> short -> int -> long -> float -> long
                    //      ^
                    //      |
                         //char
    }
}
