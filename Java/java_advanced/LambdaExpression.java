public class LambdaExpression {
    public static void main(String[] args) {
        Swimming s = new Swimming() {
            public void swim(){
                System.out.println("swimming");
            }
        };
        s.swim();
        Swimming s1=()->{
            System.out.println("null");
        };
        s1.swim();//简化3至7行，Lambda表达式简化匿名内部类书写
    }
}
interface Swimming{
    void swim();
}
