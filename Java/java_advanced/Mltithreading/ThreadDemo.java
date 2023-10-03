import java.lang.Thread;

public class ThreadDemo {
    public static void main(String[] args) {
        Thread t1=new MyThread("1号线程");
        t1.start();
        for (int i = 0; i <8; i++) {
            System.out.println("main线程"+i);
        }//Thread子类重写run()创建多线程
        Thread t2=new MyThread("2号线程");
        t2.start();
        /* Runnable target=new MyRunnable();
        new Thread(target).start();
        //Thread(Runnable target)构造方法

        Runnable task=new Runnable() {
            public void run(){
                for (int i = 0; i < 10; i++) {
                    System.out.println("匿名内部类线程"+i);
                }
            }
    };//Runnable接口匿名内部类
    new Thread(task).start();

    new Thread(new Runnable(){
        public void run(){
            for (int i = 0; i < 10; i++) {
                System.out.println(i);
            }
        }
    });//匿名内部类简化1

    new Thread(()->{for (int i = 0; i < 10; i++) {
    System.out.println(i);        
    }}).start();
*/
}
}


class MyThread extends Thread{
    public MyThread(String name){
        super(name);
    }
    @Override
    public void run(){
        Thread t=Thread.currentThread();
        for(int i=0;i<10;i++){
            System.out.println(t.getName()+i);
        }
    }
}
class MyRunnable implements Runnable{

    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("MyRunnable类"+i);
        }
    }
    
}
