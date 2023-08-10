public class Enum {
    public static void main(String[] args) {
        //枚举是一种特殊的类
        //想要获取枚举类中的枚举项，只需要用类名调用
        A a1=A.X;
        System.out.println(a1);
        

        provideInfo(Constant.BOY);//枚举一般表示几个固定的值，然后作为参数进行传输
    }
    public static void provideInfo(Constant c){
        switch (c) {
            case BOY:
                
                break;
            case GIRL:

                break;
            default:
                break;
        }
    }
    
}
enum A{
    X,Y,Z;
    //枚举类中可以定义构造器，成员变量等，但一般使用普通类
}
enum Constant{
    BOY,GIRL;
}