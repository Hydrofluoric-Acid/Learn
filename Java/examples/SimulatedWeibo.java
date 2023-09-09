import java.util.HashSet;
import java.util.Scanner;

public class SimulatedWeibo {
    public static void main(String[] args) {
        SignUpSystem.getInfo();
        WeiBoUser wbu=new WeiBoUser("zs","123454","2004-04-23","17770113827","3535664788@qq.com");
        SignUpSystem.weiBoUsers.add(wbu);
    }
}

class WeiBoUser{
    private String username;
    private String password,birthString,phonenumber,email;
    public WeiBoUser(){}
    public WeiBoUser(String username,String password,String birthString,String phonenumber,String email){
        this.username=username;
        this.password=password;
        this.birthString=birthString;
        this.phonenumber=phonenumber;
        this.email=email;
    }
    public boolean equals(Object obj){
        if(this==obj){
            return true;
        }
        if(!(obj instanceof WeiBoUser)){
            return false;
        }
        return this.phonenumber.equals(((WeiBoUser)obj).phonenumber);
    }
    public int hashCode(){return this.phonenumber.hashCode();}
    public void setUserName(String username){this.username=username;}
    public void setPassword(String password){this.password=password;}
    public boolean setBirthString(String birthString){
        if(birthString.matches("(^((?:19[2-9]\\d{1})|(?:20(?:(?:0[0-9])|(?:1[0-8]))))-((?:0?[1-9])|(?:1[0-2]))-((?:0?[1-9])|(?:[1-2][0-9])|30|31)$)")){
            
            this.birthString=birthString;
            return true;
        }return false;
    }
    public boolean setPhonenumber(String phonenumber){
        if(phonenumber.matches("(1[3578]\\d{9})")){
            this.phonenumber=phonenumber;
        return true;
        }return false;
    }
    public boolean setEmail(String email){
        if(email.matches("\\w{2,}@\\w{2,20}(\\.\\w{2,10}){1,2}")){
            this.email=email;
            return true;
        }return false;
    }
}

class SignUpSystem{
    static HashSet<WeiBoUser> weiBoUsers=new HashSet<>();
    public static void getInfo(){
        Scanner sc=new Scanner(System.in);
        while(true){
           WeiBoUser user=new WeiBoUser();
            System.out.print("请输入用户名：");
            user.setUserName(sc.nextLine());
            System.out.print("请输入密码：");
            user.setPassword(sc.nextLine());
            while (true) {System.out.print("请输入出生日期："); if(user.setBirthString(sc.nextLine())){break;}}
            while(true){System.out.print("请输入电话号码：");if(user.setPhonenumber(sc.nextLine())){break;}}
            while(true){System.out.print("请输入邮箱：");if(user.setEmail(sc.nextLine())){break;}}
            if(!weiBoUsers.add(user)){
                System.out.println("注册成功！");
                break;
            }System.out.println("注册失败，用户已存在！");
            }
            sc.close();
        }
    }