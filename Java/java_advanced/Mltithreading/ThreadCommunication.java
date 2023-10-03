import java.util.ArrayList;
import java.util.List;

public class ThreadCommunication {
    public static void main(String[] args) throws Exception {
        Desk desk = new Desk();
        new Thread(() -> {
            while (true) {
                try {
                    desk.put();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }, "厨师1").start();
        new Thread(() -> {
            while (true) {
                try {
                    desk.put();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }, "厨师2").start();
        new Thread(() -> {
            while (true) {
                try {
                    desk.put();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }, "厨师3").start();
        new Thread(() -> {
            while (true) {
                try {
                    desk.get();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }, "顾客1").start();
        new Thread(() -> {
            while (true) {
                try {
                    desk.get();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }, "顾客2").start();
    }
}

class Desk {
    private List<String> list = new ArrayList<>();

    public synchronized void put() throws Exception {
        try {
            String name = Thread.currentThread().getName();
            if (list.size() == 0) {
                list.add(name + "做包子");
                System.out.println(name + "做了一个包子");
                Thread.sleep(2000);
                this.notifyAll();
                this.wait();
            } else {
                this.notifyAll();
                this.wait();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public synchronized void get() {
        try {
            String name = Thread.currentThread().getName();
            if (list.size() == 1) {
                System.out.println(name + "吃了" + list.get(0));
                list.clear();
                Thread.sleep(1000);
                this.notifyAll();
                this.wait();
            } else {
                this.notifyAll();
                this.wait();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
