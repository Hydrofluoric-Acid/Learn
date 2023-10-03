public class Static {

    public static void main(String[] args) {
        //如果某数据只需要一份，且希望能被访问，修改，则可定义成static变量
        new User();
        new User();
        System.out.println(User.num);
    }
    
}
class User{
        public static int num;
        public User(){
            User.num++;
        }
    }//奇怪bug，无法运行，在在线工具网站能正常运行
    //static修饰的方法类似与static修饰的变量
    //工具类，若一个类中方法都为静态方法，为了防止使用者用对象调用，可以把构造方法用private修饰
    //类方法中不能出现this，因为类方法属于类
    //静态代码块，static{  }，随类的加载而加载，能完成对类的初始化如类变量的初始化赋值
    //动态代码块，{  }，每次创建对象时，执行实例代码块，并在构造器前执行，完成对象的初始化