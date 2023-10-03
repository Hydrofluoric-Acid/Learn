import java.util.Arrays;

public class CharacterDemo {

    public static void main(String[] args) {
        Character char1=new Character('f');
        char char2='f';
        System.out.println(char1.equals(char2));
        float floatVar=3.14F;
        int intVar=9;
        String stringVar="adf";
        
        System.out.printf("浮点型变量的值为%f, 整型变量的值为%d, 字符串变量的值为%s", floatVar, intVar, stringVar);
        System.out.println(Arrays.toString(args));
    }
}