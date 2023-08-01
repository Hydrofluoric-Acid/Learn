public class Loop {
    public static void main(String[] args) {
        for (int i = 0; i < 3; i++) {
            System.out.println(i);
        }
        int j = 0;
        
        
        while (j <= 6) {
            System.out.println(j);
            j++;
        }
        double inital_deepth = 0.1;
        double mountain_height = 8848860;
        int count=0;
        while (inital_deepth < mountain_height) {
            inital_deepth*=2;
            count+=1;
        }
        System.out.println(count);

        //do-while先执行再判断，即使不满足条件也会先执行一次
        /* do {
            
        } while (condition); */
        //死循环
        /* for ( ; ; ) {
            
        } */
        //break作用：跳出并结束当前所在循环的执行continue作用：结束本次循环，进入下一次循环
    }
}
