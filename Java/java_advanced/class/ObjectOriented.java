public class ObjectOriented {
    public static void main(String[] args) {
        //类的五大成分：成员变量、方法、构造器、内部类、代码块
        //当一个类的内部，包含一个完整的事物，且这个事物没有必要单独设计时，就可以把这个事物设计成内部类
        //汽车、的内部有发动机，发动机是包含在汽车内部的一个完整事物，可以把发动机设计成内部类
        Car.Eneige eneige = new Car().new Eneige();
        Car.Whell whell = new Car.Whell();
        Animal dog=new Animal() {
            public void cry(){
                System.out.println("hhhh");
            }//匿名内部类，常用，不需要为这个类声明名称
        };//在不定义子类的情况下创建Animal的子类对象
        dog.cry();
    }
}
class Car{
    public class Eneige{
        //在内部类中既可以访问自己类的成员，也可以访问外部类的成员
        //外部类.内部类 变量名 = new 外部类().new 内部类();
        //成员内部类
    }
    public static class Whell{
        //静态类，属于外部类
        //格式：外部类.内部类 变量名 = new 外部类.内部类();
    }
    public void test(){
        class Tank {
        //局部内部类，只在方法中有效，一般不使用
            
        }
    }
}
abstract class Animal{
    public abstract void cry();
}