import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class ThreadSecurity {
   public static void main(String[] args) {
      Account acc = new Account("12345678", 1000.0);
      new DrawThread(acc, "小红").start();
      new DrawThread(acc, "小明").start();
   }
}

class Account {
   private String cardId;
   private double money;

   public Account() {
   }

   public Account(String cardId, double money) {
      this.cardId = cardId;
      this.money = money;
   }

   /*
    * public synchronized void drawMoney(double money){
    * String name=Thread.currentThread().getName();
    * if(this.money>=money){
    * System.out.println(name+"来取钱"+money+"成功");
    * this.money-=money;
    * System.out.println("剩余"+this.money);
    * }else{
    * System.out.println(name+"来取钱，余额不足");
    * }
    * }
    */
   private final Lock lk = new ReentrantLock();

   public void drawMoney(double money) throws Exception {
      try {
         String name = Thread.currentThread().getName();
         lk.lock();
         if (this.money >= money) {
            System.out.println(name + "来取钱" + money + "成功");
            this.money -= money;
            System.out.println("剩余" + this.money);
         } else {
            System.out.println(name + "来取钱，余额不足");

         }
      } catch (Exception e) {e.printStackTrace();
      } finally {
         lk.unlock();
      }
   }

   public String getCardId() {
      return this.cardId;
   }

   public void setCardId(String cardId) {
      this.cardId = cardId;
   }

   public double getMoney() {
      return this.money;
   }

   public void setMoney(double money) {
      this.money = money;
   }

}

class DrawThread extends Thread {
   private Account acc;

   public DrawThread(Account acc, String name) {
      super(name);
      this.acc = acc;
   }

   @Override
   public void run() {
      try {
         acc.drawMoney(1000);
      } catch (Exception e) {
         // TODO Auto-generated catch block
         e.printStackTrace();
      }
   }
}
