public class Polymorphism {
    public static void main(String[] args) {
        //多态是在继承、实现情况下的一种现象，表现为：对象多态、行为多态。
        //fianl可修饰变量，方法，类，修饰后分别不能被继承，不能被重写，只能赋值一次
        //final class A{}
        //class B extends A{}  error
        //final double a=3.14;
        //a=3.15  error
        //pay(0.8)
        //public static void pay(final double z){
        //   z=0.9   error
        //}
        //final int[] arr1={1,2} arr1=null error
        //arr[1]=4 true
        //常量，被static final修饰的变量，为便于在其它类中被访问一般加public，全部采用大写字母
        //抽象类，方法，被abstract修饰的，抽象类可以有成员变量不能创建对象，可以作为父类让子类继承，且子类继承必须重写父类所有抽象方法，子类也为抽象类可不继承
        //把父类中相同的代码包括方法声明都抽取到父类，能更好支持多态，不明确系统未来具体业务实现可以先定义抽象类
        /* 模板方法模式解决了多个子类中有相同代码的问题。具体实现步骤如下

第1步：定义一个抽象类，把子类中相同的代码写成一个模板方法。
第2步：把模板方法中不能确定的代码写成抽象方法，并在模板方法中调用。
第3步：子类继承抽象类，只需要父类抽象方法就可以了。 */
    }/* public abstract class C {
    // 模板方法
    public final void sing(){
        System.out.println("唱一首你喜欢的歌：");

        doSing();

        System.out.println("唱完了!");
    }

    public abstract void doSing();
}
然后，写一个A类继承C类，复写doSing()方法，代码如下

public class A extends C{
    @Override
    public void doSing() {
        System.out.println("我是一只小小小小鸟，想要飞就能飞的高~~~");
    }
} */
//接口interface implenments
//一个类可以实现多个接口，接口弥补了单继承的不足，同时可以轻松实现在多种业务场景之间的切换
//接口在的方法用default，private，static，默认为public修饰
//实现类中，默认方法使用对象调用，私有方法无法调用，static方法用接口名调用，默认方法不需要重写
//接口可继承多个接口，D接口继承ABC接口，E类实现D接口时，必须重写D接口及及其父接口的所有抽象方法
}

