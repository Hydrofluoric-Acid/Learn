public class Extend {
    public static void main(String[] args) {
        //子类能继承父类的非私有成员
        Teacher t=new Teacher();
        t.printinfo();
    }
}
class People{
    private String name;
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name=name;
    }
}
class Teacher extends People{
    private String skills;
    public String getSkills(){
        return skills;
    }
    public void setSkills(String skills){
        this.skills=skills;
    }
    public void printinfo(){
        System.out.println(this.getName()+skills);
    }
}//java支持多层继承（多个类可以同时继承同一个父类）和
//单继承（一个类只能继承自一个父类）
//方法重写，继承后覆写父类方法
//如果子类和父类出现同名变量或者方法，优先使用子类的；此时如果一定要在子类中使用父类的成员，可以加this或者super进行区分。
//子类构造器会先调用父类构造器再执行自己，使用super()（默认存在）或super(参数)
/* this.成语变量
this.成员方法
this()
this(参数) */
//super同理