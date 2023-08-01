public class SwitchCase {
    public static void main(String[] args) {
        
            //遇到break就跳出switch
        String week = "星期一";
        switch (week) {
            case "星期一":
                break;
            case "星期二":
                break;
            default:
                break;
        }
        //范围比较用if，值匹配用switch
        

        /* switch (key) {   //key只支持byte,short,int,char,String，不支持浮点类型
            case value:   //value只能为字面变量，不能为变量
                
                break;
        
            default:   //当switch语句中没有遇到break，就会直接穿透到下一个case语句执行，直到遇到break为止。
                break;   //如果case都不匹配，则执行default处
        } */
        
    }
}
