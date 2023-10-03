import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.Map;

public class StreamDemo {
    public static void main(String[] args) throws Exception {
        /*
         * List|Set|Map.values()|Map.keys().stream()
         * Arrays.stream(array)
         * Stream<T> filter()
         * Stream<T> sorted()
         * Stream<T> limit(long MaxSize)
         * Stream<T> skip(long n)
         * Stream<T> distinct()
         * Stream<T> contact(Stream a,Stream b)
         */
        List<String> names=new ArrayList<>();
        Collections.addAll(names, "唐","宋","元");
        Stream<String> stream_list=names.stream();

        Map<String,Double> map = new HashMap<>();
        map.put("李白",5000.0);
        map.put("孟浩然", 400.0);
        Set<String> keys=map.keySet();
        Stream<String> ks=keys.stream();
        System.out.println(map.entrySet());
        Set<Map.Entry<String,Double>> entries=map.entrySet();
        System.out.println(entries);
        Stream<Map.Entry<String,Double>> sss=map.entrySet().stream();
        stream_list.filter(s->s.contains("唐")).forEach(s->System.out.println(s));
        List<Student> students1=new ArrayList<>();
        Collections.addAll(students1,new Student("八戒",80,12345678),
            new Student("悟空",90,12345679),
            new Student("唐僧",0,12345670),
            new Student("沙僧",75,12345671),
            new Student("白骨精",78,1234569),
            new Student("如来",100,1234567899));
        long size=students1.stream().filter(s->s.getScore()>2).count();
        System.out.println(size);
        students1.stream().filter(s->s.getScore()>=80).sorted((o1,o2)->o1.getScore()-o2.getScore()).forEach(s->System.out.println(s.name));
        students1.stream().sorted((o1,o2)->o2.getScore()-o1.getScore()).forEach(s->System.out.println(s.name));
        List<String> lis=students1.stream().filter(a->a.getScore()>80).map(Student::getName).collect(Collectors.toList());
        System.out.println("_________________".concat(lis.toString()));
    }

}