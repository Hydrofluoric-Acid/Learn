public class Generic {
    public static void main(String[] args) {
        MyArraylist<String> array=new MyArraylist<>();
    }
}
//自定义泛型类
class MyArraylist<E>{
    private Object[] array=new Object[10];
    private int index;
    public void add(E e){
        array[index]=e;
        index++;
    }
    public E get(int index){
        return (E)array[index];
    }
}