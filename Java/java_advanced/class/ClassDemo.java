
public class ClassDemo {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student("zs", 0);
        s2.setID(1104122084);
        System.out.println(s2.getID());
    }

}

class Student {
    String name;
    int score;
    private long IDnum;

    public Student() {
        System.out.println("aaa");
    }

    public Student(String name, int score,long IDnum) {
        //System.out.println("有参数构造器触发");
        this.name = name;// 构造器是一种特殊方法，无返回值，在new 对象时触发
        this.score = score;// 在构造方法中给对象的属性赋值
        this.IDnum=IDnum;
    } 
    // 两个构造器，分别为有参数构造器和无参数构造器
    //封装，隐藏成员变量，适当暴露操作成员变量的方法,防止在类外纂改其它成员变量
    public void setID(long num){
        this.IDnum=num;
        }
    public long getID(){
        return this.IDnum;
    }
    public int getScore(){
        return this.score;
    }
    public String getName(){
        return this.name;
    }

}
