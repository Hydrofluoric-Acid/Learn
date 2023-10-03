import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class SetNesting {
    public static void main(String[] args) {
        HashMap<String,List<String>> map=new HashMap<>();
        List<String> cities1=new ArrayList<>();
        cities1.addAll(0,Arrays.asList("南京市","扬州市"));
        map.put("江苏省", cities1);
        map.forEach((p,c)->{System.out.printf(p+c);});
    }
}
