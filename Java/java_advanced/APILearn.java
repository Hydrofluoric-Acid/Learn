import java.math.BigDecimal;
import java.util.StringJoiner;
import java.util.Date;

public class APILearn {
    public static void main(String[] args) {
        System.out.println(((new Studenta("zs"))).toString());
        
        //StringBulder
        StringBuilder sb=new StringBuilder("abc");
        sb.append("xyz").append("ss").insert(4,"afa").reverse().length();

        //StringJoiner字符拼接
        //public StringJoiner​(CharSequence delimiter,CharSequence prefix,CharSequence suffix)
        StringJoiner sj=new StringJoiner(",","[","]");
        System.out.println(sj.add("aaa"));

        //Math类
        //Math.ceil() floor() abs() max() min() pow() random()[0.0,1.0)
        System.out.println(Math.E); 
        
        System.out.println(System.currentTimeMillis());

        //BIigDecimal类，
        double x=0.1;
        double y=0.2;
        System.out.println(x+y+" ");
        System.out.println(BigDecimal.valueOf(x).add(BigDecimal.valueOf(y)));
        //substract,mutiply,divide

        Date t=new Date();
        System.out.println(t);//Fri Aug 11 15:12:14 CST 2023
        System.out.println(t.getTime());//1691737934573

        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }//toString()，返回对象的字符串表现形式，包名.类名@哈希值16进制
}//equals()比较对象
class Studenta{
    private String name;
    public Studenta(String name){
        this.name=name;
    }
    public String getName(){
        return name;
    }
}
