import java.util.ArrayList;
import java.util.Collections;

public class WrapperTest {
    public static void main(String[] args) {
        String numStr = "20 78 9 -7 88 36 29";
        System.out.println(processStr(numStr));
    }
    public static String processStr(String numStr){
        ArrayList<Long> num=new ArrayList<>();
        for (String str : numStr.split(" ")) {
            num.add(Long.parseLong(str));
        }
        Collections.sort(num);
        String str[]=num.toString().substring(1, (num.toString().length())-1).split(",");
        return String.join(" ",str);
        /* for (Integer integer : num) {
            if (integer!=num.get(num.size()-1)) {
                str=str+integer+" ";
            }else{
                str+=integer;
            }
        }
        return str; */
    }
}
