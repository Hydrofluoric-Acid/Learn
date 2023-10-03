import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;

public class CollectionTest {
    public static void main(String[] args) {
        // 1.public boolean add(E e): 添加元素到集合
        // 2.public int size(): 获取集合的大小
        // 3.public boolean contains(Object obj): 判断集合中是否包含某个元素
        // 4.pubilc boolean remove(E e): 删除某个元素，如果有多个重复元素只能删除第一个
        // 5.public void clear(): 清空集合的元素
        // 6.public boolean isEmpty(): 判断集合是否为空 是空返回true 反之返回false
        // 7.public Object[] toArray(): 把集合转换为数组
        // 8.如果想把集合转换为指定类型的数组，可以使用下面的代码
        // String[] array1 = c.toArray(new String[c.size()]);
        // boolean addAll​(Collection<? extends E> c)
        // 迭代器遍历set，set无索引
        Collection<Integer> c = new ArrayList<>();
        c.add(2);
        c.add(4);
        Iterator<Integer> it = c.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        for (Integer integer : c) {
            System.out.println(integer);
        }//set
        //list void add(int index,E element)
        //E remove(int index)
        //E set(int index,E element)
        //E get(int index)
//普通for循环（只因为List有索引）迭代器 增强for Lambda表达式
//ArrayList查询快，增删慢（可能进行数组扩容）    
//LinkedList基于双向链表，新增了一些可以针对头尾进行操作的方法
//public void addFirst(E e)/addLast(E e)
//public E getFirst()/getLast()
//public E removeFirst()/removeLast()
}
}
