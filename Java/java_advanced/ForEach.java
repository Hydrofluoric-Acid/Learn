import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class ForEach {
    public static void main(String[] args) {
        HashMap<String,List<String>> map=new HashMap<>();
        List<String> cities=new ArrayList<>();
        cities.addAll(0, Arrays.asList("null","yuanshen"));
        map.put("null", cities);
        map.forEach((city,citiess)->System.out.print(city+citiess));
    }
}
